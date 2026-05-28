#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include "router.h"
#include <errno.h>
int CStrToRouteMethod (CStr method ) {
  if (strcmp (method , "GET") ==  0 )
    return METHOD_GET ;
  else
    {
    if (strcmp (method , "POST") ==  0 )
      return METHOD_POST ;
    else
      {
      if (strcmp (method , "PUT") ==  0 )
        return METHOD_PUT ;
      else
        {
        if (strcmp (method , "DELETE") ==  0 )
          return METHOD_DELETE ;
        else
          {
          if (strcmp (method , "PATCH") ==  0 )
            return METHOD_PATCH ;
          else
            {
            if (strcmp (method , "HEAD") ==  0 )
              return METHOD_HEAD ;
            else
              {
              if (strcmp (method , "OPTIONS") ==  0 )
                return METHOD_OPTIONS ;
              else
                return 0;
              }            }          }        }      }    }}
#ifndef __Maybe_ParamResult__H_IMPL__
#define __Maybe_ParamResult__H_IMPL__
void free_Maybe_ParamResult (Maybe_ParamResult * this ) {
}
const Maybe_ParamResult__H_Table * const get_Maybe_ParamResult__H_Table () {
  static const Maybe_ParamResult__H_Table table  = { free_Maybe_ParamResult };
  return (&table );
}
Maybe_ParamResult Just_ParamResult (ParamResult value ) {
  { /* cicili#Let1190 */
    Maybe_ParamResult instance  = ((Maybe_ParamResult){ get_Maybe_ParamResult__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_ParamResult Nothing_ParamResult () {
  { /* cicili#Let1195 */
    Maybe_ParamResult instance  = ((Maybe_ParamResult){ get_Maybe_ParamResult__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_ParamResult__H_IMPL__ */ 
Maybe_ParamResult getParam (CStr params , CStr paramName ) {
  { /* cicili#Let1200 */
    CStr paramStart  = strstr (params , paramName );
    // ----------
    if (paramStart )
      { /* cicili#Block1204 */
        paramStart  = (paramStart  +  strlen (paramName ) +  1 );
        { /* cicili#Let1206 */
          CStr delimiter  = strchr (paramStart , '&');
          // ----------
          if (delimiter )
            return Just_ParamResult (((ParamResult){ paramStart , (delimiter  -  paramStart  )}));
          else
            return Just_ParamResult (((ParamResult){ paramStart , strlen (paramStart )}));
        }
      }
  }
  return Nothing_ParamResult ();
}
#ifndef __Request__H_IMPL__
#define __Request__H_IMPL__
Maybe_ParamResult form_Request (Request rr , CStr param ) {
  return ({ /* cicili#Let1220 */
      typeof((((rr -> __h_data ). _ ). __h_4_mem )) postData ;
      // ----------
      
      ({ /* cicili#Let1224 */
        bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn1225 */
              (postData  =  (((rr -> __h_data ). _ ). __h_4_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1228 */
            getParam (postData , param );
          }) : ({ /* cicili#Let1232 */
            // ----------
            
            ({ /* cicili#Progn1236 */
              Nothing_ParamResult ();
            });
          }));
      });
    });
}
Maybe_ParamResult query_Request (Request rr , CStr param ) {
  return ({ /* cicili#Let1244 */
      typeof((((rr -> __h_data ). _ ). __h_3_mem )) queryString ;
      // ----------
      
      ({ /* cicili#Let1248 */
        bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn1249 */
              (queryString  =  (((rr -> __h_data ). _ ). __h_3_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1252 */
            getParam (queryString , param );
          }) : ({ /* cicili#Let1256 */
            // ----------
            
            ({ /* cicili#Progn1260 */
              Nothing_ParamResult ();
            });
          }));
      });
    });
}
Maybe_CStr param_Request (Request rr , CStr param ) {
  return ({ /* cicili#Let1268 */
      typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
      // ----------
      
      ({ /* cicili#Let1272 */
        bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn1273 */
              (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1276 */
            ({ /* cicili#Let1278 */
              CStr value  = FCGX_GetParam (param , (req -> envp ));
              // ----------
              ((value ) ? Just_CStr (value ) : Nothing_CStr ());
            });
          }) : ({ /* cicili#Let1284 */
            // ----------
            
            ({ /* cicili#Progn1288 */
              Nothing_CStr ();
            });
          }));
      });
    });
}
void free_Request (Request * this_ptr ) {
  { /* cicili#Let1293 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1297 */
      typeof((((this -> __h_data ). _ ). __h_4_mem )) payload ;
      // ----------
      
      ({ /* cicili#Let1301 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn1302 */
              (payload  =  (((this -> __h_data ). _ ). __h_4_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1306 */
            free (payload );
          }
      });
    }
    free (this );
  }
}
Request__H_Table * const get_Request__H_Table () {
  static Request__H_Table table  = { free_Request , form_Request , query_Request , param_Request };
  return (&table );
}
Request MakeRequest (FCGX_Request * req , CStr uri , CStr method , CStr queryString , CStr postData ) {
  { /* cicili#Let1314 */
    Request instance  = malloc (sizeof(class_Request));
    // ----------
    (*instance ) = ((class_Request){ get_Request__H_Table (), __h___t , .__h_data._ = { req , uri , method , queryString , postData }});
    return instance ;
  }
}
#endif /* __Request__H_IMPL__ */ 
static Ordering compareKey (CStr lkey , CStr rkey ) {
  return ({ /* cicili#Let1320 */
      __auto_type cmp_res  = strcmp (lkey , rkey );
      // ----------
      (((cmp_res  <  0 )) ? LT () : (((cmp_res  ==  0 )) ? EQ () : GT ()));
    });
}
#ifndef __Maybe_Route__H_IMPL__
#define __Maybe_Route__H_IMPL__
void free_Maybe_Route (Maybe_Route * this ) {
}
const Maybe_Route__H_Table * const get_Maybe_Route__H_Table () {
  static const Maybe_Route__H_Table table  = { free_Maybe_Route };
  return (&table );
}
Maybe_Route Just_Route (Route value ) {
  { /* cicili#Let1341 */
    Maybe_Route instance  = ((Maybe_Route){ get_Maybe_Route__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Route Nothing_Route () {
  { /* cicili#Let1346 */
    Maybe_Route instance  = ((Maybe_Route){ get_Maybe_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Route__H_IMPL__ */ 
#ifndef __List_Route__H_IMPL__
#define __List_Route__H_IMPL__
Route * toArray_List_Route (List_Route list , Route term ) {
  Route * array (List_Route list , int count ) {
    return ({ /* cicili#Let1356 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1360 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1361 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1363 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1366 */
              ({ /* cicili#Let1368 */
                Route * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let1372 */
              // ----------
              
              ({ /* cicili#Progn1376 */
                ({ /* cicili#Let1378 */
                  Route * arr  = calloc (count , sizeof(Route));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_Route wrap_List_Route (const Route item ) {
  return Cons_Route (item , Nil_Route ());
}
List_Route pure_List_Route (const Route * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_Route () : ({ /* cicili#Let1389 */
        Route item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Route () : Cons_Route (item , pure_List_Route ((++buf ), (--len ))));
      }));
}
int show_List_Route (CFile file , List_Route list ) {
  return ({ /* cicili#Let1399 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1403 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1404 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1406 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1409 */
            (({ /* cicili#Let1413 */
                // ----------
                
                ({ /* cicili#Let1417 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1419 */
                      (({ /* cicili#Let1427 */
                          typeof((head . __h_0_mem )) path ;
                          typeof((head . __h_1_mem )) methods ;
                          // ----------
                          
                          ({ /* cicili#Let1431 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1432 */
                                  (path  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1434 */
                                  (methods  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1437 */
                                fprintf (file , "(path: \"%s\", methods: %d)", path , methods );
                              }) : ({ /* cicili#Let1441 */
                                // ----------
                                
                                ({ /* cicili#Progn1445 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", "\n") );
                    }) : ({ /* cicili#Let1449 */
                      // ----------
                      
                      ({ /* cicili#Progn1453 */
                        ({ /* cicili#Let1461 */
                          typeof((head . __h_0_mem )) path ;
                          typeof((head . __h_1_mem )) methods ;
                          // ----------
                          
                          ({ /* cicili#Let1465 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn1466 */
                                  (path  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn1468 */
                                  (methods  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1471 */
                                fprintf (file , "(path: \"%s\", methods: %d)", path , methods );
                              }) : ({ /* cicili#Let1475 */
                                // ----------
                                
                                ({ /* cicili#Progn1479 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Route (file , tail ) );
          }) : ({ /* cicili#Let1484 */
            // ----------
            
            ({ /* cicili#Progn1488 */
              0;
            });
          }));
      });
    });
}
List_Route copy_List_Route (List_Route list ) {
  return ({ /* cicili#Let1494 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1498 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1499 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1501 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1504 */
            Cons_Route (head , copy_List_Route (tail ));
          }) : ({ /* cicili#Let1510 */
            // ----------
            
            ({ /* cicili#Progn1514 */
              Nil_Route ();
            });
          }));
      });
    });
}
List_Route replaceAt_List_Route (List_Route list , Route item , int index ) {
  return ({ /* cicili#Let1521 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1525 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1526 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1528 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1531 */
            Cons_Route (head , replaceAt_List_Route (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1537 */
            // ----------
            
            ({ /* cicili#Progn1541 */
              ({ /* cicili#Let1545 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1549 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1550 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1553 */
                      Cons_Route (item , copy_List_Route (taill ));
                    }) : ({ /* cicili#Let1559 */
                      // ----------
                      
                      ({ /* cicili#Progn1563 */
                        Nil_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Route deleteAt_List_Route (List_Route list , int index ) {
  return ({ /* cicili#Let1570 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1574 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1575 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1577 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1580 */
            Cons_Route (head , deleteAt_List_Route (tail , (index  -  1 )));
          }) : ({ /* cicili#Let1586 */
            // ----------
            
            ({ /* cicili#Progn1590 */
              ({ /* cicili#Let1594 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1598 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1599 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1602 */
                      copy_List_Route (taill );
                    }) : ({ /* cicili#Let1607 */
                      // ----------
                      
                      ({ /* cicili#Progn1611 */
                        Nil_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Route insertAt_List_Route (List_Route llist , Route item , int index ) {
  return ({ /* cicili#Let1618 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1622 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1623 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1625 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1628 */
            Cons_Route (head , insertAt_List_Route (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let1634 */
            // ----------
            
            ({ /* cicili#Progn1638 */
              Cons_Route (item , copy_List_Route (llist ));
            });
          }));
      });
    });
}
List_Route replace_List_Route (List_Route list , Route item , List_Route aimed ) {
  return ({ /* cicili#Let1646 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1650 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1651 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1653 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1656 */
            Cons_Route (head , replace_List_Route (tail , item , aimed ));
          }) : ({ /* cicili#Let1662 */
            // ----------
            
            ({ /* cicili#Progn1666 */
              ({ /* cicili#Let1670 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1674 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1675 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1678 */
                      Cons_Route (item , copy_List_Route (taill ));
                    }) : ({ /* cicili#Let1684 */
                      // ----------
                      
                      ({ /* cicili#Progn1688 */
                        Nil_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Route delete_List_Route (List_Route list , List_Route aimed ) {
  return ({ /* cicili#Let1695 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1699 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1700 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1702 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1705 */
            Cons_Route (head , delete_List_Route (tail , aimed ));
          }) : ({ /* cicili#Let1711 */
            // ----------
            
            ({ /* cicili#Progn1715 */
              ({ /* cicili#Let1719 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let1723 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1724 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1727 */
                      copy_List_Route (taill );
                    }) : ({ /* cicili#Let1732 */
                      // ----------
                      
                      ({ /* cicili#Progn1736 */
                        Nil_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Route insert_List_Route (List_Route llist , Route item , List_Route rlist ) {
  return ({ /* cicili#Let1743 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1747 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1748 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1750 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1753 */
            Cons_Route (head , insert_List_Route (tail , item , rlist ));
          }) : ({ /* cicili#Let1759 */
            // ----------
            
            ({ /* cicili#Progn1763 */
              Cons_Route (item , copy_List_Route (rlist ));
            });
          }));
      });
    });
}
List_Route reverse_List_Route (List_Route list ) {
  List_Route _reverse (List_Route list , List_Route rlist ) {
    return ({ /* cicili#Let1772 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1776 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1777 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1779 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1782 */
              _reverse (tail , Cons_Route (head , rlist ));
            }) : ({ /* cicili#Let1787 */
              // ----------
              
              ({ /* cicili#Progn1791 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let1795 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1799 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1800 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1802 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1805 */
            _reverse (tail , Cons_Route (head , Nil_Route ()));
          }) : ({ /* cicili#Let1811 */
            // ----------
            
            ({ /* cicili#Progn1815 */
              list ;
            });
          }));
      });
    });
}
List_Route append_List_Route (List_Route llist , List_Route rlist ) {
  return ({ /* cicili#Let1821 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1825 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1826 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1828 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1831 */
            Cons_Route (head , append_List_Route (tail , rlist ));
          }) : ({ /* cicili#Let1837 */
            // ----------
            
            ({ /* cicili#Progn1841 */
              copy_List_Route (rlist );
            });
          }));
      });
    });
}
List_Route push_List_Route (Route item , List_Route list ) {
  return Cons_Route (item , copy_List_Route (list ));
}
List_Route take_List_Route (int len , List_Route list ) {
  return (((len  <=  0 )) ? Nil_Route () : ({ /* cicili#Let1854 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1858 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1859 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1861 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1864 */
              Cons_Route (head , take_List_Route ((--len ), tail ));
            }) : ({ /* cicili#Let1870 */
              // ----------
              
              ({ /* cicili#Progn1874 */
                Nil_Route ();
              });
            }));
        });
      }));
}
List_Route last_List_Route (List_Route list ) {
  return ({ /* cicili#Let1881 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1885 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1886 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1889 */
            ({ /* cicili#Let1893 */
              // ----------
              
              ({ /* cicili#Let1897 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn1899 */
                    copy_List_Route (list );
                  }) : ({ /* cicili#Let1904 */
                    // ----------
                    
                    ({ /* cicili#Progn1908 */
                      last_List_Route (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let1913 */
            // ----------
            
            ({ /* cicili#Progn1917 */
              Nil_Route ();
            });
          }));
      });
    });
}
List_Route init_List_Route (List_Route list ) {
  return ({ /* cicili#Let1925 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1929 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn1930 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1932 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1935 */
            Cons_Route (head , init_List_Route (tail ));
          }) : ({ /* cicili#Let1941 */
            // ----------
            
            ({ /* cicili#Progn1945 */
              Nil_Route ();
            });
          }));
      });
    });
}
int hasLen_List_Route (List_Route list , int desired ) {
  return ({ /* cicili#Let1952 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1956 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1957 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1960 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Route (tail , (--desired )) ));
          }) : ({ /* cicili#Let1966 */
            // ----------
            
            ({ /* cicili#Progn1970 */
              0;
            });
          }));
      });
    });
}
int len_List_Route (List_Route list ) {
  return ({ /* cicili#Let1976 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1980 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1981 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1984 */
            (1 +  len_List_Route (tail ) );
          }) : ({ /* cicili#Let1989 */
            // ----------
            
            ({ /* cicili#Progn1993 */
              0;
            });
          }));
      });
    });
}
List_Route tail_List_Route (List_Route list ) {
  return drop_List_Route (1, list );
}
List_Route drop_List_Route (int len , List_Route list ) {
  return (((len  <=  0 )) ? copy_List_Route (list ) : ({ /* cicili#Let2004 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2008 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2009 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2012 */
              drop_List_Route ((--len ), tail );
            }) : ({ /* cicili#Let2017 */
              // ----------
              
              ({ /* cicili#Progn2021 */
                Nil_Route ();
              });
            }));
        });
      }));
}
Maybe_Route head_List_Route (List_Route list ) {
  return ({ /* cicili#Let2029 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let2033 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2034 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2037 */
            Just_Route (head );
          }) : ({ /* cicili#Let2042 */
            // ----------
            
            ({ /* cicili#Progn2046 */
              Nothing_Route ();
            });
          }));
      });
    });
}
List_Route nthcdr_List_Route (int index , List_Route list ) {
  return ({ /* cicili#Let2053 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2057 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2058 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2061 */
            nthcdr_List_Route ((--index ), tail );
          }) : ({ /* cicili#Let2066 */
            // ----------
            
            ({ /* cicili#Progn2070 */
              list ;
            });
          }));
      });
    });
}
Maybe_Route nth_List_Route (int index , List_Route list ) {
  return ({ /* cicili#Let2077 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2081 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2082 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2084 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2087 */
            (((index  ==  0 )) ? Just_Route (head ) : (((index  <  0 )) ? Nothing_Route () : nth_List_Route ((--index ), tail )));
          }) : ({ /* cicili#Let2096 */
            // ----------
            
            ({ /* cicili#Progn2100 */
              Nothing_Route ();
            });
          }));
      });
    });
}
void free_List_Route (List_Route * this_ptr ) {
  { /* cicili#Let2105 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2109 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2113 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2114 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2118 */
            { /* cicili#Block2120 */
              free (this );
              free_List_Route ((&tail ));
            }
          }
        else
          { /* cicili#Let2128 */
            // ----------
            
            ({ /* cicili#Let2132 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2135 */
                  { /* cicili#Block2137 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_Route__H_Table * const get_List_Route__H_Table () {
  static List_Route__H_Table table  = { free_List_Route , toArray_List_Route , wrap_List_Route , pure_List_Route , show_List_Route , copy_List_Route , replaceAt_List_Route , deleteAt_List_Route , insertAt_List_Route , replace_List_Route , delete_List_Route , insert_List_Route , reverse_List_Route , append_List_Route , push_List_Route , take_List_Route , last_List_Route , init_List_Route , hasLen_List_Route , len_List_Route , tail_List_Route , drop_List_Route , head_List_Route , nthcdr_List_Route , nth_List_Route };
  return (&table );
}
List_Route Cons_Route (Route head , List_Route tail ) {
  { /* cicili#Let2148 */
    List_Route instance  = malloc (sizeof(class_List_Route));
    // ----------
    (*instance ) = ((class_List_Route){ get_List_Route__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Route Nil_Route () {
  { /* cicili#Let2154 */
    List_Route instance  = malloc (sizeof(class_List_Route));
    // ----------
    (*instance ) = ((class_List_Route){ get_List_Route__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_Route__H_IMPL__ */ 
#ifndef __Maybe_List_Route__H_IMPL__
#define __Maybe_List_Route__H_IMPL__
void free_Maybe_List_Route (Maybe_List_Route * this ) {
}
const Maybe_List_Route__H_Table * const get_Maybe_List_Route__H_Table () {
  static const Maybe_List_Route__H_Table table  = { free_Maybe_List_Route };
  return (&table );
}
Maybe_List_Route Just_List_Route (List_Route value ) {
  { /* cicili#Let2171 */
    Maybe_List_Route instance  = ((Maybe_List_Route){ get_Maybe_List_Route__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Route Nothing_List_Route () {
  { /* cicili#Let2176 */
    Maybe_List_Route instance  = ((Maybe_List_Route){ get_Maybe_List_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Route__H_IMPL__ */ 
#ifndef __BTree_CStr_Route_Error__H_IMPL__
#define __BTree_CStr_Route_Error__H_IMPL__
void show_BTree_CStr_Route_Error (BTree_CStr_Route_Error error ) {
  { /* cicili#Let2189 */
    // ----------
    
    ({ /* cicili#Let2193 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2196 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let2201 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          
          ({ /* cicili#Let2205 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn2206 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block2210 */
                printf ("invalid B-Tree order: %d", order );
              }
            else
              { /* cicili#Let2215 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let2219 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn2220 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block2224 */
                      { /* cicili#Block2226 */
                        printf ("unique key: ");
                        ({ /* cicili#Let2233 */
                          typeof((item . __h_0_mem )) path ;
                          typeof((item . __h_1_mem )) __h_match2231_1_arg ;
                          typeof((__h_match2231_1_arg . __h_1_mem )) methods ;
                          // ----------
                          
                          ({ /* cicili#Let2237 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2238 */
                                    (path  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2240 */
                                    (__h_match2231_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  ({ /* cicili#Progn2242 */
                                    (methods  =  (__h_match2231_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn2245 */
                                fprintf (stdout , "(path: %s, methods: %d", path , methods );
                              }) : ({ /* cicili#Let2249 */
                                // ----------
                                
                                ({ /* cicili#Progn2253 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let2258 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      
                      ({ /* cicili#Let2262 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn2263 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block2267 */
                            { /* cicili#Block2269 */
                              printf ("key not found: ");
                              fprintf (stdout , "%s", key );
                            }
                          }
                        else
                          { /* cicili#Let2277 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            
                            ({ /* cicili#Let2281 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn2282 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2284 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block2288 */
                                  { /* cicili#Block2290 */
                                    printf ("dead child at index: %d of item: ", index );
                                    ({ /* cicili#Let2297 */
                                      typeof((item . __h_0_mem )) path ;
                                      typeof((item . __h_1_mem )) __h_match2295_1_arg ;
                                      typeof((__h_match2295_1_arg . __h_1_mem )) methods ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2301 */
                                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2302 */
                                                (path  =  (item . __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn2304 */
                                                (__h_match2295_1_arg  =  (item . __h_1_mem ) );
                                                true ;
                                              }) ) &&  (true  &&  ({ /* cicili#Progn2306 */
                                                (methods  =  (__h_match2295_1_arg . __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn2309 */
                                            fprintf (stdout , "(path: %s, methods: %d", path , methods );
                                          }) : ({ /* cicili#Let2313 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn2317 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let2322 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2326 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2327 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block2331 */
                                        { /* cicili#Block2333 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let2340 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        
                                        ({ /* cicili#Let2344 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2345 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block2349 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let2354 */
                                              // ----------
                                              
                                              { /* cicili#Block2358 */
                                                printf ("unknown error");
                                              }
                                            }
                                        });
                                      }
                                  });
                                }
                            });
                          }
                      });
                    }
                });
              }
          });
        }
    });
  }
}
void free_BTree_CStr_Route_Error (BTree_CStr_Route_Error * this ) {
}
const BTree_CStr_Route_Error__H_Table * const get_BTree_CStr_Route_Error__H_Table () {
  static const BTree_CStr_Route_Error__H_Table table  = { free_BTree_CStr_Route_Error , show_BTree_CStr_Route_Error };
  return (&table );
}
BTree_CStr_Route_Error BTree_CStr_Route_ERR_INVALID_OBJECT () {
  { /* cicili#Let2370 */
    BTree_CStr_Route_Error instance  = ((BTree_CStr_Route_Error){ get_BTree_CStr_Route_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_CStr_Route_Error BTree_CStr_Route_ERR_INVALID_ORDER (int order ) {
  { /* cicili#Let2375 */
    BTree_CStr_Route_Error instance  = ((BTree_CStr_Route_Error){ get_BTree_CStr_Route_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_CStr_Route_Error BTree_CStr_Route_ERR_UNIQUE_KEY (BTree_CStr_Route_pair_t item ) {
  { /* cicili#Let2380 */
    BTree_CStr_Route_Error instance  = ((BTree_CStr_Route_Error){ get_BTree_CStr_Route_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_CStr_Route_Error BTree_CStr_Route_ERR_NOT_FOUND (CStr key ) {
  { /* cicili#Let2386 */
    BTree_CStr_Route_Error instance  = ((BTree_CStr_Route_Error){ get_BTree_CStr_Route_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_CStr_Route_Error BTree_CStr_Route_ERR_ACCESS_DEAD_CHILD (BTree_CStr_Route_pair_t item , int index ) {
  { /* cicili#Let2391 */
    BTree_CStr_Route_Error instance  = ((BTree_CStr_Route_Error){ get_BTree_CStr_Route_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_CStr_Route_Error BTree_CStr_Route_ERR_INVALID_BRANCH (BTree_CStr_Route branch ) {
  { /* cicili#Let2397 */
    BTree_CStr_Route_Error instance  = ((BTree_CStr_Route_Error){ get_BTree_CStr_Route_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_CStr_Route_Error BTree_CStr_Route_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2402 */
    BTree_CStr_Route_Error instance  = ((BTree_CStr_Route_Error){ get_BTree_CStr_Route_Error__H_Table (), __h___t , .__h_data._ = { reason }});
    // ----------
    return instance ;
  }
}
#endif /* __BTree_CStr_Route_Error__H_IMPL__ */ 
#ifndef __Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_IMPL__
#define __Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_IMPL__
void free_Either_BTree_CStr_Route_Error_BTree_CStr_Route (Either_BTree_CStr_Route_Error_BTree_CStr_Route * this ) {
}
const Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table * const get_Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table () {
  static const Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table table  = { free_Either_BTree_CStr_Route_Error_BTree_CStr_Route };
  return (&table );
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route Right_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route value ) {
  { /* cicili#Let2418 */
    Either_BTree_CStr_Route_Error_BTree_CStr_Route instance  = ((Either_BTree_CStr_Route_Error_BTree_CStr_Route){ get_Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_Error error ) {
  { /* cicili#Let2423 */
    Either_BTree_CStr_Route_Error_BTree_CStr_Route instance  = ((Either_BTree_CStr_Route_Error_BTree_CStr_Route){ get_Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_CStr_Route_Error_BTree_CStr_Route__H_IMPL__ */ 
#ifndef __Maybe_BTree_CStr_Route__H_IMPL__
#define __Maybe_BTree_CStr_Route__H_IMPL__
void free_Maybe_BTree_CStr_Route (Maybe_BTree_CStr_Route * this ) {
}
const Maybe_BTree_CStr_Route__H_Table * const get_Maybe_BTree_CStr_Route__H_Table () {
  static const Maybe_BTree_CStr_Route__H_Table table  = { free_Maybe_BTree_CStr_Route };
  return (&table );
}
Maybe_BTree_CStr_Route Just_BTree_CStr_Route (BTree_CStr_Route value ) {
  { /* cicili#Let2439 */
    Maybe_BTree_CStr_Route instance  = ((Maybe_BTree_CStr_Route){ get_Maybe_BTree_CStr_Route__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_Route Nothing_BTree_CStr_Route () {
  { /* cicili#Let2444 */
    Maybe_BTree_CStr_Route instance  = ((Maybe_BTree_CStr_Route){ get_Maybe_BTree_CStr_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_Route__H_IMPL__ */ 
#ifndef __Maybe_BTree_CStr_Route_pair_t__H_IMPL__
#define __Maybe_BTree_CStr_Route_pair_t__H_IMPL__
void free_Maybe_BTree_CStr_Route_pair_t (Maybe_BTree_CStr_Route_pair_t * this ) {
}
const Maybe_BTree_CStr_Route_pair_t__H_Table * const get_Maybe_BTree_CStr_Route_pair_t__H_Table () {
  static const Maybe_BTree_CStr_Route_pair_t__H_Table table  = { free_Maybe_BTree_CStr_Route_pair_t };
  return (&table );
}
Maybe_BTree_CStr_Route_pair_t Just_BTree_CStr_Route_pair_t (BTree_CStr_Route_pair_t value ) {
  { /* cicili#Let2462 */
    Maybe_BTree_CStr_Route_pair_t instance  = ((Maybe_BTree_CStr_Route_pair_t){ get_Maybe_BTree_CStr_Route_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_Route_pair_t Nothing_BTree_CStr_Route_pair_t () {
  { /* cicili#Let2467 */
    Maybe_BTree_CStr_Route_pair_t instance  = ((Maybe_BTree_CStr_Route_pair_t){ get_Maybe_BTree_CStr_Route_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_Route_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_CStr_Route_pair_t__H_IMPL__
#define __List_BTree_CStr_Route_pair_t__H_IMPL__
BTree_CStr_Route_pair_t * toArray_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t term ) {
  BTree_CStr_Route_pair_t * array (List_BTree_CStr_Route_pair_t list , int count ) {
    return ({ /* cicili#Let2477 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2481 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2482 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2484 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2487 */
              ({ /* cicili#Let2489 */
                BTree_CStr_Route_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let2493 */
              // ----------
              
              ({ /* cicili#Progn2497 */
                ({ /* cicili#Let2499 */
                  BTree_CStr_Route_pair_t * arr  = calloc (count , sizeof(BTree_CStr_Route_pair_t));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_BTree_CStr_Route_pair_t wrap_List_BTree_CStr_Route_pair_t (const BTree_CStr_Route_pair_t item ) {
  return Cons_BTree_CStr_Route_pair_t (item , Nil_BTree_CStr_Route_pair_t ());
}
List_BTree_CStr_Route_pair_t pure_List_BTree_CStr_Route_pair_t (const BTree_CStr_Route_pair_t * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_BTree_CStr_Route_pair_t () : ({ /* cicili#Let2510 */
        BTree_CStr_Route_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_CStr_Route_pair_t () : Cons_BTree_CStr_Route_pair_t (item , pure_List_BTree_CStr_Route_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_CStr_Route_pair_t (CFile file , List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let2520 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2524 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2525 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2527 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2530 */
            (({ /* cicili#Let2534 */
                // ----------
                
                ({ /* cicili#Let2538 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2540 */
                      (({ /* cicili#Let2547 */
                          typeof((head . __h_0_mem )) path ;
                          typeof((head . __h_1_mem )) __h_match2545_1_arg ;
                          typeof((__h_match2545_1_arg . __h_1_mem )) methods ;
                          // ----------
                          
                          ({ /* cicili#Let2551 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2552 */
                                    (path  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2554 */
                                    (__h_match2545_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  ({ /* cicili#Progn2556 */
                                    (methods  =  (__h_match2545_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn2559 */
                                fprintf (file , "(path: %s, methods: %d", path , methods );
                              }) : ({ /* cicili#Let2563 */
                                // ----------
                                
                                ({ /* cicili#Progn2567 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let2571 */
                      // ----------
                      
                      ({ /* cicili#Progn2575 */
                        ({ /* cicili#Let2582 */
                          typeof((head . __h_0_mem )) path ;
                          typeof((head . __h_1_mem )) __h_match2580_1_arg ;
                          typeof((__h_match2580_1_arg . __h_1_mem )) methods ;
                          // ----------
                          
                          ({ /* cicili#Let2586 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2587 */
                                    (path  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2589 */
                                    (__h_match2580_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  ({ /* cicili#Progn2591 */
                                    (methods  =  (__h_match2580_1_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn2594 */
                                fprintf (file , "(path: %s, methods: %d", path , methods );
                              }) : ({ /* cicili#Let2598 */
                                // ----------
                                
                                ({ /* cicili#Progn2602 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_CStr_Route_pair_t (file , tail ) );
          }) : ({ /* cicili#Let2607 */
            // ----------
            
            ({ /* cicili#Progn2611 */
              0;
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t copy_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let2617 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2621 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2622 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2624 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2627 */
            Cons_BTree_CStr_Route_pair_t (head , copy_List_BTree_CStr_Route_pair_t (tail ));
          }) : ({ /* cicili#Let2633 */
            // ----------
            
            ({ /* cicili#Progn2637 */
              Nil_BTree_CStr_Route_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t replaceAt_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t item , int index ) {
  return ({ /* cicili#Let2644 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2648 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2649 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2651 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2654 */
            Cons_BTree_CStr_Route_pair_t (head , replaceAt_List_BTree_CStr_Route_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2660 */
            // ----------
            
            ({ /* cicili#Progn2664 */
              ({ /* cicili#Let2668 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2672 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2673 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2676 */
                      Cons_BTree_CStr_Route_pair_t (item , copy_List_BTree_CStr_Route_pair_t (taill ));
                    }) : ({ /* cicili#Let2682 */
                      // ----------
                      
                      ({ /* cicili#Progn2686 */
                        Nil_BTree_CStr_Route_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t deleteAt_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , int index ) {
  return ({ /* cicili#Let2693 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2697 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2698 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2700 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2703 */
            Cons_BTree_CStr_Route_pair_t (head , deleteAt_List_BTree_CStr_Route_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let2709 */
            // ----------
            
            ({ /* cicili#Progn2713 */
              ({ /* cicili#Let2717 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2721 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2722 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2725 */
                      copy_List_BTree_CStr_Route_pair_t (taill );
                    }) : ({ /* cicili#Let2730 */
                      // ----------
                      
                      ({ /* cicili#Progn2734 */
                        Nil_BTree_CStr_Route_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t insertAt_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t llist , BTree_CStr_Route_pair_t item , int index ) {
  return ({ /* cicili#Let2741 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2745 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2746 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2748 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2751 */
            Cons_BTree_CStr_Route_pair_t (head , insertAt_List_BTree_CStr_Route_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2757 */
            // ----------
            
            ({ /* cicili#Progn2761 */
              Cons_BTree_CStr_Route_pair_t (item , copy_List_BTree_CStr_Route_pair_t (llist ));
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t replace_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t aimed ) {
  return ({ /* cicili#Let2769 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2773 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2774 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2776 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2779 */
            Cons_BTree_CStr_Route_pair_t (head , replace_List_BTree_CStr_Route_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let2785 */
            // ----------
            
            ({ /* cicili#Progn2789 */
              ({ /* cicili#Let2793 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2797 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2798 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2801 */
                      Cons_BTree_CStr_Route_pair_t (item , copy_List_BTree_CStr_Route_pair_t (taill ));
                    }) : ({ /* cicili#Let2807 */
                      // ----------
                      
                      ({ /* cicili#Progn2811 */
                        Nil_BTree_CStr_Route_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t delete_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , List_BTree_CStr_Route_pair_t aimed ) {
  return ({ /* cicili#Let2818 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2822 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2823 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2825 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2828 */
            Cons_BTree_CStr_Route_pair_t (head , delete_List_BTree_CStr_Route_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let2834 */
            // ----------
            
            ({ /* cicili#Progn2838 */
              ({ /* cicili#Let2842 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2846 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2847 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2850 */
                      copy_List_BTree_CStr_Route_pair_t (taill );
                    }) : ({ /* cicili#Let2855 */
                      // ----------
                      
                      ({ /* cicili#Progn2859 */
                        Nil_BTree_CStr_Route_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t insert_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t llist , BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t rlist ) {
  return ({ /* cicili#Let2866 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2870 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2871 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2873 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2876 */
            Cons_BTree_CStr_Route_pair_t (head , insert_List_BTree_CStr_Route_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let2882 */
            // ----------
            
            ({ /* cicili#Progn2886 */
              Cons_BTree_CStr_Route_pair_t (item , copy_List_BTree_CStr_Route_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t reverse_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list ) {
  List_BTree_CStr_Route_pair_t _reverse (List_BTree_CStr_Route_pair_t list , List_BTree_CStr_Route_pair_t rlist ) {
    return ({ /* cicili#Let2895 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2899 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2900 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2902 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2905 */
              _reverse (tail , Cons_BTree_CStr_Route_pair_t (head , rlist ));
            }) : ({ /* cicili#Let2910 */
              // ----------
              
              ({ /* cicili#Progn2914 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let2918 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2922 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2923 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2925 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2928 */
            _reverse (tail , Cons_BTree_CStr_Route_pair_t (head , Nil_BTree_CStr_Route_pair_t ()));
          }) : ({ /* cicili#Let2934 */
            // ----------
            
            ({ /* cicili#Progn2938 */
              list ;
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t append_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t llist , List_BTree_CStr_Route_pair_t rlist ) {
  return ({ /* cicili#Let2944 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2948 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2949 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2951 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2954 */
            Cons_BTree_CStr_Route_pair_t (head , append_List_BTree_CStr_Route_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let2960 */
            // ----------
            
            ({ /* cicili#Progn2964 */
              copy_List_BTree_CStr_Route_pair_t (rlist );
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t push_List_BTree_CStr_Route_pair_t (BTree_CStr_Route_pair_t item , List_BTree_CStr_Route_pair_t list ) {
  return Cons_BTree_CStr_Route_pair_t (item , copy_List_BTree_CStr_Route_pair_t (list ));
}
List_BTree_CStr_Route_pair_t take_List_BTree_CStr_Route_pair_t (int len , List_BTree_CStr_Route_pair_t list ) {
  return (((len  <=  0 )) ? Nil_BTree_CStr_Route_pair_t () : ({ /* cicili#Let2977 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2981 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2982 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2984 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2987 */
              Cons_BTree_CStr_Route_pair_t (head , take_List_BTree_CStr_Route_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let2993 */
              // ----------
              
              ({ /* cicili#Progn2997 */
                Nil_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_CStr_Route_pair_t last_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let3004 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3008 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3009 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3012 */
            ({ /* cicili#Let3016 */
              // ----------
              
              ({ /* cicili#Let3020 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn3022 */
                    copy_List_BTree_CStr_Route_pair_t (list );
                  }) : ({ /* cicili#Let3027 */
                    // ----------
                    
                    ({ /* cicili#Progn3031 */
                      last_List_BTree_CStr_Route_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3036 */
            // ----------
            
            ({ /* cicili#Progn3040 */
              Nil_BTree_CStr_Route_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t init_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let3048 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3052 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3053 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3055 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3058 */
            Cons_BTree_CStr_Route_pair_t (head , init_List_BTree_CStr_Route_pair_t (tail ));
          }) : ({ /* cicili#Let3064 */
            // ----------
            
            ({ /* cicili#Progn3068 */
              Nil_BTree_CStr_Route_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list , int desired ) {
  return ({ /* cicili#Let3075 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3079 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3080 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3083 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_CStr_Route_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let3089 */
            // ----------
            
            ({ /* cicili#Progn3093 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let3099 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3103 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3104 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3107 */
            (1 +  len_List_BTree_CStr_Route_pair_t (tail ) );
          }) : ({ /* cicili#Let3112 */
            // ----------
            
            ({ /* cicili#Progn3116 */
              0;
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t tail_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list ) {
  return drop_List_BTree_CStr_Route_pair_t (1, list );
}
List_BTree_CStr_Route_pair_t drop_List_BTree_CStr_Route_pair_t (int len , List_BTree_CStr_Route_pair_t list ) {
  return (((len  <=  0 )) ? copy_List_BTree_CStr_Route_pair_t (list ) : ({ /* cicili#Let3127 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3131 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3132 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3135 */
              drop_List_BTree_CStr_Route_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let3140 */
              // ----------
              
              ({ /* cicili#Progn3144 */
                Nil_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_CStr_Route_pair_t head_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let3152 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let3156 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3157 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3160 */
            Just_BTree_CStr_Route_pair_t (head );
          }) : ({ /* cicili#Let3165 */
            // ----------
            
            ({ /* cicili#Progn3169 */
              Nothing_BTree_CStr_Route_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_Route_pair_t nthcdr_List_BTree_CStr_Route_pair_t (int index , List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let3176 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3180 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3181 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3184 */
            nthcdr_List_BTree_CStr_Route_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let3189 */
            // ----------
            
            ({ /* cicili#Progn3193 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_CStr_Route_pair_t nth_List_BTree_CStr_Route_pair_t (int index , List_BTree_CStr_Route_pair_t list ) {
  return ({ /* cicili#Let3200 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3204 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3205 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3207 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3210 */
            (((index  ==  0 )) ? Just_BTree_CStr_Route_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_CStr_Route_pair_t () : nth_List_BTree_CStr_Route_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let3219 */
            // ----------
            
            ({ /* cicili#Progn3223 */
              Nothing_BTree_CStr_Route_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t * this_ptr ) {
  { /* cicili#Let3228 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3232 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3236 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3237 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3241 */
            { /* cicili#Block3243 */
              free (this );
              free_List_BTree_CStr_Route_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let3251 */
            // ----------
            
            ({ /* cicili#Let3255 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3258 */
                  { /* cicili#Block3260 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_BTree_CStr_Route_pair_t__H_Table * const get_List_BTree_CStr_Route_pair_t__H_Table () {
  static List_BTree_CStr_Route_pair_t__H_Table table  = { free_List_BTree_CStr_Route_pair_t , toArray_List_BTree_CStr_Route_pair_t , wrap_List_BTree_CStr_Route_pair_t , pure_List_BTree_CStr_Route_pair_t , show_List_BTree_CStr_Route_pair_t , copy_List_BTree_CStr_Route_pair_t , replaceAt_List_BTree_CStr_Route_pair_t , deleteAt_List_BTree_CStr_Route_pair_t , insertAt_List_BTree_CStr_Route_pair_t , replace_List_BTree_CStr_Route_pair_t , delete_List_BTree_CStr_Route_pair_t , insert_List_BTree_CStr_Route_pair_t , reverse_List_BTree_CStr_Route_pair_t , append_List_BTree_CStr_Route_pair_t , push_List_BTree_CStr_Route_pair_t , take_List_BTree_CStr_Route_pair_t , last_List_BTree_CStr_Route_pair_t , init_List_BTree_CStr_Route_pair_t , hasLen_List_BTree_CStr_Route_pair_t , len_List_BTree_CStr_Route_pair_t , tail_List_BTree_CStr_Route_pair_t , drop_List_BTree_CStr_Route_pair_t , head_List_BTree_CStr_Route_pair_t , nthcdr_List_BTree_CStr_Route_pair_t , nth_List_BTree_CStr_Route_pair_t };
  return (&table );
}
List_BTree_CStr_Route_pair_t Cons_BTree_CStr_Route_pair_t (BTree_CStr_Route_pair_t head , List_BTree_CStr_Route_pair_t tail ) {
  { /* cicili#Let3271 */
    List_BTree_CStr_Route_pair_t instance  = malloc (sizeof(class_List_BTree_CStr_Route_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_CStr_Route_pair_t){ get_List_BTree_CStr_Route_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_CStr_Route_pair_t Nil_BTree_CStr_Route_pair_t () {
  { /* cicili#Let3277 */
    List_BTree_CStr_Route_pair_t instance  = malloc (sizeof(class_List_BTree_CStr_Route_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_CStr_Route_pair_t){ get_List_BTree_CStr_Route_pair_t__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_BTree_CStr_Route_pair_t__H_IMPL__ */ 
#ifndef __Maybe_List_BTree_CStr_Route_pair_t__H_IMPL__
#define __Maybe_List_BTree_CStr_Route_pair_t__H_IMPL__
void free_Maybe_List_BTree_CStr_Route_pair_t (Maybe_List_BTree_CStr_Route_pair_t * this ) {
}
const Maybe_List_BTree_CStr_Route_pair_t__H_Table * const get_Maybe_List_BTree_CStr_Route_pair_t__H_Table () {
  static const Maybe_List_BTree_CStr_Route_pair_t__H_Table table  = { free_Maybe_List_BTree_CStr_Route_pair_t };
  return (&table );
}
Maybe_List_BTree_CStr_Route_pair_t Just_List_BTree_CStr_Route_pair_t (List_BTree_CStr_Route_pair_t value ) {
  { /* cicili#Let3294 */
    Maybe_List_BTree_CStr_Route_pair_t instance  = ((Maybe_List_BTree_CStr_Route_pair_t){ get_Maybe_List_BTree_CStr_Route_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_CStr_Route_pair_t Nothing_List_BTree_CStr_Route_pair_t () {
  { /* cicili#Let3299 */
    Maybe_List_BTree_CStr_Route_pair_t instance  = ((Maybe_List_BTree_CStr_Route_pair_t){ get_Maybe_List_BTree_CStr_Route_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_CStr_Route_pair_t__H_IMPL__ */ 
#ifndef __Maybe_BTree_CStr_Route__H_IMPL__
#define __Maybe_BTree_CStr_Route__H_IMPL__
void free_Maybe_BTree_CStr_Route (Maybe_BTree_CStr_Route * this ) {
}
const Maybe_BTree_CStr_Route__H_Table * const get_Maybe_BTree_CStr_Route__H_Table () {
  static const Maybe_BTree_CStr_Route__H_Table table  = { free_Maybe_BTree_CStr_Route };
  return (&table );
}
Maybe_BTree_CStr_Route Just_BTree_CStr_Route (BTree_CStr_Route value ) {
  { /* cicili#Let3319 */
    Maybe_BTree_CStr_Route instance  = ((Maybe_BTree_CStr_Route){ get_Maybe_BTree_CStr_Route__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_Route Nothing_BTree_CStr_Route () {
  { /* cicili#Let3324 */
    Maybe_BTree_CStr_Route instance  = ((Maybe_BTree_CStr_Route){ get_Maybe_BTree_CStr_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_Route__H_IMPL__ */ 
#ifndef __Rc_BTree_CStr_Route__H_IMPL__
#define __Rc_BTree_CStr_Route__H_IMPL__
Rc_BTree_CStr_Route new_Rc_BTree_CStr_Route (BTree_CStr_Route pointer ) {
  return ({ /* cicili#Let3331 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_CStr_Route *)malloc (sizeof(BTree_CStr_Route *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_CStr_Route (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_CStr_Route clone_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route rc ) {
  return ({ /* cicili#Let3340 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3344 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3345 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3347 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3349 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3352 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn3355 */
                (++(*count ));
                __h_Hold_BTree_CStr_Route (pointer , count , address );
              }) : Gone_BTree_CStr_Route ());
          }) : ({ /* cicili#Let3361 */
            // ----------
            
            ({ /* cicili#Progn3365 */
              Gone_BTree_CStr_Route ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_Route take_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route * this ) {
  return ({ /* cicili#Let3373 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3377 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3378 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3380 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3382 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3385 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let3389 */
                __auto_type result  = Just_BTree_CStr_Route ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block3395 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BTree_CStr_Route ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_BTree_CStr_Route ());
          }) : ({ /* cicili#Let3402 */
            // ----------
            
            ({ /* cicili#Progn3406 */
              Nothing_BTree_CStr_Route ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_Route get_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route rc ) {
  return ({ /* cicili#Let3414 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3418 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3419 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3421 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3423 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3426 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_CStr_Route ((*pointer )) : Nothing_BTree_CStr_Route ());
          }) : ({ /* cicili#Let3433 */
            // ----------
            
            ({ /* cicili#Progn3437 */
              Nothing_BTree_CStr_Route ();
            });
          }));
      });
    });
}
void free_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route * this ) {
  { /* cicili#Let3446 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let3450 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3451 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3453 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn3455 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3459 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block3463 */
              if ((*count ) ==  1 )
                { /* cicili#Block3466 */
                  free_BTree_CStr_Route (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_BTree_CStr_Route ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let3476 */
          // ----------
          
          ({ /* cicili#Let3480 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3483 */
              }
          });
        }
    });
  }
}
const Rc_BTree_CStr_Route__H_Table * const get_Rc_BTree_CStr_Route__H_Table () {
  static const Rc_BTree_CStr_Route__H_Table table  = { free_Rc_BTree_CStr_Route , new_Rc_BTree_CStr_Route , clone_Rc_BTree_CStr_Route , take_Rc_BTree_CStr_Route , get_Rc_BTree_CStr_Route };
  return (&table );
}
Rc_BTree_CStr_Route __h_Hold_BTree_CStr_Route (BTree_CStr_Route * pointer , int * count , size_t address ) {
  { /* cicili#Let3494 */
    Rc_BTree_CStr_Route instance  = ((Rc_BTree_CStr_Route){ get_Rc_BTree_CStr_Route__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_CStr_Route Gone_BTree_CStr_Route () {
  { /* cicili#Let3499 */
    Rc_BTree_CStr_Route instance  = ((Rc_BTree_CStr_Route){ get_Rc_BTree_CStr_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_BTree_CStr_Route__H_IMPL__ */ 
#ifndef __Maybe_Rc_BTree_CStr_Route__H_IMPL__
#define __Maybe_Rc_BTree_CStr_Route__H_IMPL__
void free_Maybe_Rc_BTree_CStr_Route (Maybe_Rc_BTree_CStr_Route * this ) {
}
const Maybe_Rc_BTree_CStr_Route__H_Table * const get_Maybe_Rc_BTree_CStr_Route__H_Table () {
  static const Maybe_Rc_BTree_CStr_Route__H_Table table  = { free_Maybe_Rc_BTree_CStr_Route };
  return (&table );
}
Maybe_Rc_BTree_CStr_Route Just_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route value ) {
  { /* cicili#Let3517 */
    Maybe_Rc_BTree_CStr_Route instance  = ((Maybe_Rc_BTree_CStr_Route){ get_Maybe_Rc_BTree_CStr_Route__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_CStr_Route Nothing_Rc_BTree_CStr_Route () {
  { /* cicili#Let3522 */
    Maybe_Rc_BTree_CStr_Route instance  = ((Maybe_Rc_BTree_CStr_Route){ get_Maybe_Rc_BTree_CStr_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_CStr_Route__H_IMPL__ */ 
#ifndef __List_Rc_BTree_CStr_Route__H_IMPL__
#define __List_Rc_BTree_CStr_Route__H_IMPL__
Rc_BTree_CStr_Route * toArray_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route term ) {
  Rc_BTree_CStr_Route * array (List_Rc_BTree_CStr_Route list , int count ) {
    return ({ /* cicili#Let3532 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3536 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3537 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3539 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3542 */
              ({ /* cicili#Let3544 */
                Rc_BTree_CStr_Route * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3548 */
              // ----------
              
              ({ /* cicili#Progn3552 */
                ({ /* cicili#Let3554 */
                  Rc_BTree_CStr_Route * arr  = calloc (count , sizeof(Rc_BTree_CStr_Route));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_Rc_BTree_CStr_Route wrap_List_Rc_BTree_CStr_Route (const Rc_BTree_CStr_Route item ) {
  return Cons_Rc_BTree_CStr_Route (item , Nil_Rc_BTree_CStr_Route ());
}
List_Rc_BTree_CStr_Route pure_List_Rc_BTree_CStr_Route (const Rc_BTree_CStr_Route * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_CStr_Route () : ({ /* cicili#Let3565 */
        Rc_BTree_CStr_Route item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_CStr_Route () : Cons_Rc_BTree_CStr_Route (item , pure_List_Rc_BTree_CStr_Route ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_CStr_Route (CFile file , List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let3575 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3579 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3580 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3582 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3585 */
            (({ /* cicili#Let3589 */
                // ----------
                
                ({ /* cicili#Let3593 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3595 */
                      (({ /* cicili#Let3603 */
                          __auto_type match3602  = get_Rc_BTree_CStr_Route (head );
                          typeof((((match3602 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let3608 */
                            bool __h_case_result  = (true  &&  (((match3602 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3609 */
                                  (child  =  (((match3602 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn3612 */
                                show_BTree_CStr_Route (file , child );
                              }) : ({ /* cicili#Let3617 */
                                // ----------
                                
                                ({ /* cicili#Progn3621 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3625 */
                      // ----------
                      
                      ({ /* cicili#Progn3629 */
                        ({ /* cicili#Let3637 */
                          __auto_type match3636  = get_Rc_BTree_CStr_Route (head );
                          typeof((((match3636 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let3642 */
                            bool __h_case_result  = (true  &&  (((match3636 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3643 */
                                  (child  =  (((match3636 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn3646 */
                                show_BTree_CStr_Route (file , child );
                              }) : ({ /* cicili#Let3651 */
                                // ----------
                                
                                ({ /* cicili#Progn3655 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_CStr_Route (file , tail ) );
          }) : ({ /* cicili#Let3660 */
            // ----------
            
            ({ /* cicili#Progn3664 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route copy_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let3670 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3674 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3675 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3677 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3680 */
            Cons_Rc_BTree_CStr_Route (head , copy_List_Rc_BTree_CStr_Route (tail ));
          }) : ({ /* cicili#Let3686 */
            // ----------
            
            ({ /* cicili#Progn3690 */
              Nil_Rc_BTree_CStr_Route ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route replaceAt_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route item , int index ) {
  return ({ /* cicili#Let3697 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3701 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3702 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3704 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3707 */
            Cons_Rc_BTree_CStr_Route (head , replaceAt_List_Rc_BTree_CStr_Route (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3713 */
            // ----------
            
            ({ /* cicili#Progn3717 */
              ({ /* cicili#Let3721 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3725 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3726 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3729 */
                      Cons_Rc_BTree_CStr_Route (item , copy_List_Rc_BTree_CStr_Route (taill ));
                    }) : ({ /* cicili#Let3735 */
                      // ----------
                      
                      ({ /* cicili#Progn3739 */
                        Nil_Rc_BTree_CStr_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route deleteAt_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , int index ) {
  return ({ /* cicili#Let3746 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3750 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3751 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3753 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3756 */
            Cons_Rc_BTree_CStr_Route (head , deleteAt_List_Rc_BTree_CStr_Route (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3762 */
            // ----------
            
            ({ /* cicili#Progn3766 */
              ({ /* cicili#Let3770 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3774 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3775 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3778 */
                      copy_List_Rc_BTree_CStr_Route (taill );
                    }) : ({ /* cicili#Let3783 */
                      // ----------
                      
                      ({ /* cicili#Progn3787 */
                        Nil_Rc_BTree_CStr_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route insertAt_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route llist , Rc_BTree_CStr_Route item , int index ) {
  return ({ /* cicili#Let3794 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3798 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3799 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3801 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3804 */
            Cons_Rc_BTree_CStr_Route (head , insertAt_List_Rc_BTree_CStr_Route (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3810 */
            // ----------
            
            ({ /* cicili#Progn3814 */
              Cons_Rc_BTree_CStr_Route (item , copy_List_Rc_BTree_CStr_Route (llist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route replace_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route aimed ) {
  return ({ /* cicili#Let3822 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3826 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3827 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3829 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3832 */
            Cons_Rc_BTree_CStr_Route (head , replace_List_Rc_BTree_CStr_Route (tail , item , aimed ));
          }) : ({ /* cicili#Let3838 */
            // ----------
            
            ({ /* cicili#Progn3842 */
              ({ /* cicili#Let3846 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3850 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3851 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3854 */
                      Cons_Rc_BTree_CStr_Route (item , copy_List_Rc_BTree_CStr_Route (taill ));
                    }) : ({ /* cicili#Let3860 */
                      // ----------
                      
                      ({ /* cicili#Progn3864 */
                        Nil_Rc_BTree_CStr_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route delete_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , List_Rc_BTree_CStr_Route aimed ) {
  return ({ /* cicili#Let3871 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3875 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3876 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3878 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3881 */
            Cons_Rc_BTree_CStr_Route (head , delete_List_Rc_BTree_CStr_Route (tail , aimed ));
          }) : ({ /* cicili#Let3887 */
            // ----------
            
            ({ /* cicili#Progn3891 */
              ({ /* cicili#Let3895 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3899 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3900 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3903 */
                      copy_List_Rc_BTree_CStr_Route (taill );
                    }) : ({ /* cicili#Let3908 */
                      // ----------
                      
                      ({ /* cicili#Progn3912 */
                        Nil_Rc_BTree_CStr_Route ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route insert_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route llist , Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route rlist ) {
  return ({ /* cicili#Let3919 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3923 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3924 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3926 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3929 */
            Cons_Rc_BTree_CStr_Route (head , insert_List_Rc_BTree_CStr_Route (tail , item , rlist ));
          }) : ({ /* cicili#Let3935 */
            // ----------
            
            ({ /* cicili#Progn3939 */
              Cons_Rc_BTree_CStr_Route (item , copy_List_Rc_BTree_CStr_Route (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route reverse_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list ) {
  List_Rc_BTree_CStr_Route _reverse (List_Rc_BTree_CStr_Route list , List_Rc_BTree_CStr_Route rlist ) {
    return ({ /* cicili#Let3948 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3952 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3953 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3955 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3958 */
              _reverse (tail , Cons_Rc_BTree_CStr_Route (head , rlist ));
            }) : ({ /* cicili#Let3963 */
              // ----------
              
              ({ /* cicili#Progn3967 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3971 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3975 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3976 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3978 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3981 */
            _reverse (tail , Cons_Rc_BTree_CStr_Route (head , Nil_Rc_BTree_CStr_Route ()));
          }) : ({ /* cicili#Let3987 */
            // ----------
            
            ({ /* cicili#Progn3991 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route append_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route llist , List_Rc_BTree_CStr_Route rlist ) {
  return ({ /* cicili#Let3997 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4001 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4002 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4004 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4007 */
            Cons_Rc_BTree_CStr_Route (head , append_List_Rc_BTree_CStr_Route (tail , rlist ));
          }) : ({ /* cicili#Let4013 */
            // ----------
            
            ({ /* cicili#Progn4017 */
              copy_List_Rc_BTree_CStr_Route (rlist );
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route push_List_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route item , List_Rc_BTree_CStr_Route list ) {
  return Cons_Rc_BTree_CStr_Route (item , copy_List_Rc_BTree_CStr_Route (list ));
}
List_Rc_BTree_CStr_Route take_List_Rc_BTree_CStr_Route (int len , List_Rc_BTree_CStr_Route list ) {
  return (((len  <=  0 )) ? Nil_Rc_BTree_CStr_Route () : ({ /* cicili#Let4030 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4034 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4035 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4037 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4040 */
              Cons_Rc_BTree_CStr_Route (head , take_List_Rc_BTree_CStr_Route ((--len ), tail ));
            }) : ({ /* cicili#Let4046 */
              // ----------
              
              ({ /* cicili#Progn4050 */
                Nil_Rc_BTree_CStr_Route ();
              });
            }));
        });
      }));
}
List_Rc_BTree_CStr_Route last_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let4057 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4061 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4062 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4065 */
            ({ /* cicili#Let4069 */
              // ----------
              
              ({ /* cicili#Let4073 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn4075 */
                    copy_List_Rc_BTree_CStr_Route (list );
                  }) : ({ /* cicili#Let4080 */
                    // ----------
                    
                    ({ /* cicili#Progn4084 */
                      last_List_Rc_BTree_CStr_Route (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let4089 */
            // ----------
            
            ({ /* cicili#Progn4093 */
              Nil_Rc_BTree_CStr_Route ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route init_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let4101 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4105 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4106 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4108 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4111 */
            Cons_Rc_BTree_CStr_Route (head , init_List_Rc_BTree_CStr_Route (tail ));
          }) : ({ /* cicili#Let4117 */
            // ----------
            
            ({ /* cicili#Progn4121 */
              Nil_Rc_BTree_CStr_Route ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list , int desired ) {
  return ({ /* cicili#Let4128 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4132 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4133 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4136 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_CStr_Route (tail , (--desired )) ));
          }) : ({ /* cicili#Let4142 */
            // ----------
            
            ({ /* cicili#Progn4146 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let4152 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4156 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4157 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4160 */
            (1 +  len_List_Rc_BTree_CStr_Route (tail ) );
          }) : ({ /* cicili#Let4165 */
            // ----------
            
            ({ /* cicili#Progn4169 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route tail_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list ) {
  return drop_List_Rc_BTree_CStr_Route (1, list );
}
List_Rc_BTree_CStr_Route drop_List_Rc_BTree_CStr_Route (int len , List_Rc_BTree_CStr_Route list ) {
  return (((len  <=  0 )) ? copy_List_Rc_BTree_CStr_Route (list ) : ({ /* cicili#Let4180 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4184 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4185 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4188 */
              drop_List_Rc_BTree_CStr_Route ((--len ), tail );
            }) : ({ /* cicili#Let4193 */
              // ----------
              
              ({ /* cicili#Progn4197 */
                Nil_Rc_BTree_CStr_Route ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_CStr_Route head_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let4205 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let4209 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4210 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4213 */
            Just_Rc_BTree_CStr_Route (head );
          }) : ({ /* cicili#Let4218 */
            // ----------
            
            ({ /* cicili#Progn4222 */
              Nothing_Rc_BTree_CStr_Route ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_Route nthcdr_List_Rc_BTree_CStr_Route (int index , List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let4229 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4233 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4234 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4237 */
            nthcdr_List_Rc_BTree_CStr_Route ((--index ), tail );
          }) : ({ /* cicili#Let4242 */
            // ----------
            
            ({ /* cicili#Progn4246 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_CStr_Route nth_List_Rc_BTree_CStr_Route (int index , List_Rc_BTree_CStr_Route list ) {
  return ({ /* cicili#Let4253 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4257 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4258 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4260 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4263 */
            (((index  ==  0 )) ? Just_Rc_BTree_CStr_Route (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_CStr_Route () : nth_List_Rc_BTree_CStr_Route ((--index ), tail )));
          }) : ({ /* cicili#Let4272 */
            // ----------
            
            ({ /* cicili#Progn4276 */
              Nothing_Rc_BTree_CStr_Route ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route * this_ptr ) {
  { /* cicili#Let4281 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4285 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4289 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4290 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4294 */
            { /* cicili#Block4296 */
              free (this );
              free_List_Rc_BTree_CStr_Route ((&tail ));
            }
          }
        else
          { /* cicili#Let4304 */
            // ----------
            
            ({ /* cicili#Let4308 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4311 */
                  { /* cicili#Block4313 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_Rc_BTree_CStr_Route__H_Table * const get_List_Rc_BTree_CStr_Route__H_Table () {
  static List_Rc_BTree_CStr_Route__H_Table table  = { free_List_Rc_BTree_CStr_Route , toArray_List_Rc_BTree_CStr_Route , wrap_List_Rc_BTree_CStr_Route , pure_List_Rc_BTree_CStr_Route , show_List_Rc_BTree_CStr_Route , copy_List_Rc_BTree_CStr_Route , replaceAt_List_Rc_BTree_CStr_Route , deleteAt_List_Rc_BTree_CStr_Route , insertAt_List_Rc_BTree_CStr_Route , replace_List_Rc_BTree_CStr_Route , delete_List_Rc_BTree_CStr_Route , insert_List_Rc_BTree_CStr_Route , reverse_List_Rc_BTree_CStr_Route , append_List_Rc_BTree_CStr_Route , push_List_Rc_BTree_CStr_Route , take_List_Rc_BTree_CStr_Route , last_List_Rc_BTree_CStr_Route , init_List_Rc_BTree_CStr_Route , hasLen_List_Rc_BTree_CStr_Route , len_List_Rc_BTree_CStr_Route , tail_List_Rc_BTree_CStr_Route , drop_List_Rc_BTree_CStr_Route , head_List_Rc_BTree_CStr_Route , nthcdr_List_Rc_BTree_CStr_Route , nth_List_Rc_BTree_CStr_Route };
  return (&table );
}
List_Rc_BTree_CStr_Route Cons_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route head , List_Rc_BTree_CStr_Route tail ) {
  { /* cicili#Let4324 */
    List_Rc_BTree_CStr_Route instance  = malloc (sizeof(class_List_Rc_BTree_CStr_Route));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_CStr_Route){ get_List_Rc_BTree_CStr_Route__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_CStr_Route Nil_Rc_BTree_CStr_Route () {
  { /* cicili#Let4330 */
    List_Rc_BTree_CStr_Route instance  = malloc (sizeof(class_List_Rc_BTree_CStr_Route));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_CStr_Route){ get_List_Rc_BTree_CStr_Route__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_Rc_BTree_CStr_Route__H_IMPL__ */ 
#ifndef __Maybe_List_Rc_BTree_CStr_Route__H_IMPL__
#define __Maybe_List_Rc_BTree_CStr_Route__H_IMPL__
void free_Maybe_List_Rc_BTree_CStr_Route (Maybe_List_Rc_BTree_CStr_Route * this ) {
}
const Maybe_List_Rc_BTree_CStr_Route__H_Table * const get_Maybe_List_Rc_BTree_CStr_Route__H_Table () {
  static const Maybe_List_Rc_BTree_CStr_Route__H_Table table  = { free_Maybe_List_Rc_BTree_CStr_Route };
  return (&table );
}
Maybe_List_Rc_BTree_CStr_Route Just_List_Rc_BTree_CStr_Route (List_Rc_BTree_CStr_Route value ) {
  { /* cicili#Let4347 */
    Maybe_List_Rc_BTree_CStr_Route instance  = ((Maybe_List_Rc_BTree_CStr_Route){ get_Maybe_List_Rc_BTree_CStr_Route__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_CStr_Route Nothing_List_Rc_BTree_CStr_Route () {
  { /* cicili#Let4352 */
    Maybe_List_Rc_BTree_CStr_Route instance  = ((Maybe_List_Rc_BTree_CStr_Route){ get_Maybe_List_Rc_BTree_CStr_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_CStr_Route__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_CStr_Route__H_IMPL__
#define __Functor_List_Rc_BTree_CStr_Route__H_IMPL__
List_Rc_BTree_CStr_Route fmap_Functor_List_Rc_BTree_CStr_Route (Rc_BTree_CStr_Route_to_Rc_BTree_CStr_Route_t a_b , List_Rc_BTree_CStr_Route input ) {
  return ({ /* cicili#Let4366 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4370 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4371 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4373 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4376 */
            Cons_Rc_BTree_CStr_Route (a_b (head ), fmap_Functor_List_Rc_BTree_CStr_Route (a_b , tail ));
          }) : ({ /* cicili#Let4383 */
            // ----------
            
            ({ /* cicili#Progn4387 */
              Nil_Rc_BTree_CStr_Route ();
            });
          }));
      });
    });
}
void free_Functor_List_Rc_BTree_CStr_Route (Functor_List_Rc_BTree_CStr_Route * this ) {
}
const Functor_List_Rc_BTree_CStr_Route__H_Table * const get_Functor_List_Rc_BTree_CStr_Route__H_Table () {
  static const Functor_List_Rc_BTree_CStr_Route__H_Table table  = { free_Functor_List_Rc_BTree_CStr_Route , fmap_Functor_List_Rc_BTree_CStr_Route };
  return (&table );
}
Functor_List_Rc_BTree_CStr_Route Functor_List_Rc_BTree_CStr_Route_ctor () {
  { /* cicili#Let4401 */
    Functor_List_Rc_BTree_CStr_Route instance  = ((Functor_List_Rc_BTree_CStr_Route){ get_Functor_List_Rc_BTree_CStr_Route__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_CStr_Route__H_IMPL__ */ 
Functor_List_Rc_BTree_CStr_Route get_Functor_List_Rc_BTree_CStr_Route () {
  return Functor_List_Rc_BTree_CStr_Route_ctor ();
}
int U_BTree_CStr_Route  = 3;
int L_BTree_CStr_Route  = 2;
BTree_CStr_Route split_BTree_CStr_Route (BTree_CStr_Route tree ) {
  return ({ /* cicili#Let4419 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let4423 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4424 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4426 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4429 */
            (((len_List_BTree_CStr_Route_pair_t (items ) >=  U_BTree_CStr_Route  )) ? ({ /* cicili#Let4435 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4437 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_CStr_Route (wrap_List_BTree_CStr_Route_pair_t (({ /* cicili#Let4445 */
                    __auto_type match4444  = nth_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items );
                    typeof((((match4444 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    
                    ({ /* cicili#Let4451 */
                      bool __h_case_result  = (true  &&  (((match4444 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4452 */
                            (nitem  =  (((match4444 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn4455 */
                          nitem ;
                        }) : ({ /* cicili#Let4459 */
                          // ----------
                          
                          ({ /* cicili#Progn4463 */
                            ((BTree_CStr_Route_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (take_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items ), ({ /* cicili#Let4474 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4476 */
                        __auto_type r1  = take_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4486 */
                          Rc_BTree_CStr_Route __ciciliC_4485 (Rc_BTree_CStr_Route __h_value ) {
                            return clone_Rc_BTree_CStr_Route (__h_value );
                          }
                          __ciciliC_4485 ;
                        }), r1 );
                    }))), new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (drop_List_BTree_CStr_Route_pair_t (L_BTree_CStr_Route , items ), ({ /* cicili#Let4497 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4499 */
                        __auto_type r1  = drop_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4509 */
                          Rc_BTree_CStr_Route __ciciliC_4508 (Rc_BTree_CStr_Route __h_value ) {
                            return clone_Rc_BTree_CStr_Route (__h_value );
                          }
                          __ciciliC_4508 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let4516 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let4520 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4521 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4523 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn4526 */
                  (((len_List_BTree_CStr_Route_pair_t (items ) >=  U_BTree_CStr_Route  )) ? ({ /* cicili#Let4532 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4534 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_CStr_Route (wrap_List_BTree_CStr_Route_pair_t (({ /* cicili#Let4542 */
                          __auto_type match4541  = nth_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items );
                          typeof((((match4541 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          
                          ({ /* cicili#Let4548 */
                            bool __h_case_result  = (true  &&  (((match4541 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4549 */
                                  (nitem  =  (((match4541 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4552 */
                                nitem ;
                              }) : ({ /* cicili#Let4556 */
                                // ----------
                                
                                ({ /* cicili#Progn4560 */
                                  ((BTree_CStr_Route_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (take_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items ), ({ /* cicili#Let4571 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4573 */
                              __auto_type r1  = take_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4583 */
                                Rc_BTree_CStr_Route __ciciliC_4582 (Rc_BTree_CStr_Route __h_value ) {
                                  return clone_Rc_BTree_CStr_Route (__h_value );
                                }
                                __ciciliC_4582 ;
                              }), r1 );
                          }))), new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (drop_List_BTree_CStr_Route_pair_t (L_BTree_CStr_Route , items ), ({ /* cicili#Let4594 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4596 */
                              __auto_type r1  = drop_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4606 */
                                Rc_BTree_CStr_Route __ciciliC_4605 (Rc_BTree_CStr_Route __h_value ) {
                                  return clone_Rc_BTree_CStr_Route (__h_value );
                                }
                                __ciciliC_4605 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let4613 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let4617 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4618 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4621 */
                        (((len_List_BTree_CStr_Route_pair_t (items ) >=  U_BTree_CStr_Route  )) ? ({ /* cicili#Let4627 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4629 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_CStr_Route (wrap_List_BTree_CStr_Route_pair_t (({ /* cicili#Let4637 */
                                __auto_type match4636  = nth_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items );
                                typeof((((match4636 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                
                                ({ /* cicili#Let4643 */
                                  bool __h_case_result  = (true  &&  (((match4636 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4644 */
                                        (nitem  =  (((match4636 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn4647 */
                                      nitem ;
                                    }) : ({ /* cicili#Let4651 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn4655 */
                                        ((BTree_CStr_Route_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (take_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items ))), new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (drop_List_BTree_CStr_Route_pair_t (L_BTree_CStr_Route , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let4672 */
                        // ----------
                        
                        ({ /* cicili#Progn4676 */
                          tree ;
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
BTree_CStr_Route splitForDelete_BTree_CStr_Route (BTree_CStr_Route tree ) {
  return ({ /* cicili#Let4682 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let4686 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4687 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4689 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4692 */
            (((len_List_BTree_CStr_Route_pair_t (items ) >=  U_BTree_CStr_Route  )) ? Branch_BTree_CStr_Route (wrap_List_BTree_CStr_Route_pair_t (({ /* cicili#Let4702 */
                __auto_type match4701  = nth_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items );
                typeof((((match4701 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                
                ({ /* cicili#Let4708 */
                  bool __h_case_result  = (true  &&  (((match4701 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4709 */
                        (nitem  =  (((match4701 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4712 */
                      nitem ;
                    }) : ({ /* cicili#Let4716 */
                      // ----------
                      
                      ({ /* cicili#Progn4720 */
                        ((BTree_CStr_Route_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (take_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items ), ({ /* cicili#Let4731 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4733 */
                    __auto_type r1  = take_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4743 */
                      Rc_BTree_CStr_Route __ciciliC_4742 (Rc_BTree_CStr_Route __h_value ) {
                        return clone_Rc_BTree_CStr_Route (__h_value );
                      }
                      __ciciliC_4742 ;
                    }), r1 );
                }))), new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (drop_List_BTree_CStr_Route_pair_t (L_BTree_CStr_Route , items ), ({ /* cicili#Let4754 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4756 */
                    __auto_type r1  = drop_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4766 */
                      Rc_BTree_CStr_Route __ciciliC_4765 (Rc_BTree_CStr_Route __h_value ) {
                        return clone_Rc_BTree_CStr_Route (__h_value );
                      }
                      __ciciliC_4765 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let4773 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let4777 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4778 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4780 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn4783 */
                  (((len_List_BTree_CStr_Route_pair_t (items ) >=  U_BTree_CStr_Route  )) ? Branch_BTree_CStr_Route (wrap_List_BTree_CStr_Route_pair_t (({ /* cicili#Let4793 */
                      __auto_type match4792  = nth_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items );
                      typeof((((match4792 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      
                      ({ /* cicili#Let4799 */
                        bool __h_case_result  = (true  &&  (((match4792 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4800 */
                              (nitem  =  (((match4792 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn4803 */
                            nitem ;
                          }) : ({ /* cicili#Let4807 */
                            // ----------
                            
                            ({ /* cicili#Progn4811 */
                              ((BTree_CStr_Route_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (take_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items ), ({ /* cicili#Let4822 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4824 */
                          __auto_type r1  = take_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4834 */
                            Rc_BTree_CStr_Route __ciciliC_4833 (Rc_BTree_CStr_Route __h_value ) {
                              return clone_Rc_BTree_CStr_Route (__h_value );
                            }
                            __ciciliC_4833 ;
                          }), r1 );
                      }))), new_Rc_BTree_CStr_Route (Internal_BTree_CStr_Route (drop_List_BTree_CStr_Route_pair_t (L_BTree_CStr_Route , items ), ({ /* cicili#Let4845 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4847 */
                          __auto_type r1  = drop_List_Rc_BTree_CStr_Route (L_BTree_CStr_Route , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4857 */
                            Rc_BTree_CStr_Route __ciciliC_4856 (Rc_BTree_CStr_Route __h_value ) {
                              return clone_Rc_BTree_CStr_Route (__h_value );
                            }
                            __ciciliC_4856 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let4864 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let4868 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4869 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4872 */
                        (((len_List_BTree_CStr_Route_pair_t (items ) >=  U_BTree_CStr_Route  )) ? Branch_BTree_CStr_Route (wrap_List_BTree_CStr_Route_pair_t (({ /* cicili#Let4882 */
                            __auto_type match4881  = nth_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items );
                            typeof((((match4881 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            
                            ({ /* cicili#Let4888 */
                              bool __h_case_result  = (true  &&  (((match4881 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4889 */
                                    (nitem  =  (((match4881 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn4892 */
                                  nitem ;
                                }) : ({ /* cicili#Let4896 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn4900 */
                                    ((BTree_CStr_Route_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (take_List_BTree_CStr_Route_pair_t ((L_BTree_CStr_Route  -  1 ), items ))), new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (drop_List_BTree_CStr_Route_pair_t (L_BTree_CStr_Route , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let4917 */
                        // ----------
                        
                        ({ /* cicili#Progn4921 */
                          tree ;
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
BTree_CStr_Route mergeUp_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children , int pitem_index , int pchild_index , List_BTree_CStr_Route_pair_t left_items , List_Rc_BTree_CStr_Route left_children , List_BTree_CStr_Route_pair_t right_items , List_Rc_BTree_CStr_Route right_children ) {
  return ({ /* cicili#Let4928 */
      __auto_type merged  = Internal_BTree_CStr_Route (append_List_BTree_CStr_Route_pair_t (left_items , right_items ), ({ /* cicili#Let4933 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4935 */
          __auto_type r1  = append_List_Rc_BTree_CStr_Route (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn4944 */
            Rc_BTree_CStr_Route __ciciliC_4943 (Rc_BTree_CStr_Route __h_value ) {
              return clone_Rc_BTree_CStr_Route (__h_value );
            }
            __ciciliC_4943 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let4953 */
        __auto_type tmp_child  = splitForDelete_BTree_CStr_Route (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match4951_0_arg ;
        typeof((((__h_match4951_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        
        ({ /* cicili#Let4958 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn4959 */
                    (__h_match4951_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match4951_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4961 */
                        (head  =  (((__h_match4951_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn4963 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4966 */
              ({ /* cicili#Let4969 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4971 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4974 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_CStr_Route (replaceAt_List_BTree_CStr_Route_pair_t (items , head , pitem_index ), ({ /* cicili#Let4981 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4983 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_CStr_Route (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4987 */
                      __auto_type r2  = take_List_Rc_BTree_CStr_Route (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4991 */
                      __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4995 */
                      __auto_type r4  = append_List_Rc_BTree_CStr_Route (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4999 */
                      __auto_type r5  = append_List_Rc_BTree_CStr_Route (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5008 */
                        Rc_BTree_CStr_Route __ciciliC_5007 (Rc_BTree_CStr_Route __h_value ) {
                          return clone_Rc_BTree_CStr_Route (__h_value );
                        }
                        __ciciliC_5007 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let5015 */
              // ----------
              
              ({ /* cicili#Let5019 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5021 */
                    Internal_BTree_CStr_Route (deleteAt_List_BTree_CStr_Route_pair_t (items , pitem_index ), ({ /* cicili#Let5027 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5029 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_CStr_Route (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5033 */
                          __auto_type r2  = new_Rc_BTree_CStr_Route (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5037 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_CStr_Route (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5046 */
                            Rc_BTree_CStr_Route __ciciliC_5045 (Rc_BTree_CStr_Route __h_value ) {
                              return clone_Rc_BTree_CStr_Route (__h_value );
                            }
                            __ciciliC_5045 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let5053 */
                    // ----------
                    
                    ({ /* cicili#Progn5057 */
                      Leaf_BTree_CStr_Route (Nil_BTree_CStr_Route_pair_t ());
                    });
                  }));
              });
            }));
        });
      });
    });
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route deleteWithParent_BTree_CStr_Route (Maybe_BTree_CStr_Route wparent , int pitem_index , int pchild_index , BTree_CStr_Route tree , CStr skey , void (*callback) (BTree_CStr_Route_pair_t item ));
Either_BTree_CStr_Route_Error_BTree_CStr_Route borrowLeaf_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children , Maybe_List_BTree_CStr_Route_pair_t wleft , List_BTree_CStr_Route_pair_t current , int index , BTree_CStr_Route nchild , void (*callback) (BTree_CStr_Route_pair_t item )) {
  Either_BTree_CStr_Route_Error_BTree_CStr_Route borrowRight (List_BTree_CStr_Route_pair_t child_items ) {
    return ({ /* cicili#Let5084 */
        __auto_type match5083  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
        typeof((((match5083 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let5089 */
          bool __h_case_result  = (true  &&  (((match5083 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5090 */
                (right_child_rc  =  (((match5083 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5093 */
              ({ /* cicili#Let5096 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let5100 */
                  __auto_type match5099  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match5099 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  
                  ({ /* cicili#Let5105 */
                    bool __h_case_result  = (true  &&  (((match5099 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5106 */
                          (unboxed  =  (((match5099 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn5109 */
                        ({ /* cicili#Let5113 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          
                          ({ /* cicili#Let5117 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5118 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5121 */
                                (((hasLen_List_BTree_CStr_Route_pair_t (right_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let5129 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    
                                    ({ /* cicili#Let5133 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5134 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn5136 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn5139 */
                                          Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , first_item , current ), ({ /* cicili#Let5147 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5149 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5153 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5159 */
                                                  Rc_BTree_CStr_Route __ciciliC_5158 (Rc_BTree_CStr_Route __h_value ) {
                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                  }
                                                  __ciciliC_5158 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5166 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5170 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5176 */
                                                  Rc_BTree_CStr_Route __ciciliC_5175 (Rc_BTree_CStr_Route __h_value ) {
                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                  }
                                                  __ciciliC_5175 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5183 */
                                                __auto_type r5  = take_List_BTree_CStr_Route_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5187 */
                                                __auto_type r7  = pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (append_List_BTree_CStr_Route_pair_t (child_items , r5 ))), new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5200 */
                                                __auto_type r6  = append_List_Rc_BTree_CStr_Route (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_Route (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let5207 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn5211 */
                                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let5218 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    
                                    ({ /* cicili#Let5222 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5223 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn5226 */
                                          Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (delete_List_BTree_CStr_Route_pair_t (items , current ), ({ /* cicili#Let5234 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5236 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5240 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5246 */
                                                  Rc_BTree_CStr_Route __ciciliC_5245 (Rc_BTree_CStr_Route __h_value ) {
                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                  }
                                                  __ciciliC_5245 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5253 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5257 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5263 */
                                                  Rc_BTree_CStr_Route __ciciliC_5262 (Rc_BTree_CStr_Route __h_value ) {
                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                  }
                                                  __ciciliC_5262 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5270 */
                                                __auto_type r5  = wrap_List_BTree_CStr_Route_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5274 */
                                                __auto_type r6  = append_List_BTree_CStr_Route_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5278 */
                                                __auto_type r8  = push_List_Rc_BTree_CStr_Route (new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (append_List_BTree_CStr_Route_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_Route (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let5289 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn5293 */
                                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let5300 */
                                // ----------
                                
                                ({ /* cicili#Progn5304 */
                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5311 */
                        // ----------
                        
                        ({ /* cicili#Progn5315 */
                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let5322 */
              // ----------
              
              ({ /* cicili#Progn5326 */
                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_Route_Error_BTree_CStr_Route borrowLeft (List_BTree_CStr_Route_pair_t child_items ) {
    return ({ /* cicili#Let5339 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        
        ({ /* cicili#Let5343 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5344 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5346 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5349 */
              ({ /* cicili#Let5353 */
                __auto_type match5352  = nth_List_Rc_BTree_CStr_Route ((index  -  1 ), children );
                typeof((((match5352 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                
                ({ /* cicili#Let5358 */
                  bool __h_case_result  = (true  &&  (((match5352 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5359 */
                        (left_child_rc  =  (((match5352 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5362 */
                      ({ /* cicili#Let5365 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let5369 */
                          __auto_type match5368  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5368 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let5374 */
                            bool __h_case_result  = (true  &&  (((match5368 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5375 */
                                  (unboxed  =  (((match5368 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5378 */
                                ({ /* cicili#Let5382 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5386 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5387 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5390 */
                                        (((hasLen_List_BTree_CStr_Route_pair_t (left_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let5398 */
                                            __auto_type last  = last_List_BTree_CStr_Route_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            
                                            ({ /* cicili#Let5403 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5404 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5407 */
                                                  ({ /* cicili#Let5410 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5412 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , last_item , left ), ({ /* cicili#Let5421 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5423 */
                                                          __auto_type r1  = take_List_Rc_BTree_CStr_Route ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5427 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5433 */
                                                            Rc_BTree_CStr_Route __ciciliC_5432 (Rc_BTree_CStr_Route __h_value ) {
                                                              return clone_Rc_BTree_CStr_Route (__h_value );
                                                            }
                                                            __ciciliC_5432 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5440 */
                                                          __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5444 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5450 */
                                                            Rc_BTree_CStr_Route __ciciliC_5449 (Rc_BTree_CStr_Route __h_value ) {
                                                              return clone_Rc_BTree_CStr_Route (__h_value );
                                                            }
                                                            __ciciliC_5449 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5457 */
                                                          __auto_type r5  = pure_List_Rc_BTree_CStr_Route (((Rc_BTree_CStr_Route[]){ new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (init_List_BTree_CStr_Route_pair_t (left_child_items ))), new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (push_List_BTree_CStr_Route_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5470 */
                                                          __auto_type r7  = append_List_Rc_BTree_CStr_Route (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_CStr_Route (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let5477 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5481 */
                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let5488 */
                                            __auto_type match5487  = borrowRight (child_items );
                                            // ----------
                                            
                                            ({ /* cicili#Let5492 */
                                              bool __h_case_result  = (true  &&  ((match5487 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5494 */
                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (delete_List_BTree_CStr_Route_pair_t (items , left ), ({ /* cicili#Let5502 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5504 */
                                                        __auto_type r1  = take_List_Rc_BTree_CStr_Route ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5508 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5514 */
                                                          Rc_BTree_CStr_Route __ciciliC_5513 (Rc_BTree_CStr_Route __h_value ) {
                                                            return clone_Rc_BTree_CStr_Route (__h_value );
                                                          }
                                                          __ciciliC_5513 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5521 */
                                                        __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5525 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5531 */
                                                          Rc_BTree_CStr_Route __ciciliC_5530 (Rc_BTree_CStr_Route __h_value ) {
                                                            return clone_Rc_BTree_CStr_Route (__h_value );
                                                          }
                                                          __ciciliC_5530 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5538 */
                                                        __auto_type r8  = wrap_List_BTree_CStr_Route_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5542 */
                                                        __auto_type r5  = append_List_BTree_CStr_Route_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5546 */
                                                        __auto_type r7  = push_List_Rc_BTree_CStr_Route (new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (append_List_BTree_CStr_Route_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_CStr_Route (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let5557 */
                                                  __auto_type right  = match5487 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5561 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let5565 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5569 */
                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5576 */
                                // ----------
                                
                                ({ /* cicili#Progn5580 */
                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5587 */
                      // ----------
                      
                      ({ /* cicili#Progn5591 */
                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5598 */
              // ----------
              
              ({ /* cicili#Progn5602 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let5606 */
      __auto_type result  = ({ /* cicili#Let5609 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        
        ({ /* cicili#Let5613 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn5614 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5617 */
              (((hasLen_List_BTree_CStr_Route_pair_t (child_items , (L_BTree_CStr_Route  -  1 )) ==  (L_BTree_CStr_Route  -  1 ) )) ? Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let5629 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5631 */
                    __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5635 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5644 */
                      Rc_BTree_CStr_Route __ciciliC_5643 (Rc_BTree_CStr_Route __h_value ) {
                        return clone_Rc_BTree_CStr_Route (__h_value );
                      }
                      __ciciliC_5643 ;
                    }), r2 );
                }))) : ({ /* cicili#Let5650 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5652 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let5657 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              
              ({ /* cicili#Let5661 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn5662 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5665 */
                    (((hasLen_List_BTree_CStr_Route_pair_t (child_items , (L_BTree_CStr_Route  -  1 )) ==  (L_BTree_CStr_Route  -  1 ) )) ? Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let5677 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5679 */
                          __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5683 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5692 */
                            Rc_BTree_CStr_Route __ciciliC_5691 (Rc_BTree_CStr_Route __h_value ) {
                              return clone_Rc_BTree_CStr_Route (__h_value );
                            }
                            __ciciliC_5691 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let5698 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5700 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let5705 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    
                    ({ /* cicili#Let5709 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5710 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn5713 */
                          (((hasLen_List_BTree_CStr_Route_pair_t (child_items , (L_BTree_CStr_Route  -  1 )) ==  (L_BTree_CStr_Route  -  1 ) )) ? Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let5725 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5727 */
                                __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5731 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5740 */
                                  Rc_BTree_CStr_Route __ciciliC_5739 (Rc_BTree_CStr_Route __h_value ) {
                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                  }
                                  __ciciliC_5739 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let5746 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5748 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let5753 */
                          // ----------
                          
                          ({ /* cicili#Progn5757 */
                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrow 1"));
                          });
                        }));
                    });
                  }));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route borrowInternal_BTree_CStr_Route (Maybe_BTree_CStr_Route wtree , List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children , List_BTree_CStr_Route_pair_t current , int index , void (*callback) (BTree_CStr_Route_pair_t item )) {
  Either_BTree_CStr_Route_Error_BTree_CStr_Route borrowRightInternal (List_BTree_CStr_Route_pair_t left_child_items , List_Rc_BTree_CStr_Route left_child_children ) {
    return ({ /* cicili#Let5782 */
        __auto_type match5781  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
        typeof((((match5781 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let5787 */
          bool __h_case_result  = (true  &&  (((match5781 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5788 */
                (right_child_rc  =  (((match5781 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5791 */
              ({ /* cicili#Let5795 */
                __auto_type match5794  = get_Rc_BTree_CStr_Route (right_child_rc );
                typeof((((match5794 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let5800 */
                  bool __h_case_result  = (true  &&  (((match5794 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5801 */
                        (right_child  =  (((match5794 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5804 */
                      ({ /* cicili#Let5808 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let5812 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5813 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5815 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn5818 */
                              (((hasLen_List_BTree_CStr_Route_pair_t (right_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let5827 */
                                  __auto_type match5825  = min_BTree_CStr_Route (right_child );
                                  typeof((((match5825 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5832 */
                                    bool __h_case_result  = (true  &&  (((match5825 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5833 */
                                            (min  =  (((match5825 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5835 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5838 */
                                        ({ /* cicili#Let5842 */
                                          __auto_type match5841  = delete_BTree_CStr_Route (right_child , min_key , NULL );
                                          typeof((((match5841 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let5847 */
                                            bool __h_case_result  = (true  &&  (((match5841 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5848 */
                                                  (nchild  =  (((match5841 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn5851 */
                                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , min , current ), ({ /* cicili#Let5859 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5861 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5865 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5874 */
                                                        Rc_BTree_CStr_Route __ciciliC_5873 (Rc_BTree_CStr_Route __h_value ) {
                                                          return clone_Rc_BTree_CStr_Route (__h_value );
                                                        }
                                                        __ciciliC_5873 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let5881 */
                                                __auto_type left  = match5841 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn5885 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let5889 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5893 */
                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let5901 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5905 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5906 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5908 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5911 */
                                        ({ /* cicili#Let5914 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5916 */
                                            __auto_type r1  = push_List_BTree_CStr_Route_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5920 */
                                            __auto_type r2  = append_List_Rc_BTree_CStr_Route (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5924 */
                                            __auto_type r4  = Internal_BTree_CStr_Route (append_List_BTree_CStr_Route_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn5933 */
                                              Rc_BTree_CStr_Route __ciciliC_5932 (Rc_BTree_CStr_Route __h_value ) {
                                                return clone_Rc_BTree_CStr_Route (__h_value );
                                              }
                                              __ciciliC_5932 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5940 */
                                            __auto_type r5  = take_List_Rc_BTree_CStr_Route (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5944 */
                                            __auto_type r7  = drop_List_Rc_BTree_CStr_Route ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let5950 */
                                            __auto_type match5949  = delete_BTree_CStr_Route (r4 , current_key , NULL );
                                            typeof((((match5949 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            
                                            ({ /* cicili#Let5955 */
                                              bool __h_case_result  = (true  &&  (((match5949 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5956 */
                                                    (ntree  =  (((match5949 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5959 */
                                                  ({ /* cicili#Let5963 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_CStr_Route (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let5968 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5969 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn5971 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn5974 */
                                                          ({ /* cicili#Let5978 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let5982 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5983 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn5986 */
                                                                  ({ /* cicili#Let5989 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5991 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5994 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , branch_head , current ), ({ /* cicili#Let6003 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6005 */
                                                                          __auto_type r10  = append_List_Rc_BTree_CStr_Route (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6009 */
                                                                          __auto_type r11  = append_List_Rc_BTree_CStr_Route (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6018 */
                                                                            Rc_BTree_CStr_Route __ciciliC_6017 (Rc_BTree_CStr_Route __h_value ) {
                                                                              return clone_Rc_BTree_CStr_Route (__h_value );
                                                                            }
                                                                            __ciciliC_6017 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let6025 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn6029 */
                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let6036 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let6040 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6042 */
                                                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (delete_List_BTree_CStr_Route_pair_t (items , current ), ({ /* cicili#Let6050 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6052 */
                                                                      __auto_type r9  = new_Rc_BTree_CStr_Route (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6056 */
                                                                      __auto_type r10  = push_List_Rc_BTree_CStr_Route (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6060 */
                                                                      __auto_type r11  = append_List_Rc_BTree_CStr_Route (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6069 */
                                                                        Rc_BTree_CStr_Route __ciciliC_6068 (Rc_BTree_CStr_Route __h_value ) {
                                                                          return clone_Rc_BTree_CStr_Route (__h_value );
                                                                        }
                                                                        __ciciliC_6068 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let6076 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn6080 */
                                                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let6087 */
                                                  __auto_type left  = match5949 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn6091 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let6095 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6099 */
                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let6106 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let6110 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6111 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6113 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn6116 */
                                    (((hasLen_List_BTree_CStr_Route_pair_t (right_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let6125 */
                                        __auto_type match6123  = min_BTree_CStr_Route (right_child );
                                        typeof((((match6123 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let6130 */
                                          bool __h_case_result  = (true  &&  (((match6123 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6131 */
                                                  (min  =  (((match6123 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6133 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn6136 */
                                              ({ /* cicili#Let6140 */
                                                __auto_type match6139  = delete_BTree_CStr_Route (right_child , min_key , NULL );
                                                typeof((((match6139 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let6145 */
                                                  bool __h_case_result  = (true  &&  (((match6139 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6146 */
                                                        (nchild  =  (((match6139 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6149 */
                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , min , current ), ({ /* cicili#Let6157 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6159 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6163 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6172 */
                                                              Rc_BTree_CStr_Route __ciciliC_6171 (Rc_BTree_CStr_Route __h_value ) {
                                                                return clone_Rc_BTree_CStr_Route (__h_value );
                                                              }
                                                              __ciciliC_6171 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let6179 */
                                                      __auto_type left  = match6139 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn6183 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6187 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6191 */
                                                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let6199 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let6203 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6204 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6206 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn6209 */
                                              ({ /* cicili#Let6212 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6214 */
                                                  __auto_type r1  = push_List_BTree_CStr_Route_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6218 */
                                                  __auto_type r2  = append_List_Rc_BTree_CStr_Route (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6222 */
                                                  __auto_type r4  = Internal_BTree_CStr_Route (append_List_BTree_CStr_Route_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6231 */
                                                    Rc_BTree_CStr_Route __ciciliC_6230 (Rc_BTree_CStr_Route __h_value ) {
                                                      return clone_Rc_BTree_CStr_Route (__h_value );
                                                    }
                                                    __ciciliC_6230 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6238 */
                                                  __auto_type r5  = take_List_Rc_BTree_CStr_Route (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6242 */
                                                  __auto_type r7  = drop_List_Rc_BTree_CStr_Route ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let6248 */
                                                  __auto_type match6247  = delete_BTree_CStr_Route (r4 , current_key , NULL );
                                                  typeof((((match6247 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let6253 */
                                                    bool __h_case_result  = (true  &&  (((match6247 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6254 */
                                                          (ntree  =  (((match6247 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn6257 */
                                                        ({ /* cicili#Let6261 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_CStr_Route (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let6266 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6267 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn6269 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6272 */
                                                                ({ /* cicili#Let6276 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let6280 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6281 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6284 */
                                                                        ({ /* cicili#Let6287 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6289 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6292 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , branch_head , current ), ({ /* cicili#Let6301 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6303 */
                                                                                __auto_type r10  = append_List_Rc_BTree_CStr_Route (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6307 */
                                                                                __auto_type r11  = append_List_Rc_BTree_CStr_Route (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6316 */
                                                                                  Rc_BTree_CStr_Route __ciciliC_6315 (Rc_BTree_CStr_Route __h_value ) {
                                                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                                                  }
                                                                                  __ciciliC_6315 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let6323 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn6327 */
                                                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let6334 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let6338 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6340 */
                                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (delete_List_BTree_CStr_Route_pair_t (items , current ), ({ /* cicili#Let6348 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6350 */
                                                                            __auto_type r9  = new_Rc_BTree_CStr_Route (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6354 */
                                                                            __auto_type r10  = push_List_Rc_BTree_CStr_Route (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6358 */
                                                                            __auto_type r11  = append_List_Rc_BTree_CStr_Route (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6367 */
                                                                              Rc_BTree_CStr_Route __ciciliC_6366 (Rc_BTree_CStr_Route __h_value ) {
                                                                                return clone_Rc_BTree_CStr_Route (__h_value );
                                                                              }
                                                                              __ciciliC_6366 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let6374 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn6378 */
                                                                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let6385 */
                                                        __auto_type left  = match6247 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn6389 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let6393 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6397 */
                                                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let6404 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn6408 */
                                      Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6415 */
                      // ----------
                      
                      ({ /* cicili#Progn6419 */
                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6426 */
              // ----------
              
              ({ /* cicili#Progn6430 */
                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_Route_Error_BTree_CStr_Route borrowRightLeaf (List_BTree_CStr_Route_pair_t left_child_items ) {
    return ({ /* cicili#Let6443 */
        __auto_type match6442  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
        typeof((((match6442 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let6448 */
          bool __h_case_result  = (true  &&  (((match6442 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6449 */
                (right_child_rc  =  (((match6442 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6452 */
              ({ /* cicili#Let6456 */
                __auto_type match6455  = get_Rc_BTree_CStr_Route (right_child_rc );
                typeof((((match6455 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let6461 */
                  bool __h_case_result  = (true  &&  (((match6455 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6462 */
                        (right_child  =  (((match6455 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6465 */
                      ({ /* cicili#Let6469 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        
                        ({ /* cicili#Let6473 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6474 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn6477 */
                              (((hasLen_List_BTree_CStr_Route_pair_t (right_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let6486 */
                                  __auto_type match6484  = min_BTree_CStr_Route (right_child );
                                  typeof((((match6484 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6491 */
                                    bool __h_case_result  = (true  &&  (((match6484 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6492 */
                                            (min  =  (((match6484 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6494 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6497 */
                                        ({ /* cicili#Let6501 */
                                          __auto_type match6500  = delete_BTree_CStr_Route (right_child , min_key , NULL );
                                          typeof((((match6500 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let6506 */
                                            bool __h_case_result  = (true  &&  (((match6500 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6507 */
                                                  (nchild  =  (((match6500 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6510 */
                                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , min , current ), ({ /* cicili#Let6518 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6520 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6524 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6533 */
                                                        Rc_BTree_CStr_Route __ciciliC_6532 (Rc_BTree_CStr_Route __h_value ) {
                                                          return clone_Rc_BTree_CStr_Route (__h_value );
                                                        }
                                                        __ciciliC_6532 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6540 */
                                                __auto_type left  = match6500 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn6544 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6548 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6552 */
                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (delete_List_BTree_CStr_Route_pair_t (items , current ), ({ /* cicili#Let6563 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6565 */
                                    __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6569 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6575 */
                                      Rc_BTree_CStr_Route __ciciliC_6574 (Rc_BTree_CStr_Route __h_value ) {
                                        return clone_Rc_BTree_CStr_Route (__h_value );
                                      }
                                      __ciciliC_6574 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6582 */
                                    __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6586 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6592 */
                                      Rc_BTree_CStr_Route __ciciliC_6591 (Rc_BTree_CStr_Route __h_value ) {
                                        return clone_Rc_BTree_CStr_Route (__h_value );
                                      }
                                      __ciciliC_6591 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6599 */
                                    __auto_type r5  = push_List_Rc_BTree_CStr_Route (new_Rc_BTree_CStr_Route (Leaf_BTree_CStr_Route (append_List_BTree_CStr_Route_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_CStr_Route (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let6610 */
                              // ----------
                              
                              ({ /* cicili#Progn6614 */
                                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6621 */
                      // ----------
                      
                      ({ /* cicili#Progn6625 */
                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6632 */
              // ----------
              
              ({ /* cicili#Progn6636 */
                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6643 */
      __auto_type result  = ({ /* cicili#Let6646 */
        __auto_type match6645  = nth_List_Rc_BTree_CStr_Route (index , children );
        typeof((((match6645 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        
        ({ /* cicili#Let6651 */
          bool __h_case_result  = (true  &&  (((match6645 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6652 */
                (left_child_rc  =  (((match6645 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6655 */
              ({ /* cicili#Let6659 */
                __auto_type match6658  = get_Rc_BTree_CStr_Route (left_child_rc );
                typeof((((match6658 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                
                ({ /* cicili#Let6664 */
                  bool __h_case_result  = (true  &&  (((match6658 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6665 */
                        (left_child  =  (((match6658 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6668 */
                      ({ /* cicili#Let6672 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let6676 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6677 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6679 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn6682 */
                              (((hasLen_List_BTree_CStr_Route_pair_t (left_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let6691 */
                                  __auto_type match6689  = max_BTree_CStr_Route (left_child );
                                  typeof((((match6689 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6696 */
                                    bool __h_case_result  = (true  &&  (((match6689 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6697 */
                                            (max  =  (((match6689 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6699 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6702 */
                                        ({ /* cicili#Let6706 */
                                          __auto_type match6705  = delete_BTree_CStr_Route (left_child , max_key , NULL );
                                          typeof((((match6705 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let6711 */
                                            bool __h_case_result  = (true  &&  (((match6705 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6712 */
                                                  (nchild  =  (((match6705 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6715 */
                                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , max , current ), ({ /* cicili#Let6723 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6725 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6729 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6738 */
                                                        Rc_BTree_CStr_Route __ciciliC_6737 (Rc_BTree_CStr_Route __h_value ) {
                                                          return clone_Rc_BTree_CStr_Route (__h_value );
                                                        }
                                                        __ciciliC_6737 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6745 */
                                                __auto_type left  = match6705 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn6749 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6753 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6757 */
                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let6764 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let6768 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6769 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6771 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn6774 */
                                    (((hasLen_List_BTree_CStr_Route_pair_t (left_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let6783 */
                                        __auto_type match6781  = max_BTree_CStr_Route (left_child );
                                        typeof((((match6781 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let6788 */
                                          bool __h_case_result  = (true  &&  (((match6781 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6789 */
                                                  (max  =  (((match6781 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6791 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn6794 */
                                              ({ /* cicili#Let6798 */
                                                __auto_type match6797  = delete_BTree_CStr_Route (left_child , max_key , NULL );
                                                typeof((((match6797 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let6803 */
                                                  bool __h_case_result  = (true  &&  (((match6797 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6804 */
                                                        (nchild  =  (((match6797 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6807 */
                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , max , current ), ({ /* cicili#Let6815 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6817 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6821 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6830 */
                                                              Rc_BTree_CStr_Route __ciciliC_6829 (Rc_BTree_CStr_Route __h_value ) {
                                                                return clone_Rc_BTree_CStr_Route (__h_value );
                                                              }
                                                              __ciciliC_6829 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let6837 */
                                                      __auto_type left  = match6797 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn6841 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6845 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6849 */
                                                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let6856 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let6860 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6861 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn6864 */
                                          (((hasLen_List_BTree_CStr_Route_pair_t (left_child_items , L_BTree_CStr_Route ) ==  L_BTree_CStr_Route  )) ? ({ /* cicili#Let6873 */
                                              __auto_type match6871  = max_BTree_CStr_Route (left_child );
                                              typeof((((match6871 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              
                                              ({ /* cicili#Let6878 */
                                                bool __h_case_result  = (true  &&  (((match6871 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6879 */
                                                        (max  =  (((match6871 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn6881 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn6884 */
                                                    ({ /* cicili#Let6888 */
                                                      __auto_type match6887  = delete_BTree_CStr_Route (left_child , max_key , NULL );
                                                      typeof((((match6887 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let6893 */
                                                        bool __h_case_result  = (true  &&  (((match6887 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6894 */
                                                              (nchild  =  (((match6887 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6897 */
                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (replace_List_BTree_CStr_Route_pair_t (items , max , current ), ({ /* cicili#Let6905 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6907 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6911 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn6920 */
                                                                    Rc_BTree_CStr_Route __ciciliC_6919 (Rc_BTree_CStr_Route __h_value ) {
                                                                      return clone_Rc_BTree_CStr_Route (__h_value );
                                                                    }
                                                                    __ciciliC_6919 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let6927 */
                                                            __auto_type left  = match6887 ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn6931 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let6935 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn6939 */
                                                      Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let6946 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn6950 */
                                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6957 */
                      // ----------
                      
                      ({ /* cicili#Progn6961 */
                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6968 */
              // ----------
              
              ({ /* cicili#Progn6972 */
                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("borrowRI 16"));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route deleteWithParent_BTree_CStr_Route (Maybe_BTree_CStr_Route wparent , int pitem_index , int pchild_index , BTree_CStr_Route tree , CStr skey , void (*callback) (BTree_CStr_Route_pair_t item )) {
  Either_BTree_CStr_Route_Error_BTree_CStr_Route deleteInternal (Maybe_BTree_CStr_Route tree , List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children , Maybe_List_BTree_CStr_Route_pair_t wleft , List_BTree_CStr_Route_pair_t current , int index ) {
    return ({ /* cicili#Let7000 */
        __auto_type result  = ({ /* cicili#Let7004 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          
          ({ /* cicili#Let7008 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7009 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn7011 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn7013 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn7016 */
                ({ /* cicili#Let7020 */
                  __auto_type match7019  = compareKey (skey , key );
                  // ----------
                  
                  ({ /* cicili#Let7024 */
                    bool __h_case_result  = (true  &&  ((match7019 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7026 */
                        ({ /* cicili#Let7030 */
                          __auto_type match7029  = nth_List_Rc_BTree_CStr_Route (index , children );
                          typeof((((match7029 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let7035 */
                            bool __h_case_result  = (true  &&  (((match7029 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7036 */
                                  (child  =  (((match7029 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7039 */
                                ({ /* cicili#Let7043 */
                                  __auto_type match7042  = get_Rc_BTree_CStr_Route (child );
                                  typeof((((match7042 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7048 */
                                    bool __h_case_result  = (true  &&  (((match7042 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7049 */
                                          (tr  =  (((match7042 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7052 */
                                        ({ /* cicili#Let7056 */
                                          // ----------
                                          
                                          ({ /* cicili#Let7060 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn7062 */
                                                ({ /* cicili#Let7066 */
                                                  __auto_type match7065  = deleteWithParent_BTree_CStr_Route (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match7065 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let7071 */
                                                    bool __h_case_result  = (true  &&  (((match7065 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7072 */
                                                          (nchild  =  (((match7065 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7075 */
                                                        ({ /* cicili#Let7079 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let7083 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7084 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn7086 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7089 */
                                                                ({ /* cicili#Let7093 */
                                                                  __auto_type match7092  = nth_List_Rc_BTree_CStr_Route ((index  -  1 ), children );
                                                                  typeof((((match7092 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let7098 */
                                                                    bool __h_case_result  = (true  &&  (((match7092 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7099 */
                                                                          (wleft  =  (((match7092 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7102 */
                                                                        ({ /* cicili#Let7105 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let7109 */
                                                                            __auto_type match7108  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match7108 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let7114 */
                                                                              bool __h_case_result  = (true  &&  (((match7108 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7115 */
                                                                                    (unboxed  =  (((match7108 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7118 */
                                                                                  ({ /* cicili#Let7122 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let7126 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7127 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7129 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7132 */
                                                                                          ({ /* cicili#Let7135 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7137 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7145 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let7149 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7150 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7152 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7155 */
                                                                                                ({ /* cicili#Let7158 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7160 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7168 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn7172 */
                                                                                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7179 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn7183 */
                                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7190 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn7194 */
                                                                          ({ /* cicili#Let7198 */
                                                                            __auto_type match7197  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                            typeof((((match7197 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let7203 */
                                                                              bool __h_case_result  = (true  &&  (((match7197 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7204 */
                                                                                    (wright  =  (((match7197 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7207 */
                                                                                  ({ /* cicili#Let7210 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let7214 */
                                                                                      __auto_type match7213  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match7213 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let7219 */
                                                                                        bool __h_case_result  = (true  &&  (((match7213 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7220 */
                                                                                              (unboxed  =  (((match7213 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7223 */
                                                                                            ({ /* cicili#Let7227 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let7231 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7232 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7234 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7237 */
                                                                                                    ({ /* cicili#Let7240 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7242 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7250 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let7254 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7255 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7257 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7260 */
                                                                                                          ({ /* cicili#Let7263 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7265 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7273 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn7277 */
                                                                                                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7284 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn7288 */
                                                                                              Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7295 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn7299 */
                                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let7306 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn7310 */
                                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let7318 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7320 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7324 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn7333 */
                                                                          Rc_BTree_CStr_Route __ciciliC_7332 (Rc_BTree_CStr_Route __h_value ) {
                                                                            return clone_Rc_BTree_CStr_Route (__h_value );
                                                                          }
                                                                          __ciciliC_7332 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let7340 */
                                                        __auto_type left  = match7065 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn7344 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let7348 */
                                                // ----------
                                                
                                                ({ /* cicili#Let7352 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7354 */
                                                      ({ /* cicili#Let7358 */
                                                        __auto_type match7357  = deleteWithParent_BTree_CStr_Route (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match7357 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let7363 */
                                                          bool __h_case_result  = (true  &&  (((match7357 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7364 */
                                                                (nchild  =  (((match7357 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn7367 */
                                                              ({ /* cicili#Let7371 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let7375 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7376 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn7378 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7381 */
                                                                      ({ /* cicili#Let7385 */
                                                                        __auto_type match7384  = nth_List_Rc_BTree_CStr_Route ((index  -  1 ), children );
                                                                        typeof((((match7384 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Let7390 */
                                                                          bool __h_case_result  = (true  &&  (((match7384 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7391 */
                                                                                (wleft  =  (((match7384 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7394 */
                                                                              ({ /* cicili#Let7397 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let7401 */
                                                                                  __auto_type match7400  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match7400 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let7406 */
                                                                                    bool __h_case_result  = (true  &&  (((match7400 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7407 */
                                                                                          (unboxed  =  (((match7400 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7410 */
                                                                                        ({ /* cicili#Let7414 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let7418 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7419 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7421 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7424 */
                                                                                                ({ /* cicili#Let7427 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7429 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7437 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Let7441 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7442 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn7444 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7447 */
                                                                                                      ({ /* cicili#Let7450 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7452 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let7460 */
                                                                                                      // ----------
                                                                                                      
                                                                                                      ({ /* cicili#Progn7464 */
                                                                                                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7471 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn7475 */
                                                                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let7482 */
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Progn7486 */
                                                                                ({ /* cicili#Let7490 */
                                                                                  __auto_type match7489  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                                  typeof((((match7489 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let7495 */
                                                                                    bool __h_case_result  = (true  &&  (((match7489 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7496 */
                                                                                          (wright  =  (((match7489 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7499 */
                                                                                        ({ /* cicili#Let7502 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let7506 */
                                                                                            __auto_type match7505  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match7505 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Let7511 */
                                                                                              bool __h_case_result  = (true  &&  (((match7505 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7512 */
                                                                                                    (unboxed  =  (((match7505 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7515 */
                                                                                                  ({ /* cicili#Let7519 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let7523 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7524 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7526 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7529 */
                                                                                                          ({ /* cicili#Let7532 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7534 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7542 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Let7546 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7547 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn7549 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7552 */
                                                                                                                ({ /* cicili#Let7555 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7557 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let7565 */
                                                                                                                // ----------
                                                                                                                
                                                                                                                ({ /* cicili#Progn7569 */
                                                                                                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let7576 */
                                                                                                  // ----------
                                                                                                  
                                                                                                  ({ /* cicili#Progn7580 */
                                                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7587 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn7591 */
                                                                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let7598 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn7602 */
                                                                        Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let7610 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7612 */
                                                                              __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7616 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn7625 */
                                                                                Rc_BTree_CStr_Route __ciciliC_7624 (Rc_BTree_CStr_Route __h_value ) {
                                                                                  return clone_Rc_BTree_CStr_Route (__h_value );
                                                                                }
                                                                                __ciciliC_7624 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7632 */
                                                              __auto_type left  = match7357 ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn7636 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let7640 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn7644 */
                                                        ({ /* cicili#Let7648 */
                                                          __auto_type match7647  = deleteWithParent_BTree_CStr_Route (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match7647 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let7653 */
                                                            bool __h_case_result  = (true  &&  (((match7647 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7654 */
                                                                  (nchild  =  (((match7647 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7657 */
                                                                borrowLeaf_BTree_CStr_Route (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let7662 */
                                                                __auto_type left  = match7647 ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn7666 */
                                                                  left ;
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7670 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7674 */
                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7681 */
                                // ----------
                                
                                ({ /* cicili#Progn7685 */
                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7692 */
                        // ----------
                        
                        ({ /* cicili#Let7696 */
                          bool __h_case_result  = (true  &&  ((match7019 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn7698 */
                              ({ /* cicili#Let7701 */
                                __auto_type result  = borrowInternal_BTree_CStr_Route (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let7706 */
                                  // ----------
                                  
                                  ({ /* cicili#Let7710 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block7713 */
                                        if (callback )
                                          { /* cicili#Block7717 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let7721 */
                              // ----------
                              
                              ({ /* cicili#Progn7725 */
                                deleteInternal (tree , items , children , Just_List_BTree_CStr_Route_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7730 */
                // ----------
                
                ({ /* cicili#Progn7734 */
                  ({ /* cicili#Let7738 */
                    __auto_type match7737  = nth_List_Rc_BTree_CStr_Route (index , children );
                    typeof((((match7737 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    
                    ({ /* cicili#Let7743 */
                      bool __h_case_result  = (true  &&  (((match7737 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7744 */
                            (child  =  (((match7737 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn7747 */
                          ({ /* cicili#Let7751 */
                            __auto_type match7750  = get_Rc_BTree_CStr_Route (child );
                            typeof((((match7750 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let7756 */
                              bool __h_case_result  = (true  &&  (((match7750 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7757 */
                                    (tr  =  (((match7750 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn7760 */
                                  ({ /* cicili#Let7764 */
                                    // ----------
                                    
                                    ({ /* cicili#Let7768 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7770 */
                                          ({ /* cicili#Let7774 */
                                            __auto_type match7773  = deleteWithParent_BTree_CStr_Route (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match7773 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            
                                            ({ /* cicili#Let7779 */
                                              bool __h_case_result  = (true  &&  (((match7773 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7780 */
                                                    (nchild  =  (((match7773 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7783 */
                                                  ({ /* cicili#Let7787 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let7791 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7792 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn7794 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7797 */
                                                          ({ /* cicili#Let7801 */
                                                            __auto_type match7800  = nth_List_Rc_BTree_CStr_Route ((index  -  1 ), children );
                                                            typeof((((match7800 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let7806 */
                                                              bool __h_case_result  = (true  &&  (((match7800 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7807 */
                                                                    (wleft  =  (((match7800 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7810 */
                                                                  ({ /* cicili#Let7813 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let7817 */
                                                                      __auto_type match7816  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match7816 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let7822 */
                                                                        bool __h_case_result  = (true  &&  (((match7816 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7823 */
                                                                              (unboxed  =  (((match7816 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7826 */
                                                                            ({ /* cicili#Let7830 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Let7834 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7835 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn7837 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7840 */
                                                                                    ({ /* cicili#Let7843 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7845 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7853 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let7857 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7858 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7860 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7863 */
                                                                                          ({ /* cicili#Let7866 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7868 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7876 */
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Progn7880 */
                                                                                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7887 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn7891 */
                                                                              Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let7898 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn7902 */
                                                                    ({ /* cicili#Let7906 */
                                                                      __auto_type match7905  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                      typeof((((match7905 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let7911 */
                                                                        bool __h_case_result  = (true  &&  (((match7905 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7912 */
                                                                              (wright  =  (((match7905 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7915 */
                                                                            ({ /* cicili#Let7918 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let7922 */
                                                                                __auto_type match7921  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match7921 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Let7927 */
                                                                                  bool __h_case_result  = (true  &&  (((match7921 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7928 */
                                                                                        (unboxed  =  (((match7921 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7931 */
                                                                                      ({ /* cicili#Let7935 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Let7939 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7940 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn7942 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7945 */
                                                                                              ({ /* cicili#Let7948 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7950 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let7958 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let7962 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7963 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7965 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7968 */
                                                                                                    ({ /* cicili#Let7971 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7973 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7981 */
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Progn7985 */
                                                                                                      Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7992 */
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Progn7996 */
                                                                                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let8003 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn8007 */
                                                                              Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8014 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn8018 */
                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let8026 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8028 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8032 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn8041 */
                                                                    Rc_BTree_CStr_Route __ciciliC_8040 (Rc_BTree_CStr_Route __h_value ) {
                                                                      return clone_Rc_BTree_CStr_Route (__h_value );
                                                                    }
                                                                    __ciciliC_8040 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8048 */
                                                  __auto_type left  = match7773 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn8052 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let8056 */
                                          // ----------
                                          
                                          ({ /* cicili#Let8060 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8062 */
                                                ({ /* cicili#Let8066 */
                                                  __auto_type match8065  = deleteWithParent_BTree_CStr_Route (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match8065 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let8071 */
                                                    bool __h_case_result  = (true  &&  (((match8065 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8072 */
                                                          (nchild  =  (((match8065 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8075 */
                                                        ({ /* cicili#Let8079 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let8083 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8084 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn8086 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8089 */
                                                                ({ /* cicili#Let8093 */
                                                                  __auto_type match8092  = nth_List_Rc_BTree_CStr_Route ((index  -  1 ), children );
                                                                  typeof((((match8092 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let8098 */
                                                                    bool __h_case_result  = (true  &&  (((match8092 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8099 */
                                                                          (wleft  =  (((match8092 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8102 */
                                                                        ({ /* cicili#Let8105 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let8109 */
                                                                            __auto_type match8108  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match8108 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let8114 */
                                                                              bool __h_case_result  = (true  &&  (((match8108 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8115 */
                                                                                    (unboxed  =  (((match8108 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8118 */
                                                                                  ({ /* cicili#Let8122 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let8126 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8127 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn8129 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8132 */
                                                                                          ({ /* cicili#Let8135 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8137 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let8145 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let8149 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8150 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn8152 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn8155 */
                                                                                                ({ /* cicili#Let8158 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8160 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let8168 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn8172 */
                                                                                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let8179 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn8183 */
                                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let8190 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn8194 */
                                                                          ({ /* cicili#Let8198 */
                                                                            __auto_type match8197  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                            typeof((((match8197 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let8203 */
                                                                              bool __h_case_result  = (true  &&  (((match8197 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8204 */
                                                                                    (wright  =  (((match8197 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8207 */
                                                                                  ({ /* cicili#Let8210 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let8214 */
                                                                                      __auto_type match8213  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match8213 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let8219 */
                                                                                        bool __h_case_result  = (true  &&  (((match8213 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8220 */
                                                                                              (unboxed  =  (((match8213 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8223 */
                                                                                            ({ /* cicili#Let8227 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let8231 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8232 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn8234 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8237 */
                                                                                                    ({ /* cicili#Let8240 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8242 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let8250 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let8254 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8255 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn8257 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8260 */
                                                                                                          ({ /* cicili#Let8263 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8265 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (mergeUp_BTree_CStr_Route (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let8273 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn8277 */
                                                                                                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8284 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn8288 */
                                                                                              Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let8295 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn8299 */
                                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let8306 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn8310 */
                                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let8318 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8320 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_Route (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8324 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_Route (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn8333 */
                                                                          Rc_BTree_CStr_Route __ciciliC_8332 (Rc_BTree_CStr_Route __h_value ) {
                                                                            return clone_Rc_BTree_CStr_Route (__h_value );
                                                                          }
                                                                          __ciciliC_8332 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8340 */
                                                        __auto_type left  = match8065 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8344 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let8348 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn8352 */
                                                  ({ /* cicili#Let8356 */
                                                    __auto_type match8355  = deleteWithParent_BTree_CStr_Route (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match8355 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8361 */
                                                      bool __h_case_result  = (true  &&  (((match8355 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8362 */
                                                            (nchild  =  (((match8355 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8365 */
                                                          borrowLeaf_BTree_CStr_Route (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let8370 */
                                                          __auto_type left  = match8355 ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn8374 */
                                                            left ;
                                                          });
                                                        }));
                                                    });
                                                  });
                                                });
                                              }));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let8378 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn8382 */
                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let8389 */
                          // ----------
                          
                          ({ /* cicili#Progn8393 */
                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_NOT_FOUND (skey ));
                          });
                        }));
                    });
                  });
                });
              }));
          });
        });
        // ----------
        ({ /* cicili#Let8402 */
          __auto_type rs  = ({ /* cicili#Let8405 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            
            ({ /* cicili#Let8409 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8410 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn8413 */
                  ({ /* cicili#Let8417 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    
                    ({ /* cicili#Let8421 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8422 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn8424 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn8427 */
                          ({ /* cicili#Let8430 */
                            __auto_type items_len  = hasLen_List_BTree_CStr_Route_pair_t (items , (L_BTree_CStr_Route  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_CStr_Route  -  1 ) )) ? result  : ({ /* cicili#Let8438 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                
                                ({ /* cicili#Let8442 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8443 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn8446 */
                                      ({ /* cicili#Let8450 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8454 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8455 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8458 */
                                              ({ /* cicili#Let8462 */
                                                __auto_type match8461  = nth_List_BTree_CStr_Route_pair_t (pitem_index , pitems );
                                                typeof((((match8461 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8467 */
                                                  bool __h_case_result  = (true  &&  (((match8461 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8468 */
                                                        (bitem  =  (((match8461 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8471 */
                                                      ({ /* cicili#Let8474 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8476 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_CStr_Route_Error_BTree_CStr_Route (Branch_BTree_CStr_Route (insertAt_List_BTree_CStr_Route_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn8489 */
                                                            Rc_BTree_CStr_Route __ciciliC_8488 (Rc_BTree_CStr_Route __h_value ) {
                                                              return clone_Rc_BTree_CStr_Route (__h_value );
                                                            }
                                                            __ciciliC_8488 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let8496 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8500 */
                                                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8507 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8511 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8512 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8515 */
                                                    ({ /* cicili#Let8519 */
                                                      __auto_type match8518  = nth_List_BTree_CStr_Route_pair_t (pitem_index , pitems );
                                                      typeof((((match8518 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8524 */
                                                        bool __h_case_result  = (true  &&  (((match8518 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8525 */
                                                              (bitem  =  (((match8518 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8528 */
                                                            ({ /* cicili#Let8531 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8533 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_Route_Error_BTree_CStr_Route (Branch_BTree_CStr_Route (insertAt_List_BTree_CStr_Route_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn8546 */
                                                                  Rc_BTree_CStr_Route __ciciliC_8545 (Rc_BTree_CStr_Route __h_value ) {
                                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                                  }
                                                                  __ciciliC_8545 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8553 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8557 */
                                                              Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8564 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn8568 */
                                                      Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8575 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn8579 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let8584 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            
                                            ({ /* cicili#Let8588 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8589 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn8592 */
                                                  ({ /* cicili#Let8595 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_CStr_Route (head );
                                                    // ----------
                                                    ({ /* cicili#Let8600 */
                                                      __auto_type match8599  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match8599 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8605 */
                                                        bool __h_case_result  = (true  &&  (((match8599 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8606 */
                                                              (unboxed  =  (((match8599 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8609 */
                                                            ({ /* cicili#Let8613 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn8617 */
                                                                ({ /* cicili#Let8620 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8622 */
                                                                    __auto_type ntr  = ntr ;
                                                                    // ----------
                                                                    ((void)(ntr -> __h_table -> freeClass ));
                                                                    ntr ;
                                                                  });
                                                                  // ----------
                                                                  Right_BTree_CStr_Route_Error_BTree_CStr_Route (chtr );
                                                                });
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let8629 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8633 */
                                                              Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8640 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn8644 */
                                                    result ;
                                                  });
                                                }));
                                            });
                                          }) : result );
                                      });
                                    }));
                                });
                              }));
                          });
                        }) : ({ /* cicili#Let8648 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          
                          ({ /* cicili#Let8652 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8653 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8655 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn8658 */
                                ({ /* cicili#Let8661 */
                                  __auto_type items_len  = hasLen_List_BTree_CStr_Route_pair_t (items , (L_BTree_CStr_Route  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_CStr_Route  -  1 ) )) ? result  : ({ /* cicili#Let8669 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      
                                      ({ /* cicili#Let8673 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8674 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn8677 */
                                            ({ /* cicili#Let8681 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8685 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8686 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8689 */
                                                    ({ /* cicili#Let8693 */
                                                      __auto_type match8692  = nth_List_BTree_CStr_Route_pair_t (pitem_index , pitems );
                                                      typeof((((match8692 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8698 */
                                                        bool __h_case_result  = (true  &&  (((match8692 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8699 */
                                                              (bitem  =  (((match8692 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8702 */
                                                            ({ /* cicili#Let8705 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8707 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_Route_Error_BTree_CStr_Route (Branch_BTree_CStr_Route (insertAt_List_BTree_CStr_Route_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn8720 */
                                                                  Rc_BTree_CStr_Route __ciciliC_8719 (Rc_BTree_CStr_Route __h_value ) {
                                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                                  }
                                                                  __ciciliC_8719 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8727 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8731 */
                                                              Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8738 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8742 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8743 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8746 */
                                                          ({ /* cicili#Let8750 */
                                                            __auto_type match8749  = nth_List_BTree_CStr_Route_pair_t (pitem_index , pitems );
                                                            typeof((((match8749 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8755 */
                                                              bool __h_case_result  = (true  &&  (((match8749 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8756 */
                                                                    (bitem  =  (((match8749 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8759 */
                                                                  ({ /* cicili#Let8762 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8764 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_Route_Error_BTree_CStr_Route (Branch_BTree_CStr_Route (insertAt_List_BTree_CStr_Route_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn8777 */
                                                                        Rc_BTree_CStr_Route __ciciliC_8776 (Rc_BTree_CStr_Route __h_value ) {
                                                                          return clone_Rc_BTree_CStr_Route (__h_value );
                                                                        }
                                                                        __ciciliC_8776 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let8784 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8788 */
                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8795 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn8799 */
                                                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let8806 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn8810 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let8815 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let8819 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8820 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8823 */
                                                        ({ /* cicili#Let8826 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_CStr_Route (head );
                                                          // ----------
                                                          ({ /* cicili#Let8831 */
                                                            __auto_type match8830  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match8830 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8836 */
                                                              bool __h_case_result  = (true  &&  (((match8830 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8837 */
                                                                    (unboxed  =  (((match8830 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8840 */
                                                                  ({ /* cicili#Let8844 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    
                                                                    ({ /* cicili#Progn8848 */
                                                                      ({ /* cicili#Let8851 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8853 */
                                                                          __auto_type ntr  = ntr ;
                                                                          // ----------
                                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                                          ntr ;
                                                                        });
                                                                        // ----------
                                                                        Right_BTree_CStr_Route_Error_BTree_CStr_Route (chtr );
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8860 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8864 */
                                                                    Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8871 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8875 */
                                                          result ;
                                                        });
                                                      }));
                                                  });
                                                }) : result );
                                            });
                                          }));
                                      });
                                    }));
                                });
                              }) : ({ /* cicili#Let8879 */
                                // ----------
                                
                                ({ /* cicili#Progn8883 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let8887 */
                  // ----------
                  
                  ({ /* cicili#Progn8891 */
                    result ;
                  });
                }));
            });
          });
          // ----------
          rs ;
        });
      });
  }
  Either_BTree_CStr_Route_Error_BTree_CStr_Route deleteLeaf (List_BTree_CStr_Route_pair_t items , List_BTree_CStr_Route_pair_t current , int index ) {
    return ({ /* cicili#Let8908 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let8912 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8913 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn8915 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn8917 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8920 */
              ({ /* cicili#Let8924 */
                __auto_type match8923  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let8928 */
                  bool __h_case_result  = (true  &&  ((match8923 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8930 */
                      Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let8937 */
                      // ----------
                      
                      ({ /* cicili#Let8941 */
                        bool __h_case_result  = (true  &&  ((match8923 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn8943 */
                            ({ /* cicili#Let8946 */
                              __auto_type result  = Right_BTree_CStr_Route_Error_BTree_CStr_Route (Leaf_BTree_CStr_Route (delete_List_BTree_CStr_Route_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let8955 */
                                // ----------
                                
                                ({ /* cicili#Let8959 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block8962 */
                                      if (callback )
                                        { /* cicili#Block8966 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let8970 */
                            // ----------
                            
                            ({ /* cicili#Progn8974 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8978 */
              // ----------
              
              ({ /* cicili#Progn8982 */
                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8990 */
      __auto_type result  = ({ /* cicili#Let8993 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        
        ({ /* cicili#Let8997 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8998 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9000 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9003 */
              deleteInternal (Just_BTree_CStr_Route (tree ), items , children , Nothing_List_BTree_CStr_Route_pair_t (), items , 0);
            }) : ({ /* cicili#Let9009 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              
              ({ /* cicili#Let9013 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9014 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn9016 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn9019 */
                    deleteInternal (Just_BTree_CStr_Route (tree ), items , children , Nothing_List_BTree_CStr_Route_pair_t (), items , 0);
                  }) : ({ /* cicili#Let9025 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    
                    ({ /* cicili#Let9029 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9030 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn9033 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let9037 */
                          // ----------
                          
                          ({ /* cicili#Progn9041 */
                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_INVALID_OBJECT ());
                          });
                        }));
                    });
                  }));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
#ifndef __BTree_CStr_Route__H_IMPL__
#define __BTree_CStr_Route__H_IMPL__
Either_BTree_CStr_Route_Error_BTree_CStr_Route fromLists_BTree_CStr_Route (List_CStr keys , List_Route values ) {
  return ({ /* cicili#Let9064 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      
      ({ /* cicili#Let9068 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9069 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9071 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9074 */
            ({ /* cicili#Let9078 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              
              ({ /* cicili#Let9082 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9083 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn9085 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn9088 */
                    ({ /* cicili#Let9091 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9093 */
                        __auto_type etree  = fromLists_BTree_CStr_Route (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let9099 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        
                        ({ /* cicili#Let9103 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9104 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9107 */
                              ({ /* cicili#Let9110 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9112 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_CStr_Route (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let9118 */
                              // ----------
                              
                              ({ /* cicili#Progn9122 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let9126 */
                    // ----------
                    
                    ({ /* cicili#Progn9130 */
                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (Leaf_BTree_CStr_Route (Nil_BTree_CStr_Route_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let9138 */
            // ----------
            
            ({ /* cicili#Progn9142 */
              Right_BTree_CStr_Route_Error_BTree_CStr_Route (Leaf_BTree_CStr_Route (Nil_BTree_CStr_Route_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route pure_BTree_CStr_Route (CStr keys [], Route values [], int len ) {
  return ({ /* cicili#Let9153 */
      BTree_CStr_Route tree  = Leaf_BTree_CStr_Route (Nil_BTree_CStr_Route_pair_t ());
      // ----------
      for (int i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let9161 */
            __auto_type match9160  = insert_BTree_CStr_Route (tree , keys [i ], values [i ]);
            typeof((((match9160 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            
            ({ /* cicili#Let9166 */
              bool __h_case_result  = (true  &&  (((match9160 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9167 */
                    (new_tree  =  (((match9160 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block9171 */
                  { /* cicili#Block9173 */
                    free_BTree_CStr_Route ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let9179 */
                  __auto_type left  = match9160 ;
                  // ----------
                  
                  { /* cicili#Block9183 */
                    return left ;
                  }
                }
            });
          }
      }
      Right_BTree_CStr_Route_Error_BTree_CStr_Route (tree );
    });
}
int show_BTree_CStr_Route (CFile file , BTree_CStr_Route tree ) {
  auto int showTree (int indent , BTree_CStr_Route tree );
  int showChildren (int indent , List_Rc_BTree_CStr_Route children ) {
    return ({ /* cicili#Let9193 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9197 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9198 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9200 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9203 */
              (({ /* cicili#Let9207 */
                  // ----------
                  
                  ({ /* cicili#Let9211 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9213 */
                        ({ /* cicili#Let9217 */
                          __auto_type match9216  = get_Rc_BTree_CStr_Route (head );
                          typeof((((match9216 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let9222 */
                            bool __h_case_result  = (true  &&  (((match9216 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9223 */
                                  (tr  =  (((match9216 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9226 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let9230 */
                                // ----------
                                
                                ({ /* cicili#Progn9234 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let9238 */
                        // ----------
                        
                        ({ /* cicili#Progn9242 */
                          ({ /* cicili#Let9246 */
                            __auto_type match9245  = get_Rc_BTree_CStr_Route (head );
                            typeof((((match9245 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let9251 */
                              bool __h_case_result  = (true  &&  (((match9245 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9252 */
                                    (tr  =  (((match9245 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9255 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let9259 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn9263 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let9267 */
              // ----------
              
              ({ /* cicili#Progn9271 */
                0;
              });
            }));
        });
      });
  }
  int showTree (int indent , BTree_CStr_Route tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let9277 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let9281 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9282 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9284 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn9287 */
                (show_List_BTree_CStr_Route_pair_t (file , items ) +  ({ /* cicili#Let9292 */
                    // ----------
                    
                    ({ /* cicili#Let9296 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn9298 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let9302 */
                          // ----------
                          
                          ({ /* cicili#Progn9306 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let9310 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                
                ({ /* cicili#Let9314 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9315 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn9317 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9320 */
                      (show_List_BTree_CStr_Route_pair_t (file , items ) +  ({ /* cicili#Let9325 */
                          // ----------
                          
                          ({ /* cicili#Let9329 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9331 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let9335 */
                                // ----------
                                
                                ({ /* cicili#Progn9339 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let9343 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      
                      ({ /* cicili#Let9347 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9348 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn9351 */
                            show_List_BTree_CStr_Route_pair_t (file , items );
                          }) : ({ /* cicili#Let9356 */
                            // ----------
                            
                            ({ /* cicili#Progn9360 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              }));
          });
        }) );
  }
  return (showTree (1, tree ) +  fprintf (file , "\n") );
}
void traverse_BTree_CStr_Route (BTree_CStr_Route tree , void (*callback) (BTree_CStr_Route_pair_t item , Bool hasNext )) {
  auto void traverseLeaf (List_BTree_CStr_Route_pair_t current , Bool hasNextLeaf );
  void traverseInternal (List_BTree_CStr_Route_pair_t currentItem , List_Rc_BTree_CStr_Route currentChild ) {
    { /* cicili#Let9369 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      
      ({ /* cicili#Let9373 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9374 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9376 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9380 */
            { /* cicili#Let9384 */
              __auto_type match9383  = get_Rc_BTree_CStr_Route (wheadC );
              typeof((((match9383 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              
              ({ /* cicili#Let9389 */
                bool __h_case_result  = (true  &&  (((match9383 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9390 */
                      (headC  =  (((match9383 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block9394 */
                    { /* cicili#Let9398 */
                      // ----------
                      
                      ({ /* cicili#Let9402 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block9405 */
                            { /* cicili#Block9407 */
                              { /* cicili#Let9411 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                
                                ({ /* cicili#Let9415 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9416 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9418 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block9422 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let9427 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      
                                      ({ /* cicili#Let9431 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9432 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn9434 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block9438 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let9443 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9447 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9448 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block9452 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let9456 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                
                                ({ /* cicili#Let9460 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9461 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9463 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block9467 */
                                      { /* cicili#Block9469 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let9474 */
                            // ----------
                            
                            { /* cicili#Block9478 */
                              { /* cicili#Block9480 */
                                { /* cicili#Let9484 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9488 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9489 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9491 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9495 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let9500 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        
                                        ({ /* cicili#Let9504 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9505 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn9507 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block9511 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let9516 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              
                                              ({ /* cicili#Let9520 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9521 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                if (__h_case_result )
                                                  { /* cicili#Block9525 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let9529 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9533 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9534 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9536 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9540 */
                                        { /* cicili#Block9542 */
                                          callback (headI , False ());
                                          traverseInternal (tailI , tailC );
                                        }
                                      }
                                  });
                                }
                              }
                            }
                          }
                      });
                    }
                  }
              });
            }
          }
      });
    }
  }
  void traverseLeaf (List_BTree_CStr_Route_pair_t current , Bool hasNextLeaf ) {
    { /* cicili#Let9549 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9553 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9554 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9556 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9560 */
            { /* cicili#Block9562 */
              callback (head , ({ /* cicili#Let9566 */
                  // ----------
                  
                  ({ /* cicili#Let9570 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9572 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let9576 */
                        // ----------
                        
                        ({ /* cicili#Progn9580 */
                          ({ /* cicili#Let9584 */
                            // ----------
                            
                            ({ /* cicili#Let9588 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9590 */
                                  True ();
                                }) : ({ /* cicili#Let9594 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn9598 */
                                    False ();
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }));
              traverseLeaf (tail , hasNextLeaf );
            }
          }
      });
    }
  }
  { /* cicili#Let9603 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    
    ({ /* cicili#Let9607 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9608 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn9610 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block9614 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let9619 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let9623 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9624 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9626 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block9630 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let9635 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                
                ({ /* cicili#Let9639 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9640 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block9644 */
                      traverseLeaf (items , False ());
                    }
                });
              }
          });
        }
    });
  }
}
Maybe_BTree_CStr_Route_pair_t max_BTree_CStr_Route (BTree_CStr_Route tree ) {
  auto Maybe_BTree_CStr_Route_pair_t maxLeaf (List_BTree_CStr_Route_pair_t current );
  Maybe_BTree_CStr_Route_pair_t maxInternal (List_Rc_BTree_CStr_Route current ) {
    return ({ /* cicili#Let9660 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9664 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9665 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9667 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9670 */
              ({ /* cicili#Let9674 */
                // ----------
                
                ({ /* cicili#Let9678 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9680 */
                      ({ /* cicili#Let9684 */
                        __auto_type match9683  = get_Rc_BTree_CStr_Route (head );
                        typeof((((match9683 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let9689 */
                          bool __h_case_result  = (true  &&  (((match9683 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9690 */
                                (child  =  (((match9683 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9693 */
                              ({ /* cicili#Let9697 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                
                                ({ /* cicili#Let9701 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9702 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn9705 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let9709 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      
                                      ({ /* cicili#Let9713 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9714 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn9717 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let9721 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9725 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9726 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn9729 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let9733 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn9737 */
                                                    Nothing_BTree_CStr_Route_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9742 */
                              // ----------
                              
                              ({ /* cicili#Progn9746 */
                                Nothing_BTree_CStr_Route_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9751 */
                      // ----------
                      
                      ({ /* cicili#Progn9755 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9759 */
              // ----------
              
              ({ /* cicili#Progn9763 */
                Nothing_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_Route_pair_t maxLeaf (List_BTree_CStr_Route_pair_t current ) {
    return ({ /* cicili#Let9771 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9775 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9776 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9778 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9781 */
              ({ /* cicili#Let9785 */
                // ----------
                
                ({ /* cicili#Let9789 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9791 */
                      Just_BTree_CStr_Route_pair_t (head );
                    }) : ({ /* cicili#Let9796 */
                      // ----------
                      
                      ({ /* cicili#Progn9800 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9804 */
              // ----------
              
              ({ /* cicili#Progn9808 */
                Nothing_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9814 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let9818 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9819 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9822 */
            maxInternal (children );
          }) : ({ /* cicili#Let9826 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let9830 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9831 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn9834 */
                  maxInternal (children );
                }) : ({ /* cicili#Let9838 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let9842 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9843 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9846 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let9850 */
                        // ----------
                        
                        ({ /* cicili#Progn9854 */
                          Nothing_BTree_CStr_Route_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Maybe_BTree_CStr_Route_pair_t min_BTree_CStr_Route (BTree_CStr_Route tree ) {
  auto Maybe_BTree_CStr_Route_pair_t minLeaf (List_BTree_CStr_Route_pair_t first );
  Maybe_BTree_CStr_Route_pair_t minInternal (List_Rc_BTree_CStr_Route first ) {
    return ({ /* cicili#Let9869 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let9873 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9874 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9877 */
              ({ /* cicili#Let9881 */
                __auto_type match9880  = get_Rc_BTree_CStr_Route (head );
                typeof((((match9880 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                
                ({ /* cicili#Let9886 */
                  bool __h_case_result  = (true  &&  (((match9880 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9887 */
                        (child  =  (((match9880 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9890 */
                      ({ /* cicili#Let9894 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        
                        ({ /* cicili#Let9898 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9899 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9902 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let9906 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              
                              ({ /* cicili#Let9910 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9911 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn9914 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let9918 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let9922 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9923 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn9926 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let9930 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn9934 */
                                            Nothing_BTree_CStr_Route_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9939 */
                      // ----------
                      
                      ({ /* cicili#Progn9943 */
                        Nothing_BTree_CStr_Route_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9948 */
              // ----------
              
              ({ /* cicili#Progn9952 */
                Nothing_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_Route_pair_t minLeaf (List_BTree_CStr_Route_pair_t first ) {
    return ({ /* cicili#Let9960 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let9964 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9965 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9968 */
              Just_BTree_CStr_Route_pair_t (head );
            }) : ({ /* cicili#Let9973 */
              // ----------
              
              ({ /* cicili#Progn9977 */
                Nothing_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9983 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let9987 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9988 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9991 */
            minInternal (children );
          }) : ({ /* cicili#Let9995 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let9999 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10000 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10003 */
                  minInternal (children );
                }) : ({ /* cicili#Let10007 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let10011 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10012 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10015 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let10019 */
                        // ----------
                        
                        ({ /* cicili#Progn10023 */
                          Nothing_BTree_CStr_Route_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route delete_BTree_CStr_Route (BTree_CStr_Route tree , CStr skey , void (*callback) (BTree_CStr_Route_pair_t item )) {
  return deleteWithParent_BTree_CStr_Route (Nothing_BTree_CStr_Route (), 0, 0, tree , skey , callback );
}
Maybe_BTree_CStr_Route_pair_t search_BTree_CStr_Route (BTree_CStr_Route tree , CStr skey ) {
  Maybe_BTree_CStr_Route_pair_t searchInternal (List_Rc_BTree_CStr_Route children , List_BTree_CStr_Route_pair_t current , int index ) {
    return ({ /* cicili#Let10041 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10045 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10046 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10048 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10050 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10053 */
              ({ /* cicili#Let10057 */
                __auto_type match10056  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10061 */
                  bool __h_case_result  = (true  &&  ((match10056 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10063 */
                      ({ /* cicili#Let10067 */
                        __auto_type match10066  = nth_List_Rc_BTree_CStr_Route (index , children );
                        typeof((((match10066 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        
                        ({ /* cicili#Let10072 */
                          bool __h_case_result  = (true  &&  (((match10066 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10073 */
                                (node  =  (((match10066 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn10076 */
                              ({ /* cicili#Let10080 */
                                __auto_type match10079  = get_Rc_BTree_CStr_Route (node );
                                typeof((((match10079 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let10085 */
                                  bool __h_case_result  = (true  &&  (((match10079 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10086 */
                                        (tr  =  (((match10079 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10089 */
                                      search_BTree_CStr_Route (tr , skey );
                                    }) : ({ /* cicili#Let10094 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10098 */
                                        Nothing_BTree_CStr_Route_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let10103 */
                              // ----------
                              
                              ({ /* cicili#Progn10107 */
                                Nothing_BTree_CStr_Route_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10112 */
                      // ----------
                      
                      ({ /* cicili#Let10116 */
                        bool __h_case_result  = (true  &&  ((match10056 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10118 */
                            Just_BTree_CStr_Route_pair_t (head );
                          }) : ({ /* cicili#Let10123 */
                            // ----------
                            
                            ({ /* cicili#Progn10127 */
                              ({ /* cicili#Let10131 */
                                // ----------
                                
                                ({ /* cicili#Let10135 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10137 */
                                      ({ /* cicili#Let10141 */
                                        __auto_type match10140  = nth_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                        typeof((((match10140 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        
                                        ({ /* cicili#Let10146 */
                                          bool __h_case_result  = (true  &&  (((match10140 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10147 */
                                                (node  =  (((match10140 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn10150 */
                                              ({ /* cicili#Let10154 */
                                                __auto_type match10153  = get_Rc_BTree_CStr_Route (node );
                                                typeof((((match10153 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                
                                                ({ /* cicili#Let10159 */
                                                  bool __h_case_result  = (true  &&  (((match10153 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10160 */
                                                        (tr  =  (((match10153 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10163 */
                                                      search_BTree_CStr_Route (tr , skey );
                                                    }) : ({ /* cicili#Let10168 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn10172 */
                                                        Nothing_BTree_CStr_Route_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10177 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn10181 */
                                                Nothing_BTree_CStr_Route_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10186 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10190 */
                                        searchInternal (children , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10194 */
              // ----------
              
              ({ /* cicili#Progn10198 */
                Nothing_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_Route_pair_t searchLeaf (List_BTree_CStr_Route_pair_t current , int index ) {
    return ({ /* cicili#Let10208 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10212 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10213 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10215 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10217 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10220 */
              ({ /* cicili#Let10224 */
                __auto_type match10223  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10228 */
                  bool __h_case_result  = (true  &&  ((match10223 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10230 */
                      Just_BTree_CStr_Route_pair_t (head );
                    }) : ({ /* cicili#Let10235 */
                      // ----------
                      
                      ({ /* cicili#Progn10239 */
                        ({ /* cicili#Let10243 */
                          // ----------
                          
                          ({ /* cicili#Let10247 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10249 */
                                Nothing_BTree_CStr_Route_pair_t ();
                              }) : ({ /* cicili#Let10254 */
                                // ----------
                                
                                ({ /* cicili#Progn10258 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10262 */
              // ----------
              
              ({ /* cicili#Progn10266 */
                Nothing_BTree_CStr_Route_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10272 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let10276 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10277 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10279 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10282 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let10286 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let10290 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10291 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10293 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10296 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let10300 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let10304 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10305 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10308 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let10312 */
                        // ----------
                        
                        ({ /* cicili#Progn10316 */
                          Nothing_BTree_CStr_Route_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_CStr_Route_Error_BTree_CStr_Route insert_BTree_CStr_Route (BTree_CStr_Route tree , CStr skey , Route svalue ) {
  if (3 <  3 )
    { /* cicili#Block10328 */
      return Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_INVALID_ORDER (3));
    }
  Either_BTree_CStr_Route_Error_BTree_CStr_Route insertInternal (List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children , List_BTree_CStr_Route_pair_t current , int index ) {
    return ({ /* cicili#Let10340 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10344 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10345 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10347 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10349 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10352 */
              ({ /* cicili#Let10356 */
                __auto_type match10355  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10360 */
                  bool __h_case_result  = (true  &&  ((match10355 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10362 */
                      ({ /* cicili#Let10366 */
                        __auto_type match10365  = nth_List_Rc_BTree_CStr_Route (index , children );
                        typeof((((match10365 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let10371 */
                          bool __h_case_result  = (true  &&  (((match10365 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10372 */
                                (child  =  (((match10365 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn10375 */
                              ({ /* cicili#Let10379 */
                                __auto_type match10378  = get_Rc_BTree_CStr_Route (child );
                                typeof((((match10378 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let10384 */
                                  bool __h_case_result  = (true  &&  (((match10378 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10385 */
                                        (tr  =  (((match10378 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10388 */
                                      ({ /* cicili#Let10392 */
                                        __auto_type match10391  = insert_BTree_CStr_Route (tr , skey , svalue );
                                        typeof((((match10391 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        
                                        ({ /* cicili#Let10397 */
                                          bool __h_case_result  = (true  &&  (((match10391 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10398 */
                                                (child_tree  =  (((match10391 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn10401 */
                                              ({ /* cicili#Let10405 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                
                                                ({ /* cicili#Let10409 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10410 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn10412 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10415 */
                                                      ({ /* cicili#Let10420 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10418_1_arg ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let10424 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10425 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn10427 */
                                                                    (__h_match10418_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match10418_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn10430 */
                                                              ({ /* cicili#Let10433 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10435 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (insert_List_BTree_CStr_Route_pair_t (items , single_item , current ), ({ /* cicili#Let10444 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10446 */
                                                                      __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10450 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10454 */
                                                                      __auto_type r3  = append_List_Rc_BTree_CStr_Route (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10458 */
                                                                      __auto_type r4  = append_List_Rc_BTree_CStr_Route (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10467 */
                                                                        Rc_BTree_CStr_Route __ciciliC_10466 (Rc_BTree_CStr_Route __h_value ) {
                                                                          return clone_Rc_BTree_CStr_Route (__h_value );
                                                                        }
                                                                        __ciciliC_10466 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let10474 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn10478 */
                                                                Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let10485 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10489 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10491 */
                                                            Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let10499 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10501 */
                                                                  __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10505 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10511 */
                                                                    Rc_BTree_CStr_Route __ciciliC_10510 (Rc_BTree_CStr_Route __h_value ) {
                                                                      return clone_Rc_BTree_CStr_Route (__h_value );
                                                                    }
                                                                    __ciciliC_10510 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10518 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10522 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10528 */
                                                                    Rc_BTree_CStr_Route __ciciliC_10527 (Rc_BTree_CStr_Route __h_value ) {
                                                                      return clone_Rc_BTree_CStr_Route (__h_value );
                                                                    }
                                                                    __ciciliC_10527 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10535 */
                                                                  __auto_type r5  = push_List_Rc_BTree_CStr_Route (new_Rc_BTree_CStr_Route (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_CStr_Route (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let10543 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10547 */
                                                              Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let10555 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10557 */
                                                                    __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10561 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10567 */
                                                                      Rc_BTree_CStr_Route __ciciliC_10566 (Rc_BTree_CStr_Route __h_value ) {
                                                                        return clone_Rc_BTree_CStr_Route (__h_value );
                                                                      }
                                                                      __ciciliC_10566 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10574 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10578 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10584 */
                                                                      Rc_BTree_CStr_Route __ciciliC_10583 (Rc_BTree_CStr_Route __h_value ) {
                                                                        return clone_Rc_BTree_CStr_Route (__h_value );
                                                                      }
                                                                      __ciciliC_10583 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10591 */
                                                                    __auto_type r5  = push_List_Rc_BTree_CStr_Route (new_Rc_BTree_CStr_Route (child_tree ), r4 );
                                                                    // ----------
                                                                    ((void)(r5 -> __h_table -> freeClass ));
                                                                    r5 ;
                                                                  });
                                                                  // ----------
                                                                  append_List_Rc_BTree_CStr_Route (r2 , r5 );
                                                                })));
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10599 */
                                              __auto_type left  = match10391 ;
                                              // ----------
                                              
                                              ({ /* cicili#Progn10603 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10607 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10611 */
                                        Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let10618 */
                              // ----------
                              
                              ({ /* cicili#Progn10622 */
                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (Leaf_BTree_CStr_Route (insert_List_BTree_CStr_Route_pair_t (items , ((BTree_CStr_Route_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10632 */
                      // ----------
                      
                      ({ /* cicili#Let10636 */
                        bool __h_case_result  = (true  &&  ((match10355 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10638 */
                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10645 */
                            // ----------
                            
                            ({ /* cicili#Progn10649 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10653 */
              // ----------
              
              ({ /* cicili#Progn10657 */
                ({ /* cicili#Let10661 */
                  __auto_type match10660  = nth_List_Rc_BTree_CStr_Route (index , children );
                  typeof((((match10660 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  
                  ({ /* cicili#Let10666 */
                    bool __h_case_result  = (true  &&  (((match10660 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10667 */
                          (child  =  (((match10660 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10670 */
                        ({ /* cicili#Let10674 */
                          __auto_type match10673  = get_Rc_BTree_CStr_Route (child );
                          typeof((((match10673 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let10679 */
                            bool __h_case_result  = (true  &&  (((match10673 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10680 */
                                  (tr  =  (((match10673 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10683 */
                                ({ /* cicili#Let10687 */
                                  __auto_type match10686  = insert_BTree_CStr_Route (tr , skey , svalue );
                                  typeof((((match10686 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  
                                  ({ /* cicili#Let10692 */
                                    bool __h_case_result  = (true  &&  (((match10686 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10693 */
                                          (child_tree  =  (((match10686 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn10696 */
                                        ({ /* cicili#Let10700 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          
                                          ({ /* cicili#Let10704 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10705 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn10707 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn10710 */
                                                ({ /* cicili#Let10715 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10713_1_arg ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10719 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10720 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn10722 */
                                                              (__h_match10713_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match10713_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10725 */
                                                        ({ /* cicili#Let10728 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10730 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (insert_List_BTree_CStr_Route_pair_t (items , single_item , current ), ({ /* cicili#Let10739 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10741 */
                                                                __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10745 */
                                                                __auto_type r2  = drop_List_Rc_BTree_CStr_Route ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10749 */
                                                                __auto_type r3  = append_List_Rc_BTree_CStr_Route (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10753 */
                                                                __auto_type r4  = append_List_Rc_BTree_CStr_Route (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10762 */
                                                                  Rc_BTree_CStr_Route __ciciliC_10761 (Rc_BTree_CStr_Route __h_value ) {
                                                                    return clone_Rc_BTree_CStr_Route (__h_value );
                                                                  }
                                                                  __ciciliC_10761 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let10769 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10773 */
                                                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10780 */
                                                // ----------
                                                
                                                ({ /* cicili#Let10784 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10786 */
                                                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let10794 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10796 */
                                                            __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10800 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10806 */
                                                              Rc_BTree_CStr_Route __ciciliC_10805 (Rc_BTree_CStr_Route __h_value ) {
                                                                return clone_Rc_BTree_CStr_Route (__h_value );
                                                              }
                                                              __ciciliC_10805 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10813 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_CStr_Route (new_Rc_BTree_CStr_Route (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_CStr_Route (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let10821 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn10825 */
                                                        Right_BTree_CStr_Route_Error_BTree_CStr_Route (Internal_BTree_CStr_Route (copy_List_BTree_CStr_Route_pair_t (items ), ({ /* cicili#Let10833 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10835 */
                                                              __auto_type r1  = take_List_Rc_BTree_CStr_Route (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10839 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_Route (({ /* cicili#Progn10845 */
                                                                Rc_BTree_CStr_Route __ciciliC_10844 (Rc_BTree_CStr_Route __h_value ) {
                                                                  return clone_Rc_BTree_CStr_Route (__h_value );
                                                                }
                                                                __ciciliC_10844 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10852 */
                                                              __auto_type r3  = wrap_List_Rc_BTree_CStr_Route (new_Rc_BTree_CStr_Route (child_tree ));
                                                              // ----------
                                                              ((void)(r3 -> __h_table -> freeClass ));
                                                              r3 ;
                                                            });
                                                            // ----------
                                                            append_List_Rc_BTree_CStr_Route (r2 , r3 );
                                                          })));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let10860 */
                                        __auto_type left  = match10686 ;
                                        // ----------
                                        
                                        ({ /* cicili#Progn10864 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let10868 */
                                // ----------
                                
                                ({ /* cicili#Progn10872 */
                                  Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10879 */
                        // ----------
                        
                        ({ /* cicili#Progn10883 */
                          Right_BTree_CStr_Route_Error_BTree_CStr_Route (Leaf_BTree_CStr_Route (({ /* cicili#Let10890 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10892 */
                                __auto_type r1  = wrap_List_BTree_CStr_Route_pair_t (((BTree_CStr_Route_pair_t){ skey , svalue }));
                                // ----------
                                ((void)(r1 -> __h_table -> freeClass ));
                                r1 ;
                              });
                              // ----------
                              append_List_BTree_CStr_Route_pair_t (items , r1 );
                            })));
                        });
                      }));
                  });
                });
              });
            }));
        });
      });
  }
  Either_BTree_CStr_Route_Error_BTree_CStr_Route insertLeaf (List_BTree_CStr_Route_pair_t items , List_BTree_CStr_Route_pair_t current , int index ) {
    return ({ /* cicili#Let10908 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10912 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10913 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10915 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10917 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10920 */
              ({ /* cicili#Let10924 */
                __auto_type match10923  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10928 */
                  bool __h_case_result  = (true  &&  ((match10923 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10930 */
                      Right_BTree_CStr_Route_Error_BTree_CStr_Route (Leaf_BTree_CStr_Route (insert_List_BTree_CStr_Route_pair_t (items , ((BTree_CStr_Route_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let10940 */
                      // ----------
                      
                      ({ /* cicili#Let10944 */
                        bool __h_case_result  = (true  &&  ((match10923 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10946 */
                            Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10953 */
                            // ----------
                            
                            ({ /* cicili#Progn10957 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10961 */
              // ----------
              
              ({ /* cicili#Progn10965 */
                Right_BTree_CStr_Route_Error_BTree_CStr_Route (Leaf_BTree_CStr_Route (({ /* cicili#Let10972 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10974 */
                      __auto_type r1  = wrap_List_BTree_CStr_Route_pair_t (((BTree_CStr_Route_pair_t){ skey , svalue }));
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    // ----------
                    append_List_BTree_CStr_Route_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10984 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let10988 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10989 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10991 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10994 */
            ({ /* cicili#Let10998 */
              __auto_type match10997  = insertInternal (items , children , items , 0);
              typeof((((match10997 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              
              ({ /* cicili#Let11002 */
                bool __h_case_result  = (true  &&  (((match10997 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11003 */
                      (tr  =  (((match10997 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11006 */
                    Right_BTree_CStr_Route_Error_BTree_CStr_Route (split_BTree_CStr_Route (tr ));
                  }) : ({ /* cicili#Let11013 */
                    __auto_type left  = match10997 ;
                    // ----------
                    
                    ({ /* cicili#Progn11017 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let11021 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let11025 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11026 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn11028 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn11031 */
                  ({ /* cicili#Let11035 */
                    __auto_type match11034  = insertInternal (items , children , items , 0);
                    typeof((((match11034 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    
                    ({ /* cicili#Let11039 */
                      bool __h_case_result  = (true  &&  (((match11034 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11040 */
                            (tr  =  (((match11034 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn11043 */
                          Right_BTree_CStr_Route_Error_BTree_CStr_Route (split_BTree_CStr_Route (tr ));
                        }) : ({ /* cicili#Let11050 */
                          __auto_type left  = match11034 ;
                          // ----------
                          
                          ({ /* cicili#Progn11054 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let11058 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let11062 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11063 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11066 */
                        ({ /* cicili#Let11070 */
                          __auto_type match11069  = insertLeaf (items , items , 0);
                          typeof((((match11069 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let11074 */
                            bool __h_case_result  = (true  &&  (((match11069 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11075 */
                                  (tr  =  (((match11069 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn11078 */
                                Right_BTree_CStr_Route_Error_BTree_CStr_Route (split_BTree_CStr_Route (tr ));
                              }) : ({ /* cicili#Let11085 */
                                __auto_type left  = match11069 ;
                                // ----------
                                
                                ({ /* cicili#Progn11089 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let11093 */
                        // ----------
                        
                        ({ /* cicili#Progn11097 */
                          Left_BTree_CStr_Route_Error_BTree_CStr_Route (BTree_CStr_Route_ERR_INVALID_OBJECT ());
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
int order_BTree_CStr_Route () {
  return 3;
}
void free_BTree_CStr_Route (BTree_CStr_Route * this_ptr ) {
  { /* cicili#Let11106 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_CStr_Route children ) {
      { /* cicili#Let11111 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11115 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11116 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11118 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block11122 */
              { /* cicili#Block11124 */
                free_Rc_BTree_CStr_Route (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let11130 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let11134 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11135 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11137 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11141 */
            { /* cicili#Block11143 */
              free_List_BTree_CStr_Route_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_CStr_Route ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let11154 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let11158 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11159 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn11161 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block11165 */
                  { /* cicili#Block11167 */
                    free_List_BTree_CStr_Route_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_CStr_Route ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let11178 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let11182 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11183 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block11187 */
                        { /* cicili#Block11189 */
                          free_List_BTree_CStr_Route_pair_t ((&items ));
                          free (this );
                        }
                      }
                  });
                }
            });
          }
      });
    }
  }
}
BTree_CStr_Route__H_Table * const get_BTree_CStr_Route__H_Table () {
  static BTree_CStr_Route__H_Table table  = { free_BTree_CStr_Route , fromLists_BTree_CStr_Route , pure_BTree_CStr_Route , show_BTree_CStr_Route , traverse_BTree_CStr_Route , max_BTree_CStr_Route , min_BTree_CStr_Route , delete_BTree_CStr_Route , search_BTree_CStr_Route , insert_BTree_CStr_Route , order_BTree_CStr_Route };
  return (&table );
}
BTree_CStr_Route Branch_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children ) {
  { /* cicili#Let11201 */
    BTree_CStr_Route instance  = malloc (sizeof(class_BTree_CStr_Route));
    // ----------
    (*instance ) = ((class_BTree_CStr_Route){ get_BTree_CStr_Route__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_CStr_Route Internal_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items , List_Rc_BTree_CStr_Route children ) {
  { /* cicili#Let11209 */
    BTree_CStr_Route instance  = malloc (sizeof(class_BTree_CStr_Route));
    // ----------
    (*instance ) = ((class_BTree_CStr_Route){ get_BTree_CStr_Route__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_CStr_Route Leaf_BTree_CStr_Route (List_BTree_CStr_Route_pair_t items ) {
  { /* cicili#Let11217 */
    BTree_CStr_Route instance  = malloc (sizeof(class_BTree_CStr_Route));
    // ----------
    (*instance ) = ((class_BTree_CStr_Route){ get_BTree_CStr_Route__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_CStr_Route__H_IMPL__ */ 
#ifndef __RouterError__H_IMPL__
#define __RouterError__H_IMPL__
void show_RouterError (RouterError error ) {
  { /* cicili#Let11228 */
    // ----------
    
    ({ /* cicili#Let11232 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_UNKNOWN_ROUTER_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11235 */
          printf ("unknown router");
        }
      else
        { /* cicili#Let11240 */
          typeof((((error . __h_data ). ERR_FASTCGI_LIB ). __h_0_mem )) code ;
          typeof((((error . __h_data ). ERR_FASTCGI_LIB ). __h_1_mem )) desc ;
          // ----------
          
          ({ /* cicili#Let11244 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_FASTCGI_LIB_t  ) &&  (({ /* cicili#Progn11245 */
                    (code  =  (((error . __h_data ). ERR_FASTCGI_LIB ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11247 */
                    (desc  =  (((error . __h_data ). ERR_FASTCGI_LIB ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11251 */
                printf ("fastcgi error: %d, %s", code , desc );
              }
            else
              { /* cicili#Let11256 */
                // ----------
                
                { /* cicili#Block11260 */
                  printf ("unknown error");
                }
              }
          });
        }
    });
  }
}
void free_RouterError (RouterError * this ) {
}
const RouterError__H_Table * const get_RouterError__H_Table () {
  static const RouterError__H_Table table  = { free_RouterError , show_RouterError };
  return (&table );
}
RouterError Router_ERR_UNKNOWN_ROUTER () {
  { /* cicili#Let11271 */
    RouterError instance  = ((RouterError){ get_RouterError__H_Table (), __h_ERR_UNKNOWN_ROUTER_t });
    // ----------
    return instance ;
  }
}
RouterError Router_ERR_FASTCGI_LIB (int code , CStr description ) {
  { /* cicili#Let11276 */
    RouterError instance  = ((RouterError){ get_RouterError__H_Table (), __h___t , .__h_data._ = { code , description }});
    // ----------
    return instance ;
  }
}
#endif /* __RouterError__H_IMPL__ */ 
#ifndef __Either_RouterError_int__H_IMPL__
#define __Either_RouterError_int__H_IMPL__
void free_Either_RouterError_int (Either_RouterError_int * this ) {
}
const Either_RouterError_int__H_Table * const get_Either_RouterError_int__H_Table () {
  static const Either_RouterError_int__H_Table table  = { free_Either_RouterError_int };
  return (&table );
}
Either_RouterError_int Right_RouterError_int (int value ) {
  { /* cicili#Let11292 */
    Either_RouterError_int instance  = ((Either_RouterError_int){ get_Either_RouterError_int__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_RouterError_int Left_RouterError_int (RouterError error ) {
  { /* cicili#Let11297 */
    Either_RouterError_int instance  = ((Either_RouterError_int){ get_Either_RouterError_int__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_RouterError_int__H_IMPL__ */ 
CStr parsePostData (FCGX_Request * req , int maxContentLength ) {
  { /* cicili#Let11303 */
    CStr clstr  = FCGX_GetParam ("CONTENT_LENGTH", (req -> envp ));
    int contentLen  = 0;
    CStr requestBody ;
    // ----------
    if (clstr )
      { /* cicili#Block11306 */
        contentLen  = atoi (clstr );
        if (contentLen  >  maxContentLength  )
          { /* cicili#Block11310 */
            contentLen  = maxContentLength ;
          }
      }
    else
      contentLen  = maxContentLength ;
    requestBody  = calloc ((contentLen  +  1 ), sizeof(char));
    contentLen  = FCGX_GetStr (requestBody , contentLen , (req -> in ));
    return requestBody ;
  }
}
void processRoutes (FCGX_Request * req , int maxContentLength , BTree_CStr_Route routes , RouteHandler beforeRequest , RouteHandler afterRequest ) {
  { /* cicili#Let11314 */
    CStr req_uri  = FCGX_GetParam ("REQUEST_URI", (req -> envp ));
    CStr req_method  = FCGX_GetParam ("REQUEST_METHOD", (req -> envp ));
    CStr req_queryString  = FCGX_GetParam ("QUERY_STRING", (req -> envp ));
    // ----------
    { /* cicili#Let11322 */
      __auto_type match11319  = search_BTree_CStr_Route (routes , req_uri );
      typeof((((match11319 . __h_data ). Just ). __h_0_mem )) __h_match11319_0_arg ;
      typeof((__h_match11319_0_arg . __h_1_mem )) __h_match11320_1_arg ;
      typeof((__h_match11320_1_arg . __h_1_mem )) methods ;
      typeof((__h_match11320_1_arg . __h_2_mem )) handler ;
      // ----------
      
      ({ /* cicili#Let11327 */
        bool __h_case_result  = (true  &&  (((match11319 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn11328 */
                (__h_match11319_0_arg  =  (((match11319 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) &&  (true  &&  (({ /* cicili#Progn11330 */
                    (__h_match11320_1_arg  =  (__h_match11319_0_arg . __h_1_mem ) );
                    true ;
                  }) &&  (true  &&  (({ /* cicili#Progn11332 */
                        (methods  =  (__h_match11320_1_arg . __h_1_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11334 */
                        (handler  =  (__h_match11320_1_arg . __h_2_mem ) );
                        true ;
                      }) ) ) ) ) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11338 */
            { /* cicili#Block11340 */
              if ((CStrToRouteMethod (req_method ) &  methods  ) >  0 )
                { /* cicili#Let11345 */
                  CStr payload  = parsePostData (req , maxContentLength );
                  // ----------
                  ({ /* cicili#Let11348 */
                    __auto_type request  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11350 */
                      __auto_type request  = MakeRequest (req , req_uri , req_method , req_queryString , payload );
                      // ----------
                      ((void)(request -> __h_table -> freeClass ));
                      request ;
                    });
                    // ----------
                    if (beforeRequest )
                      { /* cicili#Block11355 */
                        beforeRequest (request );
                      }
                    handler (request );
                    if (afterRequest )
                      { /* cicili#Block11359 */
                        afterRequest (request );
                      }
                  });
                }
              else
                FCGX_PutS ("HTTP/1.1 400 Bad Request\r\n", (req -> out ));
            }
          }
        else
          { /* cicili#Let11365 */
            // ----------
            
            { /* cicili#Block11369 */
              FCGX_PutS ("HTTP/1.1 404 Not Found\r\n", (req -> out ));
            }
          }
      });
    }
  }
}
void releaseFCGXRequest (FCGX_Request ** req ) {
  FCGX_Finish_r (*req );
  FCGX_Free (*req , true );
}
typedef struct __ciciliC_Context_11449 {
    void (*routine) (struct __ciciliC_Context_11449 * context );
  struct { /* ciciliStruct11452 */
    FCGX_Request * request ;
    int maxContentLength ;
    BTree_CStr_Route routes ;
    RouteHandler beforeRequest ;
    RouteHandler afterRequest ;
  } context ;
} __ciciliC_Context_11449;
typedef struct cicili0adCsGOf1HTrrZB655EGzK3WRmE_ {
  void * context ;
} cicili0adCsGOf1HTrrZB655EGzK3WRmE_;
void __ciciliL_11459 (struct cicili0adCsGOf1HTrrZB655EGzK3WRmE_ * ciciliDefer11456_ptr ) {
  void * context  = (ciciliDefer11456_ptr -> context );
  free (context );
}
void __ciciliC_Context_11449___ciciliC_Routine_11450 (struct __ciciliC_Context_11449 * context ) {
  FCGX_Request * request  = ((context -> context ). request );
  int maxContentLength  = ((context -> context ). maxContentLength );
  BTree_CStr_Route routes  = ((context -> context ). routes );
  RouteHandler beforeRequest  = ((context -> context ). beforeRequest );
  RouteHandler afterRequest  = ((context -> context ). afterRequest );
  struct cicili0adCsGOf1HTrrZB655EGzK3WRmE_ ciciliDefer11456  __attribute__((__cleanup__(__ciciliL_11459 ))) = { context };
  ({ /* cicili#Let11462 */
    __auto_type request  __attribute__((__cleanup__(releaseFCGXRequest ))) = request ;
    // ----------
    processRoutes (request , maxContentLength , routes , beforeRequest , afterRequest );
  });
}
Either_RouterError_int startWithArgs (CStr socket , int backlog , int maxContentLength , BTree_CStr_Route routes , RouteHandler beforeRequest , RouteHandler afterRequest , Bool multiThreading ) {
  if (FCGX_Init () !=  0 )
    { /* cicili#Block11379 */
      return Left_RouterError_int (Router_ERR_FASTCGI_LIB (errno , strerror (errno )));
    }
  { /* cicili#Let11384 */
    int server_fd  = FCGX_OpenSocket (socket , backlog );
    // ----------
    if (server_fd  ==  -1 )
      { /* cicili#Block11388 */
        return Left_RouterError_int (Router_ERR_FASTCGI_LIB (errno , strerror (errno )));
      }
    fprintf (stdout , "FastCGI server running on %s ...\n", socket );
    { /* cicili#Let11396 */
      // ----------
      
      ({ /* cicili#Let11400 */
        bool __h_case_result  = (true  &&  ((multiThreading . __h_ctor ) ==  __h_False_t  ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11403 */
            { /* cicili#Let11405 */
              FCGX_Request request ;
              // ----------
              if (FCGX_InitRequest ((&request ), server_fd , 0) !=  0 )
                { /* cicili#Block11409 */
                  return Left_RouterError_int (Router_ERR_FASTCGI_LIB (errno , strerror (errno )));
                }
              while (true ) {
                  if (FCGX_Accept_r ((&request )) ==  0 )
                    processRoutes ((&request ), maxContentLength , routes , beforeRequest , afterRequest );
                  else
                    return Left_RouterError_int (Router_ERR_FASTCGI_LIB (errno , strerror (errno )));
              }
            }
          }
        else
          { /* cicili#Let11423 */
            // ----------
            
            ({ /* cicili#Let11427 */
              bool __h_case_result  = (true  &&  ((multiThreading . __h_ctor ) ==  __h_True_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block11430 */
                  while (true ) {
                      { /* cicili#Let11433 */
                        FCGX_Request * request  = malloc (sizeof(FCGX_Request));
                        // ----------
                        if (FCGX_InitRequest (request , server_fd , 0) !=  0 )
                          { /* cicili#Block11437 */
                            ({ /* cicili#Let11440 */
                              __auto_type tmp_stdout  = stdout ;
                              // ----------
                              stdout  = stderr ;
                              fprintf (stdout , "Request initiation error: %d, %s", errno , strerror (errno ));
                              stdout  = tmp_stdout ;
                            });
                          }
                        if (FCGX_Accept_r (request ) ==  0 )
                          ({ /* cicili#Let11447 */
                            __auto_type closure11446  = ((struct __ciciliC_Context_11449 ){ __ciciliC_Context_11449___ciciliC_Routine_11450 , { request , maxContentLength , routes , beforeRequest , afterRequest }});
                            void * data  = malloc (sizeof(closure11446));
                            pthread_t thread11445 ;
                            // ----------
                            memcpy (data , (&closure11446 ), sizeof(closure11446));
                            pthread_create ((&thread11445 ), NULL , ((                              void * (*)(void *   ))(closure11446 . routine )), data );
                            pthread_detach (thread11445 );
                            thread11445 ;
                          });
                        else
                          ({ /* cicili#Let11469 */
                            __auto_type tmp_stdout  = stdout ;
                            // ----------
                            stdout  = stderr ;
                            fprintf (stdout , "Request acceptance error: %d, %s", errno , strerror (errno ));
                            stdout  = tmp_stdout ;
                          });
                      }
                  }
                }
            });
          }
      });
    }
    return Right_RouterError_int (server_fd );
  }
}
#ifndef __Router__H_IMPL__
#define __Router__H_IMPL__
Either_RouterError_int start_Router (Router router ) {
  return ({ /* cicili#Let11480 */
      typeof((((router . __h_data ). SimpleRouter ). __h_0_mem )) socket ;
      typeof((((router . __h_data ). SimpleRouter ). __h_1_mem )) routes ;
      // ----------
      
      ({ /* cicili#Let11484 */
        bool __h_case_result  = (true  &&  (((router . __h_ctor ) ==  __h_SimpleRouter_t  ) &&  (({ /* cicili#Progn11485 */
                (socket  =  (((router . __h_data ). SimpleRouter ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11487 */
                (routes  =  (((router . __h_data ). SimpleRouter ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11490 */
            startWithArgs (socket , 5, 2097152, routes , NULL , NULL , False ());
          }) : ({ /* cicili#Let11494 */
            typeof((((router . __h_data ). DetailedRouter ). __h_0_mem )) socket ;
            typeof((((router . __h_data ). DetailedRouter ). __h_1_mem )) routes ;
            typeof((((router . __h_data ). DetailedRouter ). __h_2_mem )) backlog ;
            typeof((((router . __h_data ). DetailedRouter ). __h_3_mem )) maxContentLength ;
            typeof((((router . __h_data ). DetailedRouter ). __h_4_mem )) beforeRequest ;
            typeof((((router . __h_data ). DetailedRouter ). __h_5_mem )) afterRequest ;
            typeof((((router . __h_data ). DetailedRouter ). __h_6_mem )) multiThreading ;
            // ----------
            
            ({ /* cicili#Let11498 */
              bool __h_case_result  = (true  &&  (((router . __h_ctor ) ==  __h_DetailedRouter_t  ) &&  ((((((({ /* cicili#Progn11499 */
                                (socket  =  (((router . __h_data ). DetailedRouter ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn11501 */
                                (routes  =  (((router . __h_data ). DetailedRouter ). __h_1_mem ) );
                                true ;
                              }) ) &&  ({ /* cicili#Progn11503 */
                              (backlog  =  (((router . __h_data ). DetailedRouter ). __h_2_mem ) );
                              true ;
                            }) ) &&  ({ /* cicili#Progn11505 */
                            (maxContentLength  =  (((router . __h_data ). DetailedRouter ). __h_3_mem ) );
                            true ;
                          }) ) &&  ({ /* cicili#Progn11507 */
                          (beforeRequest  =  (((router . __h_data ). DetailedRouter ). __h_4_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn11509 */
                        (afterRequest  =  (((router . __h_data ). DetailedRouter ). __h_5_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn11511 */
                      (multiThreading  =  (((router . __h_data ). DetailedRouter ). __h_6_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn11514 */
                  startWithArgs (socket , backlog , maxContentLength , routes , beforeRequest , afterRequest , multiThreading );
                }) : ({ /* cicili#Let11518 */
                  // ----------
                  
                  ({ /* cicili#Progn11522 */
                    Left_RouterError_int (Router_ERR_UNKNOWN_ROUTER ());
                  });
                }));
            });
          }));
      });
    });
}
void free_Router (Router * this ) {
}
const Router__H_Table * const get_Router__H_Table () {
  static const Router__H_Table table  = { free_Router , start_Router };
  return (&table );
}
Router MakeSimpleRouter (CStr socket , BTree_CStr_Route routes ) {
  { /* cicili#Let11535 */
    Router instance  = ((Router){ get_Router__H_Table (), __h_SimpleRouter_t , .__h_data.SimpleRouter = { socket , routes }});
    // ----------
    return instance ;
  }
}
Router MakeDetailedRouter (CStr socket , BTree_CStr_Route routes , int backlog , int maxContentLength , RouteHandler beforeRequest , RouteHandler afterRequest , Bool multiThreading ) {
  { /* cicili#Let11539 */
    Router instance  = ((Router){ get_Router__H_Table (), __h___t , .__h_data._ = { socket , routes , backlog , maxContentLength , beforeRequest , afterRequest , multiThreading }});
    // ----------
    return instance ;
  }
}
#endif /* __Router__H_IMPL__ */ 
