#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include "dynamic.h"
#include <limits.h>
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char new_StringBuffer_char (int step , bool null_terminated ) {
  return newCapacity_StringBuffer_char (step , step , null_terminated );
}
StringBuffer_char newCapacity_StringBuffer_char (int capacity , int step , bool null_terminated ) {
  return ((null_terminated ) ? ({ /* cicili#Let1241 */
        char * buffer  = malloc (((capacity  +  1 ) *  sizeof(char) ));
        StringBuffer_char sb  = MakeNullTerminatedBuffer_char (buffer , 0, capacity , step );
        // ----------
        (*buffer ) = ((char)'\0');
        sb ;
      }) : ({ /* cicili#Let1245 */
        char * buffer  = malloc ((capacity  *  sizeof(char) ));
        StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, capacity , step );
        // ----------
        sb ;
      }));
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data ) {
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , int len ) {
  return ({ /* cicili#Let1259 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let1263 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn1264 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn1266 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn1268 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1270 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1273 */
            ({ /* cicili#Let1275 */
              int blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block1279 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let1281 */
                    char * new_buffer  = realloc (buffer , (size  *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let1286 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            
            ({ /* cicili#Let1290 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn1291 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1293 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn1295 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn1297 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1300 */
                  ({ /* cicili#Let1302 */
                    int blen  = (len  *  sizeof(char) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block1306 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let1308 */
                          char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((char)'\0');
                    MakeNullTerminatedBuffer_char (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let1313 */
                  // ----------
                  
                  ({ /* cicili#Progn1317 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
  { /* cicili#Let1325 */
    typeof((((this -> __h_data ). Bufferred ). __h_0_mem )) buffer ;
    // ----------
    
    ({ /* cicili#Let1329 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn1330 */
            (buffer  =  (((this -> __h_data ). Bufferred ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1334 */
          { /* cicili#Block1336 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
      else
        { /* cicili#Let1342 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          
          ({ /* cicili#Let1346 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1347 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1351 */
                { /* cicili#Block1353 */
                  free (buffer );
                  (*this ) = FreedStringBuffer_char ();
                }
              }
          });
        }
    });
  }
}
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table () {
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , new_StringBuffer_char , newCapacity_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step ) {
  { /* cicili#Let1363 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Bufferred_t , .__h_data.Bufferred = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , int cursor , int size , int step ) {
  { /* cicili#Let1368 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let1373 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_char__H_IMPL__ */ 
#ifndef __DynamicType__H_IMPL__
#define __DynamicType__H_IMPL__
#ifndef __Maybe_DynamicType_x__H_IMPL__
#define __Maybe_DynamicType_x__H_IMPL__
void free_Maybe_DynamicType_x (Maybe_DynamicType_x * this ) {
}
const Maybe_DynamicType_x__H_Table * const get_Maybe_DynamicType_x__H_Table () {
  static const Maybe_DynamicType_x__H_Table table  = { free_Maybe_DynamicType_x };
  return (&table );
}
Maybe_DynamicType_x Just_DynamicType_x (DynamicType_x value ) {
  { /* cicili#Let1396 */
    Maybe_DynamicType_x instance  = ((Maybe_DynamicType_x){ get_Maybe_DynamicType_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_DynamicType_x Nothing_DynamicType_x () {
  { /* cicili#Let1401 */
    Maybe_DynamicType_x instance  = ((Maybe_DynamicType_x){ get_Maybe_DynamicType_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_DynamicType_x__H_IMPL__ */ 
#ifndef __Box_DynamicType__H_IMPL__
#define __Box_DynamicType__H_IMPL__
Box_DynamicType new_Box_DynamicType (DynamicType_x pointer ) {
  return ({ /* cicili#Let1408 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((DynamicType_x *)malloc (sizeof(DynamicType_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_DynamicType_x (holder , count , ((size_t)pointer ));
    });
}
Box_DynamicType clone_Box_DynamicType (Box_DynamicType rc ) {
  return ({ /* cicili#Let1417 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1421 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1422 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1424 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1426 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1429 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn1432 */
                (++(*count ));
                __h_Hold_DynamicType_x (pointer , count , address );
              }) : Gone_DynamicType_x ());
          }) : ({ /* cicili#Let1438 */
            // ----------
            
            ({ /* cicili#Progn1442 */
              Gone_DynamicType_x ();
            });
          }));
      });
    });
}
Maybe_DynamicType_x take_Box_DynamicType (Box_DynamicType * this ) {
  return ({ /* cicili#Let1450 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1454 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1455 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1457 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1459 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1462 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let1466 */
                __auto_type result  = Just_DynamicType_x ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block1472 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_DynamicType_x ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_DynamicType_x ());
          }) : ({ /* cicili#Let1479 */
            // ----------
            
            ({ /* cicili#Progn1483 */
              Nothing_DynamicType_x ();
            });
          }));
      });
    });
}
Maybe_DynamicType_x get_Box_DynamicType (Box_DynamicType rc ) {
  return ({ /* cicili#Let1491 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1495 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1496 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1498 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1500 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1503 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_DynamicType_x ((*pointer )) : Nothing_DynamicType_x ());
          }) : ({ /* cicili#Let1510 */
            // ----------
            
            ({ /* cicili#Progn1514 */
              Nothing_DynamicType_x ();
            });
          }));
      });
    });
}
void free_Box_DynamicType (Box_DynamicType * this ) {
  { /* cicili#Let1523 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let1527 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1528 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1530 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn1532 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1536 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block1540 */
              if ((*count ) ==  1 )
                { /* cicili#Block1543 */
                  free_DynamicType_x (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_DynamicType_x ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let1553 */
          // ----------
          
          ({ /* cicili#Let1557 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1560 */
              }
          });
        }
    });
  }
}
const Box_DynamicType__H_Table * const get_Box_DynamicType__H_Table () {
  static const Box_DynamicType__H_Table table  = { free_Box_DynamicType , new_Box_DynamicType , clone_Box_DynamicType , take_Box_DynamicType , get_Box_DynamicType };
  return (&table );
}
Box_DynamicType __h_Hold_DynamicType_x (DynamicType_x * pointer , int * count , size_t address ) {
  { /* cicili#Let1571 */
    Box_DynamicType instance  = ((Box_DynamicType){ get_Box_DynamicType__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_DynamicType Gone_DynamicType_x () {
  { /* cicili#Let1576 */
    Box_DynamicType instance  = ((Box_DynamicType){ get_Box_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_DynamicType__H_IMPL__ */ 
int show_DynamicType (CFile file , DynamicType dt ) {
  return ({ /* cicili#Let1582 */
      __auto_type __h_matchbox  = dt ;
      // ----------
      ({ /* cicili#Let1586 */
        __auto_type match1585  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1585 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let1591 */
          bool __h_case_result  = (true  &&  (((match1585 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1592 */
                (unboxed  =  (((match1585 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1595 */
              ({ /* cicili#Let1599 */
                typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                // ----------
                
                ({ /* cicili#Let1603 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn1604 */
                        (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1607 */
                      (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                    }) : ({ /* cicili#Let1611 */
                      typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                      // ----------
                      
                      ({ /* cicili#Let1615 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn1616 */
                              (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1619 */
                            fprintf (file , "%llu", data );
                          }) : ({ /* cicili#Let1623 */
                            typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let1627 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn1628 */
                                    (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn1631 */
                                  fprintf (file , "%Lf", data );
                                }) : ({ /* cicili#Let1635 */
                                  typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                  // ----------
                                  
                                  ({ /* cicili#Let1639 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn1640 */
                                          (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn1643 */
                                        ({ /* cicili#Let1647 */
                                          // ----------
                                          
                                          ({ /* cicili#Let1651 */
                                            bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn1653 */
                                                fprintf (file , "#t");
                                              }) : ({ /* cicili#Let1657 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn1661 */
                                                  fprintf (file , "#f");
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let1665 */
                                        typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                        // ----------
                                        
                                        ({ /* cicili#Let1669 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn1670 */
                                                (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn1673 */
                                              show_List_DynamicType (file , data );
                                            }) : ({ /* cicili#Let1678 */
                                              typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                              // ----------
                                              
                                              ({ /* cicili#Let1682 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1683 */
                                                      (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn1686 */
                                                    show_BTree_CStr_DynamicType (file , data );
                                                  }) : ({ /* cicili#Let1691 */
                                                    typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let1695 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn1696 */
                                                            (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn1699 */
                                                          fprintf (file , "DynamicType Error: %s", data );
                                                        }) : ({ /* cicili#Let1703 */
                                                          typeof((((unboxed -> __h_data ). Thunk ). __h_0_mem )) args ;
                                                          typeof((((unboxed -> __h_data ). Thunk ). __h_1_mem )) fptr ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let1707 */
                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Thunk_t  ) &&  (({ /* cicili#Progn1708 */
                                                                    (args  =  (((unboxed -> __h_data ). Thunk ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn1710 */
                                                                    (fptr  =  (((unboxed -> __h_data ). Thunk ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn1713 */
                                                                (fprintf (file , "<Thunk: ") +  show_DynamicType (file , args ) +  fprintf (file , " 0x%zx>", ((size_t)fptr )) );
                                                              }) : ({ /* cicili#Let1718 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn1722 */
                                                                  fprintf (file , "nil");
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      }));
                                  });
                                }));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1726 */
              // ----------
              
              ({ /* cicili#Progn1730 */
                fprintf (file , "nil");
              });
            }));
        });
      });
    });
}
void __ciciliL_1775 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1780 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
DynamicType force_DynamicType (DynamicType thunk ) {
  return ({ /* cicili#Let1735 */
      __auto_type __h_matchbox  = thunk ;
      // ----------
      ({ /* cicili#Let1739 */
        __auto_type match1738  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1738 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let1744 */
          bool __h_case_result  = (true  &&  (((match1738 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1745 */
                (unboxed  =  (((match1738 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1748 */
              ({ /* cicili#Let1752 */
                typeof((((unboxed -> __h_data ). Thunk ). __h_0_mem )) args ;
                typeof((((unboxed -> __h_data ). Thunk ). __h_1_mem )) fptr ;
                // ----------
                
                ({ /* cicili#Let1756 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Thunk_t  ) &&  (({ /* cicili#Progn1757 */
                          (args  =  (((unboxed -> __h_data ). Thunk ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1759 */
                          (fptr  =  (((unboxed -> __h_data ). Thunk ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1762 */
                      fptr (args );
                    }) : ({ /* cicili#Let1766 */
                      // ----------
                      
                      ({ /* cicili#Progn1770 */
                        Dynamic_Error (({ /* cicili#Let1773 */
                            char * reason  = NULL ;
                            char * objStr  __attribute__((__cleanup__(__ciciliL_1775 ))) = ({ /* cicili#Let1779 */
                              char * buffer  = ((char *)calloc (1024, sizeof(char)));
                              CFile file  __attribute__((__cleanup__(__ciciliL_1780 ))) = fmemopen (buffer , 1024, "w+");
                              // ----------
                              show_DynamicType (file , thunk );
                              buffer ;
                            });
                            // ----------
                            asprintf ((&reason ), "DynamicType: '%s' is not a thunk to be forced", objStr );
                            reason ;
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let1787 */
              // ----------
              
              ({ /* cicili#Progn1791 */
                Dynamic_Error (strdup ("force dead thunk"));
              });
            }));
        });
      });
    });
}
void __ciciliL_1860 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1865 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1910 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1915 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1963 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1968 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1984 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1989 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
DynamicType search_DynamicType (DynamicType dt , CStr path ) {
  return ({ /* cicili#Let1796 */
      char script [256] = { 0};
      int counter  = 0;
      char * cursor  = path ;
      // ----------
      for (; ((*cursor ) !=  '\0' ); (++cursor )) {
          if ((*cursor ) ==  '/' )
            break ;
          else
            script [(counter ++)] = (*cursor );
      }
      (((cursor  ==  path  )) ? dt  : ({ /* cicili#Let1804 */
          __auto_type __h_matchbox  = dt ;
          // ----------
          ({ /* cicili#Let1808 */
            __auto_type match1807  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match1807 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            
            ({ /* cicili#Let1813 */
              bool __h_case_result  = (true  &&  (((match1807 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1814 */
                    (unboxed  =  (((match1807 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1817 */
                  ({ /* cicili#Let1821 */
                    typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                    // ----------
                    
                    ({ /* cicili#Let1825 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  (({ /* cicili#Progn1826 */
                              (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                              true ;
                            }) &&  ((counter  >  0 ) &&  ((*cursor ) ==  '\0' ) ) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn1829 */
                          ({ /* cicili#Let1832 */
                            __auto_type index  = atoi (script );
                            __auto_type witem  = nth_String (index , data );
                            // ----------
                            ({ /* cicili#Let1837 */
                              typeof((((witem . __h_data ). Just ). __h_0_mem )) item ;
                              // ----------
                              
                              ({ /* cicili#Let1841 */
                                bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1842 */
                                      (item  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn1845 */
                                    Dynamic_String (pure_String ((&item ), 1));
                                  }) : ({ /* cicili#Let1851 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn1855 */
                                      Dynamic_Error (({ /* cicili#Let1858 */
                                          char * reason  = NULL ;
                                          char * objStr  __attribute__((__cleanup__(__ciciliL_1860 ))) = ({ /* cicili#Let1864 */
                                            char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                            CFile file  __attribute__((__cleanup__(__ciciliL_1865 ))) = fmemopen (buffer , 1024, "w+");
                                            // ----------
                                            show_DynamicType (file , dt );
                                            buffer ;
                                          });
                                          // ----------
                                          asprintf ((&reason ), "Search: '%s' doesn't have '%d' element(s)", objStr , (index  +  1 ));
                                          reason ;
                                        }));
                                    });
                                  }));
                              });
                            });
                          });
                        }) : ({ /* cicili#Let1872 */
                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                          // ----------
                          
                          ({ /* cicili#Let1876 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn1877 */
                                  (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1880 */
                                ({ /* cicili#Let1883 */
                                  __auto_type index  = atoi (script );
                                  __auto_type witem  = nth_List_DynamicType (index , data );
                                  // ----------
                                  ({ /* cicili#Let1888 */
                                    typeof((((witem . __h_data ). Just ). __h_0_mem )) item ;
                                    // ----------
                                    
                                    ({ /* cicili#Let1892 */
                                      bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1893 */
                                            (item  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn1896 */
                                          search_DynamicType (item , ((((*cursor ) ==  '\0' )) ? cursor  : (++cursor )));
                                        }) : ({ /* cicili#Let1901 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn1905 */
                                            Dynamic_Error (({ /* cicili#Let1908 */
                                                char * reason  = NULL ;
                                                char * objStr  __attribute__((__cleanup__(__ciciliL_1910 ))) = ({ /* cicili#Let1914 */
                                                  char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                                  CFile file  __attribute__((__cleanup__(__ciciliL_1915 ))) = fmemopen (buffer , 1024, "w+");
                                                  // ----------
                                                  show_DynamicType (file , dt );
                                                  buffer ;
                                                });
                                                // ----------
                                                asprintf ((&reason ), "Search: '%s' doesn't have '%d' element(s)", objStr , (index  +  1 ));
                                                reason ;
                                              }));
                                          });
                                        }));
                                    });
                                  });
                                });
                              }) : ({ /* cicili#Let1922 */
                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                // ----------
                                
                                ({ /* cicili#Let1926 */
                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1927 */
                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn1930 */
                                      ({ /* cicili#Let1933 */
                                        __auto_type witem  = search_BTree_CStr_DynamicType (data , script );
                                        // ----------
                                        ({ /* cicili#Let1939 */
                                          typeof((((witem . __h_data ). Just ). __h_0_mem )) __h_match1937_0_arg ;
                                          typeof((__h_match1937_0_arg . __h_1_mem )) value ;
                                          // ----------
                                          
                                          ({ /* cicili#Let1943 */
                                            bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn1944 */
                                                    (__h_match1937_0_arg  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  (true  &&  ({ /* cicili#Progn1946 */
                                                      (value  =  (__h_match1937_0_arg . __h_1_mem ) );
                                                      true ;
                                                    }) ) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn1949 */
                                                search_DynamicType (value , ((((*cursor ) ==  '\0' )) ? cursor  : (++cursor )));
                                              }) : ({ /* cicili#Let1954 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn1958 */
                                                  Dynamic_Error (({ /* cicili#Let1961 */
                                                      char * reason  = NULL ;
                                                      char * objStr  __attribute__((__cleanup__(__ciciliL_1963 ))) = ({ /* cicili#Let1967 */
                                                        char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                                        CFile file  __attribute__((__cleanup__(__ciciliL_1968 ))) = fmemopen (buffer , 1024, "w+");
                                                        // ----------
                                                        show_DynamicType (file , dt );
                                                        buffer ;
                                                      });
                                                      // ----------
                                                      asprintf ((&reason ), "Search: '%s' doesn't have '%s' key", objStr , script );
                                                      reason ;
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      });
                                    }) : ({ /* cicili#Let1975 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn1979 */
                                        Dynamic_Error (({ /* cicili#Let1982 */
                                            char * reason  = NULL ;
                                            char * objStr  __attribute__((__cleanup__(__ciciliL_1984 ))) = ({ /* cicili#Let1988 */
                                              char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                              CFile file  __attribute__((__cleanup__(__ciciliL_1989 ))) = fmemopen (buffer , 1024, "w+");
                                              // ----------
                                              show_DynamicType (file , dt );
                                              buffer ;
                                            });
                                            // ----------
                                            asprintf ((&reason ), "Search: '%s' is not scriptable with path: '%s'", objStr , script );
                                            reason ;
                                          }));
                                      });
                                    }));
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let1996 */
                  // ----------
                  
                  ({ /* cicili#Progn2000 */
                    Dynamic_Error (({ /* cicili#Let2003 */
                        char * reason  = NULL ;
                        // ----------
                        asprintf ((&reason ), "Search: '%s' is not scriptable", "nothing");
                        reason ;
                      }));
                  });
                }));
            });
          });
        }));
    });
}
int toXml_DynamicType (CFile file , CStr root , DynamicType dt ) {
  auto int objectToXml (CStr key , BTree_CStr_DynamicType tree );
  auto int toXml_ (CStr key , DynamicType dt );
  int listToXml (CStr key , CStr xml_name , List_DynamicType list ) {
    return ({ /* cicili#Let2013 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2017 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2018 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2020 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2023 */
              (({ /* cicili#Let2026 */
                  __auto_type __h_matchbox  = head ;
                  // ----------
                  ({ /* cicili#Let2030 */
                    __auto_type match2029  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                    typeof((((match2029 . __h_data ). Just ). __h_0_mem )) unboxed ;
                    // ----------
                    
                    ({ /* cicili#Let2035 */
                      bool __h_case_result  = (true  &&  (((match2029 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2036 */
                            (unboxed  =  (((match2029 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn2039 */
                          ({ /* cicili#Let2043 */
                            typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let2047 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2048 */
                                    (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn2051 */
                                  objectToXml (xml_name , data );
                                }) : ({ /* cicili#Let2055 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn2059 */
                                    (fprintf (file , "<%s>", xml_name ) +  toXml_ (xml_name , head ) +  fprintf (file , "</%s>", xml_name ) );
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let2063 */
                          // ----------
                          
                          ({ /* cicili#Progn2067 */
                            0;
                          });
                        }));
                    });
                  });
                }) +  listToXml (key , xml_name , tail ) );
            }) : ({ /* cicili#Let2071 */
              // ----------
              
              ({ /* cicili#Progn2075 */
                0;
              });
            }));
        });
      });
  }
  int objectToXml (CStr key , BTree_CStr_DynamicType tree ) {
    return (fprintf (file , "<%s ", key ) +  ({ /* cicili#Let2079 */
          int counter  = 0;
          // ----------
          traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn2083 */
              void __ciciliC_2082 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
                counter  = (counter  +  ({ /* cicili#Let2088 */
                        typeof((item . __h_0_mem )) key ;
                        typeof((item . __h_1_mem )) value ;
                        // ----------
                        
                        ({ /* cicili#Let2092 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn2093 */
                                (key  =  (item . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2095 */
                                (value  =  (item . __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn2098 */
                              ({ /* cicili#Let2101 */
                                __auto_type __h_matchbox  = value ;
                                // ----------
                                ({ /* cicili#Let2105 */
                                  __auto_type match2104  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match2104 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2110 */
                                    bool __h_case_result  = (true  &&  (((match2104 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2111 */
                                          (unboxed  =  (((match2104 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2114 */
                                        ({ /* cicili#Let2118 */
                                          typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                                          // ----------
                                          
                                          ({ /* cicili#Let2122 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2123 */
                                                  (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2126 */
                                                (fprintf (file , "%s=", key ) +  fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                                              }) : ({ /* cicili#Let2130 */
                                                // ----------
                                                
                                                ({ /* cicili#Let2134 */
                                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_List_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2136 */
                                                      0;
                                                    }) : ({ /* cicili#Let2140 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2144 */
                                                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Object_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2146 */
                                                            0;
                                                          }) : ({ /* cicili#Let2150 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn2154 */
                                                              (fprintf (file , "%s=\"", key ) +  toXml_ (key , value ) +  fprintf (file , "\"") );
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2158 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2162 */
                                          0;
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2166 */
                              // ----------
                              
                              ({ /* cicili#Progn2170 */
                                0;
                              });
                            }));
                        });
                      }) +  fprintf (file , " ") );
              }
              __ciciliC_2082 ;
            }));
          counter ;
        }) +  fprintf (file , ">") +  ({ /* cicili#Let2173 */
          int counter  = 0;
          // ----------
          traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn2177 */
              void __ciciliC_2176 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
                counter  = (counter  +  ({ /* cicili#Let2182 */
                        typeof((item . __h_0_mem )) key ;
                        typeof((item . __h_1_mem )) value ;
                        // ----------
                        
                        ({ /* cicili#Let2186 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn2187 */
                                (key  =  (item . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2189 */
                                (value  =  (item . __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn2192 */
                              ({ /* cicili#Let2195 */
                                __auto_type __h_matchbox  = value ;
                                // ----------
                                ({ /* cicili#Let2199 */
                                  __auto_type match2198  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match2198 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2204 */
                                    bool __h_case_result  = (true  &&  (((match2198 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2205 */
                                          (unboxed  =  (((match2198 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2208 */
                                        ({ /* cicili#Let2212 */
                                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                          typeof((((unboxed -> __h_data ). List ). __h_1_mem )) xml_name ;
                                          // ----------
                                          
                                          ({ /* cicili#Let2216 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  (({ /* cicili#Progn2217 */
                                                    (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn2219 */
                                                    (xml_name  =  (((unboxed -> __h_data ). List ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2222 */
                                                (fprintf (file , "<%s>", key ) +  listToXml (key , xml_name , data ) +  fprintf (file , "</%s>", key ) );
                                              }) : ({ /* cicili#Let2226 */
                                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                                // ----------
                                                
                                                ({ /* cicili#Let2230 */
                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2231 */
                                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2234 */
                                                      objectToXml (key , data );
                                                    }) : ({ /* cicili#Let2238 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn2242 */
                                                        0;
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2246 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2250 */
                                          0;
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2254 */
                              // ----------
                              
                              ({ /* cicili#Progn2258 */
                                0;
                              });
                            }));
                        });
                      }) );
              }
              __ciciliC_2176 ;
            }));
          counter ;
        }) +  fprintf (file , "</%s>", key ) );
  }
  int toXml_ (CStr key , DynamicType dt ) {
    return ({ /* cicili#Let2264 */
        __auto_type __h_matchbox  = dt ;
        // ----------
        ({ /* cicili#Let2268 */
          __auto_type match2267  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2267 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let2273 */
            bool __h_case_result  = (true  &&  (((match2267 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2274 */
                  (unboxed  =  (((match2267 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn2277 */
                ({ /* cicili#Let2281 */
                  typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                  // ----------
                  
                  ({ /* cicili#Let2285 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2286 */
                          (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn2289 */
                        (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                      }) : ({ /* cicili#Let2293 */
                        typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                        // ----------
                        
                        ({ /* cicili#Let2297 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn2298 */
                                (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn2301 */
                              fprintf (file , "%llu", data );
                            }) : ({ /* cicili#Let2305 */
                              typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                              // ----------
                              
                              ({ /* cicili#Let2309 */
                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn2310 */
                                      (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn2313 */
                                    fprintf (file , "%Lf", data );
                                  }) : ({ /* cicili#Let2317 */
                                    typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                    // ----------
                                    
                                    ({ /* cicili#Let2321 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn2322 */
                                            (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn2325 */
                                          ({ /* cicili#Let2329 */
                                            // ----------
                                            
                                            ({ /* cicili#Let2333 */
                                              bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn2335 */
                                                  fprintf (file , "true");
                                                }) : ({ /* cicili#Let2339 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn2343 */
                                                    fprintf (file , "false");
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let2347 */
                                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                          typeof((((unboxed -> __h_data ). List ). __h_1_mem )) xml_name ;
                                          // ----------
                                          
                                          ({ /* cicili#Let2351 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  (({ /* cicili#Progn2352 */
                                                    (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn2354 */
                                                    (xml_name  =  (((unboxed -> __h_data ). List ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2357 */
                                                (fprintf (file , "<%s>", key ) +  listToXml (key , xml_name , data ) +  fprintf (file , "</%s>", key ) );
                                              }) : ({ /* cicili#Let2361 */
                                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                                // ----------
                                                
                                                ({ /* cicili#Let2365 */
                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2366 */
                                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2369 */
                                                      objectToXml (key , data );
                                                    }) : ({ /* cicili#Let2373 */
                                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2377 */
                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2378 */
                                                              (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2381 */
                                                            fprintf (file , "DynamicType Error: %s", data );
                                                          }) : ({ /* cicili#Let2385 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn2389 */
                                                              fprintf (file , "null");
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let2393 */
                // ----------
                
                ({ /* cicili#Progn2397 */
                  fprintf (file , "nothing");
                });
              }));
          });
        });
      });
  }
  return toXml_ (root , dt );
}
int toJson_DynamicType (CFile file , DynamicType dt ) {
  int listToJson (List_DynamicType list ) {
    return ({ /* cicili#Let2404 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2408 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2409 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2411 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2414 */
              (toJson_DynamicType (file , head ) +  ({ /* cicili#Let2419 */
                  // ----------
                  
                  ({ /* cicili#Let2423 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn2425 */
                        fprintf (file , ",");
                      }) : ({ /* cicili#Let2429 */
                        // ----------
                        
                        ({ /* cicili#Progn2433 */
                          0;
                        });
                      }));
                  });
                }) +  listToJson (tail ) );
            }) : ({ /* cicili#Let2437 */
              // ----------
              
              ({ /* cicili#Progn2441 */
                fprintf (file , "]");
              });
            }));
        });
      });
  }
  int objectToJson (BTree_CStr_DynamicType tree ) {
    return ({ /* cicili#Let2445 */
        int counter  = fprintf (file , "{");
        // ----------
        traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn2449 */
            void __ciciliC_2448 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
              counter  = (counter  +  ({ /* cicili#Let2454 */
                      typeof((item . __h_0_mem )) key ;
                      typeof((item . __h_1_mem )) value ;
                      // ----------
                      
                      ({ /* cicili#Let2458 */
                        bool __h_case_result  = (true  &&  (({ /* cicili#Progn2459 */
                              (key  =  (item . __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn2461 */
                              (value  =  (item . __h_1_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn2464 */
                            (fprintf (file , "\"%s\":", key ) +  toJson_DynamicType (file , value ) +  ({ /* cicili#Let2469 */
                                // ----------
                                
                                ({ /* cicili#Let2473 */
                                  bool __h_case_result  = (true  &&  ((hasNext . __h_ctor ) ==  __h_True_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn2475 */
                                      fprintf (file , ",");
                                    }) : ({ /* cicili#Let2479 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn2483 */
                                        0;
                                      });
                                    }));
                                });
                              }) );
                          }) : ({ /* cicili#Let2487 */
                            // ----------
                            
                            ({ /* cicili#Progn2491 */
                              0;
                            });
                          }));
                      });
                    }) );
            }
            __ciciliC_2448 ;
          }));
        (counter  +  fprintf (file , "}") );
      });
  }
  return ({ /* cicili#Let2496 */
      __auto_type __h_matchbox  = dt ;
      // ----------
      ({ /* cicili#Let2500 */
        __auto_type match2499  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2499 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let2505 */
          bool __h_case_result  = (true  &&  (((match2499 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2506 */
                (unboxed  =  (((match2499 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2509 */
              ({ /* cicili#Let2513 */
                typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                // ----------
                
                ({ /* cicili#Let2517 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2518 */
                        (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2521 */
                      (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                    }) : ({ /* cicili#Let2525 */
                      typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                      // ----------
                      
                      ({ /* cicili#Let2529 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn2530 */
                              (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn2533 */
                            fprintf (file , "%llu", data );
                          }) : ({ /* cicili#Let2537 */
                            typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let2541 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn2542 */
                                    (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn2545 */
                                  fprintf (file , "%Lf", data );
                                }) : ({ /* cicili#Let2549 */
                                  typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2553 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn2554 */
                                          (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2557 */
                                        ({ /* cicili#Let2561 */
                                          // ----------
                                          
                                          ({ /* cicili#Let2565 */
                                            bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2567 */
                                                fprintf (file , "true");
                                              }) : ({ /* cicili#Let2571 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn2575 */
                                                  fprintf (file , "false");
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2579 */
                                        typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                        // ----------
                                        
                                        ({ /* cicili#Let2583 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn2584 */
                                                (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn2587 */
                                              (fprintf (file , "[") +  listToJson (data ) );
                                            }) : ({ /* cicili#Let2591 */
                                              typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                              // ----------
                                              
                                              ({ /* cicili#Let2595 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2596 */
                                                      (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn2599 */
                                                    objectToJson (data );
                                                  }) : ({ /* cicili#Let2603 */
                                                    typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let2607 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2608 */
                                                            (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn2611 */
                                                          fprintf (file , "DynamicType Error: %s", data );
                                                        }) : ({ /* cicili#Let2615 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn2619 */
                                                            fprintf (file , "null");
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      }));
                                  });
                                }));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2623 */
              // ----------
              
              ({ /* cicili#Progn2627 */
                fprintf (file , "nothing");
              });
            }));
        });
      });
    });
}
DynamicType parseJson_DynamicType (CFile file ) {
  DynamicType _parseJson (CFile file , bool hadItem ) {
    { /* cicili#Let2638 */
      int counter  = 0;
      char cursor  = '\0';
      StringBuffer_char sb  = new_StringBuffer_char (16, true );
      bool in_string  = false ;
      bool in_integer  = false ;
      bool in_float  = false ;
      bool in_symbol  = false ;
      // ----------
      while (true ) {
          (++counter );
          cursor  = fgetc (file );
          if (feof (file ) !=  0 )
            { /* cicili#Block2645 */
              cursor  = '\0';
            }
          switch (cursor ) {
              case '\0':
                fclose (file );
              case ']':
              case '}':
              case ',':
              case ':':
              case '\n':
              case '\r':
              case ' ':
              case '\t':
              case '\v':
                if (in_string )
                  sb  = put_StringBuffer_char (sb , cursor );
                else
                  { /* cicili#Block2663 */
                    if ((cursor  ==  ']' ) ||  (cursor  ==  '}' ) )
                      { /* cicili#Block2667 */
                        ungetc (cursor , file );
                      }
                    if (in_integer )
                      { /* cicili#Let2672 */
                        typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                        // ----------
                        
                        ({ /* cicili#Let2676 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2677 */
                                (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block2681 */
                              { /* cicili#Let2683 */
                                char * endptr ;
                                int64_t value ;
                                // ----------
                                sb  = new_StringBuffer_char (16, true );
                                in_integer  = false ;
                                value  = strtoll (buffer , (&endptr ), 10);
                                if ((*endptr ) ==  '\0' )
                                  return Dynamic_Integer (value );
                                else
                                  return Dynamic_Error (({ /* cicili#Let2693 */
                                      char * reason  = NULL ;
                                      // ----------
                                      asprintf ((&reason ), "Parse Json: wrong integer value: '%s' at position: %d", buffer , counter );
                                      reason ;
                                    }));
                              }
                            }
                          else
                            { /* cicili#Let2698 */
                              // ----------
                              
                              { /* cicili#Block2702 */
                                return Dynamic_Error (strdup ("Parse Json: no buffer"));
                              }
                            }
                        });
                      }
                    else
                      {
                      if (in_float )
                        { /* cicili#Let2709 */
                          typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                          // ----------
                          
                          ({ /* cicili#Let2713 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2714 */
                                  (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            if (__h_case_result )
                              { /* cicili#Block2718 */
                                { /* cicili#Let2720 */
                                  char * endptr ;
                                  long double value ;
                                  // ----------
                                  sb  = new_StringBuffer_char (16, true );
                                  in_float  = false ;
                                  value  = strtold (buffer , (&endptr ));
                                  if ((*endptr ) ==  '\0' )
                                    return Dynamic_Float (value );
                                  else
                                    return Dynamic_Error (({ /* cicili#Let2730 */
                                        char * reason  = NULL ;
                                        // ----------
                                        asprintf ((&reason ), "Parse Json: wrong floating point value: '%s' at position: %d", buffer , counter );
                                        reason ;
                                      }));
                                }
                              }
                            else
                              { /* cicili#Let2735 */
                                // ----------
                                
                                { /* cicili#Block2739 */
                                  return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                }
                              }
                          });
                        }
                      else
                        {
                        if (in_symbol )
                          { /* cicili#Let2746 */
                            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) len ;
                            // ----------
                            
                            ({ /* cicili#Let2750 */
                              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2751 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2753 */
                                      (len  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block2757 */
                                  { /* cicili#Block2759 */
                                    sb  = new_StringBuffer_char (16, true );
                                    in_symbol  = false ;
                                    if (strncmp (buffer , "true", len ) ==  0 )
                                      return Dynamic_Boolean (True ());
                                    else
                                      {
                                      if (strncmp (buffer , "false", len ) ==  0 )
                                        return Dynamic_Boolean (False ());
                                      else
                                        {
                                        if (strncmp (buffer , "null", len ) ==  0 )
                                          return Dynamic_Null ();
                                        else
                                          return Dynamic_Error (({ /* cicili#Let2775 */
                                              char * reason  = NULL ;
                                              // ----------
                                              asprintf ((&reason ), "Parse Json: unknown symbol: '%s' at position: %d", buffer , counter );
                                              reason ;
                                            }));
                                        }                                      }                                  }
                                }
                              else
                                { /* cicili#Let2780 */
                                  // ----------
                                  
                                  { /* cicili#Block2784 */
                                    return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                  }
                                }
                            });
                          }
                        else
                          {
                          if ((cursor  ==  ']' ) ||  (cursor  ==  '}' ) ||  (cursor  ==  ',' ) ||  (cursor  ==  ':' ) )
                            {
                            if (hadItem  &&  ((cursor  ==  ',' ) ||  (cursor  ==  ':' ) ) )
                              break ;
                            else
                              { /* cicili#Let2793 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                
                                ({ /* cicili#Let2797 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2798 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block2802 */
                                      { /* cicili#Block2804 */
                                        sb  = put_StringBuffer_char (sb , cursor );
                                        return Dynamic_Error (({ /* cicili#Let2814 */
                                            char * reason  = NULL ;
                                            // ----------
                                            asprintf ((&reason ), "Parse Json: unmatched symbol: '%s' at position: %d", buffer , counter );
                                            reason ;
                                          }));
                                      }
                                    }
                                  else
                                    { /* cicili#Let2819 */
                                      // ----------
                                      
                                      { /* cicili#Block2823 */
                                        return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                      }
                                    }
                                });
                              }
                            }                            }                        }                      }                  }
                break ;
              case '[':
                if (in_string )
                  sb  = put_StringBuffer_char (sb , cursor );
                else
                  { /* cicili#Let2833 */
                    List_DynamicType stack  = Nil_DynamicType ();
                    // ----------
                    while (true ) {
                        { /* cicili#Let2838 */
                          DynamicType dt_item  = _parseJson (file , true );
                          // ----------
                          ({ /* cicili#Let2841 */
                            __auto_type __h_matchbox  = dt_item ;
                            // ----------
                            { /* cicili#Let2845 */
                              __auto_type match2844  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match2844 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              
                              ({ /* cicili#Let2850 */
                                bool __h_case_result  = (true  &&  (((match2844 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2851 */
                                      (unboxed  =  (((match2844 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block2855 */
                                    { /* cicili#Let2859 */
                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) reason ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2863 */
                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2864 */
                                              (reason  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block2868 */
                                            if (strncmp (reason , "Parse Json: unmatched symbol", 28) ==  0 )
                                              { /* cicili#Let2871 */
                                                char sym  = (*(reason  +  31 ));
                                                // ----------
                                                if (sym  ==  ']' )
                                                  { /* cicili#Block2874 */
                                                    fgetc (file );
                                                    return Dynamic_List (reverse_List_DynamicType (stack ), "item");
                                                  }
                                                else
                                                  return dt_item ;
                                              }
                                            else
                                              return dt_item ;
                                          }
                                        else
                                          { /* cicili#Let2883 */
                                            // ----------
                                            
                                            { /* cicili#Block2887 */
                                              { /* cicili#Let2889 */
                                                char end  = fgetc (file );
                                                // ----------
                                                stack  = Cons_DynamicType (dt_item , stack );
                                                if (cursor  ==  ']' )
                                                  return Dynamic_List (reverse_List_DynamicType (stack ), "item");
                                                else
                                                  { /* cicili#Block2896 */
                                                    ungetc (end , file );
                                                  }
                                              }
                                            }
                                          }
                                      });
                                    }
                                  }
                                else
                                  { /* cicili#Let2901 */
                                    // ----------
                                    
                                    ({ /* cicili#Let2905 */
                                      bool __h_case_result  = (true  &&  ((match2844 . __h_ctor ) ==  __h_Nothing_t  ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block2908 */
                                          return Dynamic_Error (strdup ("Parse Json: null pointer"));
                                        }
                                    });
                                  }
                              });
                            }
                          });
                        }
                    }
                  }
                break ;
              case '{':
                if (in_string )
                  sb  = put_StringBuffer_char (sb , cursor );
                else
                  { /* cicili#Let2918 */
                    int counter  = 0;
                    List_CStr stackKeys  = Nil_CStr ();
                    List_DynamicType stackVals  = Nil_DynamicType ();
                    // ----------
                    while (true ) {
                        (++counter );
                        { /* cicili#Let2925 */
                          DynamicType dt_item  = _parseJson (file , true );
                          // ----------
                          ({ /* cicili#Let2928 */
                            __auto_type __h_matchbox  = dt_item ;
                            // ----------
                            { /* cicili#Let2932 */
                              __auto_type match2931  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match2931 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              
                              ({ /* cicili#Let2937 */
                                bool __h_case_result  = (true  &&  (((match2931 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2938 */
                                      (unboxed  =  (((match2931 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block2942 */
                                    { /* cicili#Let2946 */
                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) reason ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2950 */
                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2951 */
                                              (reason  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block2955 */
                                            if (strncmp (reason , "Parse Json: unmatched symbol", 28) ==  0 )
                                              { /* cicili#Let2958 */
                                                char sym  = (*(reason  +  31 ));
                                                // ----------
                                                if (sym  ==  '}' )
                                                  { /* cicili#Block2961 */
                                                    fgetc (file );
                                                    return ({ /* cicili#Let2965 */
                                                        __auto_type match2964  = fromLists_BTree_CStr_DynamicType (reverse_List_CStr (stackKeys ), reverse_List_DynamicType (stackVals ));
                                                        typeof((((match2964 . __h_data ). Right ). __h_0_mem )) tree ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let2972 */
                                                          bool __h_case_result  = (true  &&  (((match2964 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn2973 */
                                                                (tree  =  (((match2964 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn2976 */
                                                              Dynamic_Object (tree );
                                                            }) : ({ /* cicili#Let2981 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn2985 */
                                                                ({ /* cicili#Let2989 */
                                                                  typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let2993 */
                                                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2994 */
                                                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn2997 */
                                                                        ({ /* cicili#Progn2999 */
                                                                          sb  = put_StringBuffer_char (sb , cursor );
                                                                          Dynamic_Error (({ /* cicili#Let3009 */
                                                                              char * reason  = NULL ;
                                                                              // ----------
                                                                              asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                              reason ;
                                                                            }));
                                                                        });
                                                                      }) : ({ /* cicili#Let3013 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn3017 */
                                                                          Dynamic_Error (strdup ("Parse Json: no buffer"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              });
                                                            }));
                                                        });
                                                      });
                                                  }
                                                else
                                                  return dt_item ;
                                              }
                                            else
                                              return dt_item ;
                                          }
                                        else
                                          { /* cicili#Let3025 */
                                            // ----------
                                            
                                            { /* cicili#Block3029 */
                                              { /* cicili#Let3031 */
                                                char end  = fgetc (file );
                                                // ----------
                                                if ((counter  %  2 ) ==  1 )
                                                  ({ /* cicili#Let3035 */
                                                    __auto_type __h_matchbox  = dt_item ;
                                                    // ----------
                                                    { /* cicili#Let3039 */
                                                      __auto_type match3038  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match3038 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let3044 */
                                                        bool __h_case_result  = (true  &&  (((match3038 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3045 */
                                                              (unboxed  =  (((match3038 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        if (__h_case_result )
                                                          { /* cicili#Block3049 */
                                                            { /* cicili#Let3053 */
                                                              typeof((((unboxed -> __h_data ). String ). __h_0_mem )) key ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Let3057 */
                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn3058 */
                                                                      (key  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                if (__h_case_result )
                                                                  { /* cicili#Block3062 */
                                                                    stackKeys  = Cons_CStr (toArray_List_char (((List_char)key ), '\0'), stackKeys );
                                                                  }
                                                                else
                                                                  { /* cicili#Let3069 */
                                                                    // ----------
                                                                    
                                                                    { /* cicili#Block3073 */
                                                                      return ({ /* cicili#Let3077 */
                                                                          typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                                          // ----------
                                                                          
                                                                          ({ /* cicili#Let3081 */
                                                                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3082 */
                                                                                  (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn3085 */
                                                                                ({ /* cicili#Progn3087 */
                                                                                  sb  = put_StringBuffer_char (sb , cursor );
                                                                                  Dynamic_Error (({ /* cicili#Let3097 */
                                                                                      char * reason  = NULL ;
                                                                                      // ----------
                                                                                      asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                                      reason ;
                                                                                    }));
                                                                                });
                                                                              }) : ({ /* cicili#Let3101 */
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Progn3105 */
                                                                                  Dynamic_Error (strdup ("Parse Json: no buffer"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                    }
                                                                  }
                                                              });
                                                            }
                                                          }
                                                      });
                                                    }
                                                  });
                                                else
                                                  stackVals  = Cons_DynamicType (dt_item , stackVals );
                                                if (cursor  ==  '}' )
                                                  return ({ /* cicili#Let3113 */
                                                      __auto_type match3112  = fromLists_BTree_CStr_DynamicType (reverse_List_CStr (stackKeys ), reverse_List_DynamicType (stackVals ));
                                                      typeof((((match3112 . __h_data ). Right ). __h_0_mem )) tree ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let3120 */
                                                        bool __h_case_result  = (true  &&  (((match3112 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn3121 */
                                                              (tree  =  (((match3112 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn3124 */
                                                            Dynamic_Object (tree );
                                                          }) : ({ /* cicili#Let3129 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn3133 */
                                                              ({ /* cicili#Let3137 */
                                                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let3141 */
                                                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3142 */
                                                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn3145 */
                                                                      ({ /* cicili#Progn3147 */
                                                                        sb  = put_StringBuffer_char (sb , cursor );
                                                                        Dynamic_Error (({ /* cicili#Let3157 */
                                                                            char * reason  = NULL ;
                                                                            // ----------
                                                                            asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                            reason ;
                                                                          }));
                                                                      });
                                                                    }) : ({ /* cicili#Let3161 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn3165 */
                                                                        Dynamic_Error (strdup ("Parse Json: no buffer"));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            });
                                                          }));
                                                      });
                                                    });
                                                else
                                                  { /* cicili#Block3169 */
                                                    ungetc (end , file );
                                                  }
                                              }
                                            }
                                          }
                                      });
                                    }
                                  }
                                else
                                  { /* cicili#Let3174 */
                                    // ----------
                                    
                                    ({ /* cicili#Let3178 */
                                      bool __h_case_result  = (true  &&  ((match2931 . __h_ctor ) ==  __h_Nothing_t  ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block3181 */
                                          return Dynamic_Error (strdup ("Parse Json: null pointer"));
                                        }
                                    });
                                  }
                              });
                            }
                          });
                        }
                    }
                  }
                break ;
              case '"':
                if (in_string )
                  { /* cicili#Block3187 */
                    { /* cicili#Let3191 */
                      typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                      typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) len ;
                      // ----------
                      
                      ({ /* cicili#Let3195 */
                        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3196 */
                                (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3198 */
                                (len  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block3202 */
                            { /* cicili#Block3204 */
                              sb  = new_StringBuffer_char (16, true );
                              in_string  = false ;
                              return Dynamic_String (pure_String (buffer , len ));
                            }
                          }
                        else
                          { /* cicili#Let3211 */
                            // ----------
                            
                            { /* cicili#Block3215 */
                              return Dynamic_Error (strdup ("Parse Json: no buffer"));
                            }
                          }
                      });
                    }
                  }
                in_string  = true ;
                break ;
              case '.':
                if (in_string )
                  sb  = put_StringBuffer_char (sb , cursor );
                else
                  {
                  if (in_integer )
                    { /* cicili#Block3226 */
                      sb  = put_StringBuffer_char (sb , cursor );
                      in_integer  = false ;
                      in_float  = true ;
                    }
                  else
                    { /* cicili#Block3233 */
                      sb  = put_StringBuffer_char (sb , cursor );
                      { /* cicili#Let3241 */
                        typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                        // ----------
                        
                        ({ /* cicili#Let3245 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3246 */
                                (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block3250 */
                              return Dynamic_Error (({ /* cicili#Let3256 */
                                  char * reason  = NULL ;
                                  // ----------
                                  asprintf ((&reason ), "Parse Json: invalid floating point: '%s' at position: %d", buffer , counter );
                                  reason ;
                                }));
                            }
                          else
                            { /* cicili#Let3261 */
                              // ----------
                              
                              { /* cicili#Block3265 */
                                return Dynamic_Error (strdup ("Parse Json: no buffer"));
                              }
                            }
                        });
                      }
                    }
                  }                break ;
              default:
                if ((cursor  >=  48 ) &&  (cursor  <=  57 ) )
                  {
                  if (in_string )
                    sb  = put_StringBuffer_char (sb , cursor );
                  else
                    {
                    if (in_symbol )
                      sb  = put_StringBuffer_char (sb , cursor );
                    else
                      {
                      if (in_integer )
                        sb  = put_StringBuffer_char (sb , cursor );
                      else
                        {
                        if (in_float )
                          sb  = put_StringBuffer_char (sb , cursor );
                        else
                          { /* cicili#Block3294 */
                            sb  = put_StringBuffer_char (sb , cursor );
                            in_integer  = true ;
                          }
                        }                      }                    }                  }                else
                  {
                  if ((cursor  ==  '_' ) ||  ((cursor  >=  65 ) &&  (cursor  <=  90 ) ) ||  ((cursor  >=  97 ) &&  (cursor  <=  122 ) ) )
                    {
                    if (in_string )
                      sb  = put_StringBuffer_char (sb , cursor );
                    else
                      {
                      if ((!in_integer ) &&  (!in_float ) )
                        { /* cicili#Block3309 */
                          sb  = put_StringBuffer_char (sb , cursor );
                          in_symbol  = true ;
                        }
                      else
                        { /* cicili#Block3316 */
                          sb  = put_StringBuffer_char (sb , cursor );
                          { /* cicili#Let3324 */
                            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                            // ----------
                            
                            ({ /* cicili#Let3328 */
                              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3329 */
                                    (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block3333 */
                                  return Dynamic_Error (({ /* cicili#Let3339 */
                                      char * reason  = NULL ;
                                      // ----------
                                      asprintf ((&reason ), "Parse Json: wrong integer definition: '%s' at position: %d", buffer , counter );
                                      reason ;
                                    }));
                                }
                              else
                                { /* cicili#Let3344 */
                                  // ----------
                                  
                                  { /* cicili#Block3348 */
                                    return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                  }
                                }
                            });
                          }
                        }
                      }                    }                  else
                    {
                    if (in_string )
                      sb  = put_StringBuffer_char (sb , cursor );
                    else
                      { /* cicili#Block3358 */
                        sb  = put_StringBuffer_char (sb , cursor );
                        { /* cicili#Let3366 */
                          typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                          // ----------
                          
                          ({ /* cicili#Let3370 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3371 */
                                  (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            if (__h_case_result )
                              { /* cicili#Block3375 */
                                return Dynamic_Error (({ /* cicili#Let3381 */
                                    char * reason  = NULL ;
                                    // ----------
                                    asprintf ((&reason ), "Parse Json: invalid character outside string quotation: '%s' at position: %d", buffer , counter );
                                    reason ;
                                  }));
                              }
                            else
                              { /* cicili#Let3386 */
                                // ----------
                                
                                { /* cicili#Block3390 */
                                  return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                }
                              }
                          });
                        }
                      }
                    }                  }                break ;
          }
          if (cursor  ==  '\0' )
            { /* cicili#Block3395 */
              return Dynamic_Error (strdup ("Parse Json: EOF"));
            }
      }
    }
    return Dynamic_Error (strdup ("Parse Json: nothing to read"));
  }
  return _parseJson (file , false );
}
void free_DynamicType_x (DynamicType_x * this_ptr ) {
  { /* cicili#Let3401 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3407 */
      typeof((((this -> __h_data ). String ). __h_0_mem )) data ;
      // ----------
      
      ({ /* cicili#Let3411 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn3412 */
              (data  =  (((this -> __h_data ). String ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3416 */
            free_String ((&data ));
          }
        else
          { /* cicili#Let3421 */
            typeof((((this -> __h_data ). List ). __h_0_mem )) data ;
            // ----------
            
            ({ /* cicili#Let3425 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn3426 */
                    (data  =  (((this -> __h_data ). List ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3430 */
                  free_List_DynamicType ((&data ));
                }
              else
                { /* cicili#Let3436 */
                  typeof((((this -> __h_data ). Object ). __h_0_mem )) data ;
                  // ----------
                  
                  ({ /* cicili#Let3440 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn3441 */
                          (data  =  (((this -> __h_data ). Object ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block3445 */
                        free_BTree_CStr_DynamicType ((&data ));
                      }
                    else
                      { /* cicili#Let3451 */
                        typeof((((this -> __h_data ). Error ). __h_0_mem )) data ;
                        // ----------
                        
                        ({ /* cicili#Let3455 */
                          bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn3456 */
                                (data  =  (((this -> __h_data ). Error ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block3460 */
                              free (data );
                            }
                          else
                            { /* cicili#Let3465 */
                              typeof((((this -> __h_data ). Thunk ). __h_0_mem )) args ;
                              // ----------
                              
                              ({ /* cicili#Let3469 */
                                bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Thunk_t  ) &&  ({ /* cicili#Progn3470 */
                                      (args  =  (((this -> __h_data ). Thunk ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block3474 */
                                    free_Box_DynamicType ((&args ));
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
    free (this );
  }
}
DynamicType__H_Table * const get_DynamicType__H_Table () {
  static DynamicType__H_Table table  = { free_DynamicType_x , show_DynamicType , force_DynamicType , search_DynamicType , toXml_DynamicType , toJson_DynamicType , parseJson_DynamicType };
  return (&table );
}
DynamicType Dynamic_String (String data ) {
  { /* cicili#Let3484 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_String_t , .__h_data.String = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Integer (int64_t data ) {
  { /* cicili#Let3491 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Integer_t , .__h_data.Integer = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Float (long double data ) {
  { /* cicili#Let3498 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Float_t , .__h_data.Float = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Boolean (Bool data ) {
  { /* cicili#Let3505 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Boolean_t , .__h_data.Boolean = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_List (List_DynamicType data , CStr xml_name ) {
  { /* cicili#Let3512 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_List_t , .__h_data.List = { data , xml_name }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Object (BTree_CStr_DynamicType data ) {
  { /* cicili#Let3520 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Object_t , .__h_data.Object = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Null () {
  { /* cicili#Let3528 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Null_t });
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Error (CStr reason ) {
  { /* cicili#Let3535 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Error_t , .__h_data.Error = { reason }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Thunk (DynamicType args , DynamicType (*fptr) (DynamicType params )) {
  { /* cicili#Let3542 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h___t , .__h_data._ = { args , fptr }});
    return new_Box_DynamicType (instance );
  }
}
#endif /* __DynamicType__H_IMPL__ */ 
#ifndef __Maybe_DynamicType__H_IMPL__
#define __Maybe_DynamicType__H_IMPL__
void free_Maybe_DynamicType (Maybe_DynamicType * this ) {
}
const Maybe_DynamicType__H_Table * const get_Maybe_DynamicType__H_Table () {
  static const Maybe_DynamicType__H_Table table  = { free_Maybe_DynamicType };
  return (&table );
}
Maybe_DynamicType Just_DynamicType (DynamicType value ) {
  { /* cicili#Let3563 */
    Maybe_DynamicType instance  = ((Maybe_DynamicType){ get_Maybe_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_DynamicType Nothing_DynamicType () {
  { /* cicili#Let3568 */
    Maybe_DynamicType instance  = ((Maybe_DynamicType){ get_Maybe_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_DynamicType__H_IMPL__ */ 
#ifndef __List_DynamicType__H_IMPL__
#define __List_DynamicType__H_IMPL__
DynamicType * toArray_List_DynamicType (List_DynamicType list , DynamicType term ) {
  DynamicType * array (List_DynamicType list , int count ) {
    return ({ /* cicili#Let3578 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3582 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3583 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3585 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3588 */
              ({ /* cicili#Let3590 */
                DynamicType * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3594 */
              // ----------
              
              ({ /* cicili#Progn3598 */
                ({ /* cicili#Let3600 */
                  DynamicType * arr  = calloc (count , sizeof(DynamicType));
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
List_DynamicType wrap_List_DynamicType (const DynamicType item ) {
  return Cons_DynamicType (item , Nil_DynamicType ());
}
List_DynamicType pure_List_DynamicType (const DynamicType * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_DynamicType () : ({ /* cicili#Let3611 */
        DynamicType item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_DynamicType () : Cons_DynamicType (item , pure_List_DynamicType ((++buf ), (--len ))));
      }));
}
int show_List_DynamicType (CFile file , List_DynamicType list ) {
  return ({ /* cicili#Let3621 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3625 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3626 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3628 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3631 */
            (({ /* cicili#Let3635 */
                // ----------
                
                ({ /* cicili#Let3639 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3641 */
                      (show_DynamicType (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3651 */
                      // ----------
                      
                      ({ /* cicili#Progn3655 */
                        show_DynamicType (file , head );
                      });
                    }));
                });
              }) +  show_List_DynamicType (file , tail ) );
          }) : ({ /* cicili#Let3666 */
            // ----------
            
            ({ /* cicili#Progn3670 */
              0;
            });
          }));
      });
    });
}
List_DynamicType copy_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let3676 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3680 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3681 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3683 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3686 */
            Cons_DynamicType (head , copy_List_DynamicType (tail ));
          }) : ({ /* cicili#Let3692 */
            // ----------
            
            ({ /* cicili#Progn3696 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType replaceAt_List_DynamicType (List_DynamicType list , DynamicType item , int index ) {
  return ({ /* cicili#Let3703 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3707 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3708 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3710 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3713 */
            Cons_DynamicType (head , replaceAt_List_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3719 */
            // ----------
            
            ({ /* cicili#Progn3723 */
              ({ /* cicili#Let3727 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3731 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3732 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3735 */
                      Cons_DynamicType (item , copy_List_DynamicType (taill ));
                    }) : ({ /* cicili#Let3741 */
                      // ----------
                      
                      ({ /* cicili#Progn3745 */
                        Nil_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_DynamicType deleteAt_List_DynamicType (List_DynamicType list , int index ) {
  return ({ /* cicili#Let3752 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3756 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3757 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3759 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3762 */
            Cons_DynamicType (head , deleteAt_List_DynamicType (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3768 */
            // ----------
            
            ({ /* cicili#Progn3772 */
              ({ /* cicili#Let3776 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3780 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3781 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3784 */
                      copy_List_DynamicType (taill );
                    }) : ({ /* cicili#Let3789 */
                      // ----------
                      
                      ({ /* cicili#Progn3793 */
                        Nil_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_DynamicType insertAt_List_DynamicType (List_DynamicType llist , DynamicType item , int index ) {
  return ({ /* cicili#Let3800 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3804 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3805 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3807 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3810 */
            Cons_DynamicType (head , insertAt_List_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3816 */
            // ----------
            
            ({ /* cicili#Progn3820 */
              Cons_DynamicType (item , copy_List_DynamicType (llist ));
            });
          }));
      });
    });
}
List_DynamicType replace_List_DynamicType (List_DynamicType list , DynamicType item , List_DynamicType aimed ) {
  return ({ /* cicili#Let3828 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3832 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3833 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3835 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3838 */
            Cons_DynamicType (head , replace_List_DynamicType (tail , item , aimed ));
          }) : ({ /* cicili#Let3844 */
            // ----------
            
            ({ /* cicili#Progn3848 */
              ({ /* cicili#Let3852 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3856 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3857 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3860 */
                      Cons_DynamicType (item , copy_List_DynamicType (taill ));
                    }) : ({ /* cicili#Let3866 */
                      // ----------
                      
                      ({ /* cicili#Progn3870 */
                        Nil_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_DynamicType delete_List_DynamicType (List_DynamicType list , List_DynamicType aimed ) {
  return ({ /* cicili#Let3877 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3881 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3882 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3884 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3887 */
            Cons_DynamicType (head , delete_List_DynamicType (tail , aimed ));
          }) : ({ /* cicili#Let3893 */
            // ----------
            
            ({ /* cicili#Progn3897 */
              ({ /* cicili#Let3901 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3905 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3906 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3909 */
                      copy_List_DynamicType (taill );
                    }) : ({ /* cicili#Let3914 */
                      // ----------
                      
                      ({ /* cicili#Progn3918 */
                        Nil_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_DynamicType insert_List_DynamicType (List_DynamicType llist , DynamicType item , List_DynamicType rlist ) {
  return ({ /* cicili#Let3925 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3929 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3930 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3932 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3935 */
            Cons_DynamicType (head , insert_List_DynamicType (tail , item , rlist ));
          }) : ({ /* cicili#Let3941 */
            // ----------
            
            ({ /* cicili#Progn3945 */
              Cons_DynamicType (item , copy_List_DynamicType (rlist ));
            });
          }));
      });
    });
}
List_DynamicType reverse_List_DynamicType (List_DynamicType list ) {
  List_DynamicType _reverse (List_DynamicType list , List_DynamicType rlist ) {
    return ({ /* cicili#Let3954 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3958 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3959 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3961 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3964 */
              _reverse (tail , Cons_DynamicType (head , rlist ));
            }) : ({ /* cicili#Let3969 */
              // ----------
              
              ({ /* cicili#Progn3973 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3977 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3981 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3982 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3984 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3987 */
            _reverse (tail , Cons_DynamicType (head , Nil_DynamicType ()));
          }) : ({ /* cicili#Let3993 */
            // ----------
            
            ({ /* cicili#Progn3997 */
              list ;
            });
          }));
      });
    });
}
List_DynamicType append_List_DynamicType (List_DynamicType llist , List_DynamicType rlist ) {
  return ({ /* cicili#Let4003 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4007 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4008 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4010 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4013 */
            Cons_DynamicType (head , append_List_DynamicType (tail , rlist ));
          }) : ({ /* cicili#Let4019 */
            // ----------
            
            ({ /* cicili#Progn4023 */
              copy_List_DynamicType (rlist );
            });
          }));
      });
    });
}
List_DynamicType push_List_DynamicType (DynamicType item , List_DynamicType list ) {
  return Cons_DynamicType (item , copy_List_DynamicType (list ));
}
List_DynamicType take_List_DynamicType (int len , List_DynamicType list ) {
  return (((len  <=  0 )) ? Nil_DynamicType () : ({ /* cicili#Let4036 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4040 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4041 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4043 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4046 */
              Cons_DynamicType (head , take_List_DynamicType ((--len ), tail ));
            }) : ({ /* cicili#Let4052 */
              // ----------
              
              ({ /* cicili#Progn4056 */
                Nil_DynamicType ();
              });
            }));
        });
      }));
}
List_DynamicType last_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4063 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4067 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4068 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4071 */
            ({ /* cicili#Let4075 */
              // ----------
              
              ({ /* cicili#Let4079 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn4081 */
                    copy_List_DynamicType (list );
                  }) : ({ /* cicili#Let4086 */
                    // ----------
                    
                    ({ /* cicili#Progn4090 */
                      last_List_DynamicType (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let4095 */
            // ----------
            
            ({ /* cicili#Progn4099 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType init_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4107 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4111 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4112 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4114 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4117 */
            Cons_DynamicType (head , init_List_DynamicType (tail ));
          }) : ({ /* cicili#Let4123 */
            // ----------
            
            ({ /* cicili#Progn4127 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
int hasLen_List_DynamicType (List_DynamicType list , int desired ) {
  return ({ /* cicili#Let4134 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4138 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4139 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4142 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_DynamicType (tail , (--desired )) ));
          }) : ({ /* cicili#Let4148 */
            // ----------
            
            ({ /* cicili#Progn4152 */
              0;
            });
          }));
      });
    });
}
int len_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4158 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4162 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4163 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4166 */
            (1 +  len_List_DynamicType (tail ) );
          }) : ({ /* cicili#Let4171 */
            // ----------
            
            ({ /* cicili#Progn4175 */
              0;
            });
          }));
      });
    });
}
List_DynamicType tail_List_DynamicType (List_DynamicType list ) {
  return drop_List_DynamicType (1, list );
}
List_DynamicType drop_List_DynamicType (int len , List_DynamicType list ) {
  return (((len  <=  0 )) ? copy_List_DynamicType (list ) : ({ /* cicili#Let4186 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4190 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4191 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4194 */
              drop_List_DynamicType ((--len ), tail );
            }) : ({ /* cicili#Let4199 */
              // ----------
              
              ({ /* cicili#Progn4203 */
                Nil_DynamicType ();
              });
            }));
        });
      }));
}
Maybe_DynamicType head_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4211 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let4215 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4216 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4219 */
            Just_DynamicType (head );
          }) : ({ /* cicili#Let4224 */
            // ----------
            
            ({ /* cicili#Progn4228 */
              Nothing_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType nthcdr_List_DynamicType (int index , List_DynamicType list ) {
  return ({ /* cicili#Let4235 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4239 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4240 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4243 */
            nthcdr_List_DynamicType ((--index ), tail );
          }) : ({ /* cicili#Let4248 */
            // ----------
            
            ({ /* cicili#Progn4252 */
              list ;
            });
          }));
      });
    });
}
Maybe_DynamicType nth_List_DynamicType (int index , List_DynamicType list ) {
  return ({ /* cicili#Let4259 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4263 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4264 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4266 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4269 */
            (((index  ==  0 )) ? Just_DynamicType (head ) : (((index  <  0 )) ? Nothing_DynamicType () : nth_List_DynamicType ((--index ), tail )));
          }) : ({ /* cicili#Let4278 */
            // ----------
            
            ({ /* cicili#Progn4282 */
              Nothing_DynamicType ();
            });
          }));
      });
    });
}
void free_List_DynamicType (List_DynamicType * this_ptr ) {
  { /* cicili#Let4287 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4291 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4295 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4296 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4300 */
            { /* cicili#Block4302 */
              free (this );
              free_List_DynamicType ((&tail ));
            }
          }
        else
          { /* cicili#Let4310 */
            // ----------
            
            ({ /* cicili#Let4314 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4317 */
                  { /* cicili#Block4319 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_DynamicType__H_Table * const get_List_DynamicType__H_Table () {
  static List_DynamicType__H_Table table  = { free_List_DynamicType , toArray_List_DynamicType , wrap_List_DynamicType , pure_List_DynamicType , show_List_DynamicType , copy_List_DynamicType , replaceAt_List_DynamicType , deleteAt_List_DynamicType , insertAt_List_DynamicType , replace_List_DynamicType , delete_List_DynamicType , insert_List_DynamicType , reverse_List_DynamicType , append_List_DynamicType , push_List_DynamicType , take_List_DynamicType , last_List_DynamicType , init_List_DynamicType , hasLen_List_DynamicType , len_List_DynamicType , tail_List_DynamicType , drop_List_DynamicType , head_List_DynamicType , nthcdr_List_DynamicType , nth_List_DynamicType };
  return (&table );
}
List_DynamicType Cons_DynamicType (DynamicType head , List_DynamicType tail ) {
  { /* cicili#Let4330 */
    List_DynamicType instance  = malloc (sizeof(class_List_DynamicType));
    // ----------
    (*instance ) = ((class_List_DynamicType){ get_List_DynamicType__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_DynamicType Nil_DynamicType () {
  { /* cicili#Let4336 */
    List_DynamicType instance  = malloc (sizeof(class_List_DynamicType));
    // ----------
    (*instance ) = ((class_List_DynamicType){ get_List_DynamicType__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_DynamicType__H_IMPL__ */ 
#ifndef __Maybe_List_DynamicType__H_IMPL__
#define __Maybe_List_DynamicType__H_IMPL__
void free_Maybe_List_DynamicType (Maybe_List_DynamicType * this ) {
}
const Maybe_List_DynamicType__H_Table * const get_Maybe_List_DynamicType__H_Table () {
  static const Maybe_List_DynamicType__H_Table table  = { free_Maybe_List_DynamicType };
  return (&table );
}
Maybe_List_DynamicType Just_List_DynamicType (List_DynamicType value ) {
  { /* cicili#Let4353 */
    Maybe_List_DynamicType instance  = ((Maybe_List_DynamicType){ get_Maybe_List_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_DynamicType Nothing_List_DynamicType () {
  { /* cicili#Let4358 */
    Maybe_List_DynamicType instance  = ((Maybe_List_DynamicType){ get_Maybe_List_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_DynamicType__H_IMPL__ */ 
static Ordering compareKey (CStr lkey , CStr rkey ) {
  return ({ /* cicili#Let4362 */
      int res  = strcmp (lkey , rkey );
      // ----------
      (((res  <  0 )) ? LT () : (((res  ==  0 )) ? EQ () : GT ()));
    });
}
#ifndef __BTree_CStr_DynamicType_Error__H_IMPL__
#define __BTree_CStr_DynamicType_Error__H_IMPL__
void show_BTree_CStr_DynamicType_Error (BTree_CStr_DynamicType_Error error ) {
  { /* cicili#Let4377 */
    // ----------
    
    ({ /* cicili#Let4381 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4384 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let4389 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          
          ({ /* cicili#Let4393 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn4394 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block4398 */
                printf ("invalid B-Tree order: %d", order );
              }
            else
              { /* cicili#Let4403 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let4407 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn4408 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block4412 */
                      { /* cicili#Block4414 */
                        printf ("unique key: ");
                        ({ /* cicili#Let4420 */
                          typeof((item . __h_0_mem )) key ;
                          typeof((item . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4424 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4425 */
                                  (key  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4427 */
                                  (value  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4430 */
                                (fprintf (stdout , "(\"%s\": ", key ) +  show_DynamicType (stdout , value ) +  fprintf (stdout , ")") );
                              }) : ({ /* cicili#Let4435 */
                                // ----------
                                
                                ({ /* cicili#Progn4439 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let4444 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      
                      ({ /* cicili#Let4448 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn4449 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block4453 */
                            { /* cicili#Block4455 */
                              printf ("key not found: ");
                              fprintf (stdout , "\"%s\"", key );
                            }
                          }
                        else
                          { /* cicili#Let4465 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            
                            ({ /* cicili#Let4469 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn4470 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn4472 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block4476 */
                                  { /* cicili#Block4478 */
                                    printf ("dead child at index: %d of item: ", index );
                                    ({ /* cicili#Let4484 */
                                      typeof((item . __h_0_mem )) key ;
                                      typeof((item . __h_1_mem )) value ;
                                      // ----------
                                      
                                      ({ /* cicili#Let4488 */
                                        bool __h_case_result  = (true  &&  (({ /* cicili#Progn4489 */
                                              (key  =  (item . __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4491 */
                                              (value  =  (item . __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn4494 */
                                            (fprintf (stdout , "(\"%s\": ", key ) +  show_DynamicType (stdout , value ) +  fprintf (stdout , ")") );
                                          }) : ({ /* cicili#Let4499 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn4503 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let4508 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  
                                  ({ /* cicili#Let4512 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn4513 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block4517 */
                                        { /* cicili#Block4519 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let4526 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        
                                        ({ /* cicili#Let4530 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn4531 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block4535 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let4540 */
                                              // ----------
                                              
                                              { /* cicili#Block4544 */
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
void free_BTree_CStr_DynamicType_Error (BTree_CStr_DynamicType_Error * this ) {
}
const BTree_CStr_DynamicType_Error__H_Table * const get_BTree_CStr_DynamicType_Error__H_Table () {
  static const BTree_CStr_DynamicType_Error__H_Table table  = { free_BTree_CStr_DynamicType_Error , show_BTree_CStr_DynamicType_Error };
  return (&table );
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_OBJECT () {
  { /* cicili#Let4556 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_ORDER (int order ) {
  { /* cicili#Let4561 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_UNIQUE_KEY (BTree_CStr_DynamicType_pair_t item ) {
  { /* cicili#Let4566 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_NOT_FOUND (CStr key ) {
  { /* cicili#Let4572 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (BTree_CStr_DynamicType_pair_t item , int index ) {
  { /* cicili#Let4577 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_BRANCH (BTree_CStr_DynamicType branch ) {
  { /* cicili#Let4583 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let4588 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h___t , .__h_data._ = { reason }});
    // ----------
    return instance ;
  }
}
#endif /* __BTree_CStr_DynamicType_Error__H_IMPL__ */ 
#ifndef __Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_IMPL__
#define __Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_IMPL__
void free_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType * this ) {
}
const Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table * const get_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table () {
  static const Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table table  = { free_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType };
  return (&table );
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType value ) {
  { /* cicili#Let4604 */
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType instance  = ((Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType){ get_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_Error error ) {
  { /* cicili#Let4609 */
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType instance  = ((Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType){ get_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Maybe_BTree_CStr_DynamicType__H_IMPL__
#define __Maybe_BTree_CStr_DynamicType__H_IMPL__
void free_Maybe_BTree_CStr_DynamicType (Maybe_BTree_CStr_DynamicType * this ) {
}
const Maybe_BTree_CStr_DynamicType__H_Table * const get_Maybe_BTree_CStr_DynamicType__H_Table () {
  static const Maybe_BTree_CStr_DynamicType__H_Table table  = { free_Maybe_BTree_CStr_DynamicType };
  return (&table );
}
Maybe_BTree_CStr_DynamicType Just_BTree_CStr_DynamicType (BTree_CStr_DynamicType value ) {
  { /* cicili#Let4625 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType () {
  { /* cicili#Let4630 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Maybe_BTree_CStr_DynamicType_pair_t__H_IMPL__
#define __Maybe_BTree_CStr_DynamicType_pair_t__H_IMPL__
void free_Maybe_BTree_CStr_DynamicType_pair_t (Maybe_BTree_CStr_DynamicType_pair_t * this ) {
}
const Maybe_BTree_CStr_DynamicType_pair_t__H_Table * const get_Maybe_BTree_CStr_DynamicType_pair_t__H_Table () {
  static const Maybe_BTree_CStr_DynamicType_pair_t__H_Table table  = { free_Maybe_BTree_CStr_DynamicType_pair_t };
  return (&table );
}
Maybe_BTree_CStr_DynamicType_pair_t Just_BTree_CStr_DynamicType_pair_t (BTree_CStr_DynamicType_pair_t value ) {
  { /* cicili#Let4648 */
    Maybe_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_BTree_CStr_DynamicType_pair_t){ get_Maybe_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType_pair_t Nothing_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let4653 */
    Maybe_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_BTree_CStr_DynamicType_pair_t){ get_Maybe_BTree_CStr_DynamicType_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_DynamicType_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_CStr_DynamicType_pair_t__H_IMPL__
#define __List_BTree_CStr_DynamicType_pair_t__H_IMPL__
BTree_CStr_DynamicType_pair_t * toArray_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t term ) {
  BTree_CStr_DynamicType_pair_t * array (List_BTree_CStr_DynamicType_pair_t list , int count ) {
    return ({ /* cicili#Let4663 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4667 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4668 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4670 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4673 */
              ({ /* cicili#Let4675 */
                BTree_CStr_DynamicType_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let4679 */
              // ----------
              
              ({ /* cicili#Progn4683 */
                ({ /* cicili#Let4685 */
                  BTree_CStr_DynamicType_pair_t * arr  = calloc (count , sizeof(BTree_CStr_DynamicType_pair_t));
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
List_BTree_CStr_DynamicType_pair_t wrap_List_BTree_CStr_DynamicType_pair_t (const BTree_CStr_DynamicType_pair_t item ) {
  return Cons_BTree_CStr_DynamicType_pair_t (item , Nil_BTree_CStr_DynamicType_pair_t ());
}
List_BTree_CStr_DynamicType_pair_t pure_List_BTree_CStr_DynamicType_pair_t (const BTree_CStr_DynamicType_pair_t * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_BTree_CStr_DynamicType_pair_t () : ({ /* cicili#Let4696 */
        BTree_CStr_DynamicType_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_CStr_DynamicType_pair_t () : Cons_BTree_CStr_DynamicType_pair_t (item , pure_List_BTree_CStr_DynamicType_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_CStr_DynamicType_pair_t (CFile file , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let4706 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4710 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4711 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4713 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4716 */
            (({ /* cicili#Let4720 */
                // ----------
                
                ({ /* cicili#Let4724 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4726 */
                      (({ /* cicili#Let4732 */
                          typeof((head . __h_0_mem )) key ;
                          typeof((head . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4736 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4737 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4739 */
                                  (value  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4742 */
                                (fprintf (file , "(\"%s\": ", key ) +  show_DynamicType (file , value ) +  fprintf (file , ")") );
                              }) : ({ /* cicili#Let4747 */
                                // ----------
                                
                                ({ /* cicili#Progn4751 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let4755 */
                      // ----------
                      
                      ({ /* cicili#Progn4759 */
                        ({ /* cicili#Let4765 */
                          typeof((head . __h_0_mem )) key ;
                          typeof((head . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4769 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4770 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4772 */
                                  (value  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4775 */
                                (fprintf (file , "(\"%s\": ", key ) +  show_DynamicType (file , value ) +  fprintf (file , ")") );
                              }) : ({ /* cicili#Let4780 */
                                // ----------
                                
                                ({ /* cicili#Progn4784 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_CStr_DynamicType_pair_t (file , tail ) );
          }) : ({ /* cicili#Let4789 */
            // ----------
            
            ({ /* cicili#Progn4793 */
              0;
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t copy_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let4799 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4803 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4804 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4806 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4809 */
            Cons_BTree_CStr_DynamicType_pair_t (head , copy_List_BTree_CStr_DynamicType_pair_t (tail ));
          }) : ({ /* cicili#Let4815 */
            // ----------
            
            ({ /* cicili#Progn4819 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t replaceAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , int index ) {
  return ({ /* cicili#Let4826 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4830 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4831 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4833 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4836 */
            Cons_BTree_CStr_DynamicType_pair_t (head , replaceAt_List_BTree_CStr_DynamicType_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let4842 */
            // ----------
            
            ({ /* cicili#Progn4846 */
              ({ /* cicili#Let4850 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4854 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4855 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4858 */
                      Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (taill ));
                    }) : ({ /* cicili#Let4864 */
                      // ----------
                      
                      ({ /* cicili#Progn4868 */
                        Nil_BTree_CStr_DynamicType_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t deleteAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , int index ) {
  return ({ /* cicili#Let4875 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4879 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4880 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4882 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4885 */
            Cons_BTree_CStr_DynamicType_pair_t (head , deleteAt_List_BTree_CStr_DynamicType_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let4891 */
            // ----------
            
            ({ /* cicili#Progn4895 */
              ({ /* cicili#Let4899 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4903 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4904 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4907 */
                      copy_List_BTree_CStr_DynamicType_pair_t (taill );
                    }) : ({ /* cicili#Let4912 */
                      // ----------
                      
                      ({ /* cicili#Progn4916 */
                        Nil_BTree_CStr_DynamicType_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t insertAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , BTree_CStr_DynamicType_pair_t item , int index ) {
  return ({ /* cicili#Let4923 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4927 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4928 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4930 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4933 */
            Cons_BTree_CStr_DynamicType_pair_t (head , insertAt_List_BTree_CStr_DynamicType_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let4939 */
            // ----------
            
            ({ /* cicili#Progn4943 */
              Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (llist ));
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t replace_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t aimed ) {
  return ({ /* cicili#Let4951 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4955 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4956 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4958 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4961 */
            Cons_BTree_CStr_DynamicType_pair_t (head , replace_List_BTree_CStr_DynamicType_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let4967 */
            // ----------
            
            ({ /* cicili#Progn4971 */
              ({ /* cicili#Let4975 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4979 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4980 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4983 */
                      Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (taill ));
                    }) : ({ /* cicili#Let4989 */
                      // ----------
                      
                      ({ /* cicili#Progn4993 */
                        Nil_BTree_CStr_DynamicType_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t delete_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , List_BTree_CStr_DynamicType_pair_t aimed ) {
  return ({ /* cicili#Let5000 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5004 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5005 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5007 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5010 */
            Cons_BTree_CStr_DynamicType_pair_t (head , delete_List_BTree_CStr_DynamicType_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let5016 */
            // ----------
            
            ({ /* cicili#Progn5020 */
              ({ /* cicili#Let5024 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5028 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5029 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5032 */
                      copy_List_BTree_CStr_DynamicType_pair_t (taill );
                    }) : ({ /* cicili#Let5037 */
                      // ----------
                      
                      ({ /* cicili#Progn5041 */
                        Nil_BTree_CStr_DynamicType_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t insert_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t rlist ) {
  return ({ /* cicili#Let5048 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5052 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5053 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5055 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5058 */
            Cons_BTree_CStr_DynamicType_pair_t (head , insert_List_BTree_CStr_DynamicType_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let5064 */
            // ----------
            
            ({ /* cicili#Progn5068 */
              Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t reverse_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  List_BTree_CStr_DynamicType_pair_t _reverse (List_BTree_CStr_DynamicType_pair_t list , List_BTree_CStr_DynamicType_pair_t rlist ) {
    return ({ /* cicili#Let5077 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5081 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5082 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5084 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5087 */
              _reverse (tail , Cons_BTree_CStr_DynamicType_pair_t (head , rlist ));
            }) : ({ /* cicili#Let5092 */
              // ----------
              
              ({ /* cicili#Progn5096 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let5100 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5104 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5105 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5107 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5110 */
            _reverse (tail , Cons_BTree_CStr_DynamicType_pair_t (head , Nil_BTree_CStr_DynamicType_pair_t ()));
          }) : ({ /* cicili#Let5116 */
            // ----------
            
            ({ /* cicili#Progn5120 */
              list ;
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t append_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , List_BTree_CStr_DynamicType_pair_t rlist ) {
  return ({ /* cicili#Let5126 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5130 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5131 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5133 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5136 */
            Cons_BTree_CStr_DynamicType_pair_t (head , append_List_BTree_CStr_DynamicType_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let5142 */
            // ----------
            
            ({ /* cicili#Progn5146 */
              copy_List_BTree_CStr_DynamicType_pair_t (rlist );
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t push_List_BTree_CStr_DynamicType_pair_t (BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t list ) {
  return Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (list ));
}
List_BTree_CStr_DynamicType_pair_t take_List_BTree_CStr_DynamicType_pair_t (int len , List_BTree_CStr_DynamicType_pair_t list ) {
  return (((len  <=  0 )) ? Nil_BTree_CStr_DynamicType_pair_t () : ({ /* cicili#Let5159 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5163 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5164 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5166 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5169 */
              Cons_BTree_CStr_DynamicType_pair_t (head , take_List_BTree_CStr_DynamicType_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let5175 */
              // ----------
              
              ({ /* cicili#Progn5179 */
                Nil_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_CStr_DynamicType_pair_t last_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5186 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5190 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5191 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5194 */
            ({ /* cicili#Let5198 */
              // ----------
              
              ({ /* cicili#Let5202 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5204 */
                    copy_List_BTree_CStr_DynamicType_pair_t (list );
                  }) : ({ /* cicili#Let5209 */
                    // ----------
                    
                    ({ /* cicili#Progn5213 */
                      last_List_BTree_CStr_DynamicType_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5218 */
            // ----------
            
            ({ /* cicili#Progn5222 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t init_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5230 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5234 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5235 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5237 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5240 */
            Cons_BTree_CStr_DynamicType_pair_t (head , init_List_BTree_CStr_DynamicType_pair_t (tail ));
          }) : ({ /* cicili#Let5246 */
            // ----------
            
            ({ /* cicili#Progn5250 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , int desired ) {
  return ({ /* cicili#Let5257 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5261 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5262 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5265 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_CStr_DynamicType_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let5271 */
            // ----------
            
            ({ /* cicili#Progn5275 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5281 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5285 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5286 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5289 */
            (1 +  len_List_BTree_CStr_DynamicType_pair_t (tail ) );
          }) : ({ /* cicili#Let5294 */
            // ----------
            
            ({ /* cicili#Progn5298 */
              0;
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t tail_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return drop_List_BTree_CStr_DynamicType_pair_t (1, list );
}
List_BTree_CStr_DynamicType_pair_t drop_List_BTree_CStr_DynamicType_pair_t (int len , List_BTree_CStr_DynamicType_pair_t list ) {
  return (((len  <=  0 )) ? copy_List_BTree_CStr_DynamicType_pair_t (list ) : ({ /* cicili#Let5309 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5313 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5314 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5317 */
              drop_List_BTree_CStr_DynamicType_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let5322 */
              // ----------
              
              ({ /* cicili#Progn5326 */
                Nil_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_CStr_DynamicType_pair_t head_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5334 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let5338 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5339 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5342 */
            Just_BTree_CStr_DynamicType_pair_t (head );
          }) : ({ /* cicili#Let5347 */
            // ----------
            
            ({ /* cicili#Progn5351 */
              Nothing_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t nthcdr_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5358 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5362 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5363 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5366 */
            nthcdr_List_BTree_CStr_DynamicType_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let5371 */
            // ----------
            
            ({ /* cicili#Progn5375 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType_pair_t nth_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5382 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5386 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5387 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5389 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5392 */
            (((index  ==  0 )) ? Just_BTree_CStr_DynamicType_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_CStr_DynamicType_pair_t () : nth_List_BTree_CStr_DynamicType_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let5401 */
            // ----------
            
            ({ /* cicili#Progn5405 */
              Nothing_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t * this_ptr ) {
  { /* cicili#Let5410 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let5414 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5418 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5419 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block5423 */
            { /* cicili#Block5425 */
              free (this );
              free_List_BTree_CStr_DynamicType_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let5433 */
            // ----------
            
            ({ /* cicili#Let5437 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block5440 */
                  { /* cicili#Block5442 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_BTree_CStr_DynamicType_pair_t__H_Table * const get_List_BTree_CStr_DynamicType_pair_t__H_Table () {
  static List_BTree_CStr_DynamicType_pair_t__H_Table table  = { free_List_BTree_CStr_DynamicType_pair_t , toArray_List_BTree_CStr_DynamicType_pair_t , wrap_List_BTree_CStr_DynamicType_pair_t , pure_List_BTree_CStr_DynamicType_pair_t , show_List_BTree_CStr_DynamicType_pair_t , copy_List_BTree_CStr_DynamicType_pair_t , replaceAt_List_BTree_CStr_DynamicType_pair_t , deleteAt_List_BTree_CStr_DynamicType_pair_t , insertAt_List_BTree_CStr_DynamicType_pair_t , replace_List_BTree_CStr_DynamicType_pair_t , delete_List_BTree_CStr_DynamicType_pair_t , insert_List_BTree_CStr_DynamicType_pair_t , reverse_List_BTree_CStr_DynamicType_pair_t , append_List_BTree_CStr_DynamicType_pair_t , push_List_BTree_CStr_DynamicType_pair_t , take_List_BTree_CStr_DynamicType_pair_t , last_List_BTree_CStr_DynamicType_pair_t , init_List_BTree_CStr_DynamicType_pair_t , hasLen_List_BTree_CStr_DynamicType_pair_t , len_List_BTree_CStr_DynamicType_pair_t , tail_List_BTree_CStr_DynamicType_pair_t , drop_List_BTree_CStr_DynamicType_pair_t , head_List_BTree_CStr_DynamicType_pair_t , nthcdr_List_BTree_CStr_DynamicType_pair_t , nth_List_BTree_CStr_DynamicType_pair_t };
  return (&table );
}
List_BTree_CStr_DynamicType_pair_t Cons_BTree_CStr_DynamicType_pair_t (BTree_CStr_DynamicType_pair_t head , List_BTree_CStr_DynamicType_pair_t tail ) {
  { /* cicili#Let5453 */
    List_BTree_CStr_DynamicType_pair_t instance  = malloc (sizeof(class_List_BTree_CStr_DynamicType_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_CStr_DynamicType_pair_t){ get_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_CStr_DynamicType_pair_t Nil_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let5459 */
    List_BTree_CStr_DynamicType_pair_t instance  = malloc (sizeof(class_List_BTree_CStr_DynamicType_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_CStr_DynamicType_pair_t){ get_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_BTree_CStr_DynamicType_pair_t__H_IMPL__ */ 
#ifndef __Maybe_List_BTree_CStr_DynamicType_pair_t__H_IMPL__
#define __Maybe_List_BTree_CStr_DynamicType_pair_t__H_IMPL__
void free_Maybe_List_BTree_CStr_DynamicType_pair_t (Maybe_List_BTree_CStr_DynamicType_pair_t * this ) {
}
const Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table * const get_Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table () {
  static const Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table table  = { free_Maybe_List_BTree_CStr_DynamicType_pair_t };
  return (&table );
}
Maybe_List_BTree_CStr_DynamicType_pair_t Just_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t value ) {
  { /* cicili#Let5476 */
    Maybe_List_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_List_BTree_CStr_DynamicType_pair_t){ get_Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_CStr_DynamicType_pair_t Nothing_List_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let5481 */
    Maybe_List_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_List_BTree_CStr_DynamicType_pair_t){ get_Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_CStr_DynamicType_pair_t__H_IMPL__ */ 
#ifndef __Maybe_BTree_CStr_DynamicType__H_IMPL__
#define __Maybe_BTree_CStr_DynamicType__H_IMPL__
void free_Maybe_BTree_CStr_DynamicType (Maybe_BTree_CStr_DynamicType * this ) {
}
const Maybe_BTree_CStr_DynamicType__H_Table * const get_Maybe_BTree_CStr_DynamicType__H_Table () {
  static const Maybe_BTree_CStr_DynamicType__H_Table table  = { free_Maybe_BTree_CStr_DynamicType };
  return (&table );
}
Maybe_BTree_CStr_DynamicType Just_BTree_CStr_DynamicType (BTree_CStr_DynamicType value ) {
  { /* cicili#Let5501 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType () {
  { /* cicili#Let5506 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Rc_BTree_CStr_DynamicType__H_IMPL__
Rc_BTree_CStr_DynamicType new_Rc_BTree_CStr_DynamicType (BTree_CStr_DynamicType pointer ) {
  return ({ /* cicili#Let5513 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_CStr_DynamicType *)malloc (sizeof(BTree_CStr_DynamicType *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_CStr_DynamicType (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_CStr_DynamicType clone_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc ) {
  return ({ /* cicili#Let5522 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5526 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5527 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5529 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5531 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5534 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn5537 */
                (++(*count ));
                __h_Hold_BTree_CStr_DynamicType (pointer , count , address );
              }) : Gone_BTree_CStr_DynamicType ());
          }) : ({ /* cicili#Let5543 */
            // ----------
            
            ({ /* cicili#Progn5547 */
              Gone_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType take_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this ) {
  return ({ /* cicili#Let5555 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5559 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5560 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5562 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5564 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5567 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let5571 */
                __auto_type result  = Just_BTree_CStr_DynamicType ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block5577 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BTree_CStr_DynamicType ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_BTree_CStr_DynamicType ());
          }) : ({ /* cicili#Let5584 */
            // ----------
            
            ({ /* cicili#Progn5588 */
              Nothing_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType get_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc ) {
  return ({ /* cicili#Let5596 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5600 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5601 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5603 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5605 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5608 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_CStr_DynamicType ((*pointer )) : Nothing_BTree_CStr_DynamicType ());
          }) : ({ /* cicili#Let5615 */
            // ----------
            
            ({ /* cicili#Progn5619 */
              Nothing_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
void free_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this ) {
  { /* cicili#Let5628 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let5632 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5633 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5635 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn5637 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block5641 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block5645 */
              if ((*count ) ==  1 )
                { /* cicili#Block5648 */
                  free_BTree_CStr_DynamicType (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_BTree_CStr_DynamicType ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let5658 */
          // ----------
          
          ({ /* cicili#Let5662 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block5665 */
              }
          });
        }
    });
  }
}
const Rc_BTree_CStr_DynamicType__H_Table * const get_Rc_BTree_CStr_DynamicType__H_Table () {
  static const Rc_BTree_CStr_DynamicType__H_Table table  = { free_Rc_BTree_CStr_DynamicType , new_Rc_BTree_CStr_DynamicType , clone_Rc_BTree_CStr_DynamicType , take_Rc_BTree_CStr_DynamicType , get_Rc_BTree_CStr_DynamicType };
  return (&table );
}
Rc_BTree_CStr_DynamicType __h_Hold_BTree_CStr_DynamicType (BTree_CStr_DynamicType * pointer , int * count , size_t address ) {
  { /* cicili#Let5676 */
    Rc_BTree_CStr_DynamicType instance  = ((Rc_BTree_CStr_DynamicType){ get_Rc_BTree_CStr_DynamicType__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_CStr_DynamicType Gone_BTree_CStr_DynamicType () {
  { /* cicili#Let5681 */
    Rc_BTree_CStr_DynamicType instance  = ((Rc_BTree_CStr_DynamicType){ get_Rc_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Maybe_Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Maybe_Rc_BTree_CStr_DynamicType__H_IMPL__
void free_Maybe_Rc_BTree_CStr_DynamicType (Maybe_Rc_BTree_CStr_DynamicType * this ) {
}
const Maybe_Rc_BTree_CStr_DynamicType__H_Table * const get_Maybe_Rc_BTree_CStr_DynamicType__H_Table () {
  static const Maybe_Rc_BTree_CStr_DynamicType__H_Table table  = { free_Maybe_Rc_BTree_CStr_DynamicType };
  return (&table );
}
Maybe_Rc_BTree_CStr_DynamicType Just_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType value ) {
  { /* cicili#Let5699 */
    Maybe_Rc_BTree_CStr_DynamicType instance  = ((Maybe_Rc_BTree_CStr_DynamicType){ get_Maybe_Rc_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_CStr_DynamicType Nothing_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let5704 */
    Maybe_Rc_BTree_CStr_DynamicType instance  = ((Maybe_Rc_BTree_CStr_DynamicType){ get_Maybe_Rc_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __List_Rc_BTree_CStr_DynamicType__H_IMPL__
#define __List_Rc_BTree_CStr_DynamicType__H_IMPL__
Rc_BTree_CStr_DynamicType * toArray_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType term ) {
  Rc_BTree_CStr_DynamicType * array (List_Rc_BTree_CStr_DynamicType list , int count ) {
    return ({ /* cicili#Let5714 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5718 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5719 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5721 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5724 */
              ({ /* cicili#Let5726 */
                Rc_BTree_CStr_DynamicType * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let5730 */
              // ----------
              
              ({ /* cicili#Progn5734 */
                ({ /* cicili#Let5736 */
                  Rc_BTree_CStr_DynamicType * arr  = calloc (count , sizeof(Rc_BTree_CStr_DynamicType));
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
List_Rc_BTree_CStr_DynamicType wrap_List_Rc_BTree_CStr_DynamicType (const Rc_BTree_CStr_DynamicType item ) {
  return Cons_Rc_BTree_CStr_DynamicType (item , Nil_Rc_BTree_CStr_DynamicType ());
}
List_Rc_BTree_CStr_DynamicType pure_List_Rc_BTree_CStr_DynamicType (const Rc_BTree_CStr_DynamicType * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_CStr_DynamicType () : ({ /* cicili#Let5747 */
        Rc_BTree_CStr_DynamicType item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_CStr_DynamicType () : Cons_Rc_BTree_CStr_DynamicType (item , pure_List_Rc_BTree_CStr_DynamicType ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_CStr_DynamicType (CFile file , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let5757 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5761 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5762 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5764 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5767 */
            (({ /* cicili#Let5771 */
                // ----------
                
                ({ /* cicili#Let5775 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5777 */
                      (({ /* cicili#Let5785 */
                          __auto_type match5784  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match5784 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let5790 */
                            bool __h_case_result  = (true  &&  (((match5784 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5791 */
                                  (child  =  (((match5784 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5794 */
                                show_BTree_CStr_DynamicType (file , child );
                              }) : ({ /* cicili#Let5799 */
                                // ----------
                                
                                ({ /* cicili#Progn5803 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let5807 */
                      // ----------
                      
                      ({ /* cicili#Progn5811 */
                        ({ /* cicili#Let5819 */
                          __auto_type match5818  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match5818 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let5824 */
                            bool __h_case_result  = (true  &&  (((match5818 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5825 */
                                  (child  =  (((match5818 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5828 */
                                show_BTree_CStr_DynamicType (file , child );
                              }) : ({ /* cicili#Let5833 */
                                // ----------
                                
                                ({ /* cicili#Progn5837 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_CStr_DynamicType (file , tail ) );
          }) : ({ /* cicili#Let5842 */
            // ----------
            
            ({ /* cicili#Progn5846 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType copy_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let5852 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5856 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5857 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5859 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5862 */
            Cons_Rc_BTree_CStr_DynamicType (head , copy_List_Rc_BTree_CStr_DynamicType (tail ));
          }) : ({ /* cicili#Let5868 */
            // ----------
            
            ({ /* cicili#Progn5872 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType replaceAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , int index ) {
  return ({ /* cicili#Let5879 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5883 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5884 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5886 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5889 */
            Cons_Rc_BTree_CStr_DynamicType (head , replaceAt_List_Rc_BTree_CStr_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let5895 */
            // ----------
            
            ({ /* cicili#Progn5899 */
              ({ /* cicili#Let5903 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5907 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5908 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5911 */
                      Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (taill ));
                    }) : ({ /* cicili#Let5917 */
                      // ----------
                      
                      ({ /* cicili#Progn5921 */
                        Nil_Rc_BTree_CStr_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType deleteAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , int index ) {
  return ({ /* cicili#Let5928 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5932 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5933 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5935 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5938 */
            Cons_Rc_BTree_CStr_DynamicType (head , deleteAt_List_Rc_BTree_CStr_DynamicType (tail , (index  -  1 )));
          }) : ({ /* cicili#Let5944 */
            // ----------
            
            ({ /* cicili#Progn5948 */
              ({ /* cicili#Let5952 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5956 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5957 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5960 */
                      copy_List_Rc_BTree_CStr_DynamicType (taill );
                    }) : ({ /* cicili#Let5965 */
                      // ----------
                      
                      ({ /* cicili#Progn5969 */
                        Nil_Rc_BTree_CStr_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType insertAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , Rc_BTree_CStr_DynamicType item , int index ) {
  return ({ /* cicili#Let5976 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5980 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5981 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5983 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5986 */
            Cons_Rc_BTree_CStr_DynamicType (head , insertAt_List_Rc_BTree_CStr_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let5992 */
            // ----------
            
            ({ /* cicili#Progn5996 */
              Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (llist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType replace_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType aimed ) {
  return ({ /* cicili#Let6004 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6008 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6009 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6011 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6014 */
            Cons_Rc_BTree_CStr_DynamicType (head , replace_List_Rc_BTree_CStr_DynamicType (tail , item , aimed ));
          }) : ({ /* cicili#Let6020 */
            // ----------
            
            ({ /* cicili#Progn6024 */
              ({ /* cicili#Let6028 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let6032 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6033 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6036 */
                      Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (taill ));
                    }) : ({ /* cicili#Let6042 */
                      // ----------
                      
                      ({ /* cicili#Progn6046 */
                        Nil_Rc_BTree_CStr_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType delete_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , List_Rc_BTree_CStr_DynamicType aimed ) {
  return ({ /* cicili#Let6053 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6057 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6058 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6060 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6063 */
            Cons_Rc_BTree_CStr_DynamicType (head , delete_List_Rc_BTree_CStr_DynamicType (tail , aimed ));
          }) : ({ /* cicili#Let6069 */
            // ----------
            
            ({ /* cicili#Progn6073 */
              ({ /* cicili#Let6077 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let6081 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6082 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6085 */
                      copy_List_Rc_BTree_CStr_DynamicType (taill );
                    }) : ({ /* cicili#Let6090 */
                      // ----------
                      
                      ({ /* cicili#Progn6094 */
                        Nil_Rc_BTree_CStr_DynamicType ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType insert_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType rlist ) {
  return ({ /* cicili#Let6101 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6105 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6106 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6108 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6111 */
            Cons_Rc_BTree_CStr_DynamicType (head , insert_List_Rc_BTree_CStr_DynamicType (tail , item , rlist ));
          }) : ({ /* cicili#Let6117 */
            // ----------
            
            ({ /* cicili#Progn6121 */
              Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType reverse_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  List_Rc_BTree_CStr_DynamicType _reverse (List_Rc_BTree_CStr_DynamicType list , List_Rc_BTree_CStr_DynamicType rlist ) {
    return ({ /* cicili#Let6130 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6134 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6135 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6137 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6140 */
              _reverse (tail , Cons_Rc_BTree_CStr_DynamicType (head , rlist ));
            }) : ({ /* cicili#Let6145 */
              // ----------
              
              ({ /* cicili#Progn6149 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6153 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6157 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6158 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6160 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6163 */
            _reverse (tail , Cons_Rc_BTree_CStr_DynamicType (head , Nil_Rc_BTree_CStr_DynamicType ()));
          }) : ({ /* cicili#Let6169 */
            // ----------
            
            ({ /* cicili#Progn6173 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType append_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , List_Rc_BTree_CStr_DynamicType rlist ) {
  return ({ /* cicili#Let6179 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6183 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6184 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6186 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6189 */
            Cons_Rc_BTree_CStr_DynamicType (head , append_List_Rc_BTree_CStr_DynamicType (tail , rlist ));
          }) : ({ /* cicili#Let6195 */
            // ----------
            
            ({ /* cicili#Progn6199 */
              copy_List_Rc_BTree_CStr_DynamicType (rlist );
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType push_List_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType list ) {
  return Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (list ));
}
List_Rc_BTree_CStr_DynamicType take_List_Rc_BTree_CStr_DynamicType (int len , List_Rc_BTree_CStr_DynamicType list ) {
  return (((len  <=  0 )) ? Nil_Rc_BTree_CStr_DynamicType () : ({ /* cicili#Let6212 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6216 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6217 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6219 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6222 */
              Cons_Rc_BTree_CStr_DynamicType (head , take_List_Rc_BTree_CStr_DynamicType ((--len ), tail ));
            }) : ({ /* cicili#Let6228 */
              // ----------
              
              ({ /* cicili#Progn6232 */
                Nil_Rc_BTree_CStr_DynamicType ();
              });
            }));
        });
      }));
}
List_Rc_BTree_CStr_DynamicType last_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6239 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6243 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6244 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6247 */
            ({ /* cicili#Let6251 */
              // ----------
              
              ({ /* cicili#Let6255 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn6257 */
                    copy_List_Rc_BTree_CStr_DynamicType (list );
                  }) : ({ /* cicili#Let6262 */
                    // ----------
                    
                    ({ /* cicili#Progn6266 */
                      last_List_Rc_BTree_CStr_DynamicType (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let6271 */
            // ----------
            
            ({ /* cicili#Progn6275 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType init_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6283 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6287 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6288 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6290 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6293 */
            Cons_Rc_BTree_CStr_DynamicType (head , init_List_Rc_BTree_CStr_DynamicType (tail ));
          }) : ({ /* cicili#Let6299 */
            // ----------
            
            ({ /* cicili#Progn6303 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , int desired ) {
  return ({ /* cicili#Let6310 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6314 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6315 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6318 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_CStr_DynamicType (tail , (--desired )) ));
          }) : ({ /* cicili#Let6324 */
            // ----------
            
            ({ /* cicili#Progn6328 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6334 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6338 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6339 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6342 */
            (1 +  len_List_Rc_BTree_CStr_DynamicType (tail ) );
          }) : ({ /* cicili#Let6347 */
            // ----------
            
            ({ /* cicili#Progn6351 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType tail_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return drop_List_Rc_BTree_CStr_DynamicType (1, list );
}
List_Rc_BTree_CStr_DynamicType drop_List_Rc_BTree_CStr_DynamicType (int len , List_Rc_BTree_CStr_DynamicType list ) {
  return (((len  <=  0 )) ? copy_List_Rc_BTree_CStr_DynamicType (list ) : ({ /* cicili#Let6362 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6366 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6367 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6370 */
              drop_List_Rc_BTree_CStr_DynamicType ((--len ), tail );
            }) : ({ /* cicili#Let6375 */
              // ----------
              
              ({ /* cicili#Progn6379 */
                Nil_Rc_BTree_CStr_DynamicType ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_CStr_DynamicType head_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6387 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let6391 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6392 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6395 */
            Just_Rc_BTree_CStr_DynamicType (head );
          }) : ({ /* cicili#Let6400 */
            // ----------
            
            ({ /* cicili#Progn6404 */
              Nothing_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType nthcdr_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6411 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6415 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6416 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6419 */
            nthcdr_List_Rc_BTree_CStr_DynamicType ((--index ), tail );
          }) : ({ /* cicili#Let6424 */
            // ----------
            
            ({ /* cicili#Progn6428 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_CStr_DynamicType nth_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6435 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6439 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6440 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6442 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6445 */
            (((index  ==  0 )) ? Just_Rc_BTree_CStr_DynamicType (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_CStr_DynamicType () : nth_List_Rc_BTree_CStr_DynamicType ((--index ), tail )));
          }) : ({ /* cicili#Let6454 */
            // ----------
            
            ({ /* cicili#Progn6458 */
              Nothing_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType * this_ptr ) {
  { /* cicili#Let6463 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6467 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6471 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6472 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block6476 */
            { /* cicili#Block6478 */
              free (this );
              free_List_Rc_BTree_CStr_DynamicType ((&tail ));
            }
          }
        else
          { /* cicili#Let6486 */
            // ----------
            
            ({ /* cicili#Let6490 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block6493 */
                  { /* cicili#Block6495 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_Rc_BTree_CStr_DynamicType__H_Table * const get_List_Rc_BTree_CStr_DynamicType__H_Table () {
  static List_Rc_BTree_CStr_DynamicType__H_Table table  = { free_List_Rc_BTree_CStr_DynamicType , toArray_List_Rc_BTree_CStr_DynamicType , wrap_List_Rc_BTree_CStr_DynamicType , pure_List_Rc_BTree_CStr_DynamicType , show_List_Rc_BTree_CStr_DynamicType , copy_List_Rc_BTree_CStr_DynamicType , replaceAt_List_Rc_BTree_CStr_DynamicType , deleteAt_List_Rc_BTree_CStr_DynamicType , insertAt_List_Rc_BTree_CStr_DynamicType , replace_List_Rc_BTree_CStr_DynamicType , delete_List_Rc_BTree_CStr_DynamicType , insert_List_Rc_BTree_CStr_DynamicType , reverse_List_Rc_BTree_CStr_DynamicType , append_List_Rc_BTree_CStr_DynamicType , push_List_Rc_BTree_CStr_DynamicType , take_List_Rc_BTree_CStr_DynamicType , last_List_Rc_BTree_CStr_DynamicType , init_List_Rc_BTree_CStr_DynamicType , hasLen_List_Rc_BTree_CStr_DynamicType , len_List_Rc_BTree_CStr_DynamicType , tail_List_Rc_BTree_CStr_DynamicType , drop_List_Rc_BTree_CStr_DynamicType , head_List_Rc_BTree_CStr_DynamicType , nthcdr_List_Rc_BTree_CStr_DynamicType , nth_List_Rc_BTree_CStr_DynamicType };
  return (&table );
}
List_Rc_BTree_CStr_DynamicType Cons_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType head , List_Rc_BTree_CStr_DynamicType tail ) {
  { /* cicili#Let6506 */
    List_Rc_BTree_CStr_DynamicType instance  = malloc (sizeof(class_List_Rc_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_CStr_DynamicType){ get_List_Rc_BTree_CStr_DynamicType__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_CStr_DynamicType Nil_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let6512 */
    List_Rc_BTree_CStr_DynamicType instance  = malloc (sizeof(class_List_Rc_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_CStr_DynamicType){ get_List_Rc_BTree_CStr_DynamicType__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_Rc_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Maybe_List_Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Maybe_List_Rc_BTree_CStr_DynamicType__H_IMPL__
void free_Maybe_List_Rc_BTree_CStr_DynamicType (Maybe_List_Rc_BTree_CStr_DynamicType * this ) {
}
const Maybe_List_Rc_BTree_CStr_DynamicType__H_Table * const get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table () {
  static const Maybe_List_Rc_BTree_CStr_DynamicType__H_Table table  = { free_Maybe_List_Rc_BTree_CStr_DynamicType };
  return (&table );
}
Maybe_List_Rc_BTree_CStr_DynamicType Just_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType value ) {
  { /* cicili#Let6529 */
    Maybe_List_Rc_BTree_CStr_DynamicType instance  = ((Maybe_List_Rc_BTree_CStr_DynamicType){ get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_CStr_DynamicType Nothing_List_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let6534 */
    Maybe_List_Rc_BTree_CStr_DynamicType instance  = ((Maybe_List_Rc_BTree_CStr_DynamicType){ get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Functor_List_Rc_BTree_CStr_DynamicType__H_IMPL__
List_Rc_BTree_CStr_DynamicType fmap_Functor_List_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType_to_Rc_BTree_CStr_DynamicType_t a_b , List_Rc_BTree_CStr_DynamicType input ) {
  return ({ /* cicili#Let6548 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6552 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6553 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6555 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6558 */
            Cons_Rc_BTree_CStr_DynamicType (a_b (head ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (a_b , tail ));
          }) : ({ /* cicili#Let6565 */
            // ----------
            
            ({ /* cicili#Progn6569 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
void free_Functor_List_Rc_BTree_CStr_DynamicType (Functor_List_Rc_BTree_CStr_DynamicType * this ) {
}
const Functor_List_Rc_BTree_CStr_DynamicType__H_Table * const get_Functor_List_Rc_BTree_CStr_DynamicType__H_Table () {
  static const Functor_List_Rc_BTree_CStr_DynamicType__H_Table table  = { free_Functor_List_Rc_BTree_CStr_DynamicType , fmap_Functor_List_Rc_BTree_CStr_DynamicType };
  return (&table );
}
Functor_List_Rc_BTree_CStr_DynamicType Functor_List_Rc_BTree_CStr_DynamicType_ctor () {
  { /* cicili#Let6583 */
    Functor_List_Rc_BTree_CStr_DynamicType instance  = ((Functor_List_Rc_BTree_CStr_DynamicType){ get_Functor_List_Rc_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_CStr_DynamicType__H_IMPL__ */ 
Functor_List_Rc_BTree_CStr_DynamicType get_Functor_List_Rc_BTree_CStr_DynamicType () {
  return Functor_List_Rc_BTree_CStr_DynamicType_ctor ();
}
int U_BTree_CStr_DynamicType  = 3;
int L_BTree_CStr_DynamicType  = 2;
BTree_CStr_DynamicType split_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree ) {
  return ({ /* cicili#Let6601 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let6605 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6606 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6608 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6611 */
            (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6617 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6619 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6627 */
                    __auto_type match6626  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                    typeof((((match6626 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    
                    ({ /* cicili#Let6633 */
                      bool __h_case_result  = (true  &&  (((match6626 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6634 */
                            (nitem  =  (((match6626 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn6637 */
                          nitem ;
                        }) : ({ /* cicili#Let6641 */
                          // ----------
                          
                          ({ /* cicili#Progn6645 */
                            ((BTree_CStr_DynamicType_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6656 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6658 */
                        __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6668 */
                          Rc_BTree_CStr_DynamicType __ciciliC_6667 (Rc_BTree_CStr_DynamicType __h_value ) {
                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                          }
                          __ciciliC_6667 ;
                        }), r1 );
                    }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6679 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6681 */
                        __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6691 */
                          Rc_BTree_CStr_DynamicType __ciciliC_6690 (Rc_BTree_CStr_DynamicType __h_value ) {
                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                          }
                          __ciciliC_6690 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let6698 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let6702 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6703 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6705 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn6708 */
                  (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6714 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6716 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6724 */
                          __auto_type match6723  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                          typeof((((match6723 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          
                          ({ /* cicili#Let6730 */
                            bool __h_case_result  = (true  &&  (((match6723 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6731 */
                                  (nitem  =  (((match6723 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn6734 */
                                nitem ;
                              }) : ({ /* cicili#Let6738 */
                                // ----------
                                
                                ({ /* cicili#Progn6742 */
                                  ((BTree_CStr_DynamicType_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6753 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6755 */
                              __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6765 */
                                Rc_BTree_CStr_DynamicType __ciciliC_6764 (Rc_BTree_CStr_DynamicType __h_value ) {
                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                }
                                __ciciliC_6764 ;
                              }), r1 );
                          }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6776 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6778 */
                              __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6788 */
                                Rc_BTree_CStr_DynamicType __ciciliC_6787 (Rc_BTree_CStr_DynamicType __h_value ) {
                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                }
                                __ciciliC_6787 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let6795 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let6799 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6800 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6803 */
                        (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6809 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6811 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6819 */
                                __auto_type match6818  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                                typeof((((match6818 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                
                                ({ /* cicili#Let6825 */
                                  bool __h_case_result  = (true  &&  (((match6818 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6826 */
                                        (nitem  =  (((match6818 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn6829 */
                                      nitem ;
                                    }) : ({ /* cicili#Let6833 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn6837 */
                                        ((BTree_CStr_DynamicType_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let6854 */
                        // ----------
                        
                        ({ /* cicili#Progn6858 */
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
BTree_CStr_DynamicType splitForDelete_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree ) {
  return ({ /* cicili#Let6864 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let6868 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6869 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6871 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6874 */
            (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6884 */
                __auto_type match6883  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                typeof((((match6883 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                
                ({ /* cicili#Let6890 */
                  bool __h_case_result  = (true  &&  (((match6883 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6891 */
                        (nitem  =  (((match6883 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6894 */
                      nitem ;
                    }) : ({ /* cicili#Let6898 */
                      // ----------
                      
                      ({ /* cicili#Progn6902 */
                        ((BTree_CStr_DynamicType_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6913 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6915 */
                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6925 */
                      Rc_BTree_CStr_DynamicType __ciciliC_6924 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_6924 ;
                    }), r1 );
                }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6936 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6938 */
                    __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6948 */
                      Rc_BTree_CStr_DynamicType __ciciliC_6947 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_6947 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let6955 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let6959 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6960 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6962 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn6965 */
                  (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6975 */
                      __auto_type match6974  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                      typeof((((match6974 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      
                      ({ /* cicili#Let6981 */
                        bool __h_case_result  = (true  &&  (((match6974 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6982 */
                              (nitem  =  (((match6974 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn6985 */
                            nitem ;
                          }) : ({ /* cicili#Let6989 */
                            // ----------
                            
                            ({ /* cicili#Progn6993 */
                              ((BTree_CStr_DynamicType_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let7004 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7006 */
                          __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7016 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7015 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7015 ;
                          }), r1 );
                      }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let7027 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7029 */
                          __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7039 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7038 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7038 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let7046 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let7050 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7051 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7054 */
                        (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let7064 */
                            __auto_type match7063  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                            typeof((((match7063 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            
                            ({ /* cicili#Let7070 */
                              bool __h_case_result  = (true  &&  (((match7063 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7071 */
                                    (nitem  =  (((match7063 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn7074 */
                                  nitem ;
                                }) : ({ /* cicili#Let7078 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn7082 */
                                    ((BTree_CStr_DynamicType_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let7099 */
                        // ----------
                        
                        ({ /* cicili#Progn7103 */
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
BTree_CStr_DynamicType mergeUp_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children , int pitem_index , int pchild_index , List_BTree_CStr_DynamicType_pair_t left_items , List_Rc_BTree_CStr_DynamicType left_children , List_BTree_CStr_DynamicType_pair_t right_items , List_Rc_BTree_CStr_DynamicType right_children ) {
  return ({ /* cicili#Let7110 */
      __auto_type merged  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_items , right_items ), ({ /* cicili#Let7115 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7117 */
          __auto_type r1  = append_List_Rc_BTree_CStr_DynamicType (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7126 */
            Rc_BTree_CStr_DynamicType __ciciliC_7125 (Rc_BTree_CStr_DynamicType __h_value ) {
              return clone_Rc_BTree_CStr_DynamicType (__h_value );
            }
            __ciciliC_7125 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let7135 */
        __auto_type tmp_child  = splitForDelete_BTree_CStr_DynamicType (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match7133_0_arg ;
        typeof((((__h_match7133_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        
        ({ /* cicili#Let7140 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn7141 */
                    (__h_match7133_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match7133_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7143 */
                        (head  =  (((__h_match7133_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn7145 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7148 */
              ({ /* cicili#Let7151 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7153 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7156 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_CStr_DynamicType (replaceAt_List_BTree_CStr_DynamicType_pair_t (items , head , pitem_index ), ({ /* cicili#Let7163 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7165 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_CStr_DynamicType (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7169 */
                      __auto_type r2  = take_List_Rc_BTree_CStr_DynamicType (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7173 */
                      __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7177 */
                      __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7181 */
                      __auto_type r5  = append_List_Rc_BTree_CStr_DynamicType (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7190 */
                        Rc_BTree_CStr_DynamicType __ciciliC_7189 (Rc_BTree_CStr_DynamicType __h_value ) {
                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                        }
                        __ciciliC_7189 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let7197 */
              // ----------
              
              ({ /* cicili#Let7201 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7203 */
                    Internal_BTree_CStr_DynamicType (deleteAt_List_BTree_CStr_DynamicType_pair_t (items , pitem_index ), ({ /* cicili#Let7209 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7211 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_CStr_DynamicType (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7215 */
                          __auto_type r2  = new_Rc_BTree_CStr_DynamicType (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7219 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_CStr_DynamicType (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7228 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7227 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7227 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let7235 */
                    // ----------
                    
                    ({ /* cicili#Progn7239 */
                      Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ());
                    });
                  }));
              });
            }));
        });
      });
    });
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType deleteWithParent_BTree_CStr_DynamicType (Maybe_BTree_CStr_DynamicType wparent , int pitem_index , int pchild_index , BTree_CStr_DynamicType tree , CStr skey , void (*callback) (BTree_CStr_DynamicType_pair_t item ));
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowLeaf_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children , Maybe_List_BTree_CStr_DynamicType_pair_t wleft , List_BTree_CStr_DynamicType_pair_t current , int index , BTree_CStr_DynamicType nchild , void (*callback) (BTree_CStr_DynamicType_pair_t item )) {
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowRight (List_BTree_CStr_DynamicType_pair_t child_items ) {
    return ({ /* cicili#Let7266 */
        __auto_type match7265  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match7265 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let7271 */
          bool __h_case_result  = (true  &&  (((match7265 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7272 */
                (right_child_rc  =  (((match7265 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7275 */
              ({ /* cicili#Let7278 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let7282 */
                  __auto_type match7281  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match7281 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  
                  ({ /* cicili#Let7287 */
                    bool __h_case_result  = (true  &&  (((match7281 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7288 */
                          (unboxed  =  (((match7281 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7291 */
                        ({ /* cicili#Let7295 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          
                          ({ /* cicili#Let7299 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7300 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7303 */
                                (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7311 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7315 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7316 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn7318 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7321 */
                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , first_item , current ), ({ /* cicili#Let7329 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7331 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7335 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7341 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7340 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7340 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7348 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7352 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7358 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7357 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7357 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7365 */
                                                __auto_type r5  = take_List_BTree_CStr_DynamicType_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7369 */
                                                __auto_type r7  = pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (child_items , r5 ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7382 */
                                                __auto_type r6  = append_List_Rc_BTree_CStr_DynamicType (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_DynamicType (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let7389 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7393 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let7400 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7404 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7405 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7408 */
                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let7416 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7418 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7422 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7428 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7427 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7427 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7435 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7439 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7445 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7444 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7444 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7452 */
                                                __auto_type r5  = wrap_List_BTree_CStr_DynamicType_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7456 */
                                                __auto_type r6  = append_List_BTree_CStr_DynamicType_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7460 */
                                                __auto_type r8  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_DynamicType (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let7471 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7475 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let7482 */
                                // ----------
                                
                                ({ /* cicili#Progn7486 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7493 */
                        // ----------
                        
                        ({ /* cicili#Progn7497 */
                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let7504 */
              // ----------
              
              ({ /* cicili#Progn7508 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowLeft (List_BTree_CStr_DynamicType_pair_t child_items ) {
    return ({ /* cicili#Let7521 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        
        ({ /* cicili#Let7525 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7526 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7528 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7531 */
              ({ /* cicili#Let7535 */
                __auto_type match7534  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                typeof((((match7534 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                
                ({ /* cicili#Let7540 */
                  bool __h_case_result  = (true  &&  (((match7534 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7541 */
                        (left_child_rc  =  (((match7534 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7544 */
                      ({ /* cicili#Let7547 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let7551 */
                          __auto_type match7550  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match7550 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let7556 */
                            bool __h_case_result  = (true  &&  (((match7550 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7557 */
                                  (unboxed  =  (((match7550 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7560 */
                                ({ /* cicili#Let7564 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7568 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7569 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7572 */
                                        (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7580 */
                                            __auto_type last  = last_List_BTree_CStr_DynamicType_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            
                                            ({ /* cicili#Let7585 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7586 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7589 */
                                                  ({ /* cicili#Let7592 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7594 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , last_item , left ), ({ /* cicili#Let7603 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7605 */
                                                          __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7609 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7615 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_7614 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_7614 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7622 */
                                                          __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7626 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7632 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_7631 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_7631 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7639 */
                                                          __auto_type r5  = pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (init_List_BTree_CStr_DynamicType_pair_t (left_child_items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (push_List_BTree_CStr_DynamicType_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7652 */
                                                          __auto_type r7  = append_List_Rc_BTree_CStr_DynamicType (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_CStr_DynamicType (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let7659 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7663 */
                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let7670 */
                                            __auto_type match7669  = borrowRight (child_items );
                                            // ----------
                                            
                                            ({ /* cicili#Let7674 */
                                              bool __h_case_result  = (true  &&  ((match7669 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7676 */
                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , left ), ({ /* cicili#Let7684 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7686 */
                                                        __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7690 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7696 */
                                                          Rc_BTree_CStr_DynamicType __ciciliC_7695 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                          }
                                                          __ciciliC_7695 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7703 */
                                                        __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7707 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7713 */
                                                          Rc_BTree_CStr_DynamicType __ciciliC_7712 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                          }
                                                          __ciciliC_7712 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7720 */
                                                        __auto_type r8  = wrap_List_BTree_CStr_DynamicType_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7724 */
                                                        __auto_type r5  = append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7728 */
                                                        __auto_type r7  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_CStr_DynamicType (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let7739 */
                                                  __auto_type right  = match7669 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7743 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let7747 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7751 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7758 */
                                // ----------
                                
                                ({ /* cicili#Progn7762 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7769 */
                      // ----------
                      
                      ({ /* cicili#Progn7773 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7780 */
              // ----------
              
              ({ /* cicili#Progn7784 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let7788 */
      __auto_type result  = ({ /* cicili#Let7791 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        
        ({ /* cicili#Let7795 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7796 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7799 */
              (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7811 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7813 */
                    __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7817 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7826 */
                      Rc_BTree_CStr_DynamicType __ciciliC_7825 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_7825 ;
                    }), r2 );
                }))) : ({ /* cicili#Let7832 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7834 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let7839 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              
              ({ /* cicili#Let7843 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7844 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7847 */
                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7859 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7861 */
                          __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7865 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7874 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7873 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7873 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let7880 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7882 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let7887 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    
                    ({ /* cicili#Let7891 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7892 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn7895 */
                          (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7907 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7909 */
                                __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7913 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7922 */
                                  Rc_BTree_CStr_DynamicType __ciciliC_7921 (Rc_BTree_CStr_DynamicType __h_value ) {
                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                  }
                                  __ciciliC_7921 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let7928 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7930 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let7935 */
                          // ----------
                          
                          ({ /* cicili#Progn7939 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrow 1"));
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
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowInternal_BTree_CStr_DynamicType (Maybe_BTree_CStr_DynamicType wtree , List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children , List_BTree_CStr_DynamicType_pair_t current , int index , void (*callback) (BTree_CStr_DynamicType_pair_t item )) {
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowRightInternal (List_BTree_CStr_DynamicType_pair_t left_child_items , List_Rc_BTree_CStr_DynamicType left_child_children ) {
    return ({ /* cicili#Let7964 */
        __auto_type match7963  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match7963 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let7969 */
          bool __h_case_result  = (true  &&  (((match7963 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7970 */
                (right_child_rc  =  (((match7963 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7973 */
              ({ /* cicili#Let7977 */
                __auto_type match7976  = get_Rc_BTree_CStr_DynamicType (right_child_rc );
                typeof((((match7976 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let7982 */
                  bool __h_case_result  = (true  &&  (((match7976 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7983 */
                        (right_child  =  (((match7976 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7986 */
                      ({ /* cicili#Let7990 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let7994 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7995 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7997 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8000 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8009 */
                                  __auto_type match8007  = min_BTree_CStr_DynamicType (right_child );
                                  typeof((((match8007 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8014 */
                                    bool __h_case_result  = (true  &&  (((match8007 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8015 */
                                            (min  =  (((match8007 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8017 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8020 */
                                        ({ /* cicili#Let8024 */
                                          __auto_type match8023  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                          typeof((((match8023 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let8029 */
                                            bool __h_case_result  = (true  &&  (((match8023 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8030 */
                                                  (nchild  =  (((match8023 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8033 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let8041 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8043 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8047 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8056 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_8055 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_8055 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8063 */
                                                __auto_type left  = match8023 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn8067 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8071 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8075 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let8083 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8087 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8088 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8090 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8093 */
                                        ({ /* cicili#Let8096 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8098 */
                                            __auto_type r1  = push_List_BTree_CStr_DynamicType_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8102 */
                                            __auto_type r2  = append_List_Rc_BTree_CStr_DynamicType (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8106 */
                                            __auto_type r4  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8115 */
                                              Rc_BTree_CStr_DynamicType __ciciliC_8114 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                              }
                                              __ciciliC_8114 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8122 */
                                            __auto_type r5  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8126 */
                                            __auto_type r7  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let8132 */
                                            __auto_type match8131  = delete_BTree_CStr_DynamicType (r4 , current_key , NULL );
                                            typeof((((match8131 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            
                                            ({ /* cicili#Let8137 */
                                              bool __h_case_result  = (true  &&  (((match8131 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8138 */
                                                    (ntree  =  (((match8131 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn8141 */
                                                  ({ /* cicili#Let8145 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_CStr_DynamicType (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8150 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8151 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn8153 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8156 */
                                                          ({ /* cicili#Let8160 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8164 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8165 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8168 */
                                                                  ({ /* cicili#Let8171 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8173 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8176 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , branch_head , current ), ({ /* cicili#Let8185 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8187 */
                                                                          __auto_type r10  = append_List_Rc_BTree_CStr_DynamicType (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8191 */
                                                                          __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8200 */
                                                                            Rc_BTree_CStr_DynamicType __ciciliC_8199 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                            }
                                                                            __ciciliC_8199 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let8207 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8211 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8218 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let8222 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8224 */
                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8232 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8234 */
                                                                      __auto_type r9  = new_Rc_BTree_CStr_DynamicType (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8238 */
                                                                      __auto_type r10  = push_List_Rc_BTree_CStr_DynamicType (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8242 */
                                                                      __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8251 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_8250 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_8250 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let8258 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn8262 */
                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8269 */
                                                  __auto_type left  = match8131 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn8273 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let8277 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8281 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let8288 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let8292 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8293 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8295 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn8298 */
                                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8307 */
                                        __auto_type match8305  = min_BTree_CStr_DynamicType (right_child );
                                        typeof((((match8305 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8312 */
                                          bool __h_case_result  = (true  &&  (((match8305 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8313 */
                                                  (min  =  (((match8305 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8315 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8318 */
                                              ({ /* cicili#Let8322 */
                                                __auto_type match8321  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                                typeof((((match8321 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8327 */
                                                  bool __h_case_result  = (true  &&  (((match8321 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8328 */
                                                        (nchild  =  (((match8321 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8331 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let8339 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8341 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8345 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8354 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_8353 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_8353 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8361 */
                                                      __auto_type left  = match8321 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8365 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8369 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8373 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let8381 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8385 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8386 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8388 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8391 */
                                              ({ /* cicili#Let8394 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8396 */
                                                  __auto_type r1  = push_List_BTree_CStr_DynamicType_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8400 */
                                                  __auto_type r2  = append_List_Rc_BTree_CStr_DynamicType (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8404 */
                                                  __auto_type r4  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8413 */
                                                    Rc_BTree_CStr_DynamicType __ciciliC_8412 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                    }
                                                    __ciciliC_8412 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8420 */
                                                  __auto_type r5  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8424 */
                                                  __auto_type r7  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let8430 */
                                                  __auto_type match8429  = delete_BTree_CStr_DynamicType (r4 , current_key , NULL );
                                                  typeof((((match8429 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let8435 */
                                                    bool __h_case_result  = (true  &&  (((match8429 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8436 */
                                                          (ntree  =  (((match8429 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8439 */
                                                        ({ /* cicili#Let8443 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_CStr_DynamicType (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let8448 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8449 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn8451 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8454 */
                                                                ({ /* cicili#Let8458 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let8462 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8463 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8466 */
                                                                        ({ /* cicili#Let8469 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8471 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8474 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , branch_head , current ), ({ /* cicili#Let8483 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8485 */
                                                                                __auto_type r10  = append_List_Rc_BTree_CStr_DynamicType (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8489 */
                                                                                __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8498 */
                                                                                  Rc_BTree_CStr_DynamicType __ciciliC_8497 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                                  }
                                                                                  __ciciliC_8497 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let8505 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn8509 */
                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let8516 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let8520 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn8522 */
                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8530 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8532 */
                                                                            __auto_type r9  = new_Rc_BTree_CStr_DynamicType (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8536 */
                                                                            __auto_type r10  = push_List_Rc_BTree_CStr_DynamicType (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8540 */
                                                                            __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8549 */
                                                                              Rc_BTree_CStr_DynamicType __ciciliC_8548 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                              }
                                                                              __ciciliC_8548 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let8556 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn8560 */
                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8567 */
                                                        __auto_type left  = match8429 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8571 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let8575 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8579 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let8586 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn8590 */
                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8597 */
                      // ----------
                      
                      ({ /* cicili#Progn8601 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8608 */
              // ----------
              
              ({ /* cicili#Progn8612 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowRightLeaf (List_BTree_CStr_DynamicType_pair_t left_child_items ) {
    return ({ /* cicili#Let8625 */
        __auto_type match8624  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match8624 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let8630 */
          bool __h_case_result  = (true  &&  (((match8624 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8631 */
                (right_child_rc  =  (((match8624 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8634 */
              ({ /* cicili#Let8638 */
                __auto_type match8637  = get_Rc_BTree_CStr_DynamicType (right_child_rc );
                typeof((((match8637 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let8643 */
                  bool __h_case_result  = (true  &&  (((match8637 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8644 */
                        (right_child  =  (((match8637 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8647 */
                      ({ /* cicili#Let8651 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        
                        ({ /* cicili#Let8655 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8656 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8659 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8668 */
                                  __auto_type match8666  = min_BTree_CStr_DynamicType (right_child );
                                  typeof((((match8666 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8673 */
                                    bool __h_case_result  = (true  &&  (((match8666 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8674 */
                                            (min  =  (((match8666 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8676 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8679 */
                                        ({ /* cicili#Let8683 */
                                          __auto_type match8682  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                          typeof((((match8682 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let8688 */
                                            bool __h_case_result  = (true  &&  (((match8682 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8689 */
                                                  (nchild  =  (((match8682 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8692 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let8700 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8702 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8706 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8715 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_8714 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_8714 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8722 */
                                                __auto_type left  = match8682 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn8726 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8730 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8734 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8745 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8747 */
                                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8751 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8757 */
                                      Rc_BTree_CStr_DynamicType __ciciliC_8756 (Rc_BTree_CStr_DynamicType __h_value ) {
                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                      }
                                      __ciciliC_8756 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8764 */
                                    __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8768 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8774 */
                                      Rc_BTree_CStr_DynamicType __ciciliC_8773 (Rc_BTree_CStr_DynamicType __h_value ) {
                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                      }
                                      __ciciliC_8773 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8781 */
                                    __auto_type r5  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_CStr_DynamicType (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let8792 */
                              // ----------
                              
                              ({ /* cicili#Progn8796 */
                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8803 */
                      // ----------
                      
                      ({ /* cicili#Progn8807 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8814 */
              // ----------
              
              ({ /* cicili#Progn8818 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8825 */
      __auto_type result  = ({ /* cicili#Let8828 */
        __auto_type match8827  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
        typeof((((match8827 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        
        ({ /* cicili#Let8833 */
          bool __h_case_result  = (true  &&  (((match8827 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8834 */
                (left_child_rc  =  (((match8827 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8837 */
              ({ /* cicili#Let8841 */
                __auto_type match8840  = get_Rc_BTree_CStr_DynamicType (left_child_rc );
                typeof((((match8840 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                
                ({ /* cicili#Let8846 */
                  bool __h_case_result  = (true  &&  (((match8840 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8847 */
                        (left_child  =  (((match8840 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8850 */
                      ({ /* cicili#Let8854 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let8858 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8859 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8861 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8864 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8873 */
                                  __auto_type match8871  = max_BTree_CStr_DynamicType (left_child );
                                  typeof((((match8871 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8878 */
                                    bool __h_case_result  = (true  &&  (((match8871 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8879 */
                                            (max  =  (((match8871 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8881 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8884 */
                                        ({ /* cicili#Let8888 */
                                          __auto_type match8887  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                          typeof((((match8887 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let8893 */
                                            bool __h_case_result  = (true  &&  (((match8887 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8894 */
                                                  (nchild  =  (((match8887 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8897 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8905 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8907 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8911 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8920 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_8919 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_8919 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8927 */
                                                __auto_type left  = match8887 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn8931 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8935 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8939 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let8946 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let8950 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8951 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8953 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn8956 */
                                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8965 */
                                        __auto_type match8963  = max_BTree_CStr_DynamicType (left_child );
                                        typeof((((match8963 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8970 */
                                          bool __h_case_result  = (true  &&  (((match8963 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8971 */
                                                  (max  =  (((match8963 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8973 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8976 */
                                              ({ /* cicili#Let8980 */
                                                __auto_type match8979  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                                typeof((((match8979 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8985 */
                                                  bool __h_case_result  = (true  &&  (((match8979 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8986 */
                                                        (nchild  =  (((match8979 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8989 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8997 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8999 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9003 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9012 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_9011 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_9011 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let9019 */
                                                      __auto_type left  = match8979 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn9023 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9027 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn9031 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let9038 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let9042 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9043 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn9046 */
                                          (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let9055 */
                                              __auto_type match9053  = max_BTree_CStr_DynamicType (left_child );
                                              typeof((((match9053 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              
                                              ({ /* cicili#Let9060 */
                                                bool __h_case_result  = (true  &&  (((match9053 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn9061 */
                                                        (max  =  (((match9053 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn9063 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn9066 */
                                                    ({ /* cicili#Let9070 */
                                                      __auto_type match9069  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                                      typeof((((match9069 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let9075 */
                                                        bool __h_case_result  = (true  &&  (((match9069 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9076 */
                                                              (nchild  =  (((match9069 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn9079 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let9087 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9089 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9093 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9102 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_9101 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_9101 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let9109 */
                                                            __auto_type left  = match9069 ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn9113 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let9117 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn9121 */
                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let9128 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn9132 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9139 */
                      // ----------
                      
                      ({ /* cicili#Progn9143 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9150 */
              // ----------
              
              ({ /* cicili#Progn9154 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 16"));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType deleteWithParent_BTree_CStr_DynamicType (Maybe_BTree_CStr_DynamicType wparent , int pitem_index , int pchild_index , BTree_CStr_DynamicType tree , CStr skey , void (*callback) (BTree_CStr_DynamicType_pair_t item )) {
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType deleteInternal (Maybe_BTree_CStr_DynamicType tree , List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children , Maybe_List_BTree_CStr_DynamicType_pair_t wleft , List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let9182 */
        __auto_type result  = ({ /* cicili#Let9186 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          
          ({ /* cicili#Let9190 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9191 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn9193 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn9195 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn9198 */
                ({ /* cicili#Let9202 */
                  __auto_type match9201  = compareKey (skey , key );
                  // ----------
                  
                  ({ /* cicili#Let9206 */
                    bool __h_case_result  = (true  &&  ((match9201 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9208 */
                        ({ /* cicili#Let9212 */
                          __auto_type match9211  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                          typeof((((match9211 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let9217 */
                            bool __h_case_result  = (true  &&  (((match9211 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9218 */
                                  (child  =  (((match9211 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9221 */
                                ({ /* cicili#Let9225 */
                                  __auto_type match9224  = get_Rc_BTree_CStr_DynamicType (child );
                                  typeof((((match9224 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9230 */
                                    bool __h_case_result  = (true  &&  (((match9224 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9231 */
                                          (tr  =  (((match9224 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn9234 */
                                        ({ /* cicili#Let9238 */
                                          // ----------
                                          
                                          ({ /* cicili#Let9242 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn9244 */
                                                ({ /* cicili#Let9248 */
                                                  __auto_type match9247  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match9247 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let9253 */
                                                    bool __h_case_result  = (true  &&  (((match9247 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9254 */
                                                          (nchild  =  (((match9247 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn9257 */
                                                        ({ /* cicili#Let9261 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let9265 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9266 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn9268 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn9271 */
                                                                ({ /* cicili#Let9275 */
                                                                  __auto_type match9274  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                  typeof((((match9274 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let9280 */
                                                                    bool __h_case_result  = (true  &&  (((match9274 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9281 */
                                                                          (wleft  =  (((match9274 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9284 */
                                                                        ({ /* cicili#Let9287 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let9291 */
                                                                            __auto_type match9290  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match9290 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let9296 */
                                                                              bool __h_case_result  = (true  &&  (((match9290 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9297 */
                                                                                    (unboxed  =  (((match9290 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9300 */
                                                                                  ({ /* cicili#Let9304 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let9308 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9309 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn9311 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9314 */
                                                                                          ({ /* cicili#Let9317 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9319 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let9327 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let9331 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9332 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn9334 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9337 */
                                                                                                ({ /* cicili#Let9340 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9342 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9350 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn9354 */
                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9361 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn9365 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let9372 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn9376 */
                                                                          ({ /* cicili#Let9380 */
                                                                            __auto_type match9379  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                            typeof((((match9379 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let9385 */
                                                                              bool __h_case_result  = (true  &&  (((match9379 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9386 */
                                                                                    (wright  =  (((match9379 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9389 */
                                                                                  ({ /* cicili#Let9392 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let9396 */
                                                                                      __auto_type match9395  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match9395 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let9401 */
                                                                                        bool __h_case_result  = (true  &&  (((match9395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9402 */
                                                                                              (unboxed  =  (((match9395 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9405 */
                                                                                            ({ /* cicili#Let9409 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let9413 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9414 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9416 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9419 */
                                                                                                    ({ /* cicili#Let9422 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9424 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9432 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let9436 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9437 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9439 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9442 */
                                                                                                          ({ /* cicili#Let9445 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9447 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9455 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn9459 */
                                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9466 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn9470 */
                                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9477 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn9481 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let9488 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn9492 */
                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let9500 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9502 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9506 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9515 */
                                                                          Rc_BTree_CStr_DynamicType __ciciliC_9514 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                          }
                                                                          __ciciliC_9514 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let9522 */
                                                        __auto_type left  = match9247 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn9526 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let9530 */
                                                // ----------
                                                
                                                ({ /* cicili#Let9534 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9536 */
                                                      ({ /* cicili#Let9540 */
                                                        __auto_type match9539  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match9539 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let9545 */
                                                          bool __h_case_result  = (true  &&  (((match9539 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9546 */
                                                                (nchild  =  (((match9539 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn9549 */
                                                              ({ /* cicili#Let9553 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let9557 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9558 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn9560 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9563 */
                                                                      ({ /* cicili#Let9567 */
                                                                        __auto_type match9566  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                        typeof((((match9566 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Let9572 */
                                                                          bool __h_case_result  = (true  &&  (((match9566 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9573 */
                                                                                (wleft  =  (((match9566 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9576 */
                                                                              ({ /* cicili#Let9579 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let9583 */
                                                                                  __auto_type match9582  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match9582 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let9588 */
                                                                                    bool __h_case_result  = (true  &&  (((match9582 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9589 */
                                                                                          (unboxed  =  (((match9582 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9592 */
                                                                                        ({ /* cicili#Let9596 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let9600 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9601 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn9603 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9606 */
                                                                                                ({ /* cicili#Let9609 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9611 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9619 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Let9623 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9624 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn9626 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9629 */
                                                                                                      ({ /* cicili#Let9632 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9634 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let9642 */
                                                                                                      // ----------
                                                                                                      
                                                                                                      ({ /* cicili#Progn9646 */
                                                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9653 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn9657 */
                                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let9664 */
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Progn9668 */
                                                                                ({ /* cicili#Let9672 */
                                                                                  __auto_type match9671  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                                  typeof((((match9671 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let9677 */
                                                                                    bool __h_case_result  = (true  &&  (((match9671 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9678 */
                                                                                          (wright  =  (((match9671 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9681 */
                                                                                        ({ /* cicili#Let9684 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let9688 */
                                                                                            __auto_type match9687  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match9687 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Let9693 */
                                                                                              bool __h_case_result  = (true  &&  (((match9687 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9694 */
                                                                                                    (unboxed  =  (((match9687 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9697 */
                                                                                                  ({ /* cicili#Let9701 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let9705 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9706 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9708 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9711 */
                                                                                                          ({ /* cicili#Let9714 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9716 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9724 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Let9728 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9729 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn9731 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9734 */
                                                                                                                ({ /* cicili#Let9737 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9739 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let9747 */
                                                                                                                // ----------
                                                                                                                
                                                                                                                ({ /* cicili#Progn9751 */
                                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9758 */
                                                                                                  // ----------
                                                                                                  
                                                                                                  ({ /* cicili#Progn9762 */
                                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9769 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn9773 */
                                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let9780 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn9784 */
                                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let9792 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9794 */
                                                                              __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9798 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9807 */
                                                                                Rc_BTree_CStr_DynamicType __ciciliC_9806 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                                }
                                                                                __ciciliC_9806 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let9814 */
                                                              __auto_type left  = match9539 ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn9818 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let9822 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn9826 */
                                                        ({ /* cicili#Let9830 */
                                                          __auto_type match9829  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match9829 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let9835 */
                                                            bool __h_case_result  = (true  &&  (((match9829 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9836 */
                                                                  (nchild  =  (((match9829 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn9839 */
                                                                borrowLeaf_BTree_CStr_DynamicType (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let9844 */
                                                                __auto_type left  = match9829 ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn9848 */
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
                                      }) : ({ /* cicili#Let9852 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn9856 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let9863 */
                                // ----------
                                
                                ({ /* cicili#Progn9867 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let9874 */
                        // ----------
                        
                        ({ /* cicili#Let9878 */
                          bool __h_case_result  = (true  &&  ((match9201 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9880 */
                              ({ /* cicili#Let9883 */
                                __auto_type result  = borrowInternal_BTree_CStr_DynamicType (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let9888 */
                                  // ----------
                                  
                                  ({ /* cicili#Let9892 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9895 */
                                        if (callback )
                                          { /* cicili#Block9899 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let9903 */
                              // ----------
                              
                              ({ /* cicili#Progn9907 */
                                deleteInternal (tree , items , children , Just_List_BTree_CStr_DynamicType_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let9912 */
                // ----------
                
                ({ /* cicili#Progn9916 */
                  ({ /* cicili#Let9920 */
                    __auto_type match9919  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                    typeof((((match9919 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    
                    ({ /* cicili#Let9925 */
                      bool __h_case_result  = (true  &&  (((match9919 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9926 */
                            (child  =  (((match9919 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn9929 */
                          ({ /* cicili#Let9933 */
                            __auto_type match9932  = get_Rc_BTree_CStr_DynamicType (child );
                            typeof((((match9932 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let9938 */
                              bool __h_case_result  = (true  &&  (((match9932 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9939 */
                                    (tr  =  (((match9932 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9942 */
                                  ({ /* cicili#Let9946 */
                                    // ----------
                                    
                                    ({ /* cicili#Let9950 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn9952 */
                                          ({ /* cicili#Let9956 */
                                            __auto_type match9955  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match9955 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9961 */
                                              bool __h_case_result  = (true  &&  (((match9955 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9962 */
                                                    (nchild  =  (((match9955 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn9965 */
                                                  ({ /* cicili#Let9969 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let9973 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9974 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn9976 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9979 */
                                                          ({ /* cicili#Let9983 */
                                                            __auto_type match9982  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                            typeof((((match9982 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let9988 */
                                                              bool __h_case_result  = (true  &&  (((match9982 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9989 */
                                                                    (wleft  =  (((match9982 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn9992 */
                                                                  ({ /* cicili#Let9995 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let9999 */
                                                                      __auto_type match9998  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match9998 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let10004 */
                                                                        bool __h_case_result  = (true  &&  (((match9998 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10005 */
                                                                              (unboxed  =  (((match9998 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10008 */
                                                                            ({ /* cicili#Let10012 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Let10016 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10017 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn10019 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10022 */
                                                                                    ({ /* cicili#Let10025 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10027 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let10035 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let10039 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10040 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn10042 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10045 */
                                                                                          ({ /* cicili#Let10048 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10050 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let10058 */
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Progn10062 */
                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10069 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn10073 */
                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let10080 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn10084 */
                                                                    ({ /* cicili#Let10088 */
                                                                      __auto_type match10087  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                      typeof((((match10087 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let10093 */
                                                                        bool __h_case_result  = (true  &&  (((match10087 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10094 */
                                                                              (wright  =  (((match10087 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10097 */
                                                                            ({ /* cicili#Let10100 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let10104 */
                                                                                __auto_type match10103  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match10103 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Let10109 */
                                                                                  bool __h_case_result  = (true  &&  (((match10103 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10110 */
                                                                                        (unboxed  =  (((match10103 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn10113 */
                                                                                      ({ /* cicili#Let10117 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Let10121 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10122 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn10124 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn10127 */
                                                                                              ({ /* cicili#Let10130 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10132 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let10140 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let10144 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10145 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn10147 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10150 */
                                                                                                    ({ /* cicili#Let10153 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10155 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let10163 */
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Progn10167 */
                                                                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let10174 */
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Progn10178 */
                                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10185 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn10189 */
                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10196 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10200 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let10208 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10210 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10214 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10223 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_10222 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_10222 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let10230 */
                                                  __auto_type left  = match9955 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn10234 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let10238 */
                                          // ----------
                                          
                                          ({ /* cicili#Let10242 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn10244 */
                                                ({ /* cicili#Let10248 */
                                                  __auto_type match10247  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match10247 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10253 */
                                                    bool __h_case_result  = (true  &&  (((match10247 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10254 */
                                                          (nchild  =  (((match10247 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10257 */
                                                        ({ /* cicili#Let10261 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let10265 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10266 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn10268 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn10271 */
                                                                ({ /* cicili#Let10275 */
                                                                  __auto_type match10274  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                  typeof((((match10274 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let10280 */
                                                                    bool __h_case_result  = (true  &&  (((match10274 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10281 */
                                                                          (wleft  =  (((match10274 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10284 */
                                                                        ({ /* cicili#Let10287 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let10291 */
                                                                            __auto_type match10290  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match10290 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let10296 */
                                                                              bool __h_case_result  = (true  &&  (((match10290 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10297 */
                                                                                    (unboxed  =  (((match10290 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10300 */
                                                                                  ({ /* cicili#Let10304 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let10308 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10309 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn10311 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10314 */
                                                                                          ({ /* cicili#Let10317 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10319 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let10327 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let10331 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10332 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn10334 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn10337 */
                                                                                                ({ /* cicili#Let10340 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10342 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let10350 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn10354 */
                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10361 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn10365 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let10372 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn10376 */
                                                                          ({ /* cicili#Let10380 */
                                                                            __auto_type match10379  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                            typeof((((match10379 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let10385 */
                                                                              bool __h_case_result  = (true  &&  (((match10379 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10386 */
                                                                                    (wright  =  (((match10379 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10389 */
                                                                                  ({ /* cicili#Let10392 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let10396 */
                                                                                      __auto_type match10395  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match10395 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let10401 */
                                                                                        bool __h_case_result  = (true  &&  (((match10395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10402 */
                                                                                              (unboxed  =  (((match10395 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10405 */
                                                                                            ({ /* cicili#Let10409 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let10413 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10414 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn10416 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10419 */
                                                                                                    ({ /* cicili#Let10422 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10424 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let10432 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let10436 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10437 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn10439 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10442 */
                                                                                                          ({ /* cicili#Let10445 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10447 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let10455 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn10459 */
                                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let10466 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn10470 */
                                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10477 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn10481 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let10488 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn10492 */
                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let10500 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10502 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10506 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10515 */
                                                                          Rc_BTree_CStr_DynamicType __ciciliC_10514 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                          }
                                                                          __ciciliC_10514 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let10522 */
                                                        __auto_type left  = match10247 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10526 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10530 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn10534 */
                                                  ({ /* cicili#Let10538 */
                                                    __auto_type match10537  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match10537 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let10543 */
                                                      bool __h_case_result  = (true  &&  (((match10537 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10544 */
                                                            (nchild  =  (((match10537 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10547 */
                                                          borrowLeaf_BTree_CStr_DynamicType (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let10552 */
                                                          __auto_type left  = match10537 ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10556 */
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
                                }) : ({ /* cicili#Let10560 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn10564 */
                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let10571 */
                          // ----------
                          
                          ({ /* cicili#Progn10575 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
                          });
                        }));
                    });
                  });
                });
              }));
          });
        });
        // ----------
        ({ /* cicili#Let10584 */
          __auto_type rs  = ({ /* cicili#Let10587 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            
            ({ /* cicili#Let10591 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10592 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10595 */
                  ({ /* cicili#Let10599 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    
                    ({ /* cicili#Let10603 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10604 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn10606 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn10609 */
                          ({ /* cicili#Let10612 */
                            __auto_type items_len  = hasLen_List_BTree_CStr_DynamicType_pair_t (items , (L_BTree_CStr_DynamicType  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? result  : ({ /* cicili#Let10620 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                
                                ({ /* cicili#Let10624 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10625 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10628 */
                                      ({ /* cicili#Let10632 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        
                                        ({ /* cicili#Let10636 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10637 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn10640 */
                                              ({ /* cicili#Let10644 */
                                                __auto_type match10643  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                typeof((((match10643 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                
                                                ({ /* cicili#Let10649 */
                                                  bool __h_case_result  = (true  &&  (((match10643 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10650 */
                                                        (bitem  =  (((match10643 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10653 */
                                                      ({ /* cicili#Let10656 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10658 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10671 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_10670 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_10670 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let10678 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn10682 */
                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10689 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let10693 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10694 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn10697 */
                                                    ({ /* cicili#Let10701 */
                                                      __auto_type match10700  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                      typeof((((match10700 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10706 */
                                                        bool __h_case_result  = (true  &&  (((match10700 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10707 */
                                                              (bitem  =  (((match10700 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10710 */
                                                            ({ /* cicili#Let10713 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10715 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10728 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_10727 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_10727 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10735 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10739 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10746 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn10750 */
                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10757 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10761 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let10766 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            
                                            ({ /* cicili#Let10770 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10771 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn10774 */
                                                  ({ /* cicili#Let10777 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_CStr_DynamicType (head );
                                                    // ----------
                                                    ({ /* cicili#Let10782 */
                                                      __auto_type match10781  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match10781 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10787 */
                                                        bool __h_case_result  = (true  &&  (((match10781 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10788 */
                                                              (unboxed  =  (((match10781 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10791 */
                                                            ({ /* cicili#Let10795 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn10799 */
                                                                ({ /* cicili#Let10802 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10804 */
                                                                    __auto_type ntr  = ntr ;
                                                                    // ----------
                                                                    ((void)(ntr -> __h_table -> freeClass ));
                                                                    ntr ;
                                                                  });
                                                                  // ----------
                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (chtr );
                                                                });
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let10811 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10815 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let10822 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn10826 */
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
                        }) : ({ /* cicili#Let10830 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          
                          ({ /* cicili#Let10834 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10835 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn10837 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10840 */
                                ({ /* cicili#Let10843 */
                                  __auto_type items_len  = hasLen_List_BTree_CStr_DynamicType_pair_t (items , (L_BTree_CStr_DynamicType  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? result  : ({ /* cicili#Let10851 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      
                                      ({ /* cicili#Let10855 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10856 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn10859 */
                                            ({ /* cicili#Let10863 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let10867 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10868 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn10871 */
                                                    ({ /* cicili#Let10875 */
                                                      __auto_type match10874  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                      typeof((((match10874 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10880 */
                                                        bool __h_case_result  = (true  &&  (((match10874 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10881 */
                                                              (bitem  =  (((match10874 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10884 */
                                                            ({ /* cicili#Let10887 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10889 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10902 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_10901 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_10901 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10909 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10913 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10920 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let10924 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10925 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10928 */
                                                          ({ /* cicili#Let10932 */
                                                            __auto_type match10931  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                            typeof((((match10931 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let10937 */
                                                              bool __h_case_result  = (true  &&  (((match10931 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10938 */
                                                                    (bitem  =  (((match10931 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10941 */
                                                                  ({ /* cicili#Let10944 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10946 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10959 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_10958 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_10958 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let10966 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn10970 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10977 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10981 */
                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let10988 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn10992 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let10997 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let11001 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11002 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn11005 */
                                                        ({ /* cicili#Let11008 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_CStr_DynamicType (head );
                                                          // ----------
                                                          ({ /* cicili#Let11013 */
                                                            __auto_type match11012  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match11012 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let11018 */
                                                              bool __h_case_result  = (true  &&  (((match11012 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11019 */
                                                                    (unboxed  =  (((match11012 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn11022 */
                                                                  ({ /* cicili#Let11026 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    
                                                                    ({ /* cicili#Progn11030 */
                                                                      ({ /* cicili#Let11033 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11035 */
                                                                          __auto_type ntr  = ntr ;
                                                                          // ----------
                                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                                          ntr ;
                                                                        });
                                                                        // ----------
                                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (chtr );
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let11042 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn11046 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let11053 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn11057 */
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
                              }) : ({ /* cicili#Let11061 */
                                // ----------
                                
                                ({ /* cicili#Progn11065 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let11069 */
                  // ----------
                  
                  ({ /* cicili#Progn11073 */
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
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType deleteLeaf (List_BTree_CStr_DynamicType_pair_t items , List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let11090 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11094 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11095 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn11097 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn11099 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11102 */
              ({ /* cicili#Let11106 */
                __auto_type match11105  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let11110 */
                  bool __h_case_result  = (true  &&  ((match11105 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11112 */
                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let11119 */
                      // ----------
                      
                      ({ /* cicili#Let11123 */
                        bool __h_case_result  = (true  &&  ((match11105 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn11125 */
                            ({ /* cicili#Let11128 */
                              __auto_type result  = Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let11137 */
                                // ----------
                                
                                ({ /* cicili#Let11141 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11144 */
                                      if (callback )
                                        { /* cicili#Block11148 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let11152 */
                            // ----------
                            
                            ({ /* cicili#Progn11156 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11160 */
              // ----------
              
              ({ /* cicili#Progn11164 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11172 */
      __auto_type result  = ({ /* cicili#Let11175 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        
        ({ /* cicili#Let11179 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11180 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11182 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11185 */
              deleteInternal (Just_BTree_CStr_DynamicType (tree ), items , children , Nothing_List_BTree_CStr_DynamicType_pair_t (), items , 0);
            }) : ({ /* cicili#Let11191 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              
              ({ /* cicili#Let11195 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11196 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11198 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11201 */
                    deleteInternal (Just_BTree_CStr_DynamicType (tree ), items , children , Nothing_List_BTree_CStr_DynamicType_pair_t (), items , 0);
                  }) : ({ /* cicili#Let11207 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    
                    ({ /* cicili#Let11211 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11212 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn11215 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let11219 */
                          // ----------
                          
                          ({ /* cicili#Progn11223 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_OBJECT ());
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
#ifndef __BTree_CStr_DynamicType__H_IMPL__
#define __BTree_CStr_DynamicType__H_IMPL__
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType fromLists_BTree_CStr_DynamicType (List_CStr keys , List_DynamicType values ) {
  return ({ /* cicili#Let11246 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      
      ({ /* cicili#Let11250 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11251 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11253 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11256 */
            ({ /* cicili#Let11260 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              
              ({ /* cicili#Let11264 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11265 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11267 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11270 */
                    ({ /* cicili#Let11273 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11275 */
                        __auto_type etree  = fromLists_BTree_CStr_DynamicType (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let11281 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        
                        ({ /* cicili#Let11285 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11286 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11289 */
                              ({ /* cicili#Let11292 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11294 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_CStr_DynamicType (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let11300 */
                              // ----------
                              
                              ({ /* cicili#Progn11304 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let11308 */
                    // ----------
                    
                    ({ /* cicili#Progn11312 */
                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let11320 */
            // ----------
            
            ({ /* cicili#Progn11324 */
              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType pure_BTree_CStr_DynamicType (CStr keys [], DynamicType values [], int len ) {
  return ({ /* cicili#Let11335 */
      BTree_CStr_DynamicType tree  = Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ());
      // ----------
      for (int i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let11343 */
            __auto_type match11342  = insert_BTree_CStr_DynamicType (tree , keys [i ], values [i ]);
            typeof((((match11342 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            
            ({ /* cicili#Let11348 */
              bool __h_case_result  = (true  &&  (((match11342 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11349 */
                    (new_tree  =  (((match11342 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block11353 */
                  { /* cicili#Block11355 */
                    free_BTree_CStr_DynamicType ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let11361 */
                  __auto_type left  = match11342 ;
                  // ----------
                  
                  { /* cicili#Block11365 */
                    return left ;
                  }
                }
            });
          }
      }
      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (tree );
    });
}
int show_BTree_CStr_DynamicType (CFile file , BTree_CStr_DynamicType tree ) {
  auto int showTree (int indent , BTree_CStr_DynamicType tree );
  int showChildren (int indent , List_Rc_BTree_CStr_DynamicType children ) {
    return ({ /* cicili#Let11375 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11379 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11380 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11382 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11385 */
              (({ /* cicili#Let11389 */
                  // ----------
                  
                  ({ /* cicili#Let11393 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11395 */
                        ({ /* cicili#Let11399 */
                          __auto_type match11398  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match11398 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let11404 */
                            bool __h_case_result  = (true  &&  (((match11398 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11405 */
                                  (tr  =  (((match11398 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn11408 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let11412 */
                                // ----------
                                
                                ({ /* cicili#Progn11416 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let11420 */
                        // ----------
                        
                        ({ /* cicili#Progn11424 */
                          ({ /* cicili#Let11428 */
                            __auto_type match11427  = get_Rc_BTree_CStr_DynamicType (head );
                            typeof((((match11427 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let11433 */
                              bool __h_case_result  = (true  &&  (((match11427 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11434 */
                                    (tr  =  (((match11427 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn11437 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let11441 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn11445 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let11449 */
              // ----------
              
              ({ /* cicili#Progn11453 */
                0;
              });
            }));
        });
      });
  }
  int showTree (int indent , BTree_CStr_DynamicType tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let11459 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let11463 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11464 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11466 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn11469 */
                (show_List_BTree_CStr_DynamicType_pair_t (file , items ) +  ({ /* cicili#Let11474 */
                    // ----------
                    
                    ({ /* cicili#Let11478 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn11480 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let11484 */
                          // ----------
                          
                          ({ /* cicili#Progn11488 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let11492 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                
                ({ /* cicili#Let11496 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11497 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11499 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11502 */
                      (show_List_BTree_CStr_DynamicType_pair_t (file , items ) +  ({ /* cicili#Let11507 */
                          // ----------
                          
                          ({ /* cicili#Let11511 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn11513 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let11517 */
                                // ----------
                                
                                ({ /* cicili#Progn11521 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let11525 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      
                      ({ /* cicili#Let11529 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11530 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn11533 */
                            show_List_BTree_CStr_DynamicType_pair_t (file , items );
                          }) : ({ /* cicili#Let11538 */
                            // ----------
                            
                            ({ /* cicili#Progn11542 */
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
void traverse_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , void (*callback) (BTree_CStr_DynamicType_pair_t item , Bool hasNext )) {
  auto void traverseLeaf (List_BTree_CStr_DynamicType_pair_t current , Bool hasNextLeaf );
  void traverseInternal (List_BTree_CStr_DynamicType_pair_t currentItem , List_Rc_BTree_CStr_DynamicType currentChild ) {
    { /* cicili#Let11551 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      
      ({ /* cicili#Let11555 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11556 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11558 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11562 */
            { /* cicili#Let11566 */
              __auto_type match11565  = get_Rc_BTree_CStr_DynamicType (wheadC );
              typeof((((match11565 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              
              ({ /* cicili#Let11571 */
                bool __h_case_result  = (true  &&  (((match11565 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11572 */
                      (headC  =  (((match11565 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block11576 */
                    { /* cicili#Let11580 */
                      // ----------
                      
                      ({ /* cicili#Let11584 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11587 */
                            { /* cicili#Block11589 */
                              { /* cicili#Let11593 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                
                                ({ /* cicili#Let11597 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11598 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11600 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11604 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let11609 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      
                                      ({ /* cicili#Let11613 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11614 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn11616 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block11620 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let11625 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let11629 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11630 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block11634 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let11638 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                
                                ({ /* cicili#Let11642 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11643 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11645 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11649 */
                                      { /* cicili#Block11651 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let11656 */
                            // ----------
                            
                            { /* cicili#Block11660 */
                              { /* cicili#Block11662 */
                                { /* cicili#Let11666 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  
                                  ({ /* cicili#Let11670 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11671 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11673 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block11677 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let11682 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        
                                        ({ /* cicili#Let11686 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11687 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn11689 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block11693 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let11698 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              
                                              ({ /* cicili#Let11702 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11703 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                if (__h_case_result )
                                                  { /* cicili#Block11707 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let11711 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  
                                  ({ /* cicili#Let11715 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11716 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11718 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block11722 */
                                        { /* cicili#Block11724 */
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
  void traverseLeaf (List_BTree_CStr_DynamicType_pair_t current , Bool hasNextLeaf ) {
    { /* cicili#Let11731 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11735 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11736 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11738 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11742 */
            { /* cicili#Block11744 */
              callback (head , ({ /* cicili#Let11748 */
                  // ----------
                  
                  ({ /* cicili#Let11752 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11754 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let11758 */
                        // ----------
                        
                        ({ /* cicili#Progn11762 */
                          ({ /* cicili#Let11766 */
                            // ----------
                            
                            ({ /* cicili#Let11770 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn11772 */
                                  True ();
                                }) : ({ /* cicili#Let11776 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn11780 */
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
  { /* cicili#Let11785 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    
    ({ /* cicili#Let11789 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11790 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11792 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11796 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let11801 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let11805 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11806 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11808 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11812 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let11817 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                
                ({ /* cicili#Let11821 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11822 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11826 */
                      traverseLeaf (items , False ());
                    }
                });
              }
          });
        }
    });
  }
}
Maybe_BTree_CStr_DynamicType_pair_t max_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree ) {
  auto Maybe_BTree_CStr_DynamicType_pair_t maxLeaf (List_BTree_CStr_DynamicType_pair_t current );
  Maybe_BTree_CStr_DynamicType_pair_t maxInternal (List_Rc_BTree_CStr_DynamicType current ) {
    return ({ /* cicili#Let11842 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11846 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11847 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11849 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11852 */
              ({ /* cicili#Let11856 */
                // ----------
                
                ({ /* cicili#Let11860 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11862 */
                      ({ /* cicili#Let11866 */
                        __auto_type match11865  = get_Rc_BTree_CStr_DynamicType (head );
                        typeof((((match11865 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let11871 */
                          bool __h_case_result  = (true  &&  (((match11865 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11872 */
                                (child  =  (((match11865 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11875 */
                              ({ /* cicili#Let11879 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                
                                ({ /* cicili#Let11883 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11884 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn11887 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let11891 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      
                                      ({ /* cicili#Let11895 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11896 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn11899 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let11903 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let11907 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11908 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn11911 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let11915 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn11919 */
                                                    Nothing_BTree_CStr_DynamicType_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let11924 */
                              // ----------
                              
                              ({ /* cicili#Progn11928 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11933 */
                      // ----------
                      
                      ({ /* cicili#Progn11937 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11941 */
              // ----------
              
              ({ /* cicili#Progn11945 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t maxLeaf (List_BTree_CStr_DynamicType_pair_t current ) {
    return ({ /* cicili#Let11953 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11957 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11958 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11960 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11963 */
              ({ /* cicili#Let11967 */
                // ----------
                
                ({ /* cicili#Let11971 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11973 */
                      Just_BTree_CStr_DynamicType_pair_t (head );
                    }) : ({ /* cicili#Let11978 */
                      // ----------
                      
                      ({ /* cicili#Progn11982 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11986 */
              // ----------
              
              ({ /* cicili#Progn11990 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11996 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let12000 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12001 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12004 */
            maxInternal (children );
          }) : ({ /* cicili#Let12008 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let12012 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12013 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn12016 */
                  maxInternal (children );
                }) : ({ /* cicili#Let12020 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let12024 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12025 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12028 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let12032 */
                        // ----------
                        
                        ({ /* cicili#Progn12036 */
                          Nothing_BTree_CStr_DynamicType_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType_pair_t min_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree ) {
  auto Maybe_BTree_CStr_DynamicType_pair_t minLeaf (List_BTree_CStr_DynamicType_pair_t first );
  Maybe_BTree_CStr_DynamicType_pair_t minInternal (List_Rc_BTree_CStr_DynamicType first ) {
    return ({ /* cicili#Let12051 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let12055 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12056 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12059 */
              ({ /* cicili#Let12063 */
                __auto_type match12062  = get_Rc_BTree_CStr_DynamicType (head );
                typeof((((match12062 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                
                ({ /* cicili#Let12068 */
                  bool __h_case_result  = (true  &&  (((match12062 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12069 */
                        (child  =  (((match12062 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12072 */
                      ({ /* cicili#Let12076 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        
                        ({ /* cicili#Let12080 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12081 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12084 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let12088 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              
                              ({ /* cicili#Let12092 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12093 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn12096 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let12100 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let12104 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12105 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn12108 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let12112 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn12116 */
                                            Nothing_BTree_CStr_DynamicType_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12121 */
                      // ----------
                      
                      ({ /* cicili#Progn12125 */
                        Nothing_BTree_CStr_DynamicType_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12130 */
              // ----------
              
              ({ /* cicili#Progn12134 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t minLeaf (List_BTree_CStr_DynamicType_pair_t first ) {
    return ({ /* cicili#Let12142 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let12146 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12147 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12150 */
              Just_BTree_CStr_DynamicType_pair_t (head );
            }) : ({ /* cicili#Let12155 */
              // ----------
              
              ({ /* cicili#Progn12159 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12165 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let12169 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12170 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12173 */
            minInternal (children );
          }) : ({ /* cicili#Let12177 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let12181 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12182 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn12185 */
                  minInternal (children );
                }) : ({ /* cicili#Let12189 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let12193 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12194 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12197 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let12201 */
                        // ----------
                        
                        ({ /* cicili#Progn12205 */
                          Nothing_BTree_CStr_DynamicType_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType delete_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , CStr skey , void (*callback) (BTree_CStr_DynamicType_pair_t item )) {
  return deleteWithParent_BTree_CStr_DynamicType (Nothing_BTree_CStr_DynamicType (), 0, 0, tree , skey , callback );
}
Maybe_BTree_CStr_DynamicType_pair_t search_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , CStr skey ) {
  Maybe_BTree_CStr_DynamicType_pair_t searchInternal (List_Rc_BTree_CStr_DynamicType children , List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let12223 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12227 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12228 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12230 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12232 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12235 */
              ({ /* cicili#Let12239 */
                __auto_type match12238  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12243 */
                  bool __h_case_result  = (true  &&  ((match12238 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12245 */
                      ({ /* cicili#Let12249 */
                        __auto_type match12248  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                        typeof((((match12248 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        
                        ({ /* cicili#Let12254 */
                          bool __h_case_result  = (true  &&  (((match12248 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12255 */
                                (node  =  (((match12248 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12258 */
                              ({ /* cicili#Let12262 */
                                __auto_type match12261  = get_Rc_BTree_CStr_DynamicType (node );
                                typeof((((match12261 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let12267 */
                                  bool __h_case_result  = (true  &&  (((match12261 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12268 */
                                        (tr  =  (((match12261 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12271 */
                                      search_BTree_CStr_DynamicType (tr , skey );
                                    }) : ({ /* cicili#Let12276 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12280 */
                                        Nothing_BTree_CStr_DynamicType_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let12285 */
                              // ----------
                              
                              ({ /* cicili#Progn12289 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12294 */
                      // ----------
                      
                      ({ /* cicili#Let12298 */
                        bool __h_case_result  = (true  &&  ((match12238 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn12300 */
                            Just_BTree_CStr_DynamicType_pair_t (head );
                          }) : ({ /* cicili#Let12305 */
                            // ----------
                            
                            ({ /* cicili#Progn12309 */
                              ({ /* cicili#Let12313 */
                                // ----------
                                
                                ({ /* cicili#Let12317 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12319 */
                                      ({ /* cicili#Let12323 */
                                        __auto_type match12322  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                        typeof((((match12322 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        
                                        ({ /* cicili#Let12328 */
                                          bool __h_case_result  = (true  &&  (((match12322 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12329 */
                                                (node  =  (((match12322 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn12332 */
                                              ({ /* cicili#Let12336 */
                                                __auto_type match12335  = get_Rc_BTree_CStr_DynamicType (node );
                                                typeof((((match12335 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                
                                                ({ /* cicili#Let12341 */
                                                  bool __h_case_result  = (true  &&  (((match12335 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12342 */
                                                        (tr  =  (((match12335 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12345 */
                                                      search_BTree_CStr_DynamicType (tr , skey );
                                                    }) : ({ /* cicili#Let12350 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn12354 */
                                                        Nothing_BTree_CStr_DynamicType_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let12359 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn12363 */
                                                Nothing_BTree_CStr_DynamicType_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let12368 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12372 */
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
            }) : ({ /* cicili#Let12376 */
              // ----------
              
              ({ /* cicili#Progn12380 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t searchLeaf (List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let12390 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12394 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12395 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12397 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12399 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12402 */
              ({ /* cicili#Let12406 */
                __auto_type match12405  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12410 */
                  bool __h_case_result  = (true  &&  ((match12405 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12412 */
                      Just_BTree_CStr_DynamicType_pair_t (head );
                    }) : ({ /* cicili#Let12417 */
                      // ----------
                      
                      ({ /* cicili#Progn12421 */
                        ({ /* cicili#Let12425 */
                          // ----------
                          
                          ({ /* cicili#Let12429 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn12431 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              }) : ({ /* cicili#Let12436 */
                                // ----------
                                
                                ({ /* cicili#Progn12440 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12444 */
              // ----------
              
              ({ /* cicili#Progn12448 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12454 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let12458 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12459 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12461 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12464 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let12468 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let12472 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn12473 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn12475 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn12478 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let12482 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let12486 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12487 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12490 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let12494 */
                        // ----------
                        
                        ({ /* cicili#Progn12498 */
                          Nothing_BTree_CStr_DynamicType_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType insert_BTree_CStr_DynamicType (BTree_CStr_DynamicType tree , CStr skey , DynamicType svalue ) {
  if (3 <  3 )
    { /* cicili#Block12510 */
      return Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_ORDER (3));
    }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType insertInternal (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children , List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let12522 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12526 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12527 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12529 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12531 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12534 */
              ({ /* cicili#Let12538 */
                __auto_type match12537  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12542 */
                  bool __h_case_result  = (true  &&  ((match12537 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12544 */
                      ({ /* cicili#Let12548 */
                        __auto_type match12547  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                        typeof((((match12547 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let12553 */
                          bool __h_case_result  = (true  &&  (((match12547 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12554 */
                                (child  =  (((match12547 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12557 */
                              ({ /* cicili#Let12561 */
                                __auto_type match12560  = get_Rc_BTree_CStr_DynamicType (child );
                                typeof((((match12560 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let12566 */
                                  bool __h_case_result  = (true  &&  (((match12560 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12567 */
                                        (tr  =  (((match12560 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12570 */
                                      ({ /* cicili#Let12574 */
                                        __auto_type match12573  = insert_BTree_CStr_DynamicType (tr , skey , svalue );
                                        typeof((((match12573 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        
                                        ({ /* cicili#Let12579 */
                                          bool __h_case_result  = (true  &&  (((match12573 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12580 */
                                                (child_tree  =  (((match12573 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn12583 */
                                              ({ /* cicili#Let12587 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                
                                                ({ /* cicili#Let12591 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12592 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn12594 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12597 */
                                                      ({ /* cicili#Let12602 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match12600_1_arg ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let12606 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12607 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn12609 */
                                                                    (__h_match12600_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match12600_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn12612 */
                                                              ({ /* cicili#Let12615 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12617 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , single_item , current ), ({ /* cicili#Let12626 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12628 */
                                                                      __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12632 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12636 */
                                                                      __auto_type r3  = append_List_Rc_BTree_CStr_DynamicType (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12640 */
                                                                      __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12649 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_12648 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_12648 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let12656 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn12660 */
                                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let12667 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let12671 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn12673 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12681 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12683 */
                                                                  __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12687 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12693 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_12692 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_12692 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12700 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12704 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12710 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_12709 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_12709 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12717 */
                                                                  __auto_type r5  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_CStr_DynamicType (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let12725 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn12729 */
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12737 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12739 */
                                                                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12743 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12749 */
                                                                      Rc_BTree_CStr_DynamicType __ciciliC_12748 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                      }
                                                                      __ciciliC_12748 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12756 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12760 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12766 */
                                                                      Rc_BTree_CStr_DynamicType __ciciliC_12765 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                      }
                                                                      __ciciliC_12765 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12773 */
                                                                    __auto_type r5  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ), r4 );
                                                                    // ----------
                                                                    ((void)(r5 -> __h_table -> freeClass ));
                                                                    r5 ;
                                                                  });
                                                                  // ----------
                                                                  append_List_Rc_BTree_CStr_DynamicType (r2 , r5 );
                                                                })));
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let12781 */
                                              __auto_type left  = match12573 ;
                                              // ----------
                                              
                                              ({ /* cicili#Progn12785 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let12789 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12793 */
                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let12800 */
                              // ----------
                              
                              ({ /* cicili#Progn12804 */
                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , ((BTree_CStr_DynamicType_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12814 */
                      // ----------
                      
                      ({ /* cicili#Let12818 */
                        bool __h_case_result  = (true  &&  ((match12537 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn12820 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let12827 */
                            // ----------
                            
                            ({ /* cicili#Progn12831 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12835 */
              // ----------
              
              ({ /* cicili#Progn12839 */
                ({ /* cicili#Let12843 */
                  __auto_type match12842  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                  typeof((((match12842 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  
                  ({ /* cicili#Let12848 */
                    bool __h_case_result  = (true  &&  (((match12842 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12849 */
                          (child  =  (((match12842 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12852 */
                        ({ /* cicili#Let12856 */
                          __auto_type match12855  = get_Rc_BTree_CStr_DynamicType (child );
                          typeof((((match12855 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let12861 */
                            bool __h_case_result  = (true  &&  (((match12855 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12862 */
                                  (tr  =  (((match12855 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn12865 */
                                ({ /* cicili#Let12869 */
                                  __auto_type match12868  = insert_BTree_CStr_DynamicType (tr , skey , svalue );
                                  typeof((((match12868 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  
                                  ({ /* cicili#Let12874 */
                                    bool __h_case_result  = (true  &&  (((match12868 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12875 */
                                          (child_tree  =  (((match12868 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn12878 */
                                        ({ /* cicili#Let12882 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          
                                          ({ /* cicili#Let12886 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12887 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn12889 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn12892 */
                                                ({ /* cicili#Let12897 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match12895_1_arg ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let12901 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12902 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn12904 */
                                                              (__h_match12895_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match12895_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn12907 */
                                                        ({ /* cicili#Let12910 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12912 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , single_item , current ), ({ /* cicili#Let12921 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12923 */
                                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12927 */
                                                                __auto_type r2  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12931 */
                                                                __auto_type r3  = append_List_Rc_BTree_CStr_DynamicType (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12935 */
                                                                __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12944 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_12943 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_12943 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let12951 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn12955 */
                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let12962 */
                                                // ----------
                                                
                                                ({ /* cicili#Let12966 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12968 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12976 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12978 */
                                                            __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12982 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12988 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_12987 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_12987 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12995 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_CStr_DynamicType (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let13003 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn13007 */
                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let13015 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13017 */
                                                              __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13021 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn13027 */
                                                                Rc_BTree_CStr_DynamicType __ciciliC_13026 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                }
                                                                __ciciliC_13026 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13034 */
                                                              __auto_type r3  = wrap_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ));
                                                              // ----------
                                                              ((void)(r3 -> __h_table -> freeClass ));
                                                              r3 ;
                                                            });
                                                            // ----------
                                                            append_List_Rc_BTree_CStr_DynamicType (r2 , r3 );
                                                          })));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let13042 */
                                        __auto_type left  = match12868 ;
                                        // ----------
                                        
                                        ({ /* cicili#Progn13046 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let13050 */
                                // ----------
                                
                                ({ /* cicili#Progn13054 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13061 */
                        // ----------
                        
                        ({ /* cicili#Progn13065 */
                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (({ /* cicili#Let13072 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13074 */
                                __auto_type r1  = wrap_List_BTree_CStr_DynamicType_pair_t (((BTree_CStr_DynamicType_pair_t){ skey , svalue }));
                                // ----------
                                ((void)(r1 -> __h_table -> freeClass ));
                                r1 ;
                              });
                              // ----------
                              append_List_BTree_CStr_DynamicType_pair_t (items , r1 );
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
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType insertLeaf (List_BTree_CStr_DynamicType_pair_t items , List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let13090 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13094 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13095 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn13097 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn13099 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn13102 */
              ({ /* cicili#Let13106 */
                __auto_type match13105  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let13110 */
                  bool __h_case_result  = (true  &&  ((match13105 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13112 */
                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , ((BTree_CStr_DynamicType_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let13122 */
                      // ----------
                      
                      ({ /* cicili#Let13126 */
                        bool __h_case_result  = (true  &&  ((match13105 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn13128 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let13135 */
                            // ----------
                            
                            ({ /* cicili#Progn13139 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let13143 */
              // ----------
              
              ({ /* cicili#Progn13147 */
                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (({ /* cicili#Let13154 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13156 */
                      __auto_type r1  = wrap_List_BTree_CStr_DynamicType_pair_t (((BTree_CStr_DynamicType_pair_t){ skey , svalue }));
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    // ----------
                    append_List_BTree_CStr_DynamicType_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let13166 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let13170 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13171 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13173 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13176 */
            ({ /* cicili#Let13180 */
              __auto_type match13179  = insertInternal (items , children , items , 0);
              typeof((((match13179 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              
              ({ /* cicili#Let13184 */
                bool __h_case_result  = (true  &&  (((match13179 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13185 */
                      (tr  =  (((match13179 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn13188 */
                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                  }) : ({ /* cicili#Let13195 */
                    __auto_type left  = match13179 ;
                    // ----------
                    
                    ({ /* cicili#Progn13199 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let13203 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let13207 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13208 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13210 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn13213 */
                  ({ /* cicili#Let13217 */
                    __auto_type match13216  = insertInternal (items , children , items , 0);
                    typeof((((match13216 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    
                    ({ /* cicili#Let13221 */
                      bool __h_case_result  = (true  &&  (((match13216 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13222 */
                            (tr  =  (((match13216 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn13225 */
                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                        }) : ({ /* cicili#Let13232 */
                          __auto_type left  = match13216 ;
                          // ----------
                          
                          ({ /* cicili#Progn13236 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let13240 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let13244 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13245 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn13248 */
                        ({ /* cicili#Let13252 */
                          __auto_type match13251  = insertLeaf (items , items , 0);
                          typeof((((match13251 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let13256 */
                            bool __h_case_result  = (true  &&  (((match13251 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13257 */
                                  (tr  =  (((match13251 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn13260 */
                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                              }) : ({ /* cicili#Let13267 */
                                __auto_type left  = match13251 ;
                                // ----------
                                
                                ({ /* cicili#Progn13271 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13275 */
                        // ----------
                        
                        ({ /* cicili#Progn13279 */
                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_OBJECT ());
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
int order_BTree_CStr_DynamicType () {
  return 3;
}
void free_BTree_CStr_DynamicType (BTree_CStr_DynamicType * this_ptr ) {
  { /* cicili#Let13288 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_CStr_DynamicType children ) {
      { /* cicili#Let13293 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13297 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13298 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13300 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block13304 */
              { /* cicili#Block13306 */
                free_Rc_BTree_CStr_DynamicType (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let13312 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let13316 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13317 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13319 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block13323 */
            { /* cicili#Block13325 */
              free_List_BTree_CStr_DynamicType_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_CStr_DynamicType ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let13336 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let13340 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13341 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13343 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block13347 */
                  { /* cicili#Block13349 */
                    free_List_BTree_CStr_DynamicType_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_CStr_DynamicType ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let13360 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let13364 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13365 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block13369 */
                        { /* cicili#Block13371 */
                          free_List_BTree_CStr_DynamicType_pair_t ((&items ));
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
BTree_CStr_DynamicType__H_Table * const get_BTree_CStr_DynamicType__H_Table () {
  static BTree_CStr_DynamicType__H_Table table  = { free_BTree_CStr_DynamicType , fromLists_BTree_CStr_DynamicType , pure_BTree_CStr_DynamicType , show_BTree_CStr_DynamicType , traverse_BTree_CStr_DynamicType , max_BTree_CStr_DynamicType , min_BTree_CStr_DynamicType , delete_BTree_CStr_DynamicType , search_BTree_CStr_DynamicType , insert_BTree_CStr_DynamicType , order_BTree_CStr_DynamicType };
  return (&table );
}
BTree_CStr_DynamicType Branch_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children ) {
  { /* cicili#Let13383 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_CStr_DynamicType Internal_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children ) {
  { /* cicili#Let13391 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_CStr_DynamicType Leaf_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items ) {
  { /* cicili#Let13399 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_CStr_DynamicType__H_IMPL__ */ 
