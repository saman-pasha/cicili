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
StringBuffer_char new_StringBuffer_char (int step ) {
  return MakeStringBuffer_char (calloc ((step  +  1 ), sizeof(char)), 0, step , step );
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , char data ) {
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , char * data , int len ) {
  return ({ /* cicili#Let1232 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let1236 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn1237 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn1239 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn1241 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1243 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1246 */
            ({ /* cicili#Progn1248 */
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block1252 */
                  size  = ((step  *  (((cursor  +  len  ) /  step  ) +  1 ) ) +  1 );
                  { /* cicili#Let1254 */
                    char * new_buffer  = calloc (size , sizeof(char));
                    // ----------
                    memcpy (new_buffer , buffer , cursor );
                    free (buffer );
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , len );
              (*(buffer  +  cursor  +  len  +  1 )) = '\0';
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let1259 */
            // ----------
            
            ({ /* cicili#Progn1263 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
  { /* cicili#Let1271 */
    typeof((((this -> __h_data ). Bufferred ). __h_0_mem )) buffer ;
    // ----------
    
    ({ /* cicili#Let1275 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn1276 */
            (buffer  =  (((this -> __h_data ). Bufferred ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1280 */
          { /* cicili#Block1282 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
    });
  }
}
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table () {
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , new_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step ) {
  { /* cicili#Let1292 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Bufferred_t , .__h_data.Bufferred = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let1297 */
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
  { /* cicili#Let1320 */
    Maybe_DynamicType_x instance  = ((Maybe_DynamicType_x){ get_Maybe_DynamicType_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_DynamicType_x Nothing_DynamicType_x () {
  { /* cicili#Let1325 */
    Maybe_DynamicType_x instance  = ((Maybe_DynamicType_x){ get_Maybe_DynamicType_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_DynamicType_x__H_IMPL__ */ 
#ifndef __Box_DynamicType__H_IMPL__
#define __Box_DynamicType__H_IMPL__
Box_DynamicType new_Box_DynamicType (DynamicType_x pointer ) {
  return ({ /* cicili#Let1332 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((DynamicType_x *)malloc (sizeof(DynamicType_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_DynamicType_x (holder , count , ((size_t)pointer ));
    });
}
Box_DynamicType clone_Box_DynamicType (Box_DynamicType rc ) {
  return ({ /* cicili#Let1341 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1345 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1346 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1348 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1350 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1353 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn1356 */
                (++(*count ));
                __h_Hold_DynamicType_x (pointer , count , address );
              }) : Gone_DynamicType_x ());
          }) : ({ /* cicili#Let1362 */
            // ----------
            
            ({ /* cicili#Progn1366 */
              Gone_DynamicType_x ();
            });
          }));
      });
    });
}
Maybe_DynamicType_x take_Box_DynamicType (Box_DynamicType * this ) {
  return ({ /* cicili#Let1374 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1378 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1379 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1381 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1383 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1386 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let1390 */
                __auto_type result  = Just_DynamicType_x ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block1396 */
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
          }) : ({ /* cicili#Let1403 */
            // ----------
            
            ({ /* cicili#Progn1407 */
              Nothing_DynamicType_x ();
            });
          }));
      });
    });
}
Maybe_DynamicType_x get_Box_DynamicType (Box_DynamicType rc ) {
  return ({ /* cicili#Let1415 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1419 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1420 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1422 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1424 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1427 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_DynamicType_x ((*pointer )) : Nothing_DynamicType_x ());
          }) : ({ /* cicili#Let1434 */
            // ----------
            
            ({ /* cicili#Progn1438 */
              Nothing_DynamicType_x ();
            });
          }));
      });
    });
}
void free_Box_DynamicType (Box_DynamicType * this ) {
  { /* cicili#Let1447 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let1451 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1452 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1454 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn1456 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1460 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block1464 */
              if ((*count ) ==  1 )
                { /* cicili#Block1467 */
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
        { /* cicili#Let1477 */
          // ----------
          
          ({ /* cicili#Let1481 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1484 */
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
  { /* cicili#Let1495 */
    Box_DynamicType instance  = ((Box_DynamicType){ get_Box_DynamicType__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_DynamicType Gone_DynamicType_x () {
  { /* cicili#Let1500 */
    Box_DynamicType instance  = ((Box_DynamicType){ get_Box_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_DynamicType__H_IMPL__ */ 
int show_DynamicType (CFile file , DynamicType dt ) {
  return ({ /* cicili#Let1506 */
      __auto_type __h_matchbox  = dt ;
      // ----------
      ({ /* cicili#Let1510 */
        __auto_type match1509  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1509 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let1515 */
          bool __h_case_result  = (true  &&  (((match1509 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1516 */
                (unboxed  =  (((match1509 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1519 */
              ({ /* cicili#Let1523 */
                typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                // ----------
                
                ({ /* cicili#Let1527 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn1528 */
                        (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1531 */
                      (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                    }) : ({ /* cicili#Let1535 */
                      typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                      // ----------
                      
                      ({ /* cicili#Let1539 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn1540 */
                              (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1543 */
                            fprintf (file , "%llu", data );
                          }) : ({ /* cicili#Let1547 */
                            typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let1551 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn1552 */
                                    (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn1555 */
                                  fprintf (file , "%Lf", data );
                                }) : ({ /* cicili#Let1559 */
                                  typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                  // ----------
                                  
                                  ({ /* cicili#Let1563 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn1564 */
                                          (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn1567 */
                                        ({ /* cicili#Let1571 */
                                          // ----------
                                          
                                          ({ /* cicili#Let1575 */
                                            bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn1577 */
                                                fprintf (file , "#t");
                                              }) : ({ /* cicili#Let1581 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn1585 */
                                                  fprintf (file , "#f");
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let1589 */
                                        typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                        // ----------
                                        
                                        ({ /* cicili#Let1593 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn1594 */
                                                (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn1597 */
                                              show_List_DynamicType (file , data );
                                            }) : ({ /* cicili#Let1602 */
                                              typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                              // ----------
                                              
                                              ({ /* cicili#Let1606 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1607 */
                                                      (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn1610 */
                                                    show_BTree_CStr_DynamicType (file , data );
                                                  }) : ({ /* cicili#Let1615 */
                                                    typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let1619 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn1620 */
                                                            (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn1623 */
                                                          fprintf (file , "DynamicType Error: %s", data );
                                                        }) : ({ /* cicili#Let1627 */
                                                          typeof((((unboxed -> __h_data ). Function ). __h_0_mem )) params ;
                                                          typeof((((unboxed -> __h_data ). Function ). __h_1_mem )) out ;
                                                          typeof((((unboxed -> __h_data ). Function ). __h_2_mem )) fptr ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let1631 */
                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Function_t  ) &&  ((({ /* cicili#Progn1632 */
                                                                      (params  =  (((unboxed -> __h_data ). Function ). __h_0_mem ) );
                                                                      true ;
                                                                    }) &&  ({ /* cicili#Progn1634 */
                                                                      (out  =  (((unboxed -> __h_data ). Function ). __h_1_mem ) );
                                                                      true ;
                                                                    }) ) &&  ({ /* cicili#Progn1636 */
                                                                    (fptr  =  (((unboxed -> __h_data ). Function ). __h_2_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn1639 */
                                                                (fprintf (file , "<Function: ") +  show_List_DynamicType (file , params ) +  fprintf (file , " out: ") +  show_DynamicType (file , out ) +  fprintf (file , " @%zx", ((size_t)fptr )) );
                                                              }) : ({ /* cicili#Let1645 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn1649 */
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
            }) : ({ /* cicili#Let1653 */
              // ----------
              
              ({ /* cicili#Progn1657 */
                fprintf (file , "nil");
              });
            }));
        });
      });
    });
}
void __ciciliL_1725 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1730 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1775 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1780 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1828 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1833 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1849 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1854 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
DynamicType search_DynamicType (DynamicType dt , CStr path ) {
  return ({ /* cicili#Let1661 */
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
      (((cursor  ==  path  )) ? dt  : ({ /* cicili#Let1669 */
          __auto_type __h_matchbox  = dt ;
          // ----------
          ({ /* cicili#Let1673 */
            __auto_type match1672  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match1672 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            
            ({ /* cicili#Let1678 */
              bool __h_case_result  = (true  &&  (((match1672 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1679 */
                    (unboxed  =  (((match1672 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1682 */
                  ({ /* cicili#Let1686 */
                    typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                    // ----------
                    
                    ({ /* cicili#Let1690 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  (({ /* cicili#Progn1691 */
                              (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                              true ;
                            }) &&  ((counter  >  0 ) &&  ((*cursor ) ==  '\0' ) ) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn1694 */
                          ({ /* cicili#Let1697 */
                            __auto_type index  = atoi (script );
                            __auto_type witem  = nth_String (index , data );
                            // ----------
                            ({ /* cicili#Let1702 */
                              typeof((((witem . __h_data ). Just ). __h_0_mem )) item ;
                              // ----------
                              
                              ({ /* cicili#Let1706 */
                                bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1707 */
                                      (item  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn1710 */
                                    Dynamic_String (pure_String ((&item ), 1));
                                  }) : ({ /* cicili#Let1716 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn1720 */
                                      Dynamic_Error (({ /* cicili#Let1723 */
                                          char * reason  = NULL ;
                                          char * objStr  __attribute__((__cleanup__(__ciciliL_1725 ))) = ({ /* cicili#Let1729 */
                                            char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                            CFile file  __attribute__((__cleanup__(__ciciliL_1730 ))) = fmemopen (buffer , 1024, "w+");
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
                        }) : ({ /* cicili#Let1737 */
                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                          // ----------
                          
                          ({ /* cicili#Let1741 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn1742 */
                                  (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1745 */
                                ({ /* cicili#Let1748 */
                                  __auto_type index  = atoi (script );
                                  __auto_type witem  = nth_List_DynamicType (index , data );
                                  // ----------
                                  ({ /* cicili#Let1753 */
                                    typeof((((witem . __h_data ). Just ). __h_0_mem )) item ;
                                    // ----------
                                    
                                    ({ /* cicili#Let1757 */
                                      bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1758 */
                                            (item  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn1761 */
                                          search_DynamicType (item , ((((*cursor ) ==  '\0' )) ? cursor  : (++cursor )));
                                        }) : ({ /* cicili#Let1766 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn1770 */
                                            Dynamic_Error (({ /* cicili#Let1773 */
                                                char * reason  = NULL ;
                                                char * objStr  __attribute__((__cleanup__(__ciciliL_1775 ))) = ({ /* cicili#Let1779 */
                                                  char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                                  CFile file  __attribute__((__cleanup__(__ciciliL_1780 ))) = fmemopen (buffer , 1024, "w+");
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
                              }) : ({ /* cicili#Let1787 */
                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                // ----------
                                
                                ({ /* cicili#Let1791 */
                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1792 */
                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn1795 */
                                      ({ /* cicili#Let1798 */
                                        __auto_type witem  = search_BTree_CStr_DynamicType (data , script );
                                        // ----------
                                        ({ /* cicili#Let1804 */
                                          typeof((((witem . __h_data ). Just ). __h_0_mem )) __h_match1802_0_arg ;
                                          typeof((__h_match1802_0_arg . __h_1_mem )) value ;
                                          // ----------
                                          
                                          ({ /* cicili#Let1808 */
                                            bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn1809 */
                                                    (__h_match1802_0_arg  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  (true  &&  ({ /* cicili#Progn1811 */
                                                      (value  =  (__h_match1802_0_arg . __h_1_mem ) );
                                                      true ;
                                                    }) ) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn1814 */
                                                search_DynamicType (value , ((((*cursor ) ==  '\0' )) ? cursor  : (++cursor )));
                                              }) : ({ /* cicili#Let1819 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn1823 */
                                                  Dynamic_Error (({ /* cicili#Let1826 */
                                                      char * reason  = NULL ;
                                                      char * objStr  __attribute__((__cleanup__(__ciciliL_1828 ))) = ({ /* cicili#Let1832 */
                                                        char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                                        CFile file  __attribute__((__cleanup__(__ciciliL_1833 ))) = fmemopen (buffer , 1024, "w+");
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
                                    }) : ({ /* cicili#Let1840 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn1844 */
                                        Dynamic_Error (({ /* cicili#Let1847 */
                                            char * reason  = NULL ;
                                            char * objStr  __attribute__((__cleanup__(__ciciliL_1849 ))) = ({ /* cicili#Let1853 */
                                              char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                              CFile file  __attribute__((__cleanup__(__ciciliL_1854 ))) = fmemopen (buffer , 1024, "w+");
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
                }) : ({ /* cicili#Let1861 */
                  // ----------
                  
                  ({ /* cicili#Progn1865 */
                    Dynamic_Error (({ /* cicili#Let1868 */
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
    return ({ /* cicili#Let1878 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1882 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1883 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1885 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1888 */
              (({ /* cicili#Let1891 */
                  __auto_type __h_matchbox  = head ;
                  // ----------
                  ({ /* cicili#Let1895 */
                    __auto_type match1894  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                    typeof((((match1894 . __h_data ). Just ). __h_0_mem )) unboxed ;
                    // ----------
                    
                    ({ /* cicili#Let1900 */
                      bool __h_case_result  = (true  &&  (((match1894 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1901 */
                            (unboxed  =  (((match1894 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn1904 */
                          ({ /* cicili#Let1908 */
                            typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let1912 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1913 */
                                    (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn1916 */
                                  objectToXml (xml_name , data );
                                }) : ({ /* cicili#Let1920 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn1924 */
                                    (fprintf (file , "<%s>", xml_name ) +  toXml_ (xml_name , head ) +  fprintf (file , "</%s>", xml_name ) );
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let1928 */
                          // ----------
                          
                          ({ /* cicili#Progn1932 */
                            0;
                          });
                        }));
                    });
                  });
                }) +  listToXml (key , xml_name , tail ) );
            }) : ({ /* cicili#Let1936 */
              // ----------
              
              ({ /* cicili#Progn1940 */
                0;
              });
            }));
        });
      });
  }
  int objectToXml (CStr key , BTree_CStr_DynamicType tree ) {
    return (fprintf (file , "<%s ", key ) +  ({ /* cicili#Let1944 */
          int counter  = 0;
          // ----------
          traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn1948 */
              void __ciciliC_1947 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
                counter  = (counter  +  ({ /* cicili#Let1953 */
                        typeof((item . __h_0_mem )) key ;
                        typeof((item . __h_1_mem )) value ;
                        // ----------
                        
                        ({ /* cicili#Let1957 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn1958 */
                                (key  =  (item . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1960 */
                                (value  =  (item . __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn1963 */
                              ({ /* cicili#Let1966 */
                                __auto_type __h_matchbox  = value ;
                                // ----------
                                ({ /* cicili#Let1970 */
                                  __auto_type match1969  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match1969 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  
                                  ({ /* cicili#Let1975 */
                                    bool __h_case_result  = (true  &&  (((match1969 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1976 */
                                          (unboxed  =  (((match1969 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn1979 */
                                        ({ /* cicili#Let1983 */
                                          typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                                          // ----------
                                          
                                          ({ /* cicili#Let1987 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn1988 */
                                                  (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn1991 */
                                                (fprintf (file , "%s=", key ) +  fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                                              }) : ({ /* cicili#Let1995 */
                                                // ----------
                                                
                                                ({ /* cicili#Let1999 */
                                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_List_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2001 */
                                                      0;
                                                    }) : ({ /* cicili#Let2005 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2009 */
                                                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Object_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2011 */
                                                            0;
                                                          }) : ({ /* cicili#Let2015 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn2019 */
                                                              (fprintf (file , "%s=\"", key ) +  toXml_ (key , value ) +  fprintf (file , "\"") );
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2023 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2027 */
                                          0;
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2031 */
                              // ----------
                              
                              ({ /* cicili#Progn2035 */
                                0;
                              });
                            }));
                        });
                      }) +  fprintf (file , " ") );
              }
              __ciciliC_1947 ;
            }));
          counter ;
        }) +  fprintf (file , ">") +  ({ /* cicili#Let2038 */
          int counter  = 0;
          // ----------
          traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn2042 */
              void __ciciliC_2041 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
                counter  = (counter  +  ({ /* cicili#Let2047 */
                        typeof((item . __h_0_mem )) key ;
                        typeof((item . __h_1_mem )) value ;
                        // ----------
                        
                        ({ /* cicili#Let2051 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn2052 */
                                (key  =  (item . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2054 */
                                (value  =  (item . __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn2057 */
                              ({ /* cicili#Let2060 */
                                __auto_type __h_matchbox  = value ;
                                // ----------
                                ({ /* cicili#Let2064 */
                                  __auto_type match2063  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match2063 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2069 */
                                    bool __h_case_result  = (true  &&  (((match2063 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2070 */
                                          (unboxed  =  (((match2063 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2073 */
                                        ({ /* cicili#Let2077 */
                                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                          typeof((((unboxed -> __h_data ). List ). __h_1_mem )) xml_name ;
                                          // ----------
                                          
                                          ({ /* cicili#Let2081 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  (({ /* cicili#Progn2082 */
                                                    (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn2084 */
                                                    (xml_name  =  (((unboxed -> __h_data ). List ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2087 */
                                                (fprintf (file , "<%s>", key ) +  listToXml (key , xml_name , data ) +  fprintf (file , "</%s>", key ) );
                                              }) : ({ /* cicili#Let2091 */
                                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                                // ----------
                                                
                                                ({ /* cicili#Let2095 */
                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2096 */
                                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2099 */
                                                      objectToXml (key , data );
                                                    }) : ({ /* cicili#Let2103 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn2107 */
                                                        0;
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2111 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2115 */
                                          0;
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2119 */
                              // ----------
                              
                              ({ /* cicili#Progn2123 */
                                0;
                              });
                            }));
                        });
                      }) );
              }
              __ciciliC_2041 ;
            }));
          counter ;
        }) +  fprintf (file , "</%s>", key ) );
  }
  int toXml_ (CStr key , DynamicType dt ) {
    return ({ /* cicili#Let2129 */
        __auto_type __h_matchbox  = dt ;
        // ----------
        ({ /* cicili#Let2133 */
          __auto_type match2132  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2132 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let2138 */
            bool __h_case_result  = (true  &&  (((match2132 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2139 */
                  (unboxed  =  (((match2132 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn2142 */
                ({ /* cicili#Let2146 */
                  typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                  // ----------
                  
                  ({ /* cicili#Let2150 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2151 */
                          (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn2154 */
                        (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                      }) : ({ /* cicili#Let2158 */
                        typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                        // ----------
                        
                        ({ /* cicili#Let2162 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn2163 */
                                (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn2166 */
                              fprintf (file , "%llu", data );
                            }) : ({ /* cicili#Let2170 */
                              typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                              // ----------
                              
                              ({ /* cicili#Let2174 */
                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn2175 */
                                      (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn2178 */
                                    fprintf (file , "%Lf", data );
                                  }) : ({ /* cicili#Let2182 */
                                    typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                    // ----------
                                    
                                    ({ /* cicili#Let2186 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn2187 */
                                            (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn2190 */
                                          ({ /* cicili#Let2194 */
                                            // ----------
                                            
                                            ({ /* cicili#Let2198 */
                                              bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn2200 */
                                                  fprintf (file , "true");
                                                }) : ({ /* cicili#Let2204 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn2208 */
                                                    fprintf (file , "false");
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let2212 */
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
                                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2242 */
                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2243 */
                                                              (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2246 */
                                                            fprintf (file , "DynamicType Error: %s", data );
                                                          }) : ({ /* cicili#Let2250 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn2254 */
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
              }) : ({ /* cicili#Let2258 */
                // ----------
                
                ({ /* cicili#Progn2262 */
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
    return ({ /* cicili#Let2269 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2273 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2274 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2276 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2279 */
              (toJson_DynamicType (file , head ) +  ({ /* cicili#Let2284 */
                  // ----------
                  
                  ({ /* cicili#Let2288 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn2290 */
                        fprintf (file , ",");
                      }) : ({ /* cicili#Let2294 */
                        // ----------
                        
                        ({ /* cicili#Progn2298 */
                          0;
                        });
                      }));
                  });
                }) +  listToJson (tail ) );
            }) : ({ /* cicili#Let2302 */
              // ----------
              
              ({ /* cicili#Progn2306 */
                fprintf (file , "]");
              });
            }));
        });
      });
  }
  int objectToJson (BTree_CStr_DynamicType tree ) {
    return ({ /* cicili#Let2310 */
        int counter  = fprintf (file , "{");
        // ----------
        traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn2314 */
            void __ciciliC_2313 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
              counter  = (counter  +  ({ /* cicili#Let2319 */
                      typeof((item . __h_0_mem )) key ;
                      typeof((item . __h_1_mem )) value ;
                      // ----------
                      
                      ({ /* cicili#Let2323 */
                        bool __h_case_result  = (true  &&  (({ /* cicili#Progn2324 */
                              (key  =  (item . __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn2326 */
                              (value  =  (item . __h_1_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn2329 */
                            (fprintf (file , "\"%s\":", key ) +  toJson_DynamicType (file , value ) +  ({ /* cicili#Let2334 */
                                // ----------
                                
                                ({ /* cicili#Let2338 */
                                  bool __h_case_result  = (true  &&  ((hasNext . __h_ctor ) ==  __h_True_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn2340 */
                                      fprintf (file , ",");
                                    }) : ({ /* cicili#Let2344 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn2348 */
                                        0;
                                      });
                                    }));
                                });
                              }) );
                          }) : ({ /* cicili#Let2352 */
                            // ----------
                            
                            ({ /* cicili#Progn2356 */
                              0;
                            });
                          }));
                      });
                    }) );
            }
            __ciciliC_2313 ;
          }));
        (counter  +  fprintf (file , "}") );
      });
  }
  return ({ /* cicili#Let2361 */
      __auto_type __h_matchbox  = dt ;
      // ----------
      ({ /* cicili#Let2365 */
        __auto_type match2364  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2364 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let2370 */
          bool __h_case_result  = (true  &&  (((match2364 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2371 */
                (unboxed  =  (((match2364 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2374 */
              ({ /* cicili#Let2378 */
                typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                // ----------
                
                ({ /* cicili#Let2382 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2383 */
                        (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2386 */
                      (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                    }) : ({ /* cicili#Let2390 */
                      typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                      // ----------
                      
                      ({ /* cicili#Let2394 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn2395 */
                              (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn2398 */
                            fprintf (file , "%llu", data );
                          }) : ({ /* cicili#Let2402 */
                            typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let2406 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn2407 */
                                    (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn2410 */
                                  fprintf (file , "%Lf", data );
                                }) : ({ /* cicili#Let2414 */
                                  typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2418 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn2419 */
                                          (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2422 */
                                        ({ /* cicili#Let2426 */
                                          // ----------
                                          
                                          ({ /* cicili#Let2430 */
                                            bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2432 */
                                                fprintf (file , "true");
                                              }) : ({ /* cicili#Let2436 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn2440 */
                                                  fprintf (file , "false");
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2444 */
                                        typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                        // ----------
                                        
                                        ({ /* cicili#Let2448 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn2449 */
                                                (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn2452 */
                                              (fprintf (file , "[") +  listToJson (data ) );
                                            }) : ({ /* cicili#Let2456 */
                                              typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                              // ----------
                                              
                                              ({ /* cicili#Let2460 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2461 */
                                                      (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn2464 */
                                                    objectToJson (data );
                                                  }) : ({ /* cicili#Let2468 */
                                                    typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let2472 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2473 */
                                                            (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn2476 */
                                                          fprintf (file , "DynamicType Error: %s", data );
                                                        }) : ({ /* cicili#Let2480 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn2484 */
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
            }) : ({ /* cicili#Let2488 */
              // ----------
              
              ({ /* cicili#Progn2492 */
                fprintf (file , "nothing");
              });
            }));
        });
      });
    });
}
DynamicType parseJson_DynamicType (CFile file ) {
  DynamicType _parseJson (CFile file , bool hadItem ) {
    { /* cicili#Let2503 */
      int counter  = 0;
      char cursor  = '\0';
      StringBuffer_char sb  = new_StringBuffer_char (16);
      bool in_string  = false ;
      bool in_integer  = false ;
      bool in_float  = false ;
      bool in_symbol  = false ;
      // ----------
      while (true ) {
          (++counter );
          cursor  = fgetc (file );
          if (feof (file ) !=  0 )
            { /* cicili#Block2510 */
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
                  { /* cicili#Block2528 */
                    if ((cursor  ==  ']' ) ||  (cursor  ==  '}' ) )
                      { /* cicili#Block2532 */
                        ungetc (cursor , file );
                      }
                    if (in_integer )
                      { /* cicili#Let2537 */
                        typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                        // ----------
                        
                        ({ /* cicili#Let2541 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn2542 */
                                (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block2546 */
                              { /* cicili#Let2548 */
                                char * endptr ;
                                int64_t value ;
                                // ----------
                                sb  = new_StringBuffer_char (16);
                                in_integer  = false ;
                                value  = strtoll (buffer , (&endptr ), 10);
                                if ((*endptr ) ==  '\0' )
                                  return Dynamic_Integer (value );
                                else
                                  return Dynamic_Error (({ /* cicili#Let2558 */
                                      char * reason  = NULL ;
                                      // ----------
                                      asprintf ((&reason ), "Parse Json: wrong integer value: '%s' at position: %d", buffer , counter );
                                      reason ;
                                    }));
                              }
                            }
                          else
                            { /* cicili#Let2563 */
                              // ----------
                              
                              { /* cicili#Block2567 */
                                return Dynamic_Error (strdup ("Parse Json: no buffer"));
                              }
                            }
                        });
                      }
                    else
                      {
                      if (in_float )
                        { /* cicili#Let2574 */
                          typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                          // ----------
                          
                          ({ /* cicili#Let2578 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn2579 */
                                  (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            if (__h_case_result )
                              { /* cicili#Block2583 */
                                { /* cicili#Let2585 */
                                  char * endptr ;
                                  long double value ;
                                  // ----------
                                  sb  = new_StringBuffer_char (16);
                                  in_float  = false ;
                                  value  = strtold (buffer , (&endptr ));
                                  if ((*endptr ) ==  '\0' )
                                    return Dynamic_Float (value );
                                  else
                                    return Dynamic_Error (({ /* cicili#Let2595 */
                                        char * reason  = NULL ;
                                        // ----------
                                        asprintf ((&reason ), "Parse Json: wrong floating point value: '%s' at position: %d", buffer , counter );
                                        reason ;
                                      }));
                                }
                              }
                            else
                              { /* cicili#Let2600 */
                                // ----------
                                
                                { /* cicili#Block2604 */
                                  return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                }
                              }
                          });
                        }
                      else
                        {
                        if (in_symbol )
                          { /* cicili#Let2611 */
                            typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                            typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) len ;
                            // ----------
                            
                            ({ /* cicili#Let2615 */
                              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (({ /* cicili#Progn2616 */
                                      (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2618 */
                                      (len  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block2622 */
                                  { /* cicili#Block2624 */
                                    sb  = new_StringBuffer_char (16);
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
                                          return Dynamic_Error (({ /* cicili#Let2640 */
                                              char * reason  = NULL ;
                                              // ----------
                                              asprintf ((&reason ), "Parse Json: unknown symbol: '%s' at position: %d", buffer , counter );
                                              reason ;
                                            }));
                                        }                                      }                                  }
                                }
                              else
                                { /* cicili#Let2645 */
                                  // ----------
                                  
                                  { /* cicili#Block2649 */
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
                              { /* cicili#Let2658 */
                                typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                                // ----------
                                
                                ({ /* cicili#Let2662 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn2663 */
                                        (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block2667 */
                                      { /* cicili#Block2669 */
                                        sb  = put_StringBuffer_char (sb , cursor );
                                        return Dynamic_Error (({ /* cicili#Let2679 */
                                            char * reason  = NULL ;
                                            // ----------
                                            asprintf ((&reason ), "Parse Json: unmatched symbol: '%s' at position: %d", buffer , counter );
                                            reason ;
                                          }));
                                      }
                                    }
                                  else
                                    { /* cicili#Let2684 */
                                      // ----------
                                      
                                      { /* cicili#Block2688 */
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
                  { /* cicili#Let2698 */
                    List_DynamicType stack  = Nil_DynamicType ();
                    // ----------
                    while (true ) {
                        { /* cicili#Let2703 */
                          DynamicType dt_item  = _parseJson (file , true );
                          // ----------
                          ({ /* cicili#Let2706 */
                            __auto_type __h_matchbox  = dt_item ;
                            // ----------
                            { /* cicili#Let2710 */
                              __auto_type match2709  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match2709 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              
                              ({ /* cicili#Let2715 */
                                bool __h_case_result  = (true  &&  (((match2709 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2716 */
                                      (unboxed  =  (((match2709 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block2720 */
                                    { /* cicili#Let2724 */
                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) reason ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2728 */
                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2729 */
                                              (reason  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block2733 */
                                            if (strncmp (reason , "Parse Json: unmatched symbol", 28) ==  0 )
                                              { /* cicili#Let2736 */
                                                char sym  = (*(reason  +  31 ));
                                                // ----------
                                                if (sym  ==  ']' )
                                                  { /* cicili#Block2739 */
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
                                          { /* cicili#Let2748 */
                                            // ----------
                                            
                                            { /* cicili#Block2752 */
                                              { /* cicili#Let2754 */
                                                char end  = fgetc (file );
                                                // ----------
                                                stack  = Cons_DynamicType (dt_item , stack );
                                                if (cursor  ==  ']' )
                                                  return Dynamic_List (reverse_List_DynamicType (stack ), "item");
                                                else
                                                  { /* cicili#Block2761 */
                                                    ungetc (end , file );
                                                  }
                                              }
                                            }
                                          }
                                      });
                                    }
                                  }
                                else
                                  { /* cicili#Let2766 */
                                    // ----------
                                    
                                    ({ /* cicili#Let2770 */
                                      bool __h_case_result  = (true  &&  ((match2709 . __h_ctor ) ==  __h_Nothing_t  ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block2773 */
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
                  { /* cicili#Let2783 */
                    int counter  = 0;
                    List_CStr stackKeys  = Nil_CStr ();
                    List_DynamicType stackVals  = Nil_DynamicType ();
                    // ----------
                    while (true ) {
                        (++counter );
                        { /* cicili#Let2790 */
                          DynamicType dt_item  = _parseJson (file , true );
                          // ----------
                          ({ /* cicili#Let2793 */
                            __auto_type __h_matchbox  = dt_item ;
                            // ----------
                            { /* cicili#Let2797 */
                              __auto_type match2796  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match2796 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              
                              ({ /* cicili#Let2802 */
                                bool __h_case_result  = (true  &&  (((match2796 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2803 */
                                      (unboxed  =  (((match2796 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block2807 */
                                    { /* cicili#Let2811 */
                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) reason ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2815 */
                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2816 */
                                              (reason  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block2820 */
                                            if (strncmp (reason , "Parse Json: unmatched symbol", 28) ==  0 )
                                              { /* cicili#Let2823 */
                                                char sym  = (*(reason  +  31 ));
                                                // ----------
                                                if (sym  ==  '}' )
                                                  { /* cicili#Block2826 */
                                                    fgetc (file );
                                                    return ({ /* cicili#Let2830 */
                                                        __auto_type match2829  = fromLists_BTree_CStr_DynamicType (reverse_List_CStr (stackKeys ), reverse_List_DynamicType (stackVals ));
                                                        typeof((((match2829 . __h_data ). Right ). __h_0_mem )) tree ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let2837 */
                                                          bool __h_case_result  = (true  &&  (((match2829 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn2838 */
                                                                (tree  =  (((match2829 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn2841 */
                                                              Dynamic_Object (tree );
                                                            }) : ({ /* cicili#Let2846 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn2850 */
                                                                ({ /* cicili#Let2854 */
                                                                  typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let2858 */
                                                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn2859 */
                                                                          (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn2862 */
                                                                        ({ /* cicili#Progn2864 */
                                                                          sb  = put_StringBuffer_char (sb , cursor );
                                                                          Dynamic_Error (({ /* cicili#Let2874 */
                                                                              char * reason  = NULL ;
                                                                              // ----------
                                                                              asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                              reason ;
                                                                            }));
                                                                        });
                                                                      }) : ({ /* cicili#Let2878 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn2882 */
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
                                          { /* cicili#Let2890 */
                                            // ----------
                                            
                                            { /* cicili#Block2894 */
                                              { /* cicili#Let2896 */
                                                char end  = fgetc (file );
                                                // ----------
                                                if ((counter  %  2 ) ==  1 )
                                                  ({ /* cicili#Let2900 */
                                                    __auto_type __h_matchbox  = dt_item ;
                                                    // ----------
                                                    { /* cicili#Let2904 */
                                                      __auto_type match2903  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match2903 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2909 */
                                                        bool __h_case_result  = (true  &&  (((match2903 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2910 */
                                                              (unboxed  =  (((match2903 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        if (__h_case_result )
                                                          { /* cicili#Block2914 */
                                                            { /* cicili#Let2918 */
                                                              typeof((((unboxed -> __h_data ). String ). __h_0_mem )) key ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Let2922 */
                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2923 */
                                                                      (key  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                if (__h_case_result )
                                                                  { /* cicili#Block2927 */
                                                                    stackKeys  = Cons_CStr (toArray_List_char (((List_char)key ), '\0'), stackKeys );
                                                                  }
                                                                else
                                                                  { /* cicili#Let2934 */
                                                                    // ----------
                                                                    
                                                                    { /* cicili#Block2938 */
                                                                      return ({ /* cicili#Let2942 */
                                                                          typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                                                                          // ----------
                                                                          
                                                                          ({ /* cicili#Let2946 */
                                                                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn2947 */
                                                                                  (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn2950 */
                                                                                ({ /* cicili#Progn2952 */
                                                                                  sb  = put_StringBuffer_char (sb , cursor );
                                                                                  Dynamic_Error (({ /* cicili#Let2962 */
                                                                                      char * reason  = NULL ;
                                                                                      // ----------
                                                                                      asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                                      reason ;
                                                                                    }));
                                                                                });
                                                                              }) : ({ /* cicili#Let2966 */
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Progn2970 */
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
                                                  return ({ /* cicili#Let2978 */
                                                      __auto_type match2977  = fromLists_BTree_CStr_DynamicType (reverse_List_CStr (stackKeys ), reverse_List_DynamicType (stackVals ));
                                                      typeof((((match2977 . __h_data ). Right ). __h_0_mem )) tree ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2985 */
                                                        bool __h_case_result  = (true  &&  (((match2977 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn2986 */
                                                              (tree  =  (((match2977 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2989 */
                                                            Dynamic_Object (tree );
                                                          }) : ({ /* cicili#Let2994 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn2998 */
                                                              ({ /* cicili#Let3002 */
                                                                typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let3006 */
                                                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn3007 */
                                                                        (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn3010 */
                                                                      ({ /* cicili#Progn3012 */
                                                                        sb  = put_StringBuffer_char (sb , cursor );
                                                                        Dynamic_Error (({ /* cicili#Let3022 */
                                                                            char * reason  = NULL ;
                                                                            // ----------
                                                                            asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                            reason ;
                                                                          }));
                                                                      });
                                                                    }) : ({ /* cicili#Let3026 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn3030 */
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
                                                  { /* cicili#Block3034 */
                                                    ungetc (end , file );
                                                  }
                                              }
                                            }
                                          }
                                      });
                                    }
                                  }
                                else
                                  { /* cicili#Let3039 */
                                    // ----------
                                    
                                    ({ /* cicili#Let3043 */
                                      bool __h_case_result  = (true  &&  ((match2796 . __h_ctor ) ==  __h_Nothing_t  ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block3046 */
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
                  { /* cicili#Block3052 */
                    { /* cicili#Let3056 */
                      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) len ;
                      // ----------
                      
                      ({ /* cicili#Let3060 */
                        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (({ /* cicili#Progn3061 */
                                (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3063 */
                                (len  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block3067 */
                            { /* cicili#Block3069 */
                              sb  = new_StringBuffer_char (16);
                              in_string  = false ;
                              return Dynamic_String (pure_String (buffer , len ));
                            }
                          }
                        else
                          { /* cicili#Let3076 */
                            // ----------
                            
                            { /* cicili#Block3080 */
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
                    { /* cicili#Block3091 */
                      sb  = put_StringBuffer_char (sb , cursor );
                      in_integer  = false ;
                      in_float  = true ;
                    }
                  else
                    { /* cicili#Block3098 */
                      sb  = put_StringBuffer_char (sb , cursor );
                      { /* cicili#Let3106 */
                        typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                        // ----------
                        
                        ({ /* cicili#Let3110 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn3111 */
                                (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block3115 */
                              return Dynamic_Error (({ /* cicili#Let3121 */
                                  char * reason  = NULL ;
                                  // ----------
                                  asprintf ((&reason ), "Parse Json: invalid floating point: '%s' at position: %d", buffer , counter );
                                  reason ;
                                }));
                            }
                          else
                            { /* cicili#Let3126 */
                              // ----------
                              
                              { /* cicili#Block3130 */
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
                          { /* cicili#Block3159 */
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
                        { /* cicili#Block3174 */
                          sb  = put_StringBuffer_char (sb , cursor );
                          in_symbol  = true ;
                        }
                      else
                        { /* cicili#Block3181 */
                          sb  = put_StringBuffer_char (sb , cursor );
                          { /* cicili#Let3189 */
                            typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                            // ----------
                            
                            ({ /* cicili#Let3193 */
                              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn3194 */
                                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block3198 */
                                  return Dynamic_Error (({ /* cicili#Let3204 */
                                      char * reason  = NULL ;
                                      // ----------
                                      asprintf ((&reason ), "Parse Json: wrong integer definition: '%s' at position: %d", buffer , counter );
                                      reason ;
                                    }));
                                }
                              else
                                { /* cicili#Let3209 */
                                  // ----------
                                  
                                  { /* cicili#Block3213 */
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
                      { /* cicili#Block3223 */
                        sb  = put_StringBuffer_char (sb , cursor );
                        { /* cicili#Let3231 */
                          typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
                          // ----------
                          
                          ({ /* cicili#Let3235 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn3236 */
                                  (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            if (__h_case_result )
                              { /* cicili#Block3240 */
                                return Dynamic_Error (({ /* cicili#Let3246 */
                                    char * reason  = NULL ;
                                    // ----------
                                    asprintf ((&reason ), "Parse Json: invalid character outside string quotation: '%s' at position: %d", buffer , counter );
                                    reason ;
                                  }));
                              }
                            else
                              { /* cicili#Let3251 */
                                // ----------
                                
                                { /* cicili#Block3255 */
                                  return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                }
                              }
                          });
                        }
                      }
                    }                  }                break ;
          }
          if (cursor  ==  '\0' )
            { /* cicili#Block3260 */
              return Dynamic_Error (strdup ("Parse Json: EOF"));
            }
      }
    }
    return Dynamic_Error (strdup ("Parse Json: nothing to read"));
  }
  return _parseJson (file , false );
}
void free_DynamicType_x (DynamicType_x * this_ptr ) {
  { /* cicili#Let3266 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3272 */
      typeof((((this -> __h_data ). String ). __h_0_mem )) data ;
      // ----------
      
      ({ /* cicili#Let3276 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn3277 */
              (data  =  (((this -> __h_data ). String ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3281 */
            free_String ((&data ));
          }
        else
          { /* cicili#Let3286 */
            typeof((((this -> __h_data ). List ). __h_0_mem )) data ;
            // ----------
            
            ({ /* cicili#Let3290 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn3291 */
                    (data  =  (((this -> __h_data ). List ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3295 */
                  free_List_DynamicType ((&data ));
                }
              else
                { /* cicili#Let3301 */
                  typeof((((this -> __h_data ). Object ). __h_0_mem )) data ;
                  // ----------
                  
                  ({ /* cicili#Let3305 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn3306 */
                          (data  =  (((this -> __h_data ). Object ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block3310 */
                        free_BTree_CStr_DynamicType ((&data ));
                      }
                    else
                      { /* cicili#Let3316 */
                        typeof((((this -> __h_data ). Error ). __h_0_mem )) data ;
                        // ----------
                        
                        ({ /* cicili#Let3320 */
                          bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn3321 */
                                (data  =  (((this -> __h_data ). Error ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block3325 */
                              free (data );
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
  static DynamicType__H_Table table  = { free_DynamicType_x , show_DynamicType , search_DynamicType , toXml_DynamicType , toJson_DynamicType , parseJson_DynamicType };
  return (&table );
}
DynamicType Dynamic_String (String data ) {
  { /* cicili#Let3334 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_String_t , .__h_data.String = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Integer (int64_t data ) {
  { /* cicili#Let3341 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Integer_t , .__h_data.Integer = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Float (long double data ) {
  { /* cicili#Let3348 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Float_t , .__h_data.Float = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Boolean (Bool data ) {
  { /* cicili#Let3355 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Boolean_t , .__h_data.Boolean = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_List (List_DynamicType data , CStr xml_name ) {
  { /* cicili#Let3362 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_List_t , .__h_data.List = { data , xml_name }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Object (BTree_CStr_DynamicType data ) {
  { /* cicili#Let3370 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Object_t , .__h_data.Object = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Null () {
  { /* cicili#Let3378 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Null_t });
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Error (CStr reason ) {
  { /* cicili#Let3385 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Error_t , .__h_data.Error = { reason }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Function (List_DynamicType params , DynamicType out , void * fptr ) {
  { /* cicili#Let3392 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h___t , .__h_data._ = { params , out , fptr }});
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
  { /* cicili#Let3413 */
    Maybe_DynamicType instance  = ((Maybe_DynamicType){ get_Maybe_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_DynamicType Nothing_DynamicType () {
  { /* cicili#Let3418 */
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
    return ({ /* cicili#Let3428 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3432 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3433 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3435 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3438 */
              ({ /* cicili#Let3440 */
                DynamicType * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3444 */
              // ----------
              
              ({ /* cicili#Progn3448 */
                ({ /* cicili#Let3450 */
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
  return (((buf  ==  NULL  )) ? Nil_DynamicType () : ({ /* cicili#Let3461 */
        DynamicType item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_DynamicType () : Cons_DynamicType (item , pure_List_DynamicType ((++buf ), (--len ))));
      }));
}
int show_List_DynamicType (CFile file , List_DynamicType list ) {
  return ({ /* cicili#Let3471 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3475 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3476 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3478 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3481 */
            (({ /* cicili#Let3485 */
                // ----------
                
                ({ /* cicili#Let3489 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3491 */
                      (show_DynamicType (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3501 */
                      // ----------
                      
                      ({ /* cicili#Progn3505 */
                        show_DynamicType (file , head );
                      });
                    }));
                });
              }) +  show_List_DynamicType (file , tail ) );
          }) : ({ /* cicili#Let3516 */
            // ----------
            
            ({ /* cicili#Progn3520 */
              0;
            });
          }));
      });
    });
}
List_DynamicType copy_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let3526 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3530 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3531 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3533 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3536 */
            Cons_DynamicType (head , copy_List_DynamicType (tail ));
          }) : ({ /* cicili#Let3542 */
            // ----------
            
            ({ /* cicili#Progn3546 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType replaceAt_List_DynamicType (List_DynamicType list , DynamicType item , int index ) {
  return ({ /* cicili#Let3553 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3557 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3558 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3560 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3563 */
            Cons_DynamicType (head , replaceAt_List_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3569 */
            // ----------
            
            ({ /* cicili#Progn3573 */
              ({ /* cicili#Let3577 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3581 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3582 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3585 */
                      Cons_DynamicType (item , copy_List_DynamicType (taill ));
                    }) : ({ /* cicili#Let3591 */
                      // ----------
                      
                      ({ /* cicili#Progn3595 */
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
  return ({ /* cicili#Let3602 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3606 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3607 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3609 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3612 */
            Cons_DynamicType (head , deleteAt_List_DynamicType (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3618 */
            // ----------
            
            ({ /* cicili#Progn3622 */
              ({ /* cicili#Let3626 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3630 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3631 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3634 */
                      copy_List_DynamicType (taill );
                    }) : ({ /* cicili#Let3639 */
                      // ----------
                      
                      ({ /* cicili#Progn3643 */
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
  return ({ /* cicili#Let3650 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3654 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3655 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3657 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3660 */
            Cons_DynamicType (head , insertAt_List_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3666 */
            // ----------
            
            ({ /* cicili#Progn3670 */
              Cons_DynamicType (item , copy_List_DynamicType (llist ));
            });
          }));
      });
    });
}
List_DynamicType replace_List_DynamicType (List_DynamicType list , DynamicType item , List_DynamicType aimed ) {
  return ({ /* cicili#Let3678 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3682 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3683 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3685 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3688 */
            Cons_DynamicType (head , replace_List_DynamicType (tail , item , aimed ));
          }) : ({ /* cicili#Let3694 */
            // ----------
            
            ({ /* cicili#Progn3698 */
              ({ /* cicili#Let3702 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3706 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3707 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3710 */
                      Cons_DynamicType (item , copy_List_DynamicType (taill ));
                    }) : ({ /* cicili#Let3716 */
                      // ----------
                      
                      ({ /* cicili#Progn3720 */
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
  return ({ /* cicili#Let3727 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3731 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3732 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3734 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3737 */
            Cons_DynamicType (head , delete_List_DynamicType (tail , aimed ));
          }) : ({ /* cicili#Let3743 */
            // ----------
            
            ({ /* cicili#Progn3747 */
              ({ /* cicili#Let3751 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3755 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3756 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3759 */
                      copy_List_DynamicType (taill );
                    }) : ({ /* cicili#Let3764 */
                      // ----------
                      
                      ({ /* cicili#Progn3768 */
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
  return ({ /* cicili#Let3775 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3779 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3780 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3782 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3785 */
            Cons_DynamicType (head , insert_List_DynamicType (tail , item , rlist ));
          }) : ({ /* cicili#Let3791 */
            // ----------
            
            ({ /* cicili#Progn3795 */
              Cons_DynamicType (item , copy_List_DynamicType (rlist ));
            });
          }));
      });
    });
}
List_DynamicType reverse_List_DynamicType (List_DynamicType list ) {
  List_DynamicType _reverse (List_DynamicType list , List_DynamicType rlist ) {
    return ({ /* cicili#Let3804 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3808 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3809 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3811 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3814 */
              _reverse (tail , Cons_DynamicType (head , rlist ));
            }) : ({ /* cicili#Let3819 */
              // ----------
              
              ({ /* cicili#Progn3823 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3827 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3831 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3832 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3834 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3837 */
            _reverse (tail , Cons_DynamicType (head , Nil_DynamicType ()));
          }) : ({ /* cicili#Let3843 */
            // ----------
            
            ({ /* cicili#Progn3847 */
              list ;
            });
          }));
      });
    });
}
List_DynamicType append_List_DynamicType (List_DynamicType llist , List_DynamicType rlist ) {
  return ({ /* cicili#Let3853 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3857 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3858 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3860 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3863 */
            Cons_DynamicType (head , append_List_DynamicType (tail , rlist ));
          }) : ({ /* cicili#Let3869 */
            // ----------
            
            ({ /* cicili#Progn3873 */
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
  return (((len  <=  0 )) ? Nil_DynamicType () : ({ /* cicili#Let3886 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3890 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3891 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3893 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3896 */
              Cons_DynamicType (head , take_List_DynamicType ((--len ), tail ));
            }) : ({ /* cicili#Let3902 */
              // ----------
              
              ({ /* cicili#Progn3906 */
                Nil_DynamicType ();
              });
            }));
        });
      }));
}
List_DynamicType last_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let3913 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3917 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3918 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3921 */
            ({ /* cicili#Let3925 */
              // ----------
              
              ({ /* cicili#Let3929 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn3931 */
                    copy_List_DynamicType (list );
                  }) : ({ /* cicili#Let3936 */
                    // ----------
                    
                    ({ /* cicili#Progn3940 */
                      last_List_DynamicType (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3945 */
            // ----------
            
            ({ /* cicili#Progn3949 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType init_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let3957 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3961 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3962 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3964 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3967 */
            Cons_DynamicType (head , init_List_DynamicType (tail ));
          }) : ({ /* cicili#Let3973 */
            // ----------
            
            ({ /* cicili#Progn3977 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
int hasLen_List_DynamicType (List_DynamicType list , int desired ) {
  return ({ /* cicili#Let3984 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3988 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3989 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3992 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_DynamicType (tail , (--desired )) ));
          }) : ({ /* cicili#Let3998 */
            // ----------
            
            ({ /* cicili#Progn4002 */
              0;
            });
          }));
      });
    });
}
int len_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4008 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4012 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4013 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4016 */
            (1 +  len_List_DynamicType (tail ) );
          }) : ({ /* cicili#Let4021 */
            // ----------
            
            ({ /* cicili#Progn4025 */
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
  return (((len  <=  0 )) ? copy_List_DynamicType (list ) : ({ /* cicili#Let4036 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4040 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4041 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4044 */
              drop_List_DynamicType ((--len ), tail );
            }) : ({ /* cicili#Let4049 */
              // ----------
              
              ({ /* cicili#Progn4053 */
                Nil_DynamicType ();
              });
            }));
        });
      }));
}
Maybe_DynamicType head_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4061 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let4065 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4066 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4069 */
            Just_DynamicType (head );
          }) : ({ /* cicili#Let4074 */
            // ----------
            
            ({ /* cicili#Progn4078 */
              Nothing_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType nthcdr_List_DynamicType (int index , List_DynamicType list ) {
  return ({ /* cicili#Let4085 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4089 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4090 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4093 */
            nthcdr_List_DynamicType ((--index ), tail );
          }) : ({ /* cicili#Let4098 */
            // ----------
            
            ({ /* cicili#Progn4102 */
              list ;
            });
          }));
      });
    });
}
Maybe_DynamicType nth_List_DynamicType (int index , List_DynamicType list ) {
  return ({ /* cicili#Let4109 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4113 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4114 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4116 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4119 */
            (((index  ==  0 )) ? Just_DynamicType (head ) : (((index  <  0 )) ? Nothing_DynamicType () : nth_List_DynamicType ((--index ), tail )));
          }) : ({ /* cicili#Let4128 */
            // ----------
            
            ({ /* cicili#Progn4132 */
              Nothing_DynamicType ();
            });
          }));
      });
    });
}
void free_List_DynamicType (List_DynamicType * this_ptr ) {
  { /* cicili#Let4137 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4141 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4145 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4146 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4150 */
            { /* cicili#Block4152 */
              free (this );
              free_List_DynamicType ((&tail ));
            }
          }
        else
          { /* cicili#Let4160 */
            // ----------
            
            ({ /* cicili#Let4164 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4167 */
                  { /* cicili#Block4169 */
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
  { /* cicili#Let4180 */
    List_DynamicType instance  = malloc (sizeof(class_List_DynamicType));
    // ----------
    (*instance ) = ((class_List_DynamicType){ get_List_DynamicType__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_DynamicType Nil_DynamicType () {
  { /* cicili#Let4186 */
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
  { /* cicili#Let4203 */
    Maybe_List_DynamicType instance  = ((Maybe_List_DynamicType){ get_Maybe_List_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_DynamicType Nothing_List_DynamicType () {
  { /* cicili#Let4208 */
    Maybe_List_DynamicType instance  = ((Maybe_List_DynamicType){ get_Maybe_List_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_DynamicType__H_IMPL__ */ 
static Ordering compareKey (CStr lkey , CStr rkey ) {
  return ({ /* cicili#Let4212 */
      int res  = strcmp (lkey , rkey );
      // ----------
      (((res  <  0 )) ? LT () : (((res  ==  0 )) ? EQ () : GT ()));
    });
}
#ifndef __BTree_CStr_DynamicType_Error__H_IMPL__
#define __BTree_CStr_DynamicType_Error__H_IMPL__
void show_BTree_CStr_DynamicType_Error (BTree_CStr_DynamicType_Error error ) {
  { /* cicili#Let4227 */
    // ----------
    
    ({ /* cicili#Let4231 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4234 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let4239 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          
          ({ /* cicili#Let4243 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn4244 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block4248 */
                printf ("invalid B-Tree order: %d", order );
              }
            else
              { /* cicili#Let4253 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let4257 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn4258 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block4262 */
                      { /* cicili#Block4264 */
                        printf ("unique key: ");
                        ({ /* cicili#Let4270 */
                          typeof((item . __h_0_mem )) key ;
                          typeof((item . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4274 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4275 */
                                  (key  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4277 */
                                  (value  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4280 */
                                (fprintf (stdout , "(\"%s\": ", key ) +  show_DynamicType (stdout , value ) +  fprintf (stdout , ")") );
                              }) : ({ /* cicili#Let4285 */
                                // ----------
                                
                                ({ /* cicili#Progn4289 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let4294 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      
                      ({ /* cicili#Let4298 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn4299 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block4303 */
                            { /* cicili#Block4305 */
                              printf ("key not found: ");
                              fprintf (stdout , "\"%s\"", key );
                            }
                          }
                        else
                          { /* cicili#Let4315 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            
                            ({ /* cicili#Let4319 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn4320 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn4322 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block4326 */
                                  { /* cicili#Block4328 */
                                    printf ("dead child at index: %d of item: ", index );
                                    ({ /* cicili#Let4334 */
                                      typeof((item . __h_0_mem )) key ;
                                      typeof((item . __h_1_mem )) value ;
                                      // ----------
                                      
                                      ({ /* cicili#Let4338 */
                                        bool __h_case_result  = (true  &&  (({ /* cicili#Progn4339 */
                                              (key  =  (item . __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4341 */
                                              (value  =  (item . __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn4344 */
                                            (fprintf (stdout , "(\"%s\": ", key ) +  show_DynamicType (stdout , value ) +  fprintf (stdout , ")") );
                                          }) : ({ /* cicili#Let4349 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn4353 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let4358 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  
                                  ({ /* cicili#Let4362 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn4363 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block4367 */
                                        { /* cicili#Block4369 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let4376 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        
                                        ({ /* cicili#Let4380 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn4381 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block4385 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let4390 */
                                              // ----------
                                              
                                              { /* cicili#Block4394 */
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
  { /* cicili#Let4406 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_ORDER (int order ) {
  { /* cicili#Let4411 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_UNIQUE_KEY (BTree_CStr_DynamicType_pair_t item ) {
  { /* cicili#Let4416 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_NOT_FOUND (CStr key ) {
  { /* cicili#Let4422 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (BTree_CStr_DynamicType_pair_t item , int index ) {
  { /* cicili#Let4427 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_BRANCH (BTree_CStr_DynamicType branch ) {
  { /* cicili#Let4433 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let4438 */
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
  { /* cicili#Let4454 */
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType instance  = ((Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType){ get_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_Error error ) {
  { /* cicili#Let4459 */
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
  { /* cicili#Let4475 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType () {
  { /* cicili#Let4480 */
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
  { /* cicili#Let4498 */
    Maybe_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_BTree_CStr_DynamicType_pair_t){ get_Maybe_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType_pair_t Nothing_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let4503 */
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
    return ({ /* cicili#Let4513 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4517 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4518 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4520 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4523 */
              ({ /* cicili#Let4525 */
                BTree_CStr_DynamicType_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let4529 */
              // ----------
              
              ({ /* cicili#Progn4533 */
                ({ /* cicili#Let4535 */
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
  return (((buf  ==  NULL  )) ? Nil_BTree_CStr_DynamicType_pair_t () : ({ /* cicili#Let4546 */
        BTree_CStr_DynamicType_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_CStr_DynamicType_pair_t () : Cons_BTree_CStr_DynamicType_pair_t (item , pure_List_BTree_CStr_DynamicType_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_CStr_DynamicType_pair_t (CFile file , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let4556 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4560 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4561 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4563 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4566 */
            (({ /* cicili#Let4570 */
                // ----------
                
                ({ /* cicili#Let4574 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4576 */
                      (({ /* cicili#Let4582 */
                          typeof((head . __h_0_mem )) key ;
                          typeof((head . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4586 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4587 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4589 */
                                  (value  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4592 */
                                (fprintf (file , "(\"%s\": ", key ) +  show_DynamicType (file , value ) +  fprintf (file , ")") );
                              }) : ({ /* cicili#Let4597 */
                                // ----------
                                
                                ({ /* cicili#Progn4601 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let4605 */
                      // ----------
                      
                      ({ /* cicili#Progn4609 */
                        ({ /* cicili#Let4615 */
                          typeof((head . __h_0_mem )) key ;
                          typeof((head . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4619 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4620 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4622 */
                                  (value  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4625 */
                                (fprintf (file , "(\"%s\": ", key ) +  show_DynamicType (file , value ) +  fprintf (file , ")") );
                              }) : ({ /* cicili#Let4630 */
                                // ----------
                                
                                ({ /* cicili#Progn4634 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_CStr_DynamicType_pair_t (file , tail ) );
          }) : ({ /* cicili#Let4639 */
            // ----------
            
            ({ /* cicili#Progn4643 */
              0;
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t copy_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let4649 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4653 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4654 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4656 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4659 */
            Cons_BTree_CStr_DynamicType_pair_t (head , copy_List_BTree_CStr_DynamicType_pair_t (tail ));
          }) : ({ /* cicili#Let4665 */
            // ----------
            
            ({ /* cicili#Progn4669 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t replaceAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , int index ) {
  return ({ /* cicili#Let4676 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4680 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4681 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4683 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4686 */
            Cons_BTree_CStr_DynamicType_pair_t (head , replaceAt_List_BTree_CStr_DynamicType_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let4692 */
            // ----------
            
            ({ /* cicili#Progn4696 */
              ({ /* cicili#Let4700 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4704 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4705 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4708 */
                      Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (taill ));
                    }) : ({ /* cicili#Let4714 */
                      // ----------
                      
                      ({ /* cicili#Progn4718 */
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
  return ({ /* cicili#Let4725 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4729 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4730 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4732 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4735 */
            Cons_BTree_CStr_DynamicType_pair_t (head , deleteAt_List_BTree_CStr_DynamicType_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let4741 */
            // ----------
            
            ({ /* cicili#Progn4745 */
              ({ /* cicili#Let4749 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4753 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4754 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4757 */
                      copy_List_BTree_CStr_DynamicType_pair_t (taill );
                    }) : ({ /* cicili#Let4762 */
                      // ----------
                      
                      ({ /* cicili#Progn4766 */
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
  return ({ /* cicili#Let4773 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4777 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4778 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4780 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4783 */
            Cons_BTree_CStr_DynamicType_pair_t (head , insertAt_List_BTree_CStr_DynamicType_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let4789 */
            // ----------
            
            ({ /* cicili#Progn4793 */
              Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (llist ));
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t replace_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t aimed ) {
  return ({ /* cicili#Let4801 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4805 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4806 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4808 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4811 */
            Cons_BTree_CStr_DynamicType_pair_t (head , replace_List_BTree_CStr_DynamicType_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let4817 */
            // ----------
            
            ({ /* cicili#Progn4821 */
              ({ /* cicili#Let4825 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4829 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4830 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4833 */
                      Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (taill ));
                    }) : ({ /* cicili#Let4839 */
                      // ----------
                      
                      ({ /* cicili#Progn4843 */
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
  return ({ /* cicili#Let4850 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4854 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4855 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4857 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4860 */
            Cons_BTree_CStr_DynamicType_pair_t (head , delete_List_BTree_CStr_DynamicType_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let4866 */
            // ----------
            
            ({ /* cicili#Progn4870 */
              ({ /* cicili#Let4874 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4878 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4879 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4882 */
                      copy_List_BTree_CStr_DynamicType_pair_t (taill );
                    }) : ({ /* cicili#Let4887 */
                      // ----------
                      
                      ({ /* cicili#Progn4891 */
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
  return ({ /* cicili#Let4898 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4902 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4903 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4905 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4908 */
            Cons_BTree_CStr_DynamicType_pair_t (head , insert_List_BTree_CStr_DynamicType_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let4914 */
            // ----------
            
            ({ /* cicili#Progn4918 */
              Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t reverse_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  List_BTree_CStr_DynamicType_pair_t _reverse (List_BTree_CStr_DynamicType_pair_t list , List_BTree_CStr_DynamicType_pair_t rlist ) {
    return ({ /* cicili#Let4927 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4931 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4932 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4934 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4937 */
              _reverse (tail , Cons_BTree_CStr_DynamicType_pair_t (head , rlist ));
            }) : ({ /* cicili#Let4942 */
              // ----------
              
              ({ /* cicili#Progn4946 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let4950 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4954 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4955 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4957 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4960 */
            _reverse (tail , Cons_BTree_CStr_DynamicType_pair_t (head , Nil_BTree_CStr_DynamicType_pair_t ()));
          }) : ({ /* cicili#Let4966 */
            // ----------
            
            ({ /* cicili#Progn4970 */
              list ;
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t append_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , List_BTree_CStr_DynamicType_pair_t rlist ) {
  return ({ /* cicili#Let4976 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4980 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4981 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4983 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4986 */
            Cons_BTree_CStr_DynamicType_pair_t (head , append_List_BTree_CStr_DynamicType_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let4992 */
            // ----------
            
            ({ /* cicili#Progn4996 */
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
  return (((len  <=  0 )) ? Nil_BTree_CStr_DynamicType_pair_t () : ({ /* cicili#Let5009 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5013 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5014 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5016 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5019 */
              Cons_BTree_CStr_DynamicType_pair_t (head , take_List_BTree_CStr_DynamicType_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let5025 */
              // ----------
              
              ({ /* cicili#Progn5029 */
                Nil_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_CStr_DynamicType_pair_t last_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5036 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5040 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5041 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5044 */
            ({ /* cicili#Let5048 */
              // ----------
              
              ({ /* cicili#Let5052 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5054 */
                    copy_List_BTree_CStr_DynamicType_pair_t (list );
                  }) : ({ /* cicili#Let5059 */
                    // ----------
                    
                    ({ /* cicili#Progn5063 */
                      last_List_BTree_CStr_DynamicType_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5068 */
            // ----------
            
            ({ /* cicili#Progn5072 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t init_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5080 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5084 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5085 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5087 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5090 */
            Cons_BTree_CStr_DynamicType_pair_t (head , init_List_BTree_CStr_DynamicType_pair_t (tail ));
          }) : ({ /* cicili#Let5096 */
            // ----------
            
            ({ /* cicili#Progn5100 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , int desired ) {
  return ({ /* cicili#Let5107 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5111 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5112 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5115 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_CStr_DynamicType_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let5121 */
            // ----------
            
            ({ /* cicili#Progn5125 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5131 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5135 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5136 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5139 */
            (1 +  len_List_BTree_CStr_DynamicType_pair_t (tail ) );
          }) : ({ /* cicili#Let5144 */
            // ----------
            
            ({ /* cicili#Progn5148 */
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
  return (((len  <=  0 )) ? copy_List_BTree_CStr_DynamicType_pair_t (list ) : ({ /* cicili#Let5159 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5163 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5164 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5167 */
              drop_List_BTree_CStr_DynamicType_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let5172 */
              // ----------
              
              ({ /* cicili#Progn5176 */
                Nil_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_CStr_DynamicType_pair_t head_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5184 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let5188 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5189 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5192 */
            Just_BTree_CStr_DynamicType_pair_t (head );
          }) : ({ /* cicili#Let5197 */
            // ----------
            
            ({ /* cicili#Progn5201 */
              Nothing_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t nthcdr_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5208 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5212 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5213 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5216 */
            nthcdr_List_BTree_CStr_DynamicType_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let5221 */
            // ----------
            
            ({ /* cicili#Progn5225 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType_pair_t nth_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5232 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5236 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5237 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5239 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5242 */
            (((index  ==  0 )) ? Just_BTree_CStr_DynamicType_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_CStr_DynamicType_pair_t () : nth_List_BTree_CStr_DynamicType_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let5251 */
            // ----------
            
            ({ /* cicili#Progn5255 */
              Nothing_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t * this_ptr ) {
  { /* cicili#Let5260 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let5264 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5268 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5269 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block5273 */
            { /* cicili#Block5275 */
              free (this );
              free_List_BTree_CStr_DynamicType_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let5283 */
            // ----------
            
            ({ /* cicili#Let5287 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block5290 */
                  { /* cicili#Block5292 */
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
  { /* cicili#Let5303 */
    List_BTree_CStr_DynamicType_pair_t instance  = malloc (sizeof(class_List_BTree_CStr_DynamicType_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_CStr_DynamicType_pair_t){ get_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_CStr_DynamicType_pair_t Nil_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let5309 */
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
  { /* cicili#Let5326 */
    Maybe_List_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_List_BTree_CStr_DynamicType_pair_t){ get_Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_CStr_DynamicType_pair_t Nothing_List_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let5331 */
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
  { /* cicili#Let5351 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType () {
  { /* cicili#Let5356 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Rc_BTree_CStr_DynamicType__H_IMPL__
Rc_BTree_CStr_DynamicType new_Rc_BTree_CStr_DynamicType (BTree_CStr_DynamicType pointer ) {
  return ({ /* cicili#Let5363 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_CStr_DynamicType *)malloc (sizeof(BTree_CStr_DynamicType *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_CStr_DynamicType (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_CStr_DynamicType clone_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc ) {
  return ({ /* cicili#Let5372 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5376 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5377 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5379 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5381 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5384 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn5387 */
                (++(*count ));
                __h_Hold_BTree_CStr_DynamicType (pointer , count , address );
              }) : Gone_BTree_CStr_DynamicType ());
          }) : ({ /* cicili#Let5393 */
            // ----------
            
            ({ /* cicili#Progn5397 */
              Gone_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType take_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this ) {
  return ({ /* cicili#Let5405 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5409 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5410 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5412 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5414 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5417 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let5421 */
                __auto_type result  = Just_BTree_CStr_DynamicType ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block5427 */
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
          }) : ({ /* cicili#Let5434 */
            // ----------
            
            ({ /* cicili#Progn5438 */
              Nothing_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType get_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc ) {
  return ({ /* cicili#Let5446 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5450 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5451 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5453 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5455 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5458 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_CStr_DynamicType ((*pointer )) : Nothing_BTree_CStr_DynamicType ());
          }) : ({ /* cicili#Let5465 */
            // ----------
            
            ({ /* cicili#Progn5469 */
              Nothing_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
void free_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this ) {
  { /* cicili#Let5478 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let5482 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5483 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5485 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn5487 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block5491 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block5495 */
              if ((*count ) ==  1 )
                { /* cicili#Block5498 */
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
        { /* cicili#Let5508 */
          // ----------
          
          ({ /* cicili#Let5512 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block5515 */
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
  { /* cicili#Let5526 */
    Rc_BTree_CStr_DynamicType instance  = ((Rc_BTree_CStr_DynamicType){ get_Rc_BTree_CStr_DynamicType__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_CStr_DynamicType Gone_BTree_CStr_DynamicType () {
  { /* cicili#Let5531 */
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
  { /* cicili#Let5549 */
    Maybe_Rc_BTree_CStr_DynamicType instance  = ((Maybe_Rc_BTree_CStr_DynamicType){ get_Maybe_Rc_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_CStr_DynamicType Nothing_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let5554 */
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
    return ({ /* cicili#Let5564 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5568 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5569 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5571 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5574 */
              ({ /* cicili#Let5576 */
                Rc_BTree_CStr_DynamicType * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let5580 */
              // ----------
              
              ({ /* cicili#Progn5584 */
                ({ /* cicili#Let5586 */
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
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_CStr_DynamicType () : ({ /* cicili#Let5597 */
        Rc_BTree_CStr_DynamicType item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_CStr_DynamicType () : Cons_Rc_BTree_CStr_DynamicType (item , pure_List_Rc_BTree_CStr_DynamicType ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_CStr_DynamicType (CFile file , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let5607 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5611 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5612 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5614 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5617 */
            (({ /* cicili#Let5621 */
                // ----------
                
                ({ /* cicili#Let5625 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5627 */
                      (({ /* cicili#Let5635 */
                          __auto_type match5634  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match5634 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let5640 */
                            bool __h_case_result  = (true  &&  (((match5634 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5641 */
                                  (child  =  (((match5634 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5644 */
                                show_BTree_CStr_DynamicType (file , child );
                              }) : ({ /* cicili#Let5649 */
                                // ----------
                                
                                ({ /* cicili#Progn5653 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let5657 */
                      // ----------
                      
                      ({ /* cicili#Progn5661 */
                        ({ /* cicili#Let5669 */
                          __auto_type match5668  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match5668 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let5674 */
                            bool __h_case_result  = (true  &&  (((match5668 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5675 */
                                  (child  =  (((match5668 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5678 */
                                show_BTree_CStr_DynamicType (file , child );
                              }) : ({ /* cicili#Let5683 */
                                // ----------
                                
                                ({ /* cicili#Progn5687 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_CStr_DynamicType (file , tail ) );
          }) : ({ /* cicili#Let5692 */
            // ----------
            
            ({ /* cicili#Progn5696 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType copy_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let5702 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5706 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5707 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5709 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5712 */
            Cons_Rc_BTree_CStr_DynamicType (head , copy_List_Rc_BTree_CStr_DynamicType (tail ));
          }) : ({ /* cicili#Let5718 */
            // ----------
            
            ({ /* cicili#Progn5722 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType replaceAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , int index ) {
  return ({ /* cicili#Let5729 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5733 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5734 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5736 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5739 */
            Cons_Rc_BTree_CStr_DynamicType (head , replaceAt_List_Rc_BTree_CStr_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let5745 */
            // ----------
            
            ({ /* cicili#Progn5749 */
              ({ /* cicili#Let5753 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5757 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5758 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5761 */
                      Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (taill ));
                    }) : ({ /* cicili#Let5767 */
                      // ----------
                      
                      ({ /* cicili#Progn5771 */
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
  return ({ /* cicili#Let5778 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5782 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5783 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5785 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5788 */
            Cons_Rc_BTree_CStr_DynamicType (head , deleteAt_List_Rc_BTree_CStr_DynamicType (tail , (index  -  1 )));
          }) : ({ /* cicili#Let5794 */
            // ----------
            
            ({ /* cicili#Progn5798 */
              ({ /* cicili#Let5802 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5806 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5807 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5810 */
                      copy_List_Rc_BTree_CStr_DynamicType (taill );
                    }) : ({ /* cicili#Let5815 */
                      // ----------
                      
                      ({ /* cicili#Progn5819 */
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
  return ({ /* cicili#Let5826 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5830 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5831 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5833 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5836 */
            Cons_Rc_BTree_CStr_DynamicType (head , insertAt_List_Rc_BTree_CStr_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let5842 */
            // ----------
            
            ({ /* cicili#Progn5846 */
              Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (llist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType replace_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType aimed ) {
  return ({ /* cicili#Let5854 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5858 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5859 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5861 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5864 */
            Cons_Rc_BTree_CStr_DynamicType (head , replace_List_Rc_BTree_CStr_DynamicType (tail , item , aimed ));
          }) : ({ /* cicili#Let5870 */
            // ----------
            
            ({ /* cicili#Progn5874 */
              ({ /* cicili#Let5878 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5882 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5883 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5886 */
                      Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (taill ));
                    }) : ({ /* cicili#Let5892 */
                      // ----------
                      
                      ({ /* cicili#Progn5896 */
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
  return ({ /* cicili#Let5903 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5907 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5908 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5910 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5913 */
            Cons_Rc_BTree_CStr_DynamicType (head , delete_List_Rc_BTree_CStr_DynamicType (tail , aimed ));
          }) : ({ /* cicili#Let5919 */
            // ----------
            
            ({ /* cicili#Progn5923 */
              ({ /* cicili#Let5927 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5931 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5932 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5935 */
                      copy_List_Rc_BTree_CStr_DynamicType (taill );
                    }) : ({ /* cicili#Let5940 */
                      // ----------
                      
                      ({ /* cicili#Progn5944 */
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
  return ({ /* cicili#Let5951 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5955 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5956 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5958 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5961 */
            Cons_Rc_BTree_CStr_DynamicType (head , insert_List_Rc_BTree_CStr_DynamicType (tail , item , rlist ));
          }) : ({ /* cicili#Let5967 */
            // ----------
            
            ({ /* cicili#Progn5971 */
              Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType reverse_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  List_Rc_BTree_CStr_DynamicType _reverse (List_Rc_BTree_CStr_DynamicType list , List_Rc_BTree_CStr_DynamicType rlist ) {
    return ({ /* cicili#Let5980 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5984 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5985 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5987 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5990 */
              _reverse (tail , Cons_Rc_BTree_CStr_DynamicType (head , rlist ));
            }) : ({ /* cicili#Let5995 */
              // ----------
              
              ({ /* cicili#Progn5999 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6003 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6007 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6008 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6010 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6013 */
            _reverse (tail , Cons_Rc_BTree_CStr_DynamicType (head , Nil_Rc_BTree_CStr_DynamicType ()));
          }) : ({ /* cicili#Let6019 */
            // ----------
            
            ({ /* cicili#Progn6023 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType append_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , List_Rc_BTree_CStr_DynamicType rlist ) {
  return ({ /* cicili#Let6029 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6033 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6034 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6036 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6039 */
            Cons_Rc_BTree_CStr_DynamicType (head , append_List_Rc_BTree_CStr_DynamicType (tail , rlist ));
          }) : ({ /* cicili#Let6045 */
            // ----------
            
            ({ /* cicili#Progn6049 */
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
  return (((len  <=  0 )) ? Nil_Rc_BTree_CStr_DynamicType () : ({ /* cicili#Let6062 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6066 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6067 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6069 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6072 */
              Cons_Rc_BTree_CStr_DynamicType (head , take_List_Rc_BTree_CStr_DynamicType ((--len ), tail ));
            }) : ({ /* cicili#Let6078 */
              // ----------
              
              ({ /* cicili#Progn6082 */
                Nil_Rc_BTree_CStr_DynamicType ();
              });
            }));
        });
      }));
}
List_Rc_BTree_CStr_DynamicType last_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6089 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6093 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6094 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6097 */
            ({ /* cicili#Let6101 */
              // ----------
              
              ({ /* cicili#Let6105 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn6107 */
                    copy_List_Rc_BTree_CStr_DynamicType (list );
                  }) : ({ /* cicili#Let6112 */
                    // ----------
                    
                    ({ /* cicili#Progn6116 */
                      last_List_Rc_BTree_CStr_DynamicType (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let6121 */
            // ----------
            
            ({ /* cicili#Progn6125 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType init_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6133 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6137 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6138 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6140 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6143 */
            Cons_Rc_BTree_CStr_DynamicType (head , init_List_Rc_BTree_CStr_DynamicType (tail ));
          }) : ({ /* cicili#Let6149 */
            // ----------
            
            ({ /* cicili#Progn6153 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , int desired ) {
  return ({ /* cicili#Let6160 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6164 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6165 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6168 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_CStr_DynamicType (tail , (--desired )) ));
          }) : ({ /* cicili#Let6174 */
            // ----------
            
            ({ /* cicili#Progn6178 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6184 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6188 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6189 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6192 */
            (1 +  len_List_Rc_BTree_CStr_DynamicType (tail ) );
          }) : ({ /* cicili#Let6197 */
            // ----------
            
            ({ /* cicili#Progn6201 */
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
  return (((len  <=  0 )) ? copy_List_Rc_BTree_CStr_DynamicType (list ) : ({ /* cicili#Let6212 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6216 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6217 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6220 */
              drop_List_Rc_BTree_CStr_DynamicType ((--len ), tail );
            }) : ({ /* cicili#Let6225 */
              // ----------
              
              ({ /* cicili#Progn6229 */
                Nil_Rc_BTree_CStr_DynamicType ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_CStr_DynamicType head_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6237 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let6241 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6242 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6245 */
            Just_Rc_BTree_CStr_DynamicType (head );
          }) : ({ /* cicili#Let6250 */
            // ----------
            
            ({ /* cicili#Progn6254 */
              Nothing_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType nthcdr_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6261 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6265 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6266 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6269 */
            nthcdr_List_Rc_BTree_CStr_DynamicType ((--index ), tail );
          }) : ({ /* cicili#Let6274 */
            // ----------
            
            ({ /* cicili#Progn6278 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_CStr_DynamicType nth_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6285 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6289 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6290 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6292 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6295 */
            (((index  ==  0 )) ? Just_Rc_BTree_CStr_DynamicType (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_CStr_DynamicType () : nth_List_Rc_BTree_CStr_DynamicType ((--index ), tail )));
          }) : ({ /* cicili#Let6304 */
            // ----------
            
            ({ /* cicili#Progn6308 */
              Nothing_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType * this_ptr ) {
  { /* cicili#Let6313 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6317 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6321 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6322 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block6326 */
            { /* cicili#Block6328 */
              free (this );
              free_List_Rc_BTree_CStr_DynamicType ((&tail ));
            }
          }
        else
          { /* cicili#Let6336 */
            // ----------
            
            ({ /* cicili#Let6340 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block6343 */
                  { /* cicili#Block6345 */
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
  { /* cicili#Let6356 */
    List_Rc_BTree_CStr_DynamicType instance  = malloc (sizeof(class_List_Rc_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_CStr_DynamicType){ get_List_Rc_BTree_CStr_DynamicType__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_CStr_DynamicType Nil_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let6362 */
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
  { /* cicili#Let6379 */
    Maybe_List_Rc_BTree_CStr_DynamicType instance  = ((Maybe_List_Rc_BTree_CStr_DynamicType){ get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_CStr_DynamicType Nothing_List_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let6384 */
    Maybe_List_Rc_BTree_CStr_DynamicType instance  = ((Maybe_List_Rc_BTree_CStr_DynamicType){ get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Functor_List_Rc_BTree_CStr_DynamicType__H_IMPL__
List_Rc_BTree_CStr_DynamicType fmap_Functor_List_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType_to_Rc_BTree_CStr_DynamicType_t a_b , List_Rc_BTree_CStr_DynamicType input ) {
  return ({ /* cicili#Let6398 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6402 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6403 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6405 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6408 */
            Cons_Rc_BTree_CStr_DynamicType (a_b (head ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (a_b , tail ));
          }) : ({ /* cicili#Let6415 */
            // ----------
            
            ({ /* cicili#Progn6419 */
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
  { /* cicili#Let6433 */
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
  return ({ /* cicili#Let6451 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let6455 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6456 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6458 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6461 */
            (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6467 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6469 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6477 */
                    __auto_type match6476  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                    typeof((((match6476 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    
                    ({ /* cicili#Let6483 */
                      bool __h_case_result  = (true  &&  (((match6476 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6484 */
                            (nitem  =  (((match6476 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn6487 */
                          nitem ;
                        }) : ({ /* cicili#Let6491 */
                          // ----------
                          
                          ({ /* cicili#Progn6495 */
                            ((BTree_CStr_DynamicType_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6506 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6508 */
                        __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6518 */
                          Rc_BTree_CStr_DynamicType __ciciliC_6517 (Rc_BTree_CStr_DynamicType __h_value ) {
                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                          }
                          __ciciliC_6517 ;
                        }), r1 );
                    }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6529 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6531 */
                        __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6541 */
                          Rc_BTree_CStr_DynamicType __ciciliC_6540 (Rc_BTree_CStr_DynamicType __h_value ) {
                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                          }
                          __ciciliC_6540 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let6548 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let6552 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6553 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6555 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn6558 */
                  (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6564 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6566 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6574 */
                          __auto_type match6573  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                          typeof((((match6573 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          
                          ({ /* cicili#Let6580 */
                            bool __h_case_result  = (true  &&  (((match6573 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6581 */
                                  (nitem  =  (((match6573 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn6584 */
                                nitem ;
                              }) : ({ /* cicili#Let6588 */
                                // ----------
                                
                                ({ /* cicili#Progn6592 */
                                  ((BTree_CStr_DynamicType_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6603 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6605 */
                              __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6615 */
                                Rc_BTree_CStr_DynamicType __ciciliC_6614 (Rc_BTree_CStr_DynamicType __h_value ) {
                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                }
                                __ciciliC_6614 ;
                              }), r1 );
                          }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6626 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6628 */
                              __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6638 */
                                Rc_BTree_CStr_DynamicType __ciciliC_6637 (Rc_BTree_CStr_DynamicType __h_value ) {
                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                }
                                __ciciliC_6637 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let6645 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let6649 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6650 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6653 */
                        (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6659 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6661 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6669 */
                                __auto_type match6668  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                                typeof((((match6668 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                
                                ({ /* cicili#Let6675 */
                                  bool __h_case_result  = (true  &&  (((match6668 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6676 */
                                        (nitem  =  (((match6668 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn6679 */
                                      nitem ;
                                    }) : ({ /* cicili#Let6683 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn6687 */
                                        ((BTree_CStr_DynamicType_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let6704 */
                        // ----------
                        
                        ({ /* cicili#Progn6708 */
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
  return ({ /* cicili#Let6714 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let6718 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6719 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6721 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6724 */
            (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6734 */
                __auto_type match6733  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                typeof((((match6733 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                
                ({ /* cicili#Let6740 */
                  bool __h_case_result  = (true  &&  (((match6733 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6741 */
                        (nitem  =  (((match6733 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6744 */
                      nitem ;
                    }) : ({ /* cicili#Let6748 */
                      // ----------
                      
                      ({ /* cicili#Progn6752 */
                        ((BTree_CStr_DynamicType_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6763 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6765 */
                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6775 */
                      Rc_BTree_CStr_DynamicType __ciciliC_6774 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_6774 ;
                    }), r1 );
                }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6786 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6788 */
                    __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6798 */
                      Rc_BTree_CStr_DynamicType __ciciliC_6797 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_6797 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let6805 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let6809 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6810 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6812 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn6815 */
                  (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6825 */
                      __auto_type match6824  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                      typeof((((match6824 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      
                      ({ /* cicili#Let6831 */
                        bool __h_case_result  = (true  &&  (((match6824 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6832 */
                              (nitem  =  (((match6824 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn6835 */
                            nitem ;
                          }) : ({ /* cicili#Let6839 */
                            // ----------
                            
                            ({ /* cicili#Progn6843 */
                              ((BTree_CStr_DynamicType_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6854 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6856 */
                          __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6866 */
                            Rc_BTree_CStr_DynamicType __ciciliC_6865 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_6865 ;
                          }), r1 );
                      }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6877 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6879 */
                          __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6889 */
                            Rc_BTree_CStr_DynamicType __ciciliC_6888 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_6888 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let6896 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let6900 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6901 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6904 */
                        (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6914 */
                            __auto_type match6913  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                            typeof((((match6913 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            
                            ({ /* cicili#Let6920 */
                              bool __h_case_result  = (true  &&  (((match6913 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6921 */
                                    (nitem  =  (((match6913 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn6924 */
                                  nitem ;
                                }) : ({ /* cicili#Let6928 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn6932 */
                                    ((BTree_CStr_DynamicType_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let6949 */
                        // ----------
                        
                        ({ /* cicili#Progn6953 */
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
  return ({ /* cicili#Let6960 */
      __auto_type merged  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_items , right_items ), ({ /* cicili#Let6965 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6967 */
          __auto_type r1  = append_List_Rc_BTree_CStr_DynamicType (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6976 */
            Rc_BTree_CStr_DynamicType __ciciliC_6975 (Rc_BTree_CStr_DynamicType __h_value ) {
              return clone_Rc_BTree_CStr_DynamicType (__h_value );
            }
            __ciciliC_6975 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let6985 */
        __auto_type tmp_child  = splitForDelete_BTree_CStr_DynamicType (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match6983_0_arg ;
        typeof((((__h_match6983_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        
        ({ /* cicili#Let6990 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn6991 */
                    (__h_match6983_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match6983_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6993 */
                        (head  =  (((__h_match6983_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn6995 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6998 */
              ({ /* cicili#Let7001 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7003 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7006 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_CStr_DynamicType (replaceAt_List_BTree_CStr_DynamicType_pair_t (items , head , pitem_index ), ({ /* cicili#Let7013 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7015 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_CStr_DynamicType (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7019 */
                      __auto_type r2  = take_List_Rc_BTree_CStr_DynamicType (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7023 */
                      __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7027 */
                      __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7031 */
                      __auto_type r5  = append_List_Rc_BTree_CStr_DynamicType (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7040 */
                        Rc_BTree_CStr_DynamicType __ciciliC_7039 (Rc_BTree_CStr_DynamicType __h_value ) {
                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                        }
                        __ciciliC_7039 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let7047 */
              // ----------
              
              ({ /* cicili#Let7051 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7053 */
                    Internal_BTree_CStr_DynamicType (deleteAt_List_BTree_CStr_DynamicType_pair_t (items , pitem_index ), ({ /* cicili#Let7059 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7061 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_CStr_DynamicType (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7065 */
                          __auto_type r2  = new_Rc_BTree_CStr_DynamicType (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7069 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_CStr_DynamicType (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7078 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7077 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7077 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let7085 */
                    // ----------
                    
                    ({ /* cicili#Progn7089 */
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
    return ({ /* cicili#Let7116 */
        __auto_type match7115  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match7115 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let7121 */
          bool __h_case_result  = (true  &&  (((match7115 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7122 */
                (right_child_rc  =  (((match7115 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7125 */
              ({ /* cicili#Let7128 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let7132 */
                  __auto_type match7131  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match7131 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  
                  ({ /* cicili#Let7137 */
                    bool __h_case_result  = (true  &&  (((match7131 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7138 */
                          (unboxed  =  (((match7131 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7141 */
                        ({ /* cicili#Let7145 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          
                          ({ /* cicili#Let7149 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7150 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7153 */
                                (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7161 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7165 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7166 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn7168 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7171 */
                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , first_item , current ), ({ /* cicili#Let7179 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7181 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7185 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7191 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7190 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7190 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7198 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7202 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7208 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7207 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7207 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7215 */
                                                __auto_type r5  = take_List_BTree_CStr_DynamicType_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7219 */
                                                __auto_type r7  = pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (child_items , r5 ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7232 */
                                                __auto_type r6  = append_List_Rc_BTree_CStr_DynamicType (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_DynamicType (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let7239 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7243 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let7250 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7254 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7255 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7258 */
                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let7266 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7268 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7272 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7278 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7277 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7277 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7285 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7289 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7295 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7294 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7294 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7302 */
                                                __auto_type r5  = wrap_List_BTree_CStr_DynamicType_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7306 */
                                                __auto_type r6  = append_List_BTree_CStr_DynamicType_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7310 */
                                                __auto_type r8  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_DynamicType (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let7321 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7325 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let7332 */
                                // ----------
                                
                                ({ /* cicili#Progn7336 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7343 */
                        // ----------
                        
                        ({ /* cicili#Progn7347 */
                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let7354 */
              // ----------
              
              ({ /* cicili#Progn7358 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowLeft (List_BTree_CStr_DynamicType_pair_t child_items ) {
    return ({ /* cicili#Let7371 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        
        ({ /* cicili#Let7375 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7376 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7378 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7381 */
              ({ /* cicili#Let7385 */
                __auto_type match7384  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                typeof((((match7384 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                
                ({ /* cicili#Let7390 */
                  bool __h_case_result  = (true  &&  (((match7384 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7391 */
                        (left_child_rc  =  (((match7384 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7394 */
                      ({ /* cicili#Let7397 */
                        __auto_type __h_matchbox  = left_child_rc ;
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
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7418 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7419 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7422 */
                                        (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7430 */
                                            __auto_type last  = last_List_BTree_CStr_DynamicType_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            
                                            ({ /* cicili#Let7435 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7436 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7439 */
                                                  ({ /* cicili#Let7442 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7444 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , last_item , left ), ({ /* cicili#Let7453 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7455 */
                                                          __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7459 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7465 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_7464 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_7464 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7472 */
                                                          __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7476 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7482 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_7481 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_7481 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7489 */
                                                          __auto_type r5  = pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (init_List_BTree_CStr_DynamicType_pair_t (left_child_items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (push_List_BTree_CStr_DynamicType_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7502 */
                                                          __auto_type r7  = append_List_Rc_BTree_CStr_DynamicType (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_CStr_DynamicType (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let7509 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7513 */
                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let7520 */
                                            __auto_type match7519  = borrowRight (child_items );
                                            // ----------
                                            
                                            ({ /* cicili#Let7524 */
                                              bool __h_case_result  = (true  &&  ((match7519 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7526 */
                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , left ), ({ /* cicili#Let7534 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7536 */
                                                        __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7540 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7546 */
                                                          Rc_BTree_CStr_DynamicType __ciciliC_7545 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                          }
                                                          __ciciliC_7545 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7553 */
                                                        __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7557 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7563 */
                                                          Rc_BTree_CStr_DynamicType __ciciliC_7562 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                          }
                                                          __ciciliC_7562 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7570 */
                                                        __auto_type r8  = wrap_List_BTree_CStr_DynamicType_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7574 */
                                                        __auto_type r5  = append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7578 */
                                                        __auto_type r7  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_CStr_DynamicType (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let7589 */
                                                  __auto_type right  = match7519 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7593 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let7597 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7601 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7608 */
                                // ----------
                                
                                ({ /* cicili#Progn7612 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7619 */
                      // ----------
                      
                      ({ /* cicili#Progn7623 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7630 */
              // ----------
              
              ({ /* cicili#Progn7634 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let7638 */
      __auto_type result  = ({ /* cicili#Let7641 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        
        ({ /* cicili#Let7645 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7646 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7649 */
              (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7661 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7663 */
                    __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7667 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7676 */
                      Rc_BTree_CStr_DynamicType __ciciliC_7675 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_7675 ;
                    }), r2 );
                }))) : ({ /* cicili#Let7682 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7684 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let7689 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              
              ({ /* cicili#Let7693 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7694 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7697 */
                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7709 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7711 */
                          __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7715 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7724 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7723 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7723 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let7730 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7732 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let7737 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    
                    ({ /* cicili#Let7741 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7742 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn7745 */
                          (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7757 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7759 */
                                __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7763 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7772 */
                                  Rc_BTree_CStr_DynamicType __ciciliC_7771 (Rc_BTree_CStr_DynamicType __h_value ) {
                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                  }
                                  __ciciliC_7771 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let7778 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7780 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let7785 */
                          // ----------
                          
                          ({ /* cicili#Progn7789 */
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
    return ({ /* cicili#Let7814 */
        __auto_type match7813  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match7813 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let7819 */
          bool __h_case_result  = (true  &&  (((match7813 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7820 */
                (right_child_rc  =  (((match7813 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7823 */
              ({ /* cicili#Let7827 */
                __auto_type match7826  = get_Rc_BTree_CStr_DynamicType (right_child_rc );
                typeof((((match7826 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let7832 */
                  bool __h_case_result  = (true  &&  (((match7826 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7833 */
                        (right_child  =  (((match7826 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7836 */
                      ({ /* cicili#Let7840 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let7844 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7845 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7847 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn7850 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7859 */
                                  __auto_type match7857  = min_BTree_CStr_DynamicType (right_child );
                                  typeof((((match7857 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7864 */
                                    bool __h_case_result  = (true  &&  (((match7857 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7865 */
                                            (min  =  (((match7857 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn7867 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7870 */
                                        ({ /* cicili#Let7874 */
                                          __auto_type match7873  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                          typeof((((match7873 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let7879 */
                                            bool __h_case_result  = (true  &&  (((match7873 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7880 */
                                                  (nchild  =  (((match7873 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn7883 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let7891 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7893 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7897 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7906 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_7905 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_7905 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let7913 */
                                                __auto_type left  = match7873 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn7917 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7921 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7925 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let7933 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7937 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7938 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn7940 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7943 */
                                        ({ /* cicili#Let7946 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7948 */
                                            __auto_type r1  = push_List_BTree_CStr_DynamicType_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7952 */
                                            __auto_type r2  = append_List_Rc_BTree_CStr_DynamicType (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7956 */
                                            __auto_type r4  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7965 */
                                              Rc_BTree_CStr_DynamicType __ciciliC_7964 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                              }
                                              __ciciliC_7964 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7972 */
                                            __auto_type r5  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7976 */
                                            __auto_type r7  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let7982 */
                                            __auto_type match7981  = delete_BTree_CStr_DynamicType (r4 , current_key , NULL );
                                            typeof((((match7981 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            
                                            ({ /* cicili#Let7987 */
                                              bool __h_case_result  = (true  &&  (((match7981 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7988 */
                                                    (ntree  =  (((match7981 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7991 */
                                                  ({ /* cicili#Let7995 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_CStr_DynamicType (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8000 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8001 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn8003 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8006 */
                                                          ({ /* cicili#Let8010 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8014 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8015 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8018 */
                                                                  ({ /* cicili#Let8021 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8023 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8026 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , branch_head , current ), ({ /* cicili#Let8035 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8037 */
                                                                          __auto_type r10  = append_List_Rc_BTree_CStr_DynamicType (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8041 */
                                                                          __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8050 */
                                                                            Rc_BTree_CStr_DynamicType __ciciliC_8049 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                            }
                                                                            __ciciliC_8049 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let8057 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8061 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8068 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let8072 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8074 */
                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8082 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8084 */
                                                                      __auto_type r9  = new_Rc_BTree_CStr_DynamicType (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8088 */
                                                                      __auto_type r10  = push_List_Rc_BTree_CStr_DynamicType (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8092 */
                                                                      __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8101 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_8100 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_8100 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let8108 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn8112 */
                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8119 */
                                                  __auto_type left  = match7981 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn8123 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let8127 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8131 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let8138 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let8142 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8143 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8145 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn8148 */
                                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8157 */
                                        __auto_type match8155  = min_BTree_CStr_DynamicType (right_child );
                                        typeof((((match8155 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8162 */
                                          bool __h_case_result  = (true  &&  (((match8155 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8163 */
                                                  (min  =  (((match8155 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8165 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8168 */
                                              ({ /* cicili#Let8172 */
                                                __auto_type match8171  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                                typeof((((match8171 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8177 */
                                                  bool __h_case_result  = (true  &&  (((match8171 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8178 */
                                                        (nchild  =  (((match8171 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8181 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let8189 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8191 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8195 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8204 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_8203 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_8203 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8211 */
                                                      __auto_type left  = match8171 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8215 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8219 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8223 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let8231 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8235 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8236 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8238 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8241 */
                                              ({ /* cicili#Let8244 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8246 */
                                                  __auto_type r1  = push_List_BTree_CStr_DynamicType_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8250 */
                                                  __auto_type r2  = append_List_Rc_BTree_CStr_DynamicType (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8254 */
                                                  __auto_type r4  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8263 */
                                                    Rc_BTree_CStr_DynamicType __ciciliC_8262 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                    }
                                                    __ciciliC_8262 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8270 */
                                                  __auto_type r5  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8274 */
                                                  __auto_type r7  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let8280 */
                                                  __auto_type match8279  = delete_BTree_CStr_DynamicType (r4 , current_key , NULL );
                                                  typeof((((match8279 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let8285 */
                                                    bool __h_case_result  = (true  &&  (((match8279 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8286 */
                                                          (ntree  =  (((match8279 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8289 */
                                                        ({ /* cicili#Let8293 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_CStr_DynamicType (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let8298 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8299 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn8301 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8304 */
                                                                ({ /* cicili#Let8308 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let8312 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8313 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8316 */
                                                                        ({ /* cicili#Let8319 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8321 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8324 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , branch_head , current ), ({ /* cicili#Let8333 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8335 */
                                                                                __auto_type r10  = append_List_Rc_BTree_CStr_DynamicType (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8339 */
                                                                                __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8348 */
                                                                                  Rc_BTree_CStr_DynamicType __ciciliC_8347 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                                  }
                                                                                  __ciciliC_8347 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let8355 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn8359 */
                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let8366 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let8370 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn8372 */
                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8380 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8382 */
                                                                            __auto_type r9  = new_Rc_BTree_CStr_DynamicType (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8386 */
                                                                            __auto_type r10  = push_List_Rc_BTree_CStr_DynamicType (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8390 */
                                                                            __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8399 */
                                                                              Rc_BTree_CStr_DynamicType __ciciliC_8398 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                              }
                                                                              __ciciliC_8398 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let8406 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn8410 */
                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8417 */
                                                        __auto_type left  = match8279 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8421 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let8425 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8429 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let8436 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn8440 */
                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8447 */
                      // ----------
                      
                      ({ /* cicili#Progn8451 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8458 */
              // ----------
              
              ({ /* cicili#Progn8462 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowRightLeaf (List_BTree_CStr_DynamicType_pair_t left_child_items ) {
    return ({ /* cicili#Let8475 */
        __auto_type match8474  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match8474 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let8480 */
          bool __h_case_result  = (true  &&  (((match8474 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8481 */
                (right_child_rc  =  (((match8474 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8484 */
              ({ /* cicili#Let8488 */
                __auto_type match8487  = get_Rc_BTree_CStr_DynamicType (right_child_rc );
                typeof((((match8487 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let8493 */
                  bool __h_case_result  = (true  &&  (((match8487 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8494 */
                        (right_child  =  (((match8487 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8497 */
                      ({ /* cicili#Let8501 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        
                        ({ /* cicili#Let8505 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8506 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8509 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8518 */
                                  __auto_type match8516  = min_BTree_CStr_DynamicType (right_child );
                                  typeof((((match8516 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8523 */
                                    bool __h_case_result  = (true  &&  (((match8516 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8524 */
                                            (min  =  (((match8516 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8526 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8529 */
                                        ({ /* cicili#Let8533 */
                                          __auto_type match8532  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                          typeof((((match8532 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let8538 */
                                            bool __h_case_result  = (true  &&  (((match8532 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8539 */
                                                  (nchild  =  (((match8532 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8542 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let8550 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8552 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8556 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8565 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_8564 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_8564 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8572 */
                                                __auto_type left  = match8532 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn8576 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8580 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8584 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8595 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8597 */
                                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8601 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8607 */
                                      Rc_BTree_CStr_DynamicType __ciciliC_8606 (Rc_BTree_CStr_DynamicType __h_value ) {
                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                      }
                                      __ciciliC_8606 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8614 */
                                    __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8618 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8624 */
                                      Rc_BTree_CStr_DynamicType __ciciliC_8623 (Rc_BTree_CStr_DynamicType __h_value ) {
                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                      }
                                      __ciciliC_8623 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8631 */
                                    __auto_type r5  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_CStr_DynamicType (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let8642 */
                              // ----------
                              
                              ({ /* cicili#Progn8646 */
                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8653 */
                      // ----------
                      
                      ({ /* cicili#Progn8657 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8664 */
              // ----------
              
              ({ /* cicili#Progn8668 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8675 */
      __auto_type result  = ({ /* cicili#Let8678 */
        __auto_type match8677  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
        typeof((((match8677 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        
        ({ /* cicili#Let8683 */
          bool __h_case_result  = (true  &&  (((match8677 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8684 */
                (left_child_rc  =  (((match8677 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8687 */
              ({ /* cicili#Let8691 */
                __auto_type match8690  = get_Rc_BTree_CStr_DynamicType (left_child_rc );
                typeof((((match8690 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                
                ({ /* cicili#Let8696 */
                  bool __h_case_result  = (true  &&  (((match8690 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8697 */
                        (left_child  =  (((match8690 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8700 */
                      ({ /* cicili#Let8704 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let8708 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8709 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8711 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8714 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8723 */
                                  __auto_type match8721  = max_BTree_CStr_DynamicType (left_child );
                                  typeof((((match8721 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8728 */
                                    bool __h_case_result  = (true  &&  (((match8721 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8729 */
                                            (max  =  (((match8721 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8731 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8734 */
                                        ({ /* cicili#Let8738 */
                                          __auto_type match8737  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                          typeof((((match8737 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let8743 */
                                            bool __h_case_result  = (true  &&  (((match8737 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8744 */
                                                  (nchild  =  (((match8737 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8747 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8755 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8757 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8761 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8770 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_8769 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_8769 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8777 */
                                                __auto_type left  = match8737 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn8781 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8785 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8789 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let8796 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let8800 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8801 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8803 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn8806 */
                                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8815 */
                                        __auto_type match8813  = max_BTree_CStr_DynamicType (left_child );
                                        typeof((((match8813 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8820 */
                                          bool __h_case_result  = (true  &&  (((match8813 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8821 */
                                                  (max  =  (((match8813 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8823 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8826 */
                                              ({ /* cicili#Let8830 */
                                                __auto_type match8829  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                                typeof((((match8829 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8835 */
                                                  bool __h_case_result  = (true  &&  (((match8829 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8836 */
                                                        (nchild  =  (((match8829 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8839 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8847 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8849 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8853 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8862 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_8861 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_8861 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8869 */
                                                      __auto_type left  = match8829 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8873 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8877 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8881 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let8888 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let8892 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8893 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn8896 */
                                          (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8905 */
                                              __auto_type match8903  = max_BTree_CStr_DynamicType (left_child );
                                              typeof((((match8903 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8910 */
                                                bool __h_case_result  = (true  &&  (((match8903 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8911 */
                                                        (max  =  (((match8903 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn8913 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8916 */
                                                    ({ /* cicili#Let8920 */
                                                      __auto_type match8919  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                                      typeof((((match8919 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8925 */
                                                        bool __h_case_result  = (true  &&  (((match8919 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8926 */
                                                              (nchild  =  (((match8919 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8929 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8937 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8939 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8943 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8952 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_8951 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_8951 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let8959 */
                                                            __auto_type left  = match8919 ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8963 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8967 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn8971 */
                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let8978 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn8982 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8989 */
                      // ----------
                      
                      ({ /* cicili#Progn8993 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9000 */
              // ----------
              
              ({ /* cicili#Progn9004 */
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
    return ({ /* cicili#Let9032 */
        __auto_type result  = ({ /* cicili#Let9036 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          
          ({ /* cicili#Let9040 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9041 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn9043 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn9045 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn9048 */
                ({ /* cicili#Let9052 */
                  __auto_type match9051  = compareKey (skey , key );
                  // ----------
                  
                  ({ /* cicili#Let9056 */
                    bool __h_case_result  = (true  &&  ((match9051 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9058 */
                        ({ /* cicili#Let9062 */
                          __auto_type match9061  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                          typeof((((match9061 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let9067 */
                            bool __h_case_result  = (true  &&  (((match9061 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9068 */
                                  (child  =  (((match9061 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9071 */
                                ({ /* cicili#Let9075 */
                                  __auto_type match9074  = get_Rc_BTree_CStr_DynamicType (child );
                                  typeof((((match9074 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9080 */
                                    bool __h_case_result  = (true  &&  (((match9074 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9081 */
                                          (tr  =  (((match9074 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn9084 */
                                        ({ /* cicili#Let9088 */
                                          // ----------
                                          
                                          ({ /* cicili#Let9092 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn9094 */
                                                ({ /* cicili#Let9098 */
                                                  __auto_type match9097  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match9097 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let9103 */
                                                    bool __h_case_result  = (true  &&  (((match9097 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9104 */
                                                          (nchild  =  (((match9097 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn9107 */
                                                        ({ /* cicili#Let9111 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let9115 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9116 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn9118 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn9121 */
                                                                ({ /* cicili#Let9125 */
                                                                  __auto_type match9124  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                  typeof((((match9124 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let9130 */
                                                                    bool __h_case_result  = (true  &&  (((match9124 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9131 */
                                                                          (wleft  =  (((match9124 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9134 */
                                                                        ({ /* cicili#Let9137 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let9141 */
                                                                            __auto_type match9140  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match9140 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let9146 */
                                                                              bool __h_case_result  = (true  &&  (((match9140 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9147 */
                                                                                    (unboxed  =  (((match9140 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9150 */
                                                                                  ({ /* cicili#Let9154 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let9158 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9159 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn9161 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9164 */
                                                                                          ({ /* cicili#Let9167 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9169 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let9177 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let9181 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9182 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn9184 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9187 */
                                                                                                ({ /* cicili#Let9190 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9192 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9200 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn9204 */
                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9211 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn9215 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let9222 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn9226 */
                                                                          ({ /* cicili#Let9230 */
                                                                            __auto_type match9229  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                            typeof((((match9229 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let9235 */
                                                                              bool __h_case_result  = (true  &&  (((match9229 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9236 */
                                                                                    (wright  =  (((match9229 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9239 */
                                                                                  ({ /* cicili#Let9242 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let9246 */
                                                                                      __auto_type match9245  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match9245 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let9251 */
                                                                                        bool __h_case_result  = (true  &&  (((match9245 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9252 */
                                                                                              (unboxed  =  (((match9245 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9255 */
                                                                                            ({ /* cicili#Let9259 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let9263 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9264 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9266 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9269 */
                                                                                                    ({ /* cicili#Let9272 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9274 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9282 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let9286 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9287 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9289 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9292 */
                                                                                                          ({ /* cicili#Let9295 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9297 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9305 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn9309 */
                                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9316 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn9320 */
                                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9327 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn9331 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let9338 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn9342 */
                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let9350 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9352 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9356 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9365 */
                                                                          Rc_BTree_CStr_DynamicType __ciciliC_9364 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                          }
                                                                          __ciciliC_9364 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let9372 */
                                                        __auto_type left  = match9097 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn9376 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let9380 */
                                                // ----------
                                                
                                                ({ /* cicili#Let9384 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9386 */
                                                      ({ /* cicili#Let9390 */
                                                        __auto_type match9389  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match9389 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let9395 */
                                                          bool __h_case_result  = (true  &&  (((match9389 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9396 */
                                                                (nchild  =  (((match9389 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn9399 */
                                                              ({ /* cicili#Let9403 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let9407 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9408 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn9410 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9413 */
                                                                      ({ /* cicili#Let9417 */
                                                                        __auto_type match9416  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                        typeof((((match9416 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Let9422 */
                                                                          bool __h_case_result  = (true  &&  (((match9416 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9423 */
                                                                                (wleft  =  (((match9416 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9426 */
                                                                              ({ /* cicili#Let9429 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let9433 */
                                                                                  __auto_type match9432  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match9432 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let9438 */
                                                                                    bool __h_case_result  = (true  &&  (((match9432 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9439 */
                                                                                          (unboxed  =  (((match9432 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9442 */
                                                                                        ({ /* cicili#Let9446 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let9450 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9451 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn9453 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9456 */
                                                                                                ({ /* cicili#Let9459 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9461 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9469 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Let9473 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9474 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn9476 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9479 */
                                                                                                      ({ /* cicili#Let9482 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9484 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let9492 */
                                                                                                      // ----------
                                                                                                      
                                                                                                      ({ /* cicili#Progn9496 */
                                                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9503 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn9507 */
                                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let9514 */
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Progn9518 */
                                                                                ({ /* cicili#Let9522 */
                                                                                  __auto_type match9521  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                                  typeof((((match9521 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let9527 */
                                                                                    bool __h_case_result  = (true  &&  (((match9521 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9528 */
                                                                                          (wright  =  (((match9521 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9531 */
                                                                                        ({ /* cicili#Let9534 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let9538 */
                                                                                            __auto_type match9537  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match9537 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Let9543 */
                                                                                              bool __h_case_result  = (true  &&  (((match9537 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9544 */
                                                                                                    (unboxed  =  (((match9537 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9547 */
                                                                                                  ({ /* cicili#Let9551 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let9555 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9556 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9558 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9561 */
                                                                                                          ({ /* cicili#Let9564 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9566 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9574 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Let9578 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9579 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn9581 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9584 */
                                                                                                                ({ /* cicili#Let9587 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9589 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let9597 */
                                                                                                                // ----------
                                                                                                                
                                                                                                                ({ /* cicili#Progn9601 */
                                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9608 */
                                                                                                  // ----------
                                                                                                  
                                                                                                  ({ /* cicili#Progn9612 */
                                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9619 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn9623 */
                                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let9630 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn9634 */
                                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let9642 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9644 */
                                                                              __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9648 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9657 */
                                                                                Rc_BTree_CStr_DynamicType __ciciliC_9656 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                                }
                                                                                __ciciliC_9656 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let9664 */
                                                              __auto_type left  = match9389 ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn9668 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let9672 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn9676 */
                                                        ({ /* cicili#Let9680 */
                                                          __auto_type match9679  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match9679 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let9685 */
                                                            bool __h_case_result  = (true  &&  (((match9679 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9686 */
                                                                  (nchild  =  (((match9679 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn9689 */
                                                                borrowLeaf_BTree_CStr_DynamicType (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let9694 */
                                                                __auto_type left  = match9679 ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn9698 */
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
                                      }) : ({ /* cicili#Let9702 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn9706 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let9713 */
                                // ----------
                                
                                ({ /* cicili#Progn9717 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let9724 */
                        // ----------
                        
                        ({ /* cicili#Let9728 */
                          bool __h_case_result  = (true  &&  ((match9051 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9730 */
                              ({ /* cicili#Let9733 */
                                __auto_type result  = borrowInternal_BTree_CStr_DynamicType (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let9738 */
                                  // ----------
                                  
                                  ({ /* cicili#Let9742 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9745 */
                                        if (callback )
                                          { /* cicili#Block9749 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let9753 */
                              // ----------
                              
                              ({ /* cicili#Progn9757 */
                                deleteInternal (tree , items , children , Just_List_BTree_CStr_DynamicType_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let9762 */
                // ----------
                
                ({ /* cicili#Progn9766 */
                  ({ /* cicili#Let9770 */
                    __auto_type match9769  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                    typeof((((match9769 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    
                    ({ /* cicili#Let9775 */
                      bool __h_case_result  = (true  &&  (((match9769 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9776 */
                            (child  =  (((match9769 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn9779 */
                          ({ /* cicili#Let9783 */
                            __auto_type match9782  = get_Rc_BTree_CStr_DynamicType (child );
                            typeof((((match9782 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let9788 */
                              bool __h_case_result  = (true  &&  (((match9782 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9789 */
                                    (tr  =  (((match9782 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9792 */
                                  ({ /* cicili#Let9796 */
                                    // ----------
                                    
                                    ({ /* cicili#Let9800 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn9802 */
                                          ({ /* cicili#Let9806 */
                                            __auto_type match9805  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match9805 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9811 */
                                              bool __h_case_result  = (true  &&  (((match9805 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9812 */
                                                    (nchild  =  (((match9805 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn9815 */
                                                  ({ /* cicili#Let9819 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let9823 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9824 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn9826 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9829 */
                                                          ({ /* cicili#Let9833 */
                                                            __auto_type match9832  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                            typeof((((match9832 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let9838 */
                                                              bool __h_case_result  = (true  &&  (((match9832 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9839 */
                                                                    (wleft  =  (((match9832 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn9842 */
                                                                  ({ /* cicili#Let9845 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let9849 */
                                                                      __auto_type match9848  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match9848 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let9854 */
                                                                        bool __h_case_result  = (true  &&  (((match9848 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9855 */
                                                                              (unboxed  =  (((match9848 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9858 */
                                                                            ({ /* cicili#Let9862 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Let9866 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9867 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn9869 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9872 */
                                                                                    ({ /* cicili#Let9875 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9877 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let9885 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let9889 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9890 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn9892 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9895 */
                                                                                          ({ /* cicili#Let9898 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9900 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let9908 */
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Progn9912 */
                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let9919 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn9923 */
                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let9930 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn9934 */
                                                                    ({ /* cicili#Let9938 */
                                                                      __auto_type match9937  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                      typeof((((match9937 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let9943 */
                                                                        bool __h_case_result  = (true  &&  (((match9937 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9944 */
                                                                              (wright  =  (((match9937 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9947 */
                                                                            ({ /* cicili#Let9950 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let9954 */
                                                                                __auto_type match9953  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match9953 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Let9959 */
                                                                                  bool __h_case_result  = (true  &&  (((match9953 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9960 */
                                                                                        (unboxed  =  (((match9953 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9963 */
                                                                                      ({ /* cicili#Let9967 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Let9971 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9972 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn9974 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9977 */
                                                                                              ({ /* cicili#Let9980 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9982 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let9990 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let9994 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9995 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9997 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10000 */
                                                                                                    ({ /* cicili#Let10003 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10005 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let10013 */
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Progn10017 */
                                                                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let10024 */
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Progn10028 */
                                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10035 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn10039 */
                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10046 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10050 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let10058 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10060 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10064 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10073 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_10072 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_10072 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let10080 */
                                                  __auto_type left  = match9805 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn10084 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let10088 */
                                          // ----------
                                          
                                          ({ /* cicili#Let10092 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn10094 */
                                                ({ /* cicili#Let10098 */
                                                  __auto_type match10097  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match10097 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10103 */
                                                    bool __h_case_result  = (true  &&  (((match10097 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10104 */
                                                          (nchild  =  (((match10097 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10107 */
                                                        ({ /* cicili#Let10111 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let10115 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10116 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn10118 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn10121 */
                                                                ({ /* cicili#Let10125 */
                                                                  __auto_type match10124  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                  typeof((((match10124 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let10130 */
                                                                    bool __h_case_result  = (true  &&  (((match10124 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10131 */
                                                                          (wleft  =  (((match10124 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10134 */
                                                                        ({ /* cicili#Let10137 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let10141 */
                                                                            __auto_type match10140  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match10140 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let10146 */
                                                                              bool __h_case_result  = (true  &&  (((match10140 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10147 */
                                                                                    (unboxed  =  (((match10140 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10150 */
                                                                                  ({ /* cicili#Let10154 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let10158 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10159 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn10161 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10164 */
                                                                                          ({ /* cicili#Let10167 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10169 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let10177 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let10181 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10182 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn10184 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn10187 */
                                                                                                ({ /* cicili#Let10190 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10192 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let10200 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn10204 */
                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10211 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn10215 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let10222 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn10226 */
                                                                          ({ /* cicili#Let10230 */
                                                                            __auto_type match10229  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                            typeof((((match10229 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let10235 */
                                                                              bool __h_case_result  = (true  &&  (((match10229 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10236 */
                                                                                    (wright  =  (((match10229 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10239 */
                                                                                  ({ /* cicili#Let10242 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let10246 */
                                                                                      __auto_type match10245  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match10245 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let10251 */
                                                                                        bool __h_case_result  = (true  &&  (((match10245 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10252 */
                                                                                              (unboxed  =  (((match10245 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10255 */
                                                                                            ({ /* cicili#Let10259 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let10263 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10264 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn10266 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10269 */
                                                                                                    ({ /* cicili#Let10272 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10274 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let10282 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let10286 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10287 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn10289 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10292 */
                                                                                                          ({ /* cicili#Let10295 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10297 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let10305 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn10309 */
                                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let10316 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn10320 */
                                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10327 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn10331 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let10338 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn10342 */
                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let10350 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10352 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10356 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10365 */
                                                                          Rc_BTree_CStr_DynamicType __ciciliC_10364 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                          }
                                                                          __ciciliC_10364 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let10372 */
                                                        __auto_type left  = match10097 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10376 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10380 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn10384 */
                                                  ({ /* cicili#Let10388 */
                                                    __auto_type match10387  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match10387 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let10393 */
                                                      bool __h_case_result  = (true  &&  (((match10387 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10394 */
                                                            (nchild  =  (((match10387 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10397 */
                                                          borrowLeaf_BTree_CStr_DynamicType (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let10402 */
                                                          __auto_type left  = match10387 ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10406 */
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
                                }) : ({ /* cicili#Let10410 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn10414 */
                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let10421 */
                          // ----------
                          
                          ({ /* cicili#Progn10425 */
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
        ({ /* cicili#Let10434 */
          __auto_type rs  = ({ /* cicili#Let10437 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            
            ({ /* cicili#Let10441 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10442 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10445 */
                  ({ /* cicili#Let10449 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    
                    ({ /* cicili#Let10453 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10454 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn10456 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn10459 */
                          ({ /* cicili#Let10462 */
                            __auto_type items_len  = hasLen_List_BTree_CStr_DynamicType_pair_t (items , (L_BTree_CStr_DynamicType  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? result  : ({ /* cicili#Let10470 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                
                                ({ /* cicili#Let10474 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10475 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10478 */
                                      ({ /* cicili#Let10482 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        
                                        ({ /* cicili#Let10486 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10487 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn10490 */
                                              ({ /* cicili#Let10494 */
                                                __auto_type match10493  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                typeof((((match10493 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                
                                                ({ /* cicili#Let10499 */
                                                  bool __h_case_result  = (true  &&  (((match10493 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10500 */
                                                        (bitem  =  (((match10493 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10503 */
                                                      ({ /* cicili#Let10506 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10508 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10521 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_10520 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_10520 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let10528 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn10532 */
                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10539 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let10543 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10544 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn10547 */
                                                    ({ /* cicili#Let10551 */
                                                      __auto_type match10550  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                      typeof((((match10550 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10556 */
                                                        bool __h_case_result  = (true  &&  (((match10550 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10557 */
                                                              (bitem  =  (((match10550 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10560 */
                                                            ({ /* cicili#Let10563 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10565 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10578 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_10577 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_10577 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10585 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10589 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10596 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn10600 */
                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10607 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10611 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let10616 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            
                                            ({ /* cicili#Let10620 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10621 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn10624 */
                                                  ({ /* cicili#Let10627 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_CStr_DynamicType (head );
                                                    // ----------
                                                    ({ /* cicili#Let10632 */
                                                      __auto_type match10631  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match10631 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10637 */
                                                        bool __h_case_result  = (true  &&  (((match10631 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10638 */
                                                              (unboxed  =  (((match10631 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10641 */
                                                            ({ /* cicili#Let10645 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn10649 */
                                                                ({ /* cicili#Let10652 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10654 */
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
                                                          }) : ({ /* cicili#Let10661 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10665 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let10672 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn10676 */
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
                        }) : ({ /* cicili#Let10680 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          
                          ({ /* cicili#Let10684 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10685 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn10687 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10690 */
                                ({ /* cicili#Let10693 */
                                  __auto_type items_len  = hasLen_List_BTree_CStr_DynamicType_pair_t (items , (L_BTree_CStr_DynamicType  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? result  : ({ /* cicili#Let10701 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      
                                      ({ /* cicili#Let10705 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10706 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn10709 */
                                            ({ /* cicili#Let10713 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let10717 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10718 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn10721 */
                                                    ({ /* cicili#Let10725 */
                                                      __auto_type match10724  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                      typeof((((match10724 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10730 */
                                                        bool __h_case_result  = (true  &&  (((match10724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10731 */
                                                              (bitem  =  (((match10724 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10734 */
                                                            ({ /* cicili#Let10737 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10739 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10752 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_10751 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_10751 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10759 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10763 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10770 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let10774 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10775 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10778 */
                                                          ({ /* cicili#Let10782 */
                                                            __auto_type match10781  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                            typeof((((match10781 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let10787 */
                                                              bool __h_case_result  = (true  &&  (((match10781 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10788 */
                                                                    (bitem  =  (((match10781 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10791 */
                                                                  ({ /* cicili#Let10794 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10796 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10809 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_10808 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_10808 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let10816 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn10820 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10827 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10831 */
                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let10838 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn10842 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let10847 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10851 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10852 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10855 */
                                                        ({ /* cicili#Let10858 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_CStr_DynamicType (head );
                                                          // ----------
                                                          ({ /* cicili#Let10863 */
                                                            __auto_type match10862  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match10862 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let10868 */
                                                              bool __h_case_result  = (true  &&  (((match10862 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10869 */
                                                                    (unboxed  =  (((match10862 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10872 */
                                                                  ({ /* cicili#Let10876 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    
                                                                    ({ /* cicili#Progn10880 */
                                                                      ({ /* cicili#Let10883 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10885 */
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
                                                                }) : ({ /* cicili#Let10892 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn10896 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let10903 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10907 */
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
                              }) : ({ /* cicili#Let10911 */
                                // ----------
                                
                                ({ /* cicili#Progn10915 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10919 */
                  // ----------
                  
                  ({ /* cicili#Progn10923 */
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
    return ({ /* cicili#Let10940 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10944 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10945 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10947 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10949 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10952 */
              ({ /* cicili#Let10956 */
                __auto_type match10955  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10960 */
                  bool __h_case_result  = (true  &&  ((match10955 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10962 */
                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let10969 */
                      // ----------
                      
                      ({ /* cicili#Let10973 */
                        bool __h_case_result  = (true  &&  ((match10955 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10975 */
                            ({ /* cicili#Let10978 */
                              __auto_type result  = Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let10987 */
                                // ----------
                                
                                ({ /* cicili#Let10991 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block10994 */
                                      if (callback )
                                        { /* cicili#Block10998 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let11002 */
                            // ----------
                            
                            ({ /* cicili#Progn11006 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11010 */
              // ----------
              
              ({ /* cicili#Progn11014 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11022 */
      __auto_type result  = ({ /* cicili#Let11025 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        
        ({ /* cicili#Let11029 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11030 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11032 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11035 */
              deleteInternal (Just_BTree_CStr_DynamicType (tree ), items , children , Nothing_List_BTree_CStr_DynamicType_pair_t (), items , 0);
            }) : ({ /* cicili#Let11041 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              
              ({ /* cicili#Let11045 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11046 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11048 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11051 */
                    deleteInternal (Just_BTree_CStr_DynamicType (tree ), items , children , Nothing_List_BTree_CStr_DynamicType_pair_t (), items , 0);
                  }) : ({ /* cicili#Let11057 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    
                    ({ /* cicili#Let11061 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11062 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn11065 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let11069 */
                          // ----------
                          
                          ({ /* cicili#Progn11073 */
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
  return ({ /* cicili#Let11096 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      
      ({ /* cicili#Let11100 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11101 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11103 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11106 */
            ({ /* cicili#Let11110 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              
              ({ /* cicili#Let11114 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11115 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11117 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11120 */
                    ({ /* cicili#Let11123 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11125 */
                        __auto_type etree  = fromLists_BTree_CStr_DynamicType (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let11131 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        
                        ({ /* cicili#Let11135 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11136 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11139 */
                              ({ /* cicili#Let11142 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11144 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_CStr_DynamicType (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let11150 */
                              // ----------
                              
                              ({ /* cicili#Progn11154 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let11158 */
                    // ----------
                    
                    ({ /* cicili#Progn11162 */
                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let11170 */
            // ----------
            
            ({ /* cicili#Progn11174 */
              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType pure_BTree_CStr_DynamicType (CStr keys [], DynamicType values [], int len ) {
  return ({ /* cicili#Let11185 */
      BTree_CStr_DynamicType tree  = Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ());
      // ----------
      for (int i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let11193 */
            __auto_type match11192  = insert_BTree_CStr_DynamicType (tree , keys [i ], values [i ]);
            typeof((((match11192 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            
            ({ /* cicili#Let11198 */
              bool __h_case_result  = (true  &&  (((match11192 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11199 */
                    (new_tree  =  (((match11192 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block11203 */
                  { /* cicili#Block11205 */
                    free_BTree_CStr_DynamicType ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let11211 */
                  __auto_type left  = match11192 ;
                  // ----------
                  
                  { /* cicili#Block11215 */
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
    return ({ /* cicili#Let11225 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11229 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11230 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11232 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11235 */
              (({ /* cicili#Let11239 */
                  // ----------
                  
                  ({ /* cicili#Let11243 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11245 */
                        ({ /* cicili#Let11249 */
                          __auto_type match11248  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match11248 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let11254 */
                            bool __h_case_result  = (true  &&  (((match11248 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11255 */
                                  (tr  =  (((match11248 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn11258 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let11262 */
                                // ----------
                                
                                ({ /* cicili#Progn11266 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let11270 */
                        // ----------
                        
                        ({ /* cicili#Progn11274 */
                          ({ /* cicili#Let11278 */
                            __auto_type match11277  = get_Rc_BTree_CStr_DynamicType (head );
                            typeof((((match11277 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let11283 */
                              bool __h_case_result  = (true  &&  (((match11277 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11284 */
                                    (tr  =  (((match11277 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn11287 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let11291 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn11295 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let11299 */
              // ----------
              
              ({ /* cicili#Progn11303 */
                0;
              });
            }));
        });
      });
  }
  int showTree (int indent , BTree_CStr_DynamicType tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let11309 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let11313 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11314 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11316 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn11319 */
                (show_List_BTree_CStr_DynamicType_pair_t (file , items ) +  ({ /* cicili#Let11324 */
                    // ----------
                    
                    ({ /* cicili#Let11328 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn11330 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let11334 */
                          // ----------
                          
                          ({ /* cicili#Progn11338 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let11342 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                
                ({ /* cicili#Let11346 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11347 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11349 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11352 */
                      (show_List_BTree_CStr_DynamicType_pair_t (file , items ) +  ({ /* cicili#Let11357 */
                          // ----------
                          
                          ({ /* cicili#Let11361 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn11363 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let11367 */
                                // ----------
                                
                                ({ /* cicili#Progn11371 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let11375 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      
                      ({ /* cicili#Let11379 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11380 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn11383 */
                            show_List_BTree_CStr_DynamicType_pair_t (file , items );
                          }) : ({ /* cicili#Let11388 */
                            // ----------
                            
                            ({ /* cicili#Progn11392 */
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
    { /* cicili#Let11401 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      
      ({ /* cicili#Let11405 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11406 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11408 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11412 */
            { /* cicili#Let11416 */
              __auto_type match11415  = get_Rc_BTree_CStr_DynamicType (wheadC );
              typeof((((match11415 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              
              ({ /* cicili#Let11421 */
                bool __h_case_result  = (true  &&  (((match11415 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11422 */
                      (headC  =  (((match11415 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block11426 */
                    { /* cicili#Let11430 */
                      // ----------
                      
                      ({ /* cicili#Let11434 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11437 */
                            { /* cicili#Block11439 */
                              { /* cicili#Let11443 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                
                                ({ /* cicili#Let11447 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11448 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11450 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11454 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let11459 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      
                                      ({ /* cicili#Let11463 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11464 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn11466 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block11470 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let11475 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let11479 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11480 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block11484 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let11488 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                
                                ({ /* cicili#Let11492 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11493 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11495 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11499 */
                                      { /* cicili#Block11501 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let11506 */
                            // ----------
                            
                            { /* cicili#Block11510 */
                              { /* cicili#Block11512 */
                                { /* cicili#Let11516 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  
                                  ({ /* cicili#Let11520 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11521 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11523 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block11527 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let11532 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        
                                        ({ /* cicili#Let11536 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11537 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn11539 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block11543 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let11548 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              
                                              ({ /* cicili#Let11552 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11553 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                if (__h_case_result )
                                                  { /* cicili#Block11557 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let11561 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  
                                  ({ /* cicili#Let11565 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11566 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11568 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block11572 */
                                        { /* cicili#Block11574 */
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
    { /* cicili#Let11581 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11585 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11586 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11588 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11592 */
            { /* cicili#Block11594 */
              callback (head , ({ /* cicili#Let11598 */
                  // ----------
                  
                  ({ /* cicili#Let11602 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11604 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let11608 */
                        // ----------
                        
                        ({ /* cicili#Progn11612 */
                          ({ /* cicili#Let11616 */
                            // ----------
                            
                            ({ /* cicili#Let11620 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn11622 */
                                  True ();
                                }) : ({ /* cicili#Let11626 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn11630 */
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
  { /* cicili#Let11635 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    
    ({ /* cicili#Let11639 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11640 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11642 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11646 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let11651 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let11655 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11656 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11658 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11662 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let11667 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                
                ({ /* cicili#Let11671 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11672 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11676 */
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
    return ({ /* cicili#Let11692 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11696 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11697 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11699 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11702 */
              ({ /* cicili#Let11706 */
                // ----------
                
                ({ /* cicili#Let11710 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11712 */
                      ({ /* cicili#Let11716 */
                        __auto_type match11715  = get_Rc_BTree_CStr_DynamicType (head );
                        typeof((((match11715 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let11721 */
                          bool __h_case_result  = (true  &&  (((match11715 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11722 */
                                (child  =  (((match11715 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11725 */
                              ({ /* cicili#Let11729 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                
                                ({ /* cicili#Let11733 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11734 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn11737 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let11741 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      
                                      ({ /* cicili#Let11745 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11746 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn11749 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let11753 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let11757 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11758 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn11761 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let11765 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn11769 */
                                                    Nothing_BTree_CStr_DynamicType_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let11774 */
                              // ----------
                              
                              ({ /* cicili#Progn11778 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11783 */
                      // ----------
                      
                      ({ /* cicili#Progn11787 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11791 */
              // ----------
              
              ({ /* cicili#Progn11795 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t maxLeaf (List_BTree_CStr_DynamicType_pair_t current ) {
    return ({ /* cicili#Let11803 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11807 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11808 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11810 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11813 */
              ({ /* cicili#Let11817 */
                // ----------
                
                ({ /* cicili#Let11821 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11823 */
                      Just_BTree_CStr_DynamicType_pair_t (head );
                    }) : ({ /* cicili#Let11828 */
                      // ----------
                      
                      ({ /* cicili#Progn11832 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11836 */
              // ----------
              
              ({ /* cicili#Progn11840 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11846 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let11850 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11851 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11854 */
            maxInternal (children );
          }) : ({ /* cicili#Let11858 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let11862 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11863 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn11866 */
                  maxInternal (children );
                }) : ({ /* cicili#Let11870 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let11874 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11875 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11878 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let11882 */
                        // ----------
                        
                        ({ /* cicili#Progn11886 */
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
    return ({ /* cicili#Let11901 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let11905 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11906 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11909 */
              ({ /* cicili#Let11913 */
                __auto_type match11912  = get_Rc_BTree_CStr_DynamicType (head );
                typeof((((match11912 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                
                ({ /* cicili#Let11918 */
                  bool __h_case_result  = (true  &&  (((match11912 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11919 */
                        (child  =  (((match11912 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11922 */
                      ({ /* cicili#Let11926 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        
                        ({ /* cicili#Let11930 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11931 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11934 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let11938 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              
                              ({ /* cicili#Let11942 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11943 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn11946 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let11950 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let11954 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11955 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn11958 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let11962 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn11966 */
                                            Nothing_BTree_CStr_DynamicType_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11971 */
                      // ----------
                      
                      ({ /* cicili#Progn11975 */
                        Nothing_BTree_CStr_DynamicType_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11980 */
              // ----------
              
              ({ /* cicili#Progn11984 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t minLeaf (List_BTree_CStr_DynamicType_pair_t first ) {
    return ({ /* cicili#Let11992 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let11996 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11997 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12000 */
              Just_BTree_CStr_DynamicType_pair_t (head );
            }) : ({ /* cicili#Let12005 */
              // ----------
              
              ({ /* cicili#Progn12009 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12015 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let12019 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12020 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12023 */
            minInternal (children );
          }) : ({ /* cicili#Let12027 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let12031 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12032 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn12035 */
                  minInternal (children );
                }) : ({ /* cicili#Let12039 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let12043 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12044 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12047 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let12051 */
                        // ----------
                        
                        ({ /* cicili#Progn12055 */
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
    return ({ /* cicili#Let12073 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12077 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12078 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12080 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12082 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12085 */
              ({ /* cicili#Let12089 */
                __auto_type match12088  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12093 */
                  bool __h_case_result  = (true  &&  ((match12088 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12095 */
                      ({ /* cicili#Let12099 */
                        __auto_type match12098  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                        typeof((((match12098 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        
                        ({ /* cicili#Let12104 */
                          bool __h_case_result  = (true  &&  (((match12098 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12105 */
                                (node  =  (((match12098 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12108 */
                              ({ /* cicili#Let12112 */
                                __auto_type match12111  = get_Rc_BTree_CStr_DynamicType (node );
                                typeof((((match12111 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let12117 */
                                  bool __h_case_result  = (true  &&  (((match12111 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12118 */
                                        (tr  =  (((match12111 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12121 */
                                      search_BTree_CStr_DynamicType (tr , skey );
                                    }) : ({ /* cicili#Let12126 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12130 */
                                        Nothing_BTree_CStr_DynamicType_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let12135 */
                              // ----------
                              
                              ({ /* cicili#Progn12139 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12144 */
                      // ----------
                      
                      ({ /* cicili#Let12148 */
                        bool __h_case_result  = (true  &&  ((match12088 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn12150 */
                            Just_BTree_CStr_DynamicType_pair_t (head );
                          }) : ({ /* cicili#Let12155 */
                            // ----------
                            
                            ({ /* cicili#Progn12159 */
                              ({ /* cicili#Let12163 */
                                // ----------
                                
                                ({ /* cicili#Let12167 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12169 */
                                      ({ /* cicili#Let12173 */
                                        __auto_type match12172  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                        typeof((((match12172 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        
                                        ({ /* cicili#Let12178 */
                                          bool __h_case_result  = (true  &&  (((match12172 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12179 */
                                                (node  =  (((match12172 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn12182 */
                                              ({ /* cicili#Let12186 */
                                                __auto_type match12185  = get_Rc_BTree_CStr_DynamicType (node );
                                                typeof((((match12185 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                
                                                ({ /* cicili#Let12191 */
                                                  bool __h_case_result  = (true  &&  (((match12185 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12192 */
                                                        (tr  =  (((match12185 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12195 */
                                                      search_BTree_CStr_DynamicType (tr , skey );
                                                    }) : ({ /* cicili#Let12200 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn12204 */
                                                        Nothing_BTree_CStr_DynamicType_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let12209 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn12213 */
                                                Nothing_BTree_CStr_DynamicType_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let12218 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12222 */
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
            }) : ({ /* cicili#Let12226 */
              // ----------
              
              ({ /* cicili#Progn12230 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t searchLeaf (List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let12240 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12244 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12245 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12247 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12249 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12252 */
              ({ /* cicili#Let12256 */
                __auto_type match12255  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12260 */
                  bool __h_case_result  = (true  &&  ((match12255 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12262 */
                      Just_BTree_CStr_DynamicType_pair_t (head );
                    }) : ({ /* cicili#Let12267 */
                      // ----------
                      
                      ({ /* cicili#Progn12271 */
                        ({ /* cicili#Let12275 */
                          // ----------
                          
                          ({ /* cicili#Let12279 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn12281 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              }) : ({ /* cicili#Let12286 */
                                // ----------
                                
                                ({ /* cicili#Progn12290 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12294 */
              // ----------
              
              ({ /* cicili#Progn12298 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12304 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let12308 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12309 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12311 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12314 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let12318 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let12322 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn12323 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn12325 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn12328 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let12332 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let12336 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12337 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12340 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let12344 */
                        // ----------
                        
                        ({ /* cicili#Progn12348 */
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
    { /* cicili#Block12360 */
      return Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_ORDER (3));
    }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType insertInternal (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children , List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let12372 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12376 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12377 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12379 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12381 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12384 */
              ({ /* cicili#Let12388 */
                __auto_type match12387  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12392 */
                  bool __h_case_result  = (true  &&  ((match12387 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12394 */
                      ({ /* cicili#Let12398 */
                        __auto_type match12397  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                        typeof((((match12397 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let12403 */
                          bool __h_case_result  = (true  &&  (((match12397 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12404 */
                                (child  =  (((match12397 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12407 */
                              ({ /* cicili#Let12411 */
                                __auto_type match12410  = get_Rc_BTree_CStr_DynamicType (child );
                                typeof((((match12410 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let12416 */
                                  bool __h_case_result  = (true  &&  (((match12410 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12417 */
                                        (tr  =  (((match12410 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12420 */
                                      ({ /* cicili#Let12424 */
                                        __auto_type match12423  = insert_BTree_CStr_DynamicType (tr , skey , svalue );
                                        typeof((((match12423 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        
                                        ({ /* cicili#Let12429 */
                                          bool __h_case_result  = (true  &&  (((match12423 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12430 */
                                                (child_tree  =  (((match12423 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn12433 */
                                              ({ /* cicili#Let12437 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                
                                                ({ /* cicili#Let12441 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12442 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn12444 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12447 */
                                                      ({ /* cicili#Let12452 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match12450_1_arg ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let12456 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12457 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn12459 */
                                                                    (__h_match12450_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match12450_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn12462 */
                                                              ({ /* cicili#Let12465 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12467 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , single_item , current ), ({ /* cicili#Let12476 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12478 */
                                                                      __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12482 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12486 */
                                                                      __auto_type r3  = append_List_Rc_BTree_CStr_DynamicType (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12490 */
                                                                      __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12499 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_12498 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_12498 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let12506 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn12510 */
                                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let12517 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let12521 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn12523 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12531 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12533 */
                                                                  __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12537 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12543 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_12542 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_12542 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12550 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12554 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12560 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_12559 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_12559 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12567 */
                                                                  __auto_type r5  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_CStr_DynamicType (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let12575 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn12579 */
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12587 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12589 */
                                                                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12593 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12599 */
                                                                      Rc_BTree_CStr_DynamicType __ciciliC_12598 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                      }
                                                                      __ciciliC_12598 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12606 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12610 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12616 */
                                                                      Rc_BTree_CStr_DynamicType __ciciliC_12615 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                      }
                                                                      __ciciliC_12615 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12623 */
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
                                            }) : ({ /* cicili#Let12631 */
                                              __auto_type left  = match12423 ;
                                              // ----------
                                              
                                              ({ /* cicili#Progn12635 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let12639 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12643 */
                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let12650 */
                              // ----------
                              
                              ({ /* cicili#Progn12654 */
                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , ((BTree_CStr_DynamicType_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12664 */
                      // ----------
                      
                      ({ /* cicili#Let12668 */
                        bool __h_case_result  = (true  &&  ((match12387 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn12670 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let12677 */
                            // ----------
                            
                            ({ /* cicili#Progn12681 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12685 */
              // ----------
              
              ({ /* cicili#Progn12689 */
                ({ /* cicili#Let12693 */
                  __auto_type match12692  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                  typeof((((match12692 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  
                  ({ /* cicili#Let12698 */
                    bool __h_case_result  = (true  &&  (((match12692 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12699 */
                          (child  =  (((match12692 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12702 */
                        ({ /* cicili#Let12706 */
                          __auto_type match12705  = get_Rc_BTree_CStr_DynamicType (child );
                          typeof((((match12705 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let12711 */
                            bool __h_case_result  = (true  &&  (((match12705 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12712 */
                                  (tr  =  (((match12705 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn12715 */
                                ({ /* cicili#Let12719 */
                                  __auto_type match12718  = insert_BTree_CStr_DynamicType (tr , skey , svalue );
                                  typeof((((match12718 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  
                                  ({ /* cicili#Let12724 */
                                    bool __h_case_result  = (true  &&  (((match12718 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12725 */
                                          (child_tree  =  (((match12718 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn12728 */
                                        ({ /* cicili#Let12732 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          
                                          ({ /* cicili#Let12736 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12737 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn12739 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn12742 */
                                                ({ /* cicili#Let12747 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match12745_1_arg ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let12751 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12752 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn12754 */
                                                              (__h_match12745_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match12745_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn12757 */
                                                        ({ /* cicili#Let12760 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12762 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , single_item , current ), ({ /* cicili#Let12771 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12773 */
                                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12777 */
                                                                __auto_type r2  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12781 */
                                                                __auto_type r3  = append_List_Rc_BTree_CStr_DynamicType (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12785 */
                                                                __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12794 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_12793 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_12793 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let12801 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn12805 */
                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let12812 */
                                                // ----------
                                                
                                                ({ /* cicili#Let12816 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12818 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12826 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12828 */
                                                            __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12832 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12838 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_12837 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_12837 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12845 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_CStr_DynamicType (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let12853 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn12857 */
                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12865 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12867 */
                                                              __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12871 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12877 */
                                                                Rc_BTree_CStr_DynamicType __ciciliC_12876 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                }
                                                                __ciciliC_12876 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12884 */
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
                                      }) : ({ /* cicili#Let12892 */
                                        __auto_type left  = match12718 ;
                                        // ----------
                                        
                                        ({ /* cicili#Progn12896 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let12900 */
                                // ----------
                                
                                ({ /* cicili#Progn12904 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12911 */
                        // ----------
                        
                        ({ /* cicili#Progn12915 */
                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (({ /* cicili#Let12922 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12924 */
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
    return ({ /* cicili#Let12940 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12944 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12945 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12947 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12949 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12952 */
              ({ /* cicili#Let12956 */
                __auto_type match12955  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12960 */
                  bool __h_case_result  = (true  &&  ((match12955 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12962 */
                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , ((BTree_CStr_DynamicType_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let12972 */
                      // ----------
                      
                      ({ /* cicili#Let12976 */
                        bool __h_case_result  = (true  &&  ((match12955 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn12978 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let12985 */
                            // ----------
                            
                            ({ /* cicili#Progn12989 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12993 */
              // ----------
              
              ({ /* cicili#Progn12997 */
                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (({ /* cicili#Let13004 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13006 */
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
  return ({ /* cicili#Let13016 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let13020 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13021 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13023 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13026 */
            ({ /* cicili#Let13030 */
              __auto_type match13029  = insertInternal (items , children , items , 0);
              typeof((((match13029 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              
              ({ /* cicili#Let13034 */
                bool __h_case_result  = (true  &&  (((match13029 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13035 */
                      (tr  =  (((match13029 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn13038 */
                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                  }) : ({ /* cicili#Let13045 */
                    __auto_type left  = match13029 ;
                    // ----------
                    
                    ({ /* cicili#Progn13049 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let13053 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let13057 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13058 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13060 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn13063 */
                  ({ /* cicili#Let13067 */
                    __auto_type match13066  = insertInternal (items , children , items , 0);
                    typeof((((match13066 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    
                    ({ /* cicili#Let13071 */
                      bool __h_case_result  = (true  &&  (((match13066 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13072 */
                            (tr  =  (((match13066 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn13075 */
                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                        }) : ({ /* cicili#Let13082 */
                          __auto_type left  = match13066 ;
                          // ----------
                          
                          ({ /* cicili#Progn13086 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let13090 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let13094 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13095 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn13098 */
                        ({ /* cicili#Let13102 */
                          __auto_type match13101  = insertLeaf (items , items , 0);
                          typeof((((match13101 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let13106 */
                            bool __h_case_result  = (true  &&  (((match13101 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13107 */
                                  (tr  =  (((match13101 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn13110 */
                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                              }) : ({ /* cicili#Let13117 */
                                __auto_type left  = match13101 ;
                                // ----------
                                
                                ({ /* cicili#Progn13121 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13125 */
                        // ----------
                        
                        ({ /* cicili#Progn13129 */
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
  { /* cicili#Let13138 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_CStr_DynamicType children ) {
      { /* cicili#Let13143 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13147 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13148 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13150 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block13154 */
              { /* cicili#Block13156 */
                free_Rc_BTree_CStr_DynamicType (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let13162 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let13166 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13167 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13169 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block13173 */
            { /* cicili#Block13175 */
              free_List_BTree_CStr_DynamicType_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_CStr_DynamicType ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let13186 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let13190 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13191 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13193 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block13197 */
                  { /* cicili#Block13199 */
                    free_List_BTree_CStr_DynamicType_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_CStr_DynamicType ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let13210 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let13214 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13215 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block13219 */
                        { /* cicili#Block13221 */
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
  { /* cicili#Let13233 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_CStr_DynamicType Internal_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children ) {
  { /* cicili#Let13241 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_CStr_DynamicType Leaf_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items ) {
  { /* cicili#Let13249 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_CStr_DynamicType__H_IMPL__ */ 
