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
  return ((null_terminated ) ? ({ /* cicili#Let1219 */
        char * buffer  = malloc (((step  +  1 ) *  sizeof(char) ));
        StringBuffer_char sb  = MakeNullTerminatedBuffer_char (buffer , 0, step , step );
        // ----------
        (*buffer ) = ((char)'\0');
        sb ;
      }) : ({ /* cicili#Let1223 */
        char * buffer  = malloc ((step  *  sizeof(char) ));
        StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, step , step );
        // ----------
        sb ;
      }));
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , char data ) {
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , char * data , int len ) {
  return ({ /* cicili#Let1237 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let1241 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn1242 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn1244 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn1246 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1248 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1251 */
            ({ /* cicili#Let1253 */
              int blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block1257 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let1259 */
                    char * new_buffer  = realloc (buffer , (size  *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let1264 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            
            ({ /* cicili#Let1268 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn1269 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn1271 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn1273 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn1275 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1278 */
                  ({ /* cicili#Let1280 */
                    int blen  = (len  *  sizeof(char) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block1284 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let1286 */
                          char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((char)'\0');
                    MakeNullTerminatedBuffer_char (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let1291 */
                  // ----------
                  
                  ({ /* cicili#Progn1295 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
  { /* cicili#Let1303 */
    typeof((((this -> __h_data ). Bufferred ). __h_0_mem )) buffer ;
    // ----------
    
    ({ /* cicili#Let1307 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn1308 */
            (buffer  =  (((this -> __h_data ). Bufferred ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1312 */
          { /* cicili#Block1314 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
      else
        { /* cicili#Let1320 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          
          ({ /* cicili#Let1324 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn1325 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1329 */
                { /* cicili#Block1331 */
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
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , new_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step ) {
  { /* cicili#Let1341 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Bufferred_t , .__h_data.Bufferred = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , int cursor , int size , int step ) {
  { /* cicili#Let1346 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let1351 */
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
  { /* cicili#Let1373 */
    Maybe_DynamicType_x instance  = ((Maybe_DynamicType_x){ get_Maybe_DynamicType_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_DynamicType_x Nothing_DynamicType_x () {
  { /* cicili#Let1378 */
    Maybe_DynamicType_x instance  = ((Maybe_DynamicType_x){ get_Maybe_DynamicType_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_DynamicType_x__H_IMPL__ */ 
#ifndef __Box_DynamicType__H_IMPL__
#define __Box_DynamicType__H_IMPL__
Box_DynamicType new_Box_DynamicType (DynamicType_x pointer ) {
  return ({ /* cicili#Let1385 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((DynamicType_x *)malloc (sizeof(DynamicType_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_DynamicType_x (holder , count , ((size_t)pointer ));
    });
}
Box_DynamicType clone_Box_DynamicType (Box_DynamicType rc ) {
  return ({ /* cicili#Let1394 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1398 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1399 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1401 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1403 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1406 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn1409 */
                (++(*count ));
                __h_Hold_DynamicType_x (pointer , count , address );
              }) : Gone_DynamicType_x ());
          }) : ({ /* cicili#Let1415 */
            // ----------
            
            ({ /* cicili#Progn1419 */
              Gone_DynamicType_x ();
            });
          }));
      });
    });
}
Maybe_DynamicType_x take_Box_DynamicType (Box_DynamicType * this ) {
  return ({ /* cicili#Let1427 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1431 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1432 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1434 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1436 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1439 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let1443 */
                __auto_type result  = Just_DynamicType_x ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block1449 */
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
          }) : ({ /* cicili#Let1456 */
            // ----------
            
            ({ /* cicili#Progn1460 */
              Nothing_DynamicType_x ();
            });
          }));
      });
    });
}
Maybe_DynamicType_x get_Box_DynamicType (Box_DynamicType rc ) {
  return ({ /* cicili#Let1468 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let1472 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1473 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1475 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn1477 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1480 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_DynamicType_x ((*pointer )) : Nothing_DynamicType_x ());
          }) : ({ /* cicili#Let1487 */
            // ----------
            
            ({ /* cicili#Progn1491 */
              Nothing_DynamicType_x ();
            });
          }));
      });
    });
}
void free_Box_DynamicType (Box_DynamicType * this ) {
  { /* cicili#Let1500 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let1504 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn1505 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1507 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn1509 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1513 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block1517 */
              if ((*count ) ==  1 )
                { /* cicili#Block1520 */
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
        { /* cicili#Let1530 */
          // ----------
          
          ({ /* cicili#Let1534 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1537 */
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
  { /* cicili#Let1548 */
    Box_DynamicType instance  = ((Box_DynamicType){ get_Box_DynamicType__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_DynamicType Gone_DynamicType_x () {
  { /* cicili#Let1553 */
    Box_DynamicType instance  = ((Box_DynamicType){ get_Box_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_DynamicType__H_IMPL__ */ 
int show_DynamicType (CFile file , DynamicType dt ) {
  return ({ /* cicili#Let1559 */
      __auto_type __h_matchbox  = dt ;
      // ----------
      ({ /* cicili#Let1563 */
        __auto_type match1562  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match1562 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let1568 */
          bool __h_case_result  = (true  &&  (((match1562 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1569 */
                (unboxed  =  (((match1562 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1572 */
              ({ /* cicili#Let1576 */
                typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                // ----------
                
                ({ /* cicili#Let1580 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn1581 */
                        (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn1584 */
                      (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                    }) : ({ /* cicili#Let1588 */
                      typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                      // ----------
                      
                      ({ /* cicili#Let1592 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn1593 */
                              (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn1596 */
                            fprintf (file , "%llu", data );
                          }) : ({ /* cicili#Let1600 */
                            typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let1604 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn1605 */
                                    (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn1608 */
                                  fprintf (file , "%Lf", data );
                                }) : ({ /* cicili#Let1612 */
                                  typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                  // ----------
                                  
                                  ({ /* cicili#Let1616 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn1617 */
                                          (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn1620 */
                                        ({ /* cicili#Let1624 */
                                          // ----------
                                          
                                          ({ /* cicili#Let1628 */
                                            bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn1630 */
                                                fprintf (file , "#t");
                                              }) : ({ /* cicili#Let1634 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn1638 */
                                                  fprintf (file , "#f");
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let1642 */
                                        typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                        // ----------
                                        
                                        ({ /* cicili#Let1646 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn1647 */
                                                (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn1650 */
                                              show_List_DynamicType (file , data );
                                            }) : ({ /* cicili#Let1655 */
                                              typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                              // ----------
                                              
                                              ({ /* cicili#Let1659 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1660 */
                                                      (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn1663 */
                                                    show_BTree_CStr_DynamicType (file , data );
                                                  }) : ({ /* cicili#Let1668 */
                                                    typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let1672 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn1673 */
                                                            (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn1676 */
                                                          fprintf (file , "DynamicType Error: %s", data );
                                                        }) : ({ /* cicili#Let1680 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn1684 */
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
              });
            }) : ({ /* cicili#Let1688 */
              // ----------
              
              ({ /* cicili#Progn1692 */
                fprintf (file , "nil");
              });
            }));
        });
      });
    });
}
void __ciciliL_1760 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1765 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1810 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1815 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1863 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1868 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
void __ciciliL_1884 (char ** objStr ) {
  free (((void *)(*objStr )));
}
void __ciciliL_1889 (CFile * file_ptr ) {
  CFile file  = (*file_ptr );
  fclose (file );
}
DynamicType search_DynamicType (DynamicType dt , CStr path ) {
  return ({ /* cicili#Let1696 */
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
      (((cursor  ==  path  )) ? dt  : ({ /* cicili#Let1704 */
          __auto_type __h_matchbox  = dt ;
          // ----------
          ({ /* cicili#Let1708 */
            __auto_type match1707  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match1707 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            
            ({ /* cicili#Let1713 */
              bool __h_case_result  = (true  &&  (((match1707 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1714 */
                    (unboxed  =  (((match1707 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn1717 */
                  ({ /* cicili#Let1721 */
                    typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                    // ----------
                    
                    ({ /* cicili#Let1725 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  (({ /* cicili#Progn1726 */
                              (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                              true ;
                            }) &&  ((counter  >  0 ) &&  ((*cursor ) ==  '\0' ) ) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn1729 */
                          ({ /* cicili#Let1732 */
                            __auto_type index  = atoi (script );
                            __auto_type witem  = nth_String (index , data );
                            // ----------
                            ({ /* cicili#Let1737 */
                              typeof((((witem . __h_data ). Just ). __h_0_mem )) item ;
                              // ----------
                              
                              ({ /* cicili#Let1741 */
                                bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1742 */
                                      (item  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn1745 */
                                    Dynamic_String (pure_String ((&item ), 1));
                                  }) : ({ /* cicili#Let1751 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn1755 */
                                      Dynamic_Error (({ /* cicili#Let1758 */
                                          char * reason  = NULL ;
                                          char * objStr  __attribute__((__cleanup__(__ciciliL_1760 ))) = ({ /* cicili#Let1764 */
                                            char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                            CFile file  __attribute__((__cleanup__(__ciciliL_1765 ))) = fmemopen (buffer , 1024, "w+");
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
                        }) : ({ /* cicili#Let1772 */
                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                          // ----------
                          
                          ({ /* cicili#Let1776 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn1777 */
                                  (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1780 */
                                ({ /* cicili#Let1783 */
                                  __auto_type index  = atoi (script );
                                  __auto_type witem  = nth_List_DynamicType (index , data );
                                  // ----------
                                  ({ /* cicili#Let1788 */
                                    typeof((((witem . __h_data ). Just ). __h_0_mem )) item ;
                                    // ----------
                                    
                                    ({ /* cicili#Let1792 */
                                      bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1793 */
                                            (item  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn1796 */
                                          search_DynamicType (item , ((((*cursor ) ==  '\0' )) ? cursor  : (++cursor )));
                                        }) : ({ /* cicili#Let1801 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn1805 */
                                            Dynamic_Error (({ /* cicili#Let1808 */
                                                char * reason  = NULL ;
                                                char * objStr  __attribute__((__cleanup__(__ciciliL_1810 ))) = ({ /* cicili#Let1814 */
                                                  char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                                  CFile file  __attribute__((__cleanup__(__ciciliL_1815 ))) = fmemopen (buffer , 1024, "w+");
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
                              }) : ({ /* cicili#Let1822 */
                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                // ----------
                                
                                ({ /* cicili#Let1826 */
                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1827 */
                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn1830 */
                                      ({ /* cicili#Let1833 */
                                        __auto_type witem  = search_BTree_CStr_DynamicType (data , script );
                                        // ----------
                                        ({ /* cicili#Let1839 */
                                          typeof((((witem . __h_data ). Just ). __h_0_mem )) __h_match1837_0_arg ;
                                          typeof((__h_match1837_0_arg . __h_1_mem )) value ;
                                          // ----------
                                          
                                          ({ /* cicili#Let1843 */
                                            bool __h_case_result  = (true  &&  (((witem . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn1844 */
                                                    (__h_match1837_0_arg  =  (((witem . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  (true  &&  ({ /* cicili#Progn1846 */
                                                      (value  =  (__h_match1837_0_arg . __h_1_mem ) );
                                                      true ;
                                                    }) ) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn1849 */
                                                search_DynamicType (value , ((((*cursor ) ==  '\0' )) ? cursor  : (++cursor )));
                                              }) : ({ /* cicili#Let1854 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn1858 */
                                                  Dynamic_Error (({ /* cicili#Let1861 */
                                                      char * reason  = NULL ;
                                                      char * objStr  __attribute__((__cleanup__(__ciciliL_1863 ))) = ({ /* cicili#Let1867 */
                                                        char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                                        CFile file  __attribute__((__cleanup__(__ciciliL_1868 ))) = fmemopen (buffer , 1024, "w+");
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
                                    }) : ({ /* cicili#Let1875 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn1879 */
                                        Dynamic_Error (({ /* cicili#Let1882 */
                                            char * reason  = NULL ;
                                            char * objStr  __attribute__((__cleanup__(__ciciliL_1884 ))) = ({ /* cicili#Let1888 */
                                              char * buffer  = ((char *)calloc (1024, sizeof(char)));
                                              CFile file  __attribute__((__cleanup__(__ciciliL_1889 ))) = fmemopen (buffer , 1024, "w+");
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
                }) : ({ /* cicili#Let1896 */
                  // ----------
                  
                  ({ /* cicili#Progn1900 */
                    Dynamic_Error (({ /* cicili#Let1903 */
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
    return ({ /* cicili#Let1913 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1917 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1918 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn1920 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1923 */
              (({ /* cicili#Let1926 */
                  __auto_type __h_matchbox  = head ;
                  // ----------
                  ({ /* cicili#Let1930 */
                    __auto_type match1929  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                    typeof((((match1929 . __h_data ). Just ). __h_0_mem )) unboxed ;
                    // ----------
                    
                    ({ /* cicili#Let1935 */
                      bool __h_case_result  = (true  &&  (((match1929 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1936 */
                            (unboxed  =  (((match1929 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn1939 */
                          ({ /* cicili#Let1943 */
                            typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let1947 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn1948 */
                                    (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn1951 */
                                  objectToXml (xml_name , data );
                                }) : ({ /* cicili#Let1955 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn1959 */
                                    (fprintf (file , "<%s>", xml_name ) +  toXml_ (xml_name , head ) +  fprintf (file , "</%s>", xml_name ) );
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let1963 */
                          // ----------
                          
                          ({ /* cicili#Progn1967 */
                            0;
                          });
                        }));
                    });
                  });
                }) +  listToXml (key , xml_name , tail ) );
            }) : ({ /* cicili#Let1971 */
              // ----------
              
              ({ /* cicili#Progn1975 */
                0;
              });
            }));
        });
      });
  }
  int objectToXml (CStr key , BTree_CStr_DynamicType tree ) {
    return (fprintf (file , "<%s ", key ) +  ({ /* cicili#Let1979 */
          int counter  = 0;
          // ----------
          traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn1983 */
              void __ciciliC_1982 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
                counter  = (counter  +  ({ /* cicili#Let1988 */
                        typeof((item . __h_0_mem )) key ;
                        typeof((item . __h_1_mem )) value ;
                        // ----------
                        
                        ({ /* cicili#Let1992 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn1993 */
                                (key  =  (item . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn1995 */
                                (value  =  (item . __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn1998 */
                              ({ /* cicili#Let2001 */
                                __auto_type __h_matchbox  = value ;
                                // ----------
                                ({ /* cicili#Let2005 */
                                  __auto_type match2004  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match2004 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2010 */
                                    bool __h_case_result  = (true  &&  (((match2004 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2011 */
                                          (unboxed  =  (((match2004 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2014 */
                                        ({ /* cicili#Let2018 */
                                          typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                                          // ----------
                                          
                                          ({ /* cicili#Let2022 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2023 */
                                                  (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2026 */
                                                (fprintf (file , "%s=", key ) +  fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                                              }) : ({ /* cicili#Let2030 */
                                                // ----------
                                                
                                                ({ /* cicili#Let2034 */
                                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_List_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2036 */
                                                      0;
                                                    }) : ({ /* cicili#Let2040 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2044 */
                                                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Object_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2046 */
                                                            0;
                                                          }) : ({ /* cicili#Let2050 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn2054 */
                                                              (fprintf (file , "%s=\"", key ) +  toXml_ (key , value ) +  fprintf (file , "\"") );
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2058 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2062 */
                                          0;
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2066 */
                              // ----------
                              
                              ({ /* cicili#Progn2070 */
                                0;
                              });
                            }));
                        });
                      }) +  fprintf (file , " ") );
              }
              __ciciliC_1982 ;
            }));
          counter ;
        }) +  fprintf (file , ">") +  ({ /* cicili#Let2073 */
          int counter  = 0;
          // ----------
          traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn2077 */
              void __ciciliC_2076 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
                counter  = (counter  +  ({ /* cicili#Let2082 */
                        typeof((item . __h_0_mem )) key ;
                        typeof((item . __h_1_mem )) value ;
                        // ----------
                        
                        ({ /* cicili#Let2086 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn2087 */
                                (key  =  (item . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn2089 */
                                (value  =  (item . __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn2092 */
                              ({ /* cicili#Let2095 */
                                __auto_type __h_matchbox  = value ;
                                // ----------
                                ({ /* cicili#Let2099 */
                                  __auto_type match2098  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match2098 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2104 */
                                    bool __h_case_result  = (true  &&  (((match2098 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2105 */
                                          (unboxed  =  (((match2098 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2108 */
                                        ({ /* cicili#Let2112 */
                                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                          typeof((((unboxed -> __h_data ). List ). __h_1_mem )) xml_name ;
                                          // ----------
                                          
                                          ({ /* cicili#Let2116 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  (({ /* cicili#Progn2117 */
                                                    (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn2119 */
                                                    (xml_name  =  (((unboxed -> __h_data ). List ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2122 */
                                                (fprintf (file , "<%s>", key ) +  listToXml (key , xml_name , data ) +  fprintf (file , "</%s>", key ) );
                                              }) : ({ /* cicili#Let2126 */
                                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                                // ----------
                                                
                                                ({ /* cicili#Let2130 */
                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2131 */
                                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2134 */
                                                      objectToXml (key , data );
                                                    }) : ({ /* cicili#Let2138 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn2142 */
                                                        0;
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2146 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2150 */
                                          0;
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let2154 */
                              // ----------
                              
                              ({ /* cicili#Progn2158 */
                                0;
                              });
                            }));
                        });
                      }) );
              }
              __ciciliC_2076 ;
            }));
          counter ;
        }) +  fprintf (file , "</%s>", key ) );
  }
  int toXml_ (CStr key , DynamicType dt ) {
    return ({ /* cicili#Let2164 */
        __auto_type __h_matchbox  = dt ;
        // ----------
        ({ /* cicili#Let2168 */
          __auto_type match2167  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2167 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let2173 */
            bool __h_case_result  = (true  &&  (((match2167 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2174 */
                  (unboxed  =  (((match2167 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn2177 */
                ({ /* cicili#Let2181 */
                  typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                  // ----------
                  
                  ({ /* cicili#Let2185 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2186 */
                          (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn2189 */
                        (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                      }) : ({ /* cicili#Let2193 */
                        typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                        // ----------
                        
                        ({ /* cicili#Let2197 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn2198 */
                                (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn2201 */
                              fprintf (file , "%llu", data );
                            }) : ({ /* cicili#Let2205 */
                              typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                              // ----------
                              
                              ({ /* cicili#Let2209 */
                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn2210 */
                                      (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn2213 */
                                    fprintf (file , "%Lf", data );
                                  }) : ({ /* cicili#Let2217 */
                                    typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                    // ----------
                                    
                                    ({ /* cicili#Let2221 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn2222 */
                                            (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn2225 */
                                          ({ /* cicili#Let2229 */
                                            // ----------
                                            
                                            ({ /* cicili#Let2233 */
                                              bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn2235 */
                                                  fprintf (file , "true");
                                                }) : ({ /* cicili#Let2239 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn2243 */
                                                    fprintf (file , "false");
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let2247 */
                                          typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                          typeof((((unboxed -> __h_data ). List ). __h_1_mem )) xml_name ;
                                          // ----------
                                          
                                          ({ /* cicili#Let2251 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  (({ /* cicili#Progn2252 */
                                                    (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn2254 */
                                                    (xml_name  =  (((unboxed -> __h_data ). List ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2257 */
                                                (fprintf (file , "<%s>", key ) +  listToXml (key , xml_name , data ) +  fprintf (file , "</%s>", key ) );
                                              }) : ({ /* cicili#Let2261 */
                                                typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                                // ----------
                                                
                                                ({ /* cicili#Let2265 */
                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2266 */
                                                        (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn2269 */
                                                      objectToXml (key , data );
                                                    }) : ({ /* cicili#Let2273 */
                                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2277 */
                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2278 */
                                                              (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2281 */
                                                            fprintf (file , "DynamicType Error: %s", data );
                                                          }) : ({ /* cicili#Let2285 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn2289 */
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
              }) : ({ /* cicili#Let2293 */
                // ----------
                
                ({ /* cicili#Progn2297 */
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
    return ({ /* cicili#Let2304 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2308 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2309 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2311 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2314 */
              (toJson_DynamicType (file , head ) +  ({ /* cicili#Let2319 */
                  // ----------
                  
                  ({ /* cicili#Let2323 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn2325 */
                        fprintf (file , ",");
                      }) : ({ /* cicili#Let2329 */
                        // ----------
                        
                        ({ /* cicili#Progn2333 */
                          0;
                        });
                      }));
                  });
                }) +  listToJson (tail ) );
            }) : ({ /* cicili#Let2337 */
              // ----------
              
              ({ /* cicili#Progn2341 */
                fprintf (file , "]");
              });
            }));
        });
      });
  }
  int objectToJson (BTree_CStr_DynamicType tree ) {
    return ({ /* cicili#Let2345 */
        int counter  = fprintf (file , "{");
        // ----------
        traverse_BTree_CStr_DynamicType (tree , ({ /* cicili#Progn2349 */
            void __ciciliC_2348 (BTree_CStr_DynamicType_pair_t item , Bool hasNext ) {
              counter  = (counter  +  ({ /* cicili#Let2354 */
                      typeof((item . __h_0_mem )) key ;
                      typeof((item . __h_1_mem )) value ;
                      // ----------
                      
                      ({ /* cicili#Let2358 */
                        bool __h_case_result  = (true  &&  (({ /* cicili#Progn2359 */
                              (key  =  (item . __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn2361 */
                              (value  =  (item . __h_1_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn2364 */
                            (fprintf (file , "\"%s\":", key ) +  toJson_DynamicType (file , value ) +  ({ /* cicili#Let2369 */
                                // ----------
                                
                                ({ /* cicili#Let2373 */
                                  bool __h_case_result  = (true  &&  ((hasNext . __h_ctor ) ==  __h_True_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn2375 */
                                      fprintf (file , ",");
                                    }) : ({ /* cicili#Let2379 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn2383 */
                                        0;
                                      });
                                    }));
                                });
                              }) );
                          }) : ({ /* cicili#Let2387 */
                            // ----------
                            
                            ({ /* cicili#Progn2391 */
                              0;
                            });
                          }));
                      });
                    }) );
            }
            __ciciliC_2348 ;
          }));
        (counter  +  fprintf (file , "}") );
      });
  }
  return ({ /* cicili#Let2396 */
      __auto_type __h_matchbox  = dt ;
      // ----------
      ({ /* cicili#Let2400 */
        __auto_type match2399  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2399 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let2405 */
          bool __h_case_result  = (true  &&  (((match2399 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2406 */
                (unboxed  =  (((match2399 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2409 */
              ({ /* cicili#Let2413 */
                typeof((((unboxed -> __h_data ). String ). __h_0_mem )) data ;
                // ----------
                
                ({ /* cicili#Let2417 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2418 */
                        (data  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2421 */
                      (fprintf (file , "\"") +  show_String (file , data ) +  fprintf (file , "\"") );
                    }) : ({ /* cicili#Let2425 */
                      typeof((((unboxed -> __h_data ). Integer ). __h_0_mem )) data ;
                      // ----------
                      
                      ({ /* cicili#Let2429 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Integer_t  ) &&  ({ /* cicili#Progn2430 */
                              (data  =  (((unboxed -> __h_data ). Integer ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn2433 */
                            fprintf (file , "%llu", data );
                          }) : ({ /* cicili#Let2437 */
                            typeof((((unboxed -> __h_data ). Float ). __h_0_mem )) data ;
                            // ----------
                            
                            ({ /* cicili#Let2441 */
                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Float_t  ) &&  ({ /* cicili#Progn2442 */
                                    (data  =  (((unboxed -> __h_data ). Float ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn2445 */
                                  fprintf (file , "%Lf", data );
                                }) : ({ /* cicili#Let2449 */
                                  typeof((((unboxed -> __h_data ). Boolean ). __h_0_mem )) data ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2453 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Boolean_t  ) &&  ({ /* cicili#Progn2454 */
                                          (data  =  (((unboxed -> __h_data ). Boolean ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2457 */
                                        ({ /* cicili#Let2461 */
                                          // ----------
                                          
                                          ({ /* cicili#Let2465 */
                                            bool __h_case_result  = (true  &&  ((data . __h_ctor ) ==  __h_True_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn2467 */
                                                fprintf (file , "true");
                                              }) : ({ /* cicili#Let2471 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn2475 */
                                                  fprintf (file , "false");
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let2479 */
                                        typeof((((unboxed -> __h_data ). List ). __h_0_mem )) data ;
                                        // ----------
                                        
                                        ({ /* cicili#Let2483 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn2484 */
                                                (data  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn2487 */
                                              (fprintf (file , "[") +  listToJson (data ) );
                                            }) : ({ /* cicili#Let2491 */
                                              typeof((((unboxed -> __h_data ). Object ). __h_0_mem )) data ;
                                              // ----------
                                              
                                              ({ /* cicili#Let2495 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn2496 */
                                                      (data  =  (((unboxed -> __h_data ). Object ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn2499 */
                                                    objectToJson (data );
                                                  }) : ({ /* cicili#Let2503 */
                                                    typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) data ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let2507 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2508 */
                                                            (data  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn2511 */
                                                          fprintf (file , "DynamicType Error: %s", data );
                                                        }) : ({ /* cicili#Let2515 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn2519 */
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
            }) : ({ /* cicili#Let2523 */
              // ----------
              
              ({ /* cicili#Progn2527 */
                fprintf (file , "nothing");
              });
            }));
        });
      });
    });
}
DynamicType parseJson_DynamicType (CFile file ) {
  DynamicType _parseJson (CFile file , bool hadItem ) {
    { /* cicili#Let2538 */
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
            { /* cicili#Block2545 */
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
                  { /* cicili#Block2563 */
                    if ((cursor  ==  ']' ) ||  (cursor  ==  '}' ) )
                      { /* cicili#Block2567 */
                        ungetc (cursor , file );
                      }
                    if (in_integer )
                      { /* cicili#Let2572 */
                        typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                        // ----------
                        
                        ({ /* cicili#Let2576 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2577 */
                                (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block2581 */
                              { /* cicili#Let2583 */
                                char * endptr ;
                                int64_t value ;
                                // ----------
                                sb  = new_StringBuffer_char (16, true );
                                in_integer  = false ;
                                value  = strtoll (buffer , (&endptr ), 10);
                                if ((*endptr ) ==  '\0' )
                                  return Dynamic_Integer (value );
                                else
                                  return Dynamic_Error (({ /* cicili#Let2593 */
                                      char * reason  = NULL ;
                                      // ----------
                                      asprintf ((&reason ), "Parse Json: wrong integer value: '%s' at position: %d", buffer , counter );
                                      reason ;
                                    }));
                              }
                            }
                          else
                            { /* cicili#Let2598 */
                              // ----------
                              
                              { /* cicili#Block2602 */
                                return Dynamic_Error (strdup ("Parse Json: no buffer"));
                              }
                            }
                        });
                      }
                    else
                      {
                      if (in_float )
                        { /* cicili#Let2609 */
                          typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                          // ----------
                          
                          ({ /* cicili#Let2613 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2614 */
                                  (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            if (__h_case_result )
                              { /* cicili#Block2618 */
                                { /* cicili#Let2620 */
                                  char * endptr ;
                                  long double value ;
                                  // ----------
                                  sb  = new_StringBuffer_char (16, true );
                                  in_float  = false ;
                                  value  = strtold (buffer , (&endptr ));
                                  if ((*endptr ) ==  '\0' )
                                    return Dynamic_Float (value );
                                  else
                                    return Dynamic_Error (({ /* cicili#Let2630 */
                                        char * reason  = NULL ;
                                        // ----------
                                        asprintf ((&reason ), "Parse Json: wrong floating point value: '%s' at position: %d", buffer , counter );
                                        reason ;
                                      }));
                                }
                              }
                            else
                              { /* cicili#Let2635 */
                                // ----------
                                
                                { /* cicili#Block2639 */
                                  return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                }
                              }
                          });
                        }
                      else
                        {
                        if (in_symbol )
                          { /* cicili#Let2646 */
                            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) len ;
                            // ----------
                            
                            ({ /* cicili#Let2650 */
                              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn2651 */
                                      (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2653 */
                                      (len  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block2657 */
                                  { /* cicili#Block2659 */
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
                                          return Dynamic_Error (({ /* cicili#Let2675 */
                                              char * reason  = NULL ;
                                              // ----------
                                              asprintf ((&reason ), "Parse Json: unknown symbol: '%s' at position: %d", buffer , counter );
                                              reason ;
                                            }));
                                        }                                      }                                  }
                                }
                              else
                                { /* cicili#Let2680 */
                                  // ----------
                                  
                                  { /* cicili#Block2684 */
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
                              { /* cicili#Let2693 */
                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                // ----------
                                
                                ({ /* cicili#Let2697 */
                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2698 */
                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block2702 */
                                      { /* cicili#Block2704 */
                                        sb  = put_StringBuffer_char (sb , cursor );
                                        return Dynamic_Error (({ /* cicili#Let2714 */
                                            char * reason  = NULL ;
                                            // ----------
                                            asprintf ((&reason ), "Parse Json: unmatched symbol: '%s' at position: %d", buffer , counter );
                                            reason ;
                                          }));
                                      }
                                    }
                                  else
                                    { /* cicili#Let2719 */
                                      // ----------
                                      
                                      { /* cicili#Block2723 */
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
                  { /* cicili#Let2733 */
                    List_DynamicType stack  = Nil_DynamicType ();
                    // ----------
                    while (true ) {
                        { /* cicili#Let2738 */
                          DynamicType dt_item  = _parseJson (file , true );
                          // ----------
                          ({ /* cicili#Let2741 */
                            __auto_type __h_matchbox  = dt_item ;
                            // ----------
                            { /* cicili#Let2745 */
                              __auto_type match2744  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match2744 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              
                              ({ /* cicili#Let2750 */
                                bool __h_case_result  = (true  &&  (((match2744 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2751 */
                                      (unboxed  =  (((match2744 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block2755 */
                                    { /* cicili#Let2759 */
                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) reason ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2763 */
                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2764 */
                                              (reason  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block2768 */
                                            if (strncmp (reason , "Parse Json: unmatched symbol", 28) ==  0 )
                                              { /* cicili#Let2771 */
                                                char sym  = (*(reason  +  31 ));
                                                // ----------
                                                if (sym  ==  ']' )
                                                  { /* cicili#Block2774 */
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
                                          { /* cicili#Let2783 */
                                            // ----------
                                            
                                            { /* cicili#Block2787 */
                                              { /* cicili#Let2789 */
                                                char end  = fgetc (file );
                                                // ----------
                                                stack  = Cons_DynamicType (dt_item , stack );
                                                if (cursor  ==  ']' )
                                                  return Dynamic_List (reverse_List_DynamicType (stack ), "item");
                                                else
                                                  { /* cicili#Block2796 */
                                                    ungetc (end , file );
                                                  }
                                              }
                                            }
                                          }
                                      });
                                    }
                                  }
                                else
                                  { /* cicili#Let2801 */
                                    // ----------
                                    
                                    ({ /* cicili#Let2805 */
                                      bool __h_case_result  = (true  &&  ((match2744 . __h_ctor ) ==  __h_Nothing_t  ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block2808 */
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
                  { /* cicili#Let2818 */
                    int counter  = 0;
                    List_CStr stackKeys  = Nil_CStr ();
                    List_DynamicType stackVals  = Nil_DynamicType ();
                    // ----------
                    while (true ) {
                        (++counter );
                        { /* cicili#Let2825 */
                          DynamicType dt_item  = _parseJson (file , true );
                          // ----------
                          ({ /* cicili#Let2828 */
                            __auto_type __h_matchbox  = dt_item ;
                            // ----------
                            { /* cicili#Let2832 */
                              __auto_type match2831  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match2831 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              
                              ({ /* cicili#Let2837 */
                                bool __h_case_result  = (true  &&  (((match2831 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2838 */
                                      (unboxed  =  (((match2831 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block2842 */
                                    { /* cicili#Let2846 */
                                      typeof((((unboxed -> __h_data ). Error ). __h_0_mem )) reason ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2850 */
                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn2851 */
                                              (reason  =  (((unboxed -> __h_data ). Error ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block2855 */
                                            if (strncmp (reason , "Parse Json: unmatched symbol", 28) ==  0 )
                                              { /* cicili#Let2858 */
                                                char sym  = (*(reason  +  31 ));
                                                // ----------
                                                if (sym  ==  '}' )
                                                  { /* cicili#Block2861 */
                                                    fgetc (file );
                                                    return ({ /* cicili#Let2865 */
                                                        __auto_type match2864  = fromLists_BTree_CStr_DynamicType (reverse_List_CStr (stackKeys ), reverse_List_DynamicType (stackVals ));
                                                        typeof((((match2864 . __h_data ). Right ). __h_0_mem )) tree ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let2872 */
                                                          bool __h_case_result  = (true  &&  (((match2864 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn2873 */
                                                                (tree  =  (((match2864 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn2876 */
                                                              Dynamic_Object (tree );
                                                            }) : ({ /* cicili#Let2881 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn2885 */
                                                                ({ /* cicili#Let2889 */
                                                                  typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let2893 */
                                                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2894 */
                                                                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn2897 */
                                                                        ({ /* cicili#Progn2899 */
                                                                          sb  = put_StringBuffer_char (sb , cursor );
                                                                          Dynamic_Error (({ /* cicili#Let2909 */
                                                                              char * reason  = NULL ;
                                                                              // ----------
                                                                              asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                              reason ;
                                                                            }));
                                                                        });
                                                                      }) : ({ /* cicili#Let2913 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn2917 */
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
                                          { /* cicili#Let2925 */
                                            // ----------
                                            
                                            { /* cicili#Block2929 */
                                              { /* cicili#Let2931 */
                                                char end  = fgetc (file );
                                                // ----------
                                                if ((counter  %  2 ) ==  1 )
                                                  ({ /* cicili#Let2935 */
                                                    __auto_type __h_matchbox  = dt_item ;
                                                    // ----------
                                                    { /* cicili#Let2939 */
                                                      __auto_type match2938  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match2938 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let2944 */
                                                        bool __h_case_result  = (true  &&  (((match2938 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2945 */
                                                              (unboxed  =  (((match2938 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        if (__h_case_result )
                                                          { /* cicili#Block2949 */
                                                            { /* cicili#Let2953 */
                                                              typeof((((unboxed -> __h_data ). String ). __h_0_mem )) key ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Let2957 */
                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn2958 */
                                                                      (key  =  (((unboxed -> __h_data ). String ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                if (__h_case_result )
                                                                  { /* cicili#Block2962 */
                                                                    stackKeys  = Cons_CStr (toArray_List_char (((List_char)key ), '\0'), stackKeys );
                                                                  }
                                                                else
                                                                  { /* cicili#Let2969 */
                                                                    // ----------
                                                                    
                                                                    { /* cicili#Block2973 */
                                                                      return ({ /* cicili#Let2977 */
                                                                          typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                                          // ----------
                                                                          
                                                                          ({ /* cicili#Let2981 */
                                                                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn2982 */
                                                                                  (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn2985 */
                                                                                ({ /* cicili#Progn2987 */
                                                                                  sb  = put_StringBuffer_char (sb , cursor );
                                                                                  Dynamic_Error (({ /* cicili#Let2997 */
                                                                                      char * reason  = NULL ;
                                                                                      // ----------
                                                                                      asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                                      reason ;
                                                                                    }));
                                                                                });
                                                                              }) : ({ /* cicili#Let3001 */
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Progn3005 */
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
                                                  return ({ /* cicili#Let3013 */
                                                      __auto_type match3012  = fromLists_BTree_CStr_DynamicType (reverse_List_CStr (stackKeys ), reverse_List_DynamicType (stackVals ));
                                                      typeof((((match3012 . __h_data ). Right ). __h_0_mem )) tree ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let3020 */
                                                        bool __h_case_result  = (true  &&  (((match3012 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn3021 */
                                                              (tree  =  (((match3012 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn3024 */
                                                            Dynamic_Object (tree );
                                                          }) : ({ /* cicili#Let3029 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn3033 */
                                                              ({ /* cicili#Let3037 */
                                                                typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let3041 */
                                                                  bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3042 */
                                                                        (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn3045 */
                                                                      ({ /* cicili#Progn3047 */
                                                                        sb  = put_StringBuffer_char (sb , cursor );
                                                                        Dynamic_Error (({ /* cicili#Let3057 */
                                                                            char * reason  = NULL ;
                                                                            // ----------
                                                                            asprintf ((&reason ), "Parse Json: object creation of '%s' at position: %d", buffer , counter );
                                                                            reason ;
                                                                          }));
                                                                      });
                                                                    }) : ({ /* cicili#Let3061 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn3065 */
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
                                                  { /* cicili#Block3069 */
                                                    ungetc (end , file );
                                                  }
                                              }
                                            }
                                          }
                                      });
                                    }
                                  }
                                else
                                  { /* cicili#Let3074 */
                                    // ----------
                                    
                                    ({ /* cicili#Let3078 */
                                      bool __h_case_result  = (true  &&  ((match2831 . __h_ctor ) ==  __h_Nothing_t  ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block3081 */
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
                  { /* cicili#Block3087 */
                    { /* cicili#Let3091 */
                      typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                      typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) len ;
                      // ----------
                      
                      ({ /* cicili#Let3095 */
                        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (({ /* cicili#Progn3096 */
                                (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3098 */
                                (len  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block3102 */
                            { /* cicili#Block3104 */
                              sb  = new_StringBuffer_char (16, true );
                              in_string  = false ;
                              return Dynamic_String (pure_String (buffer , len ));
                            }
                          }
                        else
                          { /* cicili#Let3111 */
                            // ----------
                            
                            { /* cicili#Block3115 */
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
                    { /* cicili#Block3126 */
                      sb  = put_StringBuffer_char (sb , cursor );
                      in_integer  = false ;
                      in_float  = true ;
                    }
                  else
                    { /* cicili#Block3133 */
                      sb  = put_StringBuffer_char (sb , cursor );
                      { /* cicili#Let3141 */
                        typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                        // ----------
                        
                        ({ /* cicili#Let3145 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3146 */
                                (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block3150 */
                              return Dynamic_Error (({ /* cicili#Let3156 */
                                  char * reason  = NULL ;
                                  // ----------
                                  asprintf ((&reason ), "Parse Json: invalid floating point: '%s' at position: %d", buffer , counter );
                                  reason ;
                                }));
                            }
                          else
                            { /* cicili#Let3161 */
                              // ----------
                              
                              { /* cicili#Block3165 */
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
                          { /* cicili#Block3194 */
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
                        { /* cicili#Block3209 */
                          sb  = put_StringBuffer_char (sb , cursor );
                          in_symbol  = true ;
                        }
                      else
                        { /* cicili#Block3216 */
                          sb  = put_StringBuffer_char (sb , cursor );
                          { /* cicili#Let3224 */
                            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                            // ----------
                            
                            ({ /* cicili#Let3228 */
                              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3229 */
                                    (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block3233 */
                                  return Dynamic_Error (({ /* cicili#Let3239 */
                                      char * reason  = NULL ;
                                      // ----------
                                      asprintf ((&reason ), "Parse Json: wrong integer definition: '%s' at position: %d", buffer , counter );
                                      reason ;
                                    }));
                                }
                              else
                                { /* cicili#Let3244 */
                                  // ----------
                                  
                                  { /* cicili#Block3248 */
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
                      { /* cicili#Block3258 */
                        sb  = put_StringBuffer_char (sb , cursor );
                        { /* cicili#Let3266 */
                          typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
                          // ----------
                          
                          ({ /* cicili#Let3270 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn3271 */
                                  (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            if (__h_case_result )
                              { /* cicili#Block3275 */
                                return Dynamic_Error (({ /* cicili#Let3281 */
                                    char * reason  = NULL ;
                                    // ----------
                                    asprintf ((&reason ), "Parse Json: invalid character outside string quotation: '%s' at position: %d", buffer , counter );
                                    reason ;
                                  }));
                              }
                            else
                              { /* cicili#Let3286 */
                                // ----------
                                
                                { /* cicili#Block3290 */
                                  return Dynamic_Error (strdup ("Parse Json: no buffer"));
                                }
                              }
                          });
                        }
                      }
                    }                  }                break ;
          }
          if (cursor  ==  '\0' )
            { /* cicili#Block3295 */
              return Dynamic_Error (strdup ("Parse Json: EOF"));
            }
      }
    }
    return Dynamic_Error (strdup ("Parse Json: nothing to read"));
  }
  return _parseJson (file , false );
}
void free_DynamicType_x (DynamicType_x * this_ptr ) {
  { /* cicili#Let3301 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3307 */
      typeof((((this -> __h_data ). String ). __h_0_mem )) data ;
      // ----------
      
      ({ /* cicili#Let3311 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_String_t  ) &&  ({ /* cicili#Progn3312 */
              (data  =  (((this -> __h_data ). String ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3316 */
            free_String ((&data ));
          }
        else
          { /* cicili#Let3321 */
            typeof((((this -> __h_data ). List ). __h_0_mem )) data ;
            // ----------
            
            ({ /* cicili#Let3325 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_List_t  ) &&  ({ /* cicili#Progn3326 */
                    (data  =  (((this -> __h_data ). List ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3330 */
                  free_List_DynamicType ((&data ));
                }
              else
                { /* cicili#Let3336 */
                  typeof((((this -> __h_data ). Object ). __h_0_mem )) data ;
                  // ----------
                  
                  ({ /* cicili#Let3340 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Object_t  ) &&  ({ /* cicili#Progn3341 */
                          (data  =  (((this -> __h_data ). Object ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block3345 */
                        free_BTree_CStr_DynamicType ((&data ));
                      }
                    else
                      { /* cicili#Let3351 */
                        typeof((((this -> __h_data ). Error ). __h_0_mem )) data ;
                        // ----------
                        
                        ({ /* cicili#Let3355 */
                          bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Error_t  ) &&  ({ /* cicili#Progn3356 */
                                (data  =  (((this -> __h_data ). Error ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block3360 */
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
  { /* cicili#Let3369 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_String_t , .__h_data.String = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Integer (int64_t data ) {
  { /* cicili#Let3376 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Integer_t , .__h_data.Integer = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Float (long double data ) {
  { /* cicili#Let3383 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Float_t , .__h_data.Float = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Boolean (Bool data ) {
  { /* cicili#Let3390 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Boolean_t , .__h_data.Boolean = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_List (List_DynamicType data , CStr xml_name ) {
  { /* cicili#Let3397 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_List_t , .__h_data.List = { data , xml_name }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Object (BTree_CStr_DynamicType data ) {
  { /* cicili#Let3405 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Object_t , .__h_data.Object = { data }});
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Null () {
  { /* cicili#Let3413 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h_Null_t });
    return new_Box_DynamicType (instance );
  }
}
DynamicType Dynamic_Error (CStr reason ) {
  { /* cicili#Let3420 */
    DynamicType_x instance  = malloc (sizeof(class_DynamicType));
    // ----------
    (*instance ) = ((class_DynamicType){ get_DynamicType__H_Table (), __h___t , .__h_data._ = { reason }});
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
  { /* cicili#Let3440 */
    Maybe_DynamicType instance  = ((Maybe_DynamicType){ get_Maybe_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_DynamicType Nothing_DynamicType () {
  { /* cicili#Let3445 */
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
    return ({ /* cicili#Let3455 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3459 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3460 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3462 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3465 */
              ({ /* cicili#Let3467 */
                DynamicType * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3471 */
              // ----------
              
              ({ /* cicili#Progn3475 */
                ({ /* cicili#Let3477 */
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
  return (((buf  ==  NULL  )) ? Nil_DynamicType () : ({ /* cicili#Let3488 */
        DynamicType item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_DynamicType () : Cons_DynamicType (item , pure_List_DynamicType ((++buf ), (--len ))));
      }));
}
int show_List_DynamicType (CFile file , List_DynamicType list ) {
  return ({ /* cicili#Let3498 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3502 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3503 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3505 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3508 */
            (({ /* cicili#Let3512 */
                // ----------
                
                ({ /* cicili#Let3516 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3518 */
                      (show_DynamicType (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3528 */
                      // ----------
                      
                      ({ /* cicili#Progn3532 */
                        show_DynamicType (file , head );
                      });
                    }));
                });
              }) +  show_List_DynamicType (file , tail ) );
          }) : ({ /* cicili#Let3543 */
            // ----------
            
            ({ /* cicili#Progn3547 */
              0;
            });
          }));
      });
    });
}
List_DynamicType copy_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let3553 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3557 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3558 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3560 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3563 */
            Cons_DynamicType (head , copy_List_DynamicType (tail ));
          }) : ({ /* cicili#Let3569 */
            // ----------
            
            ({ /* cicili#Progn3573 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType replaceAt_List_DynamicType (List_DynamicType list , DynamicType item , int index ) {
  return ({ /* cicili#Let3580 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3584 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3585 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3587 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3590 */
            Cons_DynamicType (head , replaceAt_List_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3596 */
            // ----------
            
            ({ /* cicili#Progn3600 */
              ({ /* cicili#Let3604 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3608 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3609 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3612 */
                      Cons_DynamicType (item , copy_List_DynamicType (taill ));
                    }) : ({ /* cicili#Let3618 */
                      // ----------
                      
                      ({ /* cicili#Progn3622 */
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
  return ({ /* cicili#Let3629 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3633 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3634 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3636 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3639 */
            Cons_DynamicType (head , deleteAt_List_DynamicType (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3645 */
            // ----------
            
            ({ /* cicili#Progn3649 */
              ({ /* cicili#Let3653 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3657 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3658 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3661 */
                      copy_List_DynamicType (taill );
                    }) : ({ /* cicili#Let3666 */
                      // ----------
                      
                      ({ /* cicili#Progn3670 */
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
  return ({ /* cicili#Let3677 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3681 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3682 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3684 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3687 */
            Cons_DynamicType (head , insertAt_List_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3693 */
            // ----------
            
            ({ /* cicili#Progn3697 */
              Cons_DynamicType (item , copy_List_DynamicType (llist ));
            });
          }));
      });
    });
}
List_DynamicType replace_List_DynamicType (List_DynamicType list , DynamicType item , List_DynamicType aimed ) {
  return ({ /* cicili#Let3705 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3709 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3710 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3712 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3715 */
            Cons_DynamicType (head , replace_List_DynamicType (tail , item , aimed ));
          }) : ({ /* cicili#Let3721 */
            // ----------
            
            ({ /* cicili#Progn3725 */
              ({ /* cicili#Let3729 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3733 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3734 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3737 */
                      Cons_DynamicType (item , copy_List_DynamicType (taill ));
                    }) : ({ /* cicili#Let3743 */
                      // ----------
                      
                      ({ /* cicili#Progn3747 */
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
  return ({ /* cicili#Let3754 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3758 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3759 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3761 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3764 */
            Cons_DynamicType (head , delete_List_DynamicType (tail , aimed ));
          }) : ({ /* cicili#Let3770 */
            // ----------
            
            ({ /* cicili#Progn3774 */
              ({ /* cicili#Let3778 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3782 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3783 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3786 */
                      copy_List_DynamicType (taill );
                    }) : ({ /* cicili#Let3791 */
                      // ----------
                      
                      ({ /* cicili#Progn3795 */
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
  return ({ /* cicili#Let3802 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3806 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3807 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3809 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3812 */
            Cons_DynamicType (head , insert_List_DynamicType (tail , item , rlist ));
          }) : ({ /* cicili#Let3818 */
            // ----------
            
            ({ /* cicili#Progn3822 */
              Cons_DynamicType (item , copy_List_DynamicType (rlist ));
            });
          }));
      });
    });
}
List_DynamicType reverse_List_DynamicType (List_DynamicType list ) {
  List_DynamicType _reverse (List_DynamicType list , List_DynamicType rlist ) {
    return ({ /* cicili#Let3831 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3835 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3836 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3838 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3841 */
              _reverse (tail , Cons_DynamicType (head , rlist ));
            }) : ({ /* cicili#Let3846 */
              // ----------
              
              ({ /* cicili#Progn3850 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3854 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3858 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3859 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3861 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3864 */
            _reverse (tail , Cons_DynamicType (head , Nil_DynamicType ()));
          }) : ({ /* cicili#Let3870 */
            // ----------
            
            ({ /* cicili#Progn3874 */
              list ;
            });
          }));
      });
    });
}
List_DynamicType append_List_DynamicType (List_DynamicType llist , List_DynamicType rlist ) {
  return ({ /* cicili#Let3880 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3884 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3885 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3887 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3890 */
            Cons_DynamicType (head , append_List_DynamicType (tail , rlist ));
          }) : ({ /* cicili#Let3896 */
            // ----------
            
            ({ /* cicili#Progn3900 */
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
  return (((len  <=  0 )) ? Nil_DynamicType () : ({ /* cicili#Let3913 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3917 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3918 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3920 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3923 */
              Cons_DynamicType (head , take_List_DynamicType ((--len ), tail ));
            }) : ({ /* cicili#Let3929 */
              // ----------
              
              ({ /* cicili#Progn3933 */
                Nil_DynamicType ();
              });
            }));
        });
      }));
}
List_DynamicType last_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let3940 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3944 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3945 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3948 */
            ({ /* cicili#Let3952 */
              // ----------
              
              ({ /* cicili#Let3956 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn3958 */
                    copy_List_DynamicType (list );
                  }) : ({ /* cicili#Let3963 */
                    // ----------
                    
                    ({ /* cicili#Progn3967 */
                      last_List_DynamicType (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3972 */
            // ----------
            
            ({ /* cicili#Progn3976 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType init_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let3984 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3988 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3989 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3991 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3994 */
            Cons_DynamicType (head , init_List_DynamicType (tail ));
          }) : ({ /* cicili#Let4000 */
            // ----------
            
            ({ /* cicili#Progn4004 */
              Nil_DynamicType ();
            });
          }));
      });
    });
}
int hasLen_List_DynamicType (List_DynamicType list , int desired ) {
  return ({ /* cicili#Let4011 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4015 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4016 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4019 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_DynamicType (tail , (--desired )) ));
          }) : ({ /* cicili#Let4025 */
            // ----------
            
            ({ /* cicili#Progn4029 */
              0;
            });
          }));
      });
    });
}
int len_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4035 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4039 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4040 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4043 */
            (1 +  len_List_DynamicType (tail ) );
          }) : ({ /* cicili#Let4048 */
            // ----------
            
            ({ /* cicili#Progn4052 */
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
  return (((len  <=  0 )) ? copy_List_DynamicType (list ) : ({ /* cicili#Let4063 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4067 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4068 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4071 */
              drop_List_DynamicType ((--len ), tail );
            }) : ({ /* cicili#Let4076 */
              // ----------
              
              ({ /* cicili#Progn4080 */
                Nil_DynamicType ();
              });
            }));
        });
      }));
}
Maybe_DynamicType head_List_DynamicType (List_DynamicType list ) {
  return ({ /* cicili#Let4088 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let4092 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4093 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4096 */
            Just_DynamicType (head );
          }) : ({ /* cicili#Let4101 */
            // ----------
            
            ({ /* cicili#Progn4105 */
              Nothing_DynamicType ();
            });
          }));
      });
    });
}
List_DynamicType nthcdr_List_DynamicType (int index , List_DynamicType list ) {
  return ({ /* cicili#Let4112 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4116 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4117 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4120 */
            nthcdr_List_DynamicType ((--index ), tail );
          }) : ({ /* cicili#Let4125 */
            // ----------
            
            ({ /* cicili#Progn4129 */
              list ;
            });
          }));
      });
    });
}
Maybe_DynamicType nth_List_DynamicType (int index , List_DynamicType list ) {
  return ({ /* cicili#Let4136 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4140 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4141 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4143 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4146 */
            (((index  ==  0 )) ? Just_DynamicType (head ) : (((index  <  0 )) ? Nothing_DynamicType () : nth_List_DynamicType ((--index ), tail )));
          }) : ({ /* cicili#Let4155 */
            // ----------
            
            ({ /* cicili#Progn4159 */
              Nothing_DynamicType ();
            });
          }));
      });
    });
}
void free_List_DynamicType (List_DynamicType * this_ptr ) {
  { /* cicili#Let4164 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4168 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4172 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4173 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4177 */
            { /* cicili#Block4179 */
              free (this );
              free_List_DynamicType ((&tail ));
            }
          }
        else
          { /* cicili#Let4187 */
            // ----------
            
            ({ /* cicili#Let4191 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4194 */
                  { /* cicili#Block4196 */
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
  { /* cicili#Let4207 */
    List_DynamicType instance  = malloc (sizeof(class_List_DynamicType));
    // ----------
    (*instance ) = ((class_List_DynamicType){ get_List_DynamicType__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_DynamicType Nil_DynamicType () {
  { /* cicili#Let4213 */
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
  { /* cicili#Let4230 */
    Maybe_List_DynamicType instance  = ((Maybe_List_DynamicType){ get_Maybe_List_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_DynamicType Nothing_List_DynamicType () {
  { /* cicili#Let4235 */
    Maybe_List_DynamicType instance  = ((Maybe_List_DynamicType){ get_Maybe_List_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_DynamicType__H_IMPL__ */ 
static Ordering compareKey (CStr lkey , CStr rkey ) {
  return ({ /* cicili#Let4239 */
      int res  = strcmp (lkey , rkey );
      // ----------
      (((res  <  0 )) ? LT () : (((res  ==  0 )) ? EQ () : GT ()));
    });
}
#ifndef __BTree_CStr_DynamicType_Error__H_IMPL__
#define __BTree_CStr_DynamicType_Error__H_IMPL__
void show_BTree_CStr_DynamicType_Error (BTree_CStr_DynamicType_Error error ) {
  { /* cicili#Let4254 */
    // ----------
    
    ({ /* cicili#Let4258 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4261 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let4266 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          
          ({ /* cicili#Let4270 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn4271 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block4275 */
                printf ("invalid B-Tree order: %d", order );
              }
            else
              { /* cicili#Let4280 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let4284 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn4285 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block4289 */
                      { /* cicili#Block4291 */
                        printf ("unique key: ");
                        ({ /* cicili#Let4297 */
                          typeof((item . __h_0_mem )) key ;
                          typeof((item . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4301 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4302 */
                                  (key  =  (item . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4304 */
                                  (value  =  (item . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4307 */
                                (fprintf (stdout , "(\"%s\": ", key ) +  show_DynamicType (stdout , value ) +  fprintf (stdout , ")") );
                              }) : ({ /* cicili#Let4312 */
                                // ----------
                                
                                ({ /* cicili#Progn4316 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let4321 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      
                      ({ /* cicili#Let4325 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn4326 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block4330 */
                            { /* cicili#Block4332 */
                              printf ("key not found: ");
                              fprintf (stdout , "\"%s\"", key );
                            }
                          }
                        else
                          { /* cicili#Let4342 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            
                            ({ /* cicili#Let4346 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn4347 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn4349 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block4353 */
                                  { /* cicili#Block4355 */
                                    printf ("dead child at index: %d of item: ", index );
                                    ({ /* cicili#Let4361 */
                                      typeof((item . __h_0_mem )) key ;
                                      typeof((item . __h_1_mem )) value ;
                                      // ----------
                                      
                                      ({ /* cicili#Let4365 */
                                        bool __h_case_result  = (true  &&  (({ /* cicili#Progn4366 */
                                              (key  =  (item . __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4368 */
                                              (value  =  (item . __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn4371 */
                                            (fprintf (stdout , "(\"%s\": ", key ) +  show_DynamicType (stdout , value ) +  fprintf (stdout , ")") );
                                          }) : ({ /* cicili#Let4376 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn4380 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let4385 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  
                                  ({ /* cicili#Let4389 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn4390 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block4394 */
                                        { /* cicili#Block4396 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let4403 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        
                                        ({ /* cicili#Let4407 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn4408 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block4412 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let4417 */
                                              // ----------
                                              
                                              { /* cicili#Block4421 */
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
  { /* cicili#Let4433 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_ORDER (int order ) {
  { /* cicili#Let4438 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_UNIQUE_KEY (BTree_CStr_DynamicType_pair_t item ) {
  { /* cicili#Let4443 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_NOT_FOUND (CStr key ) {
  { /* cicili#Let4449 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (BTree_CStr_DynamicType_pair_t item , int index ) {
  { /* cicili#Let4454 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_INVALID_BRANCH (BTree_CStr_DynamicType branch ) {
  { /* cicili#Let4460 */
    BTree_CStr_DynamicType_Error instance  = ((BTree_CStr_DynamicType_Error){ get_BTree_CStr_DynamicType_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_CStr_DynamicType_Error BTree_CStr_DynamicType_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let4465 */
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
  { /* cicili#Let4481 */
    Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType instance  = ((Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType){ get_Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_Error error ) {
  { /* cicili#Let4486 */
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
  { /* cicili#Let4502 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType () {
  { /* cicili#Let4507 */
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
  { /* cicili#Let4525 */
    Maybe_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_BTree_CStr_DynamicType_pair_t){ get_Maybe_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType_pair_t Nothing_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let4530 */
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
    return ({ /* cicili#Let4540 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4544 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4545 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4547 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4550 */
              ({ /* cicili#Let4552 */
                BTree_CStr_DynamicType_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let4556 */
              // ----------
              
              ({ /* cicili#Progn4560 */
                ({ /* cicili#Let4562 */
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
  return (((buf  ==  NULL  )) ? Nil_BTree_CStr_DynamicType_pair_t () : ({ /* cicili#Let4573 */
        BTree_CStr_DynamicType_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_CStr_DynamicType_pair_t () : Cons_BTree_CStr_DynamicType_pair_t (item , pure_List_BTree_CStr_DynamicType_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_CStr_DynamicType_pair_t (CFile file , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let4583 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4587 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4588 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4590 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4593 */
            (({ /* cicili#Let4597 */
                // ----------
                
                ({ /* cicili#Let4601 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4603 */
                      (({ /* cicili#Let4609 */
                          typeof((head . __h_0_mem )) key ;
                          typeof((head . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4613 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4614 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4616 */
                                  (value  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4619 */
                                (fprintf (file , "(\"%s\": ", key ) +  show_DynamicType (file , value ) +  fprintf (file , ")") );
                              }) : ({ /* cicili#Let4624 */
                                // ----------
                                
                                ({ /* cicili#Progn4628 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let4632 */
                      // ----------
                      
                      ({ /* cicili#Progn4636 */
                        ({ /* cicili#Let4642 */
                          typeof((head . __h_0_mem )) key ;
                          typeof((head . __h_1_mem )) value ;
                          // ----------
                          
                          ({ /* cicili#Let4646 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn4647 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4649 */
                                  (value  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4652 */
                                (fprintf (file , "(\"%s\": ", key ) +  show_DynamicType (file , value ) +  fprintf (file , ")") );
                              }) : ({ /* cicili#Let4657 */
                                // ----------
                                
                                ({ /* cicili#Progn4661 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_CStr_DynamicType_pair_t (file , tail ) );
          }) : ({ /* cicili#Let4666 */
            // ----------
            
            ({ /* cicili#Progn4670 */
              0;
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t copy_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let4676 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4680 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4681 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4683 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4686 */
            Cons_BTree_CStr_DynamicType_pair_t (head , copy_List_BTree_CStr_DynamicType_pair_t (tail ));
          }) : ({ /* cicili#Let4692 */
            // ----------
            
            ({ /* cicili#Progn4696 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t replaceAt_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , int index ) {
  return ({ /* cicili#Let4703 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4707 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4708 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4710 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4713 */
            Cons_BTree_CStr_DynamicType_pair_t (head , replaceAt_List_BTree_CStr_DynamicType_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let4719 */
            // ----------
            
            ({ /* cicili#Progn4723 */
              ({ /* cicili#Let4727 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4731 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4732 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4735 */
                      Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (taill ));
                    }) : ({ /* cicili#Let4741 */
                      // ----------
                      
                      ({ /* cicili#Progn4745 */
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
  return ({ /* cicili#Let4752 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4756 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4757 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4759 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4762 */
            Cons_BTree_CStr_DynamicType_pair_t (head , deleteAt_List_BTree_CStr_DynamicType_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let4768 */
            // ----------
            
            ({ /* cicili#Progn4772 */
              ({ /* cicili#Let4776 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4780 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4781 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4784 */
                      copy_List_BTree_CStr_DynamicType_pair_t (taill );
                    }) : ({ /* cicili#Let4789 */
                      // ----------
                      
                      ({ /* cicili#Progn4793 */
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
  return ({ /* cicili#Let4800 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4804 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4805 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4807 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4810 */
            Cons_BTree_CStr_DynamicType_pair_t (head , insertAt_List_BTree_CStr_DynamicType_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let4816 */
            // ----------
            
            ({ /* cicili#Progn4820 */
              Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (llist ));
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t replace_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , BTree_CStr_DynamicType_pair_t item , List_BTree_CStr_DynamicType_pair_t aimed ) {
  return ({ /* cicili#Let4828 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4832 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4833 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4835 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4838 */
            Cons_BTree_CStr_DynamicType_pair_t (head , replace_List_BTree_CStr_DynamicType_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let4844 */
            // ----------
            
            ({ /* cicili#Progn4848 */
              ({ /* cicili#Let4852 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4856 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4857 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4860 */
                      Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (taill ));
                    }) : ({ /* cicili#Let4866 */
                      // ----------
                      
                      ({ /* cicili#Progn4870 */
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
  return ({ /* cicili#Let4877 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4881 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4882 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4884 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4887 */
            Cons_BTree_CStr_DynamicType_pair_t (head , delete_List_BTree_CStr_DynamicType_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let4893 */
            // ----------
            
            ({ /* cicili#Progn4897 */
              ({ /* cicili#Let4901 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let4905 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4906 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4909 */
                      copy_List_BTree_CStr_DynamicType_pair_t (taill );
                    }) : ({ /* cicili#Let4914 */
                      // ----------
                      
                      ({ /* cicili#Progn4918 */
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
  return ({ /* cicili#Let4925 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4929 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4930 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4932 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4935 */
            Cons_BTree_CStr_DynamicType_pair_t (head , insert_List_BTree_CStr_DynamicType_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let4941 */
            // ----------
            
            ({ /* cicili#Progn4945 */
              Cons_BTree_CStr_DynamicType_pair_t (item , copy_List_BTree_CStr_DynamicType_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t reverse_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  List_BTree_CStr_DynamicType_pair_t _reverse (List_BTree_CStr_DynamicType_pair_t list , List_BTree_CStr_DynamicType_pair_t rlist ) {
    return ({ /* cicili#Let4954 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4958 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4959 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4961 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4964 */
              _reverse (tail , Cons_BTree_CStr_DynamicType_pair_t (head , rlist ));
            }) : ({ /* cicili#Let4969 */
              // ----------
              
              ({ /* cicili#Progn4973 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let4977 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4981 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4982 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4984 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4987 */
            _reverse (tail , Cons_BTree_CStr_DynamicType_pair_t (head , Nil_BTree_CStr_DynamicType_pair_t ()));
          }) : ({ /* cicili#Let4993 */
            // ----------
            
            ({ /* cicili#Progn4997 */
              list ;
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t append_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t llist , List_BTree_CStr_DynamicType_pair_t rlist ) {
  return ({ /* cicili#Let5003 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5007 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5008 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5010 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5013 */
            Cons_BTree_CStr_DynamicType_pair_t (head , append_List_BTree_CStr_DynamicType_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let5019 */
            // ----------
            
            ({ /* cicili#Progn5023 */
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
  return (((len  <=  0 )) ? Nil_BTree_CStr_DynamicType_pair_t () : ({ /* cicili#Let5036 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5040 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5041 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5043 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5046 */
              Cons_BTree_CStr_DynamicType_pair_t (head , take_List_BTree_CStr_DynamicType_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let5052 */
              // ----------
              
              ({ /* cicili#Progn5056 */
                Nil_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_CStr_DynamicType_pair_t last_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5063 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5067 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5068 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5071 */
            ({ /* cicili#Let5075 */
              // ----------
              
              ({ /* cicili#Let5079 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5081 */
                    copy_List_BTree_CStr_DynamicType_pair_t (list );
                  }) : ({ /* cicili#Let5086 */
                    // ----------
                    
                    ({ /* cicili#Progn5090 */
                      last_List_BTree_CStr_DynamicType_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5095 */
            // ----------
            
            ({ /* cicili#Progn5099 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t init_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5107 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5111 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5112 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5114 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5117 */
            Cons_BTree_CStr_DynamicType_pair_t (head , init_List_BTree_CStr_DynamicType_pair_t (tail ));
          }) : ({ /* cicili#Let5123 */
            // ----------
            
            ({ /* cicili#Progn5127 */
              Nil_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list , int desired ) {
  return ({ /* cicili#Let5134 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5138 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5139 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5142 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_CStr_DynamicType_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let5148 */
            // ----------
            
            ({ /* cicili#Progn5152 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5158 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5162 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5163 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5166 */
            (1 +  len_List_BTree_CStr_DynamicType_pair_t (tail ) );
          }) : ({ /* cicili#Let5171 */
            // ----------
            
            ({ /* cicili#Progn5175 */
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
  return (((len  <=  0 )) ? copy_List_BTree_CStr_DynamicType_pair_t (list ) : ({ /* cicili#Let5186 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5190 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5191 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5194 */
              drop_List_BTree_CStr_DynamicType_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let5199 */
              // ----------
              
              ({ /* cicili#Progn5203 */
                Nil_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_CStr_DynamicType_pair_t head_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5211 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let5215 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5216 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5219 */
            Just_BTree_CStr_DynamicType_pair_t (head );
          }) : ({ /* cicili#Let5224 */
            // ----------
            
            ({ /* cicili#Progn5228 */
              Nothing_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
List_BTree_CStr_DynamicType_pair_t nthcdr_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5235 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5239 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5240 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5243 */
            nthcdr_List_BTree_CStr_DynamicType_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let5248 */
            // ----------
            
            ({ /* cicili#Progn5252 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType_pair_t nth_List_BTree_CStr_DynamicType_pair_t (int index , List_BTree_CStr_DynamicType_pair_t list ) {
  return ({ /* cicili#Let5259 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5263 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5264 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5266 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5269 */
            (((index  ==  0 )) ? Just_BTree_CStr_DynamicType_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_CStr_DynamicType_pair_t () : nth_List_BTree_CStr_DynamicType_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let5278 */
            // ----------
            
            ({ /* cicili#Progn5282 */
              Nothing_BTree_CStr_DynamicType_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_CStr_DynamicType_pair_t (List_BTree_CStr_DynamicType_pair_t * this_ptr ) {
  { /* cicili#Let5287 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let5291 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5295 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5296 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block5300 */
            { /* cicili#Block5302 */
              free (this );
              free_List_BTree_CStr_DynamicType_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let5310 */
            // ----------
            
            ({ /* cicili#Let5314 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block5317 */
                  { /* cicili#Block5319 */
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
  { /* cicili#Let5330 */
    List_BTree_CStr_DynamicType_pair_t instance  = malloc (sizeof(class_List_BTree_CStr_DynamicType_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_CStr_DynamicType_pair_t){ get_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_CStr_DynamicType_pair_t Nil_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let5336 */
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
  { /* cicili#Let5353 */
    Maybe_List_BTree_CStr_DynamicType_pair_t instance  = ((Maybe_List_BTree_CStr_DynamicType_pair_t){ get_Maybe_List_BTree_CStr_DynamicType_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_CStr_DynamicType_pair_t Nothing_List_BTree_CStr_DynamicType_pair_t () {
  { /* cicili#Let5358 */
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
  { /* cicili#Let5378 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_CStr_DynamicType Nothing_BTree_CStr_DynamicType () {
  { /* cicili#Let5383 */
    Maybe_BTree_CStr_DynamicType instance  = ((Maybe_BTree_CStr_DynamicType){ get_Maybe_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Rc_BTree_CStr_DynamicType__H_IMPL__
Rc_BTree_CStr_DynamicType new_Rc_BTree_CStr_DynamicType (BTree_CStr_DynamicType pointer ) {
  return ({ /* cicili#Let5390 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_CStr_DynamicType *)malloc (sizeof(BTree_CStr_DynamicType *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_CStr_DynamicType (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_CStr_DynamicType clone_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc ) {
  return ({ /* cicili#Let5399 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5403 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5404 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5406 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5408 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5411 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn5414 */
                (++(*count ));
                __h_Hold_BTree_CStr_DynamicType (pointer , count , address );
              }) : Gone_BTree_CStr_DynamicType ());
          }) : ({ /* cicili#Let5420 */
            // ----------
            
            ({ /* cicili#Progn5424 */
              Gone_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType take_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this ) {
  return ({ /* cicili#Let5432 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5436 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5437 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5439 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5441 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5444 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let5448 */
                __auto_type result  = Just_BTree_CStr_DynamicType ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block5454 */
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
          }) : ({ /* cicili#Let5461 */
            // ----------
            
            ({ /* cicili#Progn5465 */
              Nothing_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
Maybe_BTree_CStr_DynamicType get_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType rc ) {
  return ({ /* cicili#Let5473 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let5477 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5478 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5480 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5482 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5485 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_CStr_DynamicType ((*pointer )) : Nothing_BTree_CStr_DynamicType ());
          }) : ({ /* cicili#Let5492 */
            // ----------
            
            ({ /* cicili#Progn5496 */
              Nothing_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
void free_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType * this ) {
  { /* cicili#Let5505 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let5509 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5510 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5512 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn5514 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block5518 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block5522 */
              if ((*count ) ==  1 )
                { /* cicili#Block5525 */
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
        { /* cicili#Let5535 */
          // ----------
          
          ({ /* cicili#Let5539 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block5542 */
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
  { /* cicili#Let5553 */
    Rc_BTree_CStr_DynamicType instance  = ((Rc_BTree_CStr_DynamicType){ get_Rc_BTree_CStr_DynamicType__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_CStr_DynamicType Gone_BTree_CStr_DynamicType () {
  { /* cicili#Let5558 */
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
  { /* cicili#Let5576 */
    Maybe_Rc_BTree_CStr_DynamicType instance  = ((Maybe_Rc_BTree_CStr_DynamicType){ get_Maybe_Rc_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_CStr_DynamicType Nothing_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let5581 */
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
    return ({ /* cicili#Let5591 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let5595 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5596 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5598 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5601 */
              ({ /* cicili#Let5603 */
                Rc_BTree_CStr_DynamicType * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let5607 */
              // ----------
              
              ({ /* cicili#Progn5611 */
                ({ /* cicili#Let5613 */
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
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_CStr_DynamicType () : ({ /* cicili#Let5624 */
        Rc_BTree_CStr_DynamicType item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_CStr_DynamicType () : Cons_Rc_BTree_CStr_DynamicType (item , pure_List_Rc_BTree_CStr_DynamicType ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_CStr_DynamicType (CFile file , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let5634 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5638 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5639 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5641 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5644 */
            (({ /* cicili#Let5648 */
                // ----------
                
                ({ /* cicili#Let5652 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5654 */
                      (({ /* cicili#Let5662 */
                          __auto_type match5661  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match5661 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let5667 */
                            bool __h_case_result  = (true  &&  (((match5661 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5668 */
                                  (child  =  (((match5661 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5671 */
                                show_BTree_CStr_DynamicType (file , child );
                              }) : ({ /* cicili#Let5676 */
                                // ----------
                                
                                ({ /* cicili#Progn5680 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let5684 */
                      // ----------
                      
                      ({ /* cicili#Progn5688 */
                        ({ /* cicili#Let5696 */
                          __auto_type match5695  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match5695 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let5701 */
                            bool __h_case_result  = (true  &&  (((match5695 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5702 */
                                  (child  =  (((match5695 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5705 */
                                show_BTree_CStr_DynamicType (file , child );
                              }) : ({ /* cicili#Let5710 */
                                // ----------
                                
                                ({ /* cicili#Progn5714 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_CStr_DynamicType (file , tail ) );
          }) : ({ /* cicili#Let5719 */
            // ----------
            
            ({ /* cicili#Progn5723 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType copy_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let5729 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5733 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5734 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5736 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5739 */
            Cons_Rc_BTree_CStr_DynamicType (head , copy_List_Rc_BTree_CStr_DynamicType (tail ));
          }) : ({ /* cicili#Let5745 */
            // ----------
            
            ({ /* cicili#Progn5749 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType replaceAt_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , int index ) {
  return ({ /* cicili#Let5756 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5760 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5761 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5763 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5766 */
            Cons_Rc_BTree_CStr_DynamicType (head , replaceAt_List_Rc_BTree_CStr_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let5772 */
            // ----------
            
            ({ /* cicili#Progn5776 */
              ({ /* cicili#Let5780 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5784 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5785 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5788 */
                      Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (taill ));
                    }) : ({ /* cicili#Let5794 */
                      // ----------
                      
                      ({ /* cicili#Progn5798 */
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
  return ({ /* cicili#Let5805 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5809 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5810 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5812 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5815 */
            Cons_Rc_BTree_CStr_DynamicType (head , deleteAt_List_Rc_BTree_CStr_DynamicType (tail , (index  -  1 )));
          }) : ({ /* cicili#Let5821 */
            // ----------
            
            ({ /* cicili#Progn5825 */
              ({ /* cicili#Let5829 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5833 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5834 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5837 */
                      copy_List_Rc_BTree_CStr_DynamicType (taill );
                    }) : ({ /* cicili#Let5842 */
                      // ----------
                      
                      ({ /* cicili#Progn5846 */
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
  return ({ /* cicili#Let5853 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5857 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5858 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5860 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5863 */
            Cons_Rc_BTree_CStr_DynamicType (head , insertAt_List_Rc_BTree_CStr_DynamicType (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let5869 */
            // ----------
            
            ({ /* cicili#Progn5873 */
              Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (llist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType replace_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , Rc_BTree_CStr_DynamicType item , List_Rc_BTree_CStr_DynamicType aimed ) {
  return ({ /* cicili#Let5881 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5885 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5886 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5888 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5891 */
            Cons_Rc_BTree_CStr_DynamicType (head , replace_List_Rc_BTree_CStr_DynamicType (tail , item , aimed ));
          }) : ({ /* cicili#Let5897 */
            // ----------
            
            ({ /* cicili#Progn5901 */
              ({ /* cicili#Let5905 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5909 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5910 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5913 */
                      Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (taill ));
                    }) : ({ /* cicili#Let5919 */
                      // ----------
                      
                      ({ /* cicili#Progn5923 */
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
  return ({ /* cicili#Let5930 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5934 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5935 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5937 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5940 */
            Cons_Rc_BTree_CStr_DynamicType (head , delete_List_Rc_BTree_CStr_DynamicType (tail , aimed ));
          }) : ({ /* cicili#Let5946 */
            // ----------
            
            ({ /* cicili#Progn5950 */
              ({ /* cicili#Let5954 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let5958 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5959 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5962 */
                      copy_List_Rc_BTree_CStr_DynamicType (taill );
                    }) : ({ /* cicili#Let5967 */
                      // ----------
                      
                      ({ /* cicili#Progn5971 */
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
  return ({ /* cicili#Let5978 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let5982 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5983 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5985 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5988 */
            Cons_Rc_BTree_CStr_DynamicType (head , insert_List_Rc_BTree_CStr_DynamicType (tail , item , rlist ));
          }) : ({ /* cicili#Let5994 */
            // ----------
            
            ({ /* cicili#Progn5998 */
              Cons_Rc_BTree_CStr_DynamicType (item , copy_List_Rc_BTree_CStr_DynamicType (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType reverse_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  List_Rc_BTree_CStr_DynamicType _reverse (List_Rc_BTree_CStr_DynamicType list , List_Rc_BTree_CStr_DynamicType rlist ) {
    return ({ /* cicili#Let6007 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6011 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6012 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6014 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6017 */
              _reverse (tail , Cons_Rc_BTree_CStr_DynamicType (head , rlist ));
            }) : ({ /* cicili#Let6022 */
              // ----------
              
              ({ /* cicili#Progn6026 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6030 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6034 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6035 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6037 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6040 */
            _reverse (tail , Cons_Rc_BTree_CStr_DynamicType (head , Nil_Rc_BTree_CStr_DynamicType ()));
          }) : ({ /* cicili#Let6046 */
            // ----------
            
            ({ /* cicili#Progn6050 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType append_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType llist , List_Rc_BTree_CStr_DynamicType rlist ) {
  return ({ /* cicili#Let6056 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6060 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6061 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6063 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6066 */
            Cons_Rc_BTree_CStr_DynamicType (head , append_List_Rc_BTree_CStr_DynamicType (tail , rlist ));
          }) : ({ /* cicili#Let6072 */
            // ----------
            
            ({ /* cicili#Progn6076 */
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
  return (((len  <=  0 )) ? Nil_Rc_BTree_CStr_DynamicType () : ({ /* cicili#Let6089 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6093 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6094 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6096 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6099 */
              Cons_Rc_BTree_CStr_DynamicType (head , take_List_Rc_BTree_CStr_DynamicType ((--len ), tail ));
            }) : ({ /* cicili#Let6105 */
              // ----------
              
              ({ /* cicili#Progn6109 */
                Nil_Rc_BTree_CStr_DynamicType ();
              });
            }));
        });
      }));
}
List_Rc_BTree_CStr_DynamicType last_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6116 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6120 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6121 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6124 */
            ({ /* cicili#Let6128 */
              // ----------
              
              ({ /* cicili#Let6132 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn6134 */
                    copy_List_Rc_BTree_CStr_DynamicType (list );
                  }) : ({ /* cicili#Let6139 */
                    // ----------
                    
                    ({ /* cicili#Progn6143 */
                      last_List_Rc_BTree_CStr_DynamicType (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let6148 */
            // ----------
            
            ({ /* cicili#Progn6152 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType init_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6160 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6164 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6165 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6167 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6170 */
            Cons_Rc_BTree_CStr_DynamicType (head , init_List_Rc_BTree_CStr_DynamicType (tail ));
          }) : ({ /* cicili#Let6176 */
            // ----------
            
            ({ /* cicili#Progn6180 */
              Nil_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list , int desired ) {
  return ({ /* cicili#Let6187 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6191 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6192 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6195 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_CStr_DynamicType (tail , (--desired )) ));
          }) : ({ /* cicili#Let6201 */
            // ----------
            
            ({ /* cicili#Progn6205 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6211 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6215 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6216 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6219 */
            (1 +  len_List_Rc_BTree_CStr_DynamicType (tail ) );
          }) : ({ /* cicili#Let6224 */
            // ----------
            
            ({ /* cicili#Progn6228 */
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
  return (((len  <=  0 )) ? copy_List_Rc_BTree_CStr_DynamicType (list ) : ({ /* cicili#Let6239 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let6243 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6244 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6247 */
              drop_List_Rc_BTree_CStr_DynamicType ((--len ), tail );
            }) : ({ /* cicili#Let6252 */
              // ----------
              
              ({ /* cicili#Progn6256 */
                Nil_Rc_BTree_CStr_DynamicType ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_CStr_DynamicType head_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6264 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let6268 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6269 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6272 */
            Just_Rc_BTree_CStr_DynamicType (head );
          }) : ({ /* cicili#Let6277 */
            // ----------
            
            ({ /* cicili#Progn6281 */
              Nothing_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
List_Rc_BTree_CStr_DynamicType nthcdr_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6288 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6292 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6293 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6296 */
            nthcdr_List_Rc_BTree_CStr_DynamicType ((--index ), tail );
          }) : ({ /* cicili#Let6301 */
            // ----------
            
            ({ /* cicili#Progn6305 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_CStr_DynamicType nth_List_Rc_BTree_CStr_DynamicType (int index , List_Rc_BTree_CStr_DynamicType list ) {
  return ({ /* cicili#Let6312 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6316 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6317 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6319 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6322 */
            (((index  ==  0 )) ? Just_Rc_BTree_CStr_DynamicType (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_CStr_DynamicType () : nth_List_Rc_BTree_CStr_DynamicType ((--index ), tail )));
          }) : ({ /* cicili#Let6331 */
            // ----------
            
            ({ /* cicili#Progn6335 */
              Nothing_Rc_BTree_CStr_DynamicType ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_CStr_DynamicType (List_Rc_BTree_CStr_DynamicType * this_ptr ) {
  { /* cicili#Let6340 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6344 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6348 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6349 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block6353 */
            { /* cicili#Block6355 */
              free (this );
              free_List_Rc_BTree_CStr_DynamicType ((&tail ));
            }
          }
        else
          { /* cicili#Let6363 */
            // ----------
            
            ({ /* cicili#Let6367 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block6370 */
                  { /* cicili#Block6372 */
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
  { /* cicili#Let6383 */
    List_Rc_BTree_CStr_DynamicType instance  = malloc (sizeof(class_List_Rc_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_CStr_DynamicType){ get_List_Rc_BTree_CStr_DynamicType__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_CStr_DynamicType Nil_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let6389 */
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
  { /* cicili#Let6406 */
    Maybe_List_Rc_BTree_CStr_DynamicType instance  = ((Maybe_List_Rc_BTree_CStr_DynamicType){ get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_CStr_DynamicType Nothing_List_Rc_BTree_CStr_DynamicType () {
  { /* cicili#Let6411 */
    Maybe_List_Rc_BTree_CStr_DynamicType instance  = ((Maybe_List_Rc_BTree_CStr_DynamicType){ get_Maybe_List_Rc_BTree_CStr_DynamicType__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_CStr_DynamicType__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_CStr_DynamicType__H_IMPL__
#define __Functor_List_Rc_BTree_CStr_DynamicType__H_IMPL__
List_Rc_BTree_CStr_DynamicType fmap_Functor_List_Rc_BTree_CStr_DynamicType (Rc_BTree_CStr_DynamicType_to_Rc_BTree_CStr_DynamicType_t a_b , List_Rc_BTree_CStr_DynamicType input ) {
  return ({ /* cicili#Let6425 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6429 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6430 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6432 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6435 */
            Cons_Rc_BTree_CStr_DynamicType (a_b (head ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (a_b , tail ));
          }) : ({ /* cicili#Let6442 */
            // ----------
            
            ({ /* cicili#Progn6446 */
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
  { /* cicili#Let6460 */
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
  return ({ /* cicili#Let6478 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let6482 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6483 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6485 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6488 */
            (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6494 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6496 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6504 */
                    __auto_type match6503  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                    typeof((((match6503 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    
                    ({ /* cicili#Let6510 */
                      bool __h_case_result  = (true  &&  (((match6503 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6511 */
                            (nitem  =  (((match6503 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn6514 */
                          nitem ;
                        }) : ({ /* cicili#Let6518 */
                          // ----------
                          
                          ({ /* cicili#Progn6522 */
                            ((BTree_CStr_DynamicType_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6533 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6535 */
                        __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6545 */
                          Rc_BTree_CStr_DynamicType __ciciliC_6544 (Rc_BTree_CStr_DynamicType __h_value ) {
                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                          }
                          __ciciliC_6544 ;
                        }), r1 );
                    }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6556 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6558 */
                        __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6568 */
                          Rc_BTree_CStr_DynamicType __ciciliC_6567 (Rc_BTree_CStr_DynamicType __h_value ) {
                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                          }
                          __ciciliC_6567 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let6575 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let6579 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6580 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6582 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn6585 */
                  (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6591 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6593 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6601 */
                          __auto_type match6600  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                          typeof((((match6600 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          
                          ({ /* cicili#Let6607 */
                            bool __h_case_result  = (true  &&  (((match6600 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6608 */
                                  (nitem  =  (((match6600 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn6611 */
                                nitem ;
                              }) : ({ /* cicili#Let6615 */
                                // ----------
                                
                                ({ /* cicili#Progn6619 */
                                  ((BTree_CStr_DynamicType_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6630 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6632 */
                              __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6642 */
                                Rc_BTree_CStr_DynamicType __ciciliC_6641 (Rc_BTree_CStr_DynamicType __h_value ) {
                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                }
                                __ciciliC_6641 ;
                              }), r1 );
                          }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6653 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6655 */
                              __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6665 */
                                Rc_BTree_CStr_DynamicType __ciciliC_6664 (Rc_BTree_CStr_DynamicType __h_value ) {
                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                }
                                __ciciliC_6664 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let6672 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let6676 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6677 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6680 */
                        (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let6686 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6688 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6696 */
                                __auto_type match6695  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                                typeof((((match6695 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                
                                ({ /* cicili#Let6702 */
                                  bool __h_case_result  = (true  &&  (((match6695 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6703 */
                                        (nitem  =  (((match6695 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn6706 */
                                      nitem ;
                                    }) : ({ /* cicili#Let6710 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn6714 */
                                        ((BTree_CStr_DynamicType_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let6731 */
                        // ----------
                        
                        ({ /* cicili#Progn6735 */
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
  return ({ /* cicili#Let6741 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let6745 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6746 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6748 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6751 */
            (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6761 */
                __auto_type match6760  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                typeof((((match6760 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                
                ({ /* cicili#Let6767 */
                  bool __h_case_result  = (true  &&  (((match6760 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6768 */
                        (nitem  =  (((match6760 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6771 */
                      nitem ;
                    }) : ({ /* cicili#Let6775 */
                      // ----------
                      
                      ({ /* cicili#Progn6779 */
                        ((BTree_CStr_DynamicType_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6790 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6792 */
                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6802 */
                      Rc_BTree_CStr_DynamicType __ciciliC_6801 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_6801 ;
                    }), r1 );
                }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6813 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6815 */
                    __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6825 */
                      Rc_BTree_CStr_DynamicType __ciciliC_6824 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_6824 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let6832 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let6836 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6837 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6839 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn6842 */
                  (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6852 */
                      __auto_type match6851  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                      typeof((((match6851 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      
                      ({ /* cicili#Let6858 */
                        bool __h_case_result  = (true  &&  (((match6851 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6859 */
                              (nitem  =  (((match6851 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn6862 */
                            nitem ;
                          }) : ({ /* cicili#Let6866 */
                            // ----------
                            
                            ({ /* cicili#Progn6870 */
                              ((BTree_CStr_DynamicType_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ), ({ /* cicili#Let6881 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6883 */
                          __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6893 */
                            Rc_BTree_CStr_DynamicType __ciciliC_6892 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_6892 ;
                          }), r1 );
                      }))), new_Rc_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items ), ({ /* cicili#Let6904 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6906 */
                          __auto_type r1  = drop_List_Rc_BTree_CStr_DynamicType (L_BTree_CStr_DynamicType , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn6916 */
                            Rc_BTree_CStr_DynamicType __ciciliC_6915 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_6915 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let6923 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let6927 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6928 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6931 */
                        (((len_List_BTree_CStr_DynamicType_pair_t (items ) >=  U_BTree_CStr_DynamicType  )) ? Branch_BTree_CStr_DynamicType (wrap_List_BTree_CStr_DynamicType_pair_t (({ /* cicili#Let6941 */
                            __auto_type match6940  = nth_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items );
                            typeof((((match6940 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            
                            ({ /* cicili#Let6947 */
                              bool __h_case_result  = (true  &&  (((match6940 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6948 */
                                    (nitem  =  (((match6940 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn6951 */
                                  nitem ;
                                }) : ({ /* cicili#Let6955 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn6959 */
                                    ((BTree_CStr_DynamicType_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (take_List_BTree_CStr_DynamicType_pair_t ((L_BTree_CStr_DynamicType  -  1 ), items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (drop_List_BTree_CStr_DynamicType_pair_t (L_BTree_CStr_DynamicType , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let6976 */
                        // ----------
                        
                        ({ /* cicili#Progn6980 */
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
  return ({ /* cicili#Let6987 */
      __auto_type merged  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_items , right_items ), ({ /* cicili#Let6992 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6994 */
          __auto_type r1  = append_List_Rc_BTree_CStr_DynamicType (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7003 */
            Rc_BTree_CStr_DynamicType __ciciliC_7002 (Rc_BTree_CStr_DynamicType __h_value ) {
              return clone_Rc_BTree_CStr_DynamicType (__h_value );
            }
            __ciciliC_7002 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let7012 */
        __auto_type tmp_child  = splitForDelete_BTree_CStr_DynamicType (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match7010_0_arg ;
        typeof((((__h_match7010_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        
        ({ /* cicili#Let7017 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn7018 */
                    (__h_match7010_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match7010_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7020 */
                        (head  =  (((__h_match7010_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn7022 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7025 */
              ({ /* cicili#Let7028 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7030 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7033 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_CStr_DynamicType (replaceAt_List_BTree_CStr_DynamicType_pair_t (items , head , pitem_index ), ({ /* cicili#Let7040 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7042 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_CStr_DynamicType (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7046 */
                      __auto_type r2  = take_List_Rc_BTree_CStr_DynamicType (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7050 */
                      __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7054 */
                      __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7058 */
                      __auto_type r5  = append_List_Rc_BTree_CStr_DynamicType (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7067 */
                        Rc_BTree_CStr_DynamicType __ciciliC_7066 (Rc_BTree_CStr_DynamicType __h_value ) {
                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                        }
                        __ciciliC_7066 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let7074 */
              // ----------
              
              ({ /* cicili#Let7078 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7080 */
                    Internal_BTree_CStr_DynamicType (deleteAt_List_BTree_CStr_DynamicType_pair_t (items , pitem_index ), ({ /* cicili#Let7086 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7088 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_CStr_DynamicType (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7092 */
                          __auto_type r2  = new_Rc_BTree_CStr_DynamicType (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7096 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_CStr_DynamicType (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7105 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7104 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7104 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let7112 */
                    // ----------
                    
                    ({ /* cicili#Progn7116 */
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
    return ({ /* cicili#Let7143 */
        __auto_type match7142  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match7142 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let7148 */
          bool __h_case_result  = (true  &&  (((match7142 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7149 */
                (right_child_rc  =  (((match7142 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7152 */
              ({ /* cicili#Let7155 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let7159 */
                  __auto_type match7158  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match7158 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  
                  ({ /* cicili#Let7164 */
                    bool __h_case_result  = (true  &&  (((match7158 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7165 */
                          (unboxed  =  (((match7158 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7168 */
                        ({ /* cicili#Let7172 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          
                          ({ /* cicili#Let7176 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7177 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7180 */
                                (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7188 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7192 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7193 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn7195 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7198 */
                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , first_item , current ), ({ /* cicili#Let7206 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7208 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7212 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7218 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7217 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7217 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7225 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7229 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7235 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7234 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7234 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7242 */
                                                __auto_type r5  = take_List_BTree_CStr_DynamicType_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7246 */
                                                __auto_type r7  = pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (child_items , r5 ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7259 */
                                                __auto_type r6  = append_List_Rc_BTree_CStr_DynamicType (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_DynamicType (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let7266 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7270 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let7277 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7281 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7282 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7285 */
                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let7293 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7295 */
                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7299 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7305 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7304 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7304 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7312 */
                                                __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7316 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7322 */
                                                  Rc_BTree_CStr_DynamicType __ciciliC_7321 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                  }
                                                  __ciciliC_7321 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7329 */
                                                __auto_type r5  = wrap_List_BTree_CStr_DynamicType_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7333 */
                                                __auto_type r6  = append_List_BTree_CStr_DynamicType_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7337 */
                                                __auto_type r8  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_CStr_DynamicType (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let7348 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7352 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let7359 */
                                // ----------
                                
                                ({ /* cicili#Progn7363 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7370 */
                        // ----------
                        
                        ({ /* cicili#Progn7374 */
                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let7381 */
              // ----------
              
              ({ /* cicili#Progn7385 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowLeft (List_BTree_CStr_DynamicType_pair_t child_items ) {
    return ({ /* cicili#Let7398 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        
        ({ /* cicili#Let7402 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7403 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7405 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7408 */
              ({ /* cicili#Let7412 */
                __auto_type match7411  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                typeof((((match7411 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                
                ({ /* cicili#Let7417 */
                  bool __h_case_result  = (true  &&  (((match7411 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7418 */
                        (left_child_rc  =  (((match7411 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7421 */
                      ({ /* cicili#Let7424 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let7428 */
                          __auto_type match7427  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match7427 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let7433 */
                            bool __h_case_result  = (true  &&  (((match7427 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7434 */
                                  (unboxed  =  (((match7427 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7437 */
                                ({ /* cicili#Let7441 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7445 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7446 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7449 */
                                        (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7457 */
                                            __auto_type last  = last_List_BTree_CStr_DynamicType_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            
                                            ({ /* cicili#Let7462 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7463 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7466 */
                                                  ({ /* cicili#Let7469 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7471 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , last_item , left ), ({ /* cicili#Let7480 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7482 */
                                                          __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7486 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7492 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_7491 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_7491 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7499 */
                                                          __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7503 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7509 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_7508 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_7508 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7516 */
                                                          __auto_type r5  = pure_List_Rc_BTree_CStr_DynamicType (((Rc_BTree_CStr_DynamicType[]){ new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (init_List_BTree_CStr_DynamicType_pair_t (left_child_items ))), new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (push_List_BTree_CStr_DynamicType_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7529 */
                                                          __auto_type r7  = append_List_Rc_BTree_CStr_DynamicType (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_CStr_DynamicType (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let7536 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7540 */
                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let7547 */
                                            __auto_type match7546  = borrowRight (child_items );
                                            // ----------
                                            
                                            ({ /* cicili#Let7551 */
                                              bool __h_case_result  = (true  &&  ((match7546 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7553 */
                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , left ), ({ /* cicili#Let7561 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7563 */
                                                        __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7567 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7573 */
                                                          Rc_BTree_CStr_DynamicType __ciciliC_7572 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                          }
                                                          __ciciliC_7572 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7580 */
                                                        __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7584 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7590 */
                                                          Rc_BTree_CStr_DynamicType __ciciliC_7589 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                          }
                                                          __ciciliC_7589 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7597 */
                                                        __auto_type r8  = wrap_List_BTree_CStr_DynamicType_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7601 */
                                                        __auto_type r5  = append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7605 */
                                                        __auto_type r7  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_CStr_DynamicType (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let7616 */
                                                  __auto_type right  = match7546 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7620 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let7624 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7628 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7635 */
                                // ----------
                                
                                ({ /* cicili#Progn7639 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7646 */
                      // ----------
                      
                      ({ /* cicili#Progn7650 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7657 */
              // ----------
              
              ({ /* cicili#Progn7661 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let7665 */
      __auto_type result  = ({ /* cicili#Let7668 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        
        ({ /* cicili#Let7672 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7673 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7676 */
              (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7688 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7690 */
                    __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7694 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7703 */
                      Rc_BTree_CStr_DynamicType __ciciliC_7702 (Rc_BTree_CStr_DynamicType __h_value ) {
                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                      }
                      __ciciliC_7702 ;
                    }), r2 );
                }))) : ({ /* cicili#Let7709 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7711 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let7716 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              
              ({ /* cicili#Let7720 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7721 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7724 */
                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7736 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7738 */
                          __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7742 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7751 */
                            Rc_BTree_CStr_DynamicType __ciciliC_7750 (Rc_BTree_CStr_DynamicType __h_value ) {
                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                            }
                            __ciciliC_7750 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let7757 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7759 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let7764 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    
                    ({ /* cicili#Let7768 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7769 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn7772 */
                          (((hasLen_List_BTree_CStr_DynamicType_pair_t (child_items , (L_BTree_CStr_DynamicType  -  1 )) ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let7784 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7786 */
                                __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7790 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7799 */
                                  Rc_BTree_CStr_DynamicType __ciciliC_7798 (Rc_BTree_CStr_DynamicType __h_value ) {
                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                  }
                                  __ciciliC_7798 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let7805 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7807 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let7812 */
                          // ----------
                          
                          ({ /* cicili#Progn7816 */
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
    return ({ /* cicili#Let7841 */
        __auto_type match7840  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match7840 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let7846 */
          bool __h_case_result  = (true  &&  (((match7840 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7847 */
                (right_child_rc  =  (((match7840 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7850 */
              ({ /* cicili#Let7854 */
                __auto_type match7853  = get_Rc_BTree_CStr_DynamicType (right_child_rc );
                typeof((((match7853 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let7859 */
                  bool __h_case_result  = (true  &&  (((match7853 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7860 */
                        (right_child  =  (((match7853 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7863 */
                      ({ /* cicili#Let7867 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let7871 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7872 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7874 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn7877 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let7886 */
                                  __auto_type match7884  = min_BTree_CStr_DynamicType (right_child );
                                  typeof((((match7884 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7891 */
                                    bool __h_case_result  = (true  &&  (((match7884 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7892 */
                                            (min  =  (((match7884 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn7894 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7897 */
                                        ({ /* cicili#Let7901 */
                                          __auto_type match7900  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                          typeof((((match7900 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let7906 */
                                            bool __h_case_result  = (true  &&  (((match7900 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7907 */
                                                  (nchild  =  (((match7900 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn7910 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let7918 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7920 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7924 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7933 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_7932 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_7932 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let7940 */
                                                __auto_type left  = match7900 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn7944 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7948 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7952 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let7960 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let7964 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7965 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn7967 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7970 */
                                        ({ /* cicili#Let7973 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7975 */
                                            __auto_type r1  = push_List_BTree_CStr_DynamicType_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7979 */
                                            __auto_type r2  = append_List_Rc_BTree_CStr_DynamicType (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7983 */
                                            __auto_type r4  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn7992 */
                                              Rc_BTree_CStr_DynamicType __ciciliC_7991 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                              }
                                              __ciciliC_7991 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7999 */
                                            __auto_type r5  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8003 */
                                            __auto_type r7  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let8009 */
                                            __auto_type match8008  = delete_BTree_CStr_DynamicType (r4 , current_key , NULL );
                                            typeof((((match8008 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            
                                            ({ /* cicili#Let8014 */
                                              bool __h_case_result  = (true  &&  (((match8008 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8015 */
                                                    (ntree  =  (((match8008 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn8018 */
                                                  ({ /* cicili#Let8022 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_CStr_DynamicType (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8027 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8028 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn8030 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8033 */
                                                          ({ /* cicili#Let8037 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8041 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8042 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8045 */
                                                                  ({ /* cicili#Let8048 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8050 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8053 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , branch_head , current ), ({ /* cicili#Let8062 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8064 */
                                                                          __auto_type r10  = append_List_Rc_BTree_CStr_DynamicType (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8068 */
                                                                          __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8077 */
                                                                            Rc_BTree_CStr_DynamicType __ciciliC_8076 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                            }
                                                                            __ciciliC_8076 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let8084 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8088 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8095 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let8099 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8101 */
                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8109 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8111 */
                                                                      __auto_type r9  = new_Rc_BTree_CStr_DynamicType (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8115 */
                                                                      __auto_type r10  = push_List_Rc_BTree_CStr_DynamicType (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8119 */
                                                                      __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8128 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_8127 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_8127 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let8135 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn8139 */
                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8146 */
                                                  __auto_type left  = match8008 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn8150 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let8154 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8158 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let8165 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let8169 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8170 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8172 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn8175 */
                                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8184 */
                                        __auto_type match8182  = min_BTree_CStr_DynamicType (right_child );
                                        typeof((((match8182 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8189 */
                                          bool __h_case_result  = (true  &&  (((match8182 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8190 */
                                                  (min  =  (((match8182 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8192 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8195 */
                                              ({ /* cicili#Let8199 */
                                                __auto_type match8198  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                                typeof((((match8198 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8204 */
                                                  bool __h_case_result  = (true  &&  (((match8198 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8205 */
                                                        (nchild  =  (((match8198 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8208 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let8216 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8218 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8222 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8231 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_8230 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_8230 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8238 */
                                                      __auto_type left  = match8198 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8242 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8246 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8250 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let8258 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8262 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8263 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8265 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8268 */
                                              ({ /* cicili#Let8271 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8273 */
                                                  __auto_type r1  = push_List_BTree_CStr_DynamicType_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8277 */
                                                  __auto_type r2  = append_List_Rc_BTree_CStr_DynamicType (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8281 */
                                                  __auto_type r4  = Internal_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8290 */
                                                    Rc_BTree_CStr_DynamicType __ciciliC_8289 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                    }
                                                    __ciciliC_8289 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8297 */
                                                  __auto_type r5  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8301 */
                                                  __auto_type r7  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let8307 */
                                                  __auto_type match8306  = delete_BTree_CStr_DynamicType (r4 , current_key , NULL );
                                                  typeof((((match8306 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let8312 */
                                                    bool __h_case_result  = (true  &&  (((match8306 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8313 */
                                                          (ntree  =  (((match8306 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8316 */
                                                        ({ /* cicili#Let8320 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_CStr_DynamicType (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let8325 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8326 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn8328 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8331 */
                                                                ({ /* cicili#Let8335 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let8339 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8340 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8343 */
                                                                        ({ /* cicili#Let8346 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8348 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8351 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , branch_head , current ), ({ /* cicili#Let8360 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8362 */
                                                                                __auto_type r10  = append_List_Rc_BTree_CStr_DynamicType (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8366 */
                                                                                __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8375 */
                                                                                  Rc_BTree_CStr_DynamicType __ciciliC_8374 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                                  }
                                                                                  __ciciliC_8374 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let8382 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn8386 */
                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let8393 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let8397 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn8399 */
                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8407 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8409 */
                                                                            __auto_type r9  = new_Rc_BTree_CStr_DynamicType (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8413 */
                                                                            __auto_type r10  = push_List_Rc_BTree_CStr_DynamicType (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8417 */
                                                                            __auto_type r11  = append_List_Rc_BTree_CStr_DynamicType (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8426 */
                                                                              Rc_BTree_CStr_DynamicType __ciciliC_8425 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                              }
                                                                              __ciciliC_8425 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let8433 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn8437 */
                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8444 */
                                                        __auto_type left  = match8306 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8448 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let8452 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8456 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let8463 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn8467 */
                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8474 */
                      // ----------
                      
                      ({ /* cicili#Progn8478 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8485 */
              // ----------
              
              ({ /* cicili#Progn8489 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType borrowRightLeaf (List_BTree_CStr_DynamicType_pair_t left_child_items ) {
    return ({ /* cicili#Let8502 */
        __auto_type match8501  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
        typeof((((match8501 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let8507 */
          bool __h_case_result  = (true  &&  (((match8501 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8508 */
                (right_child_rc  =  (((match8501 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8511 */
              ({ /* cicili#Let8515 */
                __auto_type match8514  = get_Rc_BTree_CStr_DynamicType (right_child_rc );
                typeof((((match8514 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let8520 */
                  bool __h_case_result  = (true  &&  (((match8514 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8521 */
                        (right_child  =  (((match8514 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8524 */
                      ({ /* cicili#Let8528 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        
                        ({ /* cicili#Let8532 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8533 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8536 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (right_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8545 */
                                  __auto_type match8543  = min_BTree_CStr_DynamicType (right_child );
                                  typeof((((match8543 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8550 */
                                    bool __h_case_result  = (true  &&  (((match8543 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8551 */
                                            (min  =  (((match8543 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8553 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8556 */
                                        ({ /* cicili#Let8560 */
                                          __auto_type match8559  = delete_BTree_CStr_DynamicType (right_child , min_key , NULL );
                                          typeof((((match8559 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let8565 */
                                            bool __h_case_result  = (true  &&  (((match8559 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8566 */
                                                  (nchild  =  (((match8559 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8569 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , min , current ), ({ /* cicili#Let8577 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8579 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8583 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8592 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_8591 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_8591 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8599 */
                                                __auto_type left  = match8559 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn8603 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8607 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8611 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current ), ({ /* cicili#Let8622 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8624 */
                                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8628 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8634 */
                                      Rc_BTree_CStr_DynamicType __ciciliC_8633 (Rc_BTree_CStr_DynamicType __h_value ) {
                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                      }
                                      __ciciliC_8633 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8641 */
                                    __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8645 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8651 */
                                      Rc_BTree_CStr_DynamicType __ciciliC_8650 (Rc_BTree_CStr_DynamicType __h_value ) {
                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                      }
                                      __ciciliC_8650 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8658 */
                                    __auto_type r5  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (append_List_BTree_CStr_DynamicType_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_CStr_DynamicType (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let8669 */
                              // ----------
                              
                              ({ /* cicili#Progn8673 */
                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8680 */
                      // ----------
                      
                      ({ /* cicili#Progn8684 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8691 */
              // ----------
              
              ({ /* cicili#Progn8695 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8702 */
      __auto_type result  = ({ /* cicili#Let8705 */
        __auto_type match8704  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
        typeof((((match8704 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        
        ({ /* cicili#Let8710 */
          bool __h_case_result  = (true  &&  (((match8704 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8711 */
                (left_child_rc  =  (((match8704 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8714 */
              ({ /* cicili#Let8718 */
                __auto_type match8717  = get_Rc_BTree_CStr_DynamicType (left_child_rc );
                typeof((((match8717 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                
                ({ /* cicili#Let8723 */
                  bool __h_case_result  = (true  &&  (((match8717 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8724 */
                        (left_child  =  (((match8717 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8727 */
                      ({ /* cicili#Let8731 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let8735 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8736 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8738 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8741 */
                              (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8750 */
                                  __auto_type match8748  = max_BTree_CStr_DynamicType (left_child );
                                  typeof((((match8748 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let8755 */
                                    bool __h_case_result  = (true  &&  (((match8748 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8756 */
                                            (max  =  (((match8748 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8758 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn8761 */
                                        ({ /* cicili#Let8765 */
                                          __auto_type match8764  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                          typeof((((match8764 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let8770 */
                                            bool __h_case_result  = (true  &&  (((match8764 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8771 */
                                                  (nchild  =  (((match8764 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn8774 */
                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8782 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8784 */
                                                      __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8788 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8797 */
                                                        Rc_BTree_CStr_DynamicType __ciciliC_8796 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                        }
                                                        __ciciliC_8796 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8804 */
                                                __auto_type left  = match8764 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn8808 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8812 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn8816 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let8823 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let8827 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8828 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8830 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn8833 */
                                    (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8842 */
                                        __auto_type match8840  = max_BTree_CStr_DynamicType (left_child );
                                        typeof((((match8840 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8847 */
                                          bool __h_case_result  = (true  &&  (((match8840 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8848 */
                                                  (max  =  (((match8840 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8850 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8853 */
                                              ({ /* cicili#Let8857 */
                                                __auto_type match8856  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                                typeof((((match8856 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8862 */
                                                  bool __h_case_result  = (true  &&  (((match8856 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8863 */
                                                        (nchild  =  (((match8856 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8866 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8874 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8876 */
                                                            __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8880 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8889 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_8888 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_8888 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8896 */
                                                      __auto_type left  = match8856 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8900 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8904 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn8908 */
                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let8915 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let8919 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8920 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn8923 */
                                          (((hasLen_List_BTree_CStr_DynamicType_pair_t (left_child_items , L_BTree_CStr_DynamicType ) ==  L_BTree_CStr_DynamicType  )) ? ({ /* cicili#Let8932 */
                                              __auto_type match8930  = max_BTree_CStr_DynamicType (left_child );
                                              typeof((((match8930 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8937 */
                                                bool __h_case_result  = (true  &&  (((match8930 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8938 */
                                                        (max  =  (((match8930 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn8940 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8943 */
                                                    ({ /* cicili#Let8947 */
                                                      __auto_type match8946  = delete_BTree_CStr_DynamicType (left_child , max_key , NULL );
                                                      typeof((((match8946 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8952 */
                                                        bool __h_case_result  = (true  &&  (((match8946 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8953 */
                                                              (nchild  =  (((match8946 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8956 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (replace_List_BTree_CStr_DynamicType_pair_t (items , max , current ), ({ /* cicili#Let8964 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8966 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8970 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn8979 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_8978 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_8978 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let8986 */
                                                            __auto_type left  = match8946 ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8990 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8994 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn8998 */
                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let9005 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn9009 */
                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9016 */
                      // ----------
                      
                      ({ /* cicili#Progn9020 */
                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9027 */
              // ----------
              
              ({ /* cicili#Progn9031 */
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
    return ({ /* cicili#Let9059 */
        __auto_type result  = ({ /* cicili#Let9063 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          
          ({ /* cicili#Let9067 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9068 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn9070 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn9072 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn9075 */
                ({ /* cicili#Let9079 */
                  __auto_type match9078  = compareKey (skey , key );
                  // ----------
                  
                  ({ /* cicili#Let9083 */
                    bool __h_case_result  = (true  &&  ((match9078 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9085 */
                        ({ /* cicili#Let9089 */
                          __auto_type match9088  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                          typeof((((match9088 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let9094 */
                            bool __h_case_result  = (true  &&  (((match9088 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9095 */
                                  (child  =  (((match9088 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9098 */
                                ({ /* cicili#Let9102 */
                                  __auto_type match9101  = get_Rc_BTree_CStr_DynamicType (child );
                                  typeof((((match9101 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9107 */
                                    bool __h_case_result  = (true  &&  (((match9101 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9108 */
                                          (tr  =  (((match9101 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn9111 */
                                        ({ /* cicili#Let9115 */
                                          // ----------
                                          
                                          ({ /* cicili#Let9119 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn9121 */
                                                ({ /* cicili#Let9125 */
                                                  __auto_type match9124  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match9124 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let9130 */
                                                    bool __h_case_result  = (true  &&  (((match9124 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9131 */
                                                          (nchild  =  (((match9124 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn9134 */
                                                        ({ /* cicili#Let9138 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let9142 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9143 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn9145 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn9148 */
                                                                ({ /* cicili#Let9152 */
                                                                  __auto_type match9151  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                  typeof((((match9151 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let9157 */
                                                                    bool __h_case_result  = (true  &&  (((match9151 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9158 */
                                                                          (wleft  =  (((match9151 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9161 */
                                                                        ({ /* cicili#Let9164 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let9168 */
                                                                            __auto_type match9167  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match9167 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let9173 */
                                                                              bool __h_case_result  = (true  &&  (((match9167 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9174 */
                                                                                    (unboxed  =  (((match9167 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9177 */
                                                                                  ({ /* cicili#Let9181 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let9185 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9186 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn9188 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9191 */
                                                                                          ({ /* cicili#Let9194 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9196 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let9204 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let9208 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9209 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn9211 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9214 */
                                                                                                ({ /* cicili#Let9217 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9219 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9227 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn9231 */
                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9238 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn9242 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let9249 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn9253 */
                                                                          ({ /* cicili#Let9257 */
                                                                            __auto_type match9256  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                            typeof((((match9256 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let9262 */
                                                                              bool __h_case_result  = (true  &&  (((match9256 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9263 */
                                                                                    (wright  =  (((match9256 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9266 */
                                                                                  ({ /* cicili#Let9269 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let9273 */
                                                                                      __auto_type match9272  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match9272 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let9278 */
                                                                                        bool __h_case_result  = (true  &&  (((match9272 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9279 */
                                                                                              (unboxed  =  (((match9272 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9282 */
                                                                                            ({ /* cicili#Let9286 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let9290 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9291 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9293 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9296 */
                                                                                                    ({ /* cicili#Let9299 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9301 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9309 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let9313 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9314 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9316 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9319 */
                                                                                                          ({ /* cicili#Let9322 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9324 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9332 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn9336 */
                                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9343 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn9347 */
                                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9354 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn9358 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let9365 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn9369 */
                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let9377 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9379 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9383 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9392 */
                                                                          Rc_BTree_CStr_DynamicType __ciciliC_9391 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                          }
                                                                          __ciciliC_9391 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let9399 */
                                                        __auto_type left  = match9124 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn9403 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let9407 */
                                                // ----------
                                                
                                                ({ /* cicili#Let9411 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9413 */
                                                      ({ /* cicili#Let9417 */
                                                        __auto_type match9416  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match9416 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let9422 */
                                                          bool __h_case_result  = (true  &&  (((match9416 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9423 */
                                                                (nchild  =  (((match9416 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn9426 */
                                                              ({ /* cicili#Let9430 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let9434 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9435 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn9437 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9440 */
                                                                      ({ /* cicili#Let9444 */
                                                                        __auto_type match9443  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                        typeof((((match9443 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Let9449 */
                                                                          bool __h_case_result  = (true  &&  (((match9443 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9450 */
                                                                                (wleft  =  (((match9443 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9453 */
                                                                              ({ /* cicili#Let9456 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let9460 */
                                                                                  __auto_type match9459  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match9459 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let9465 */
                                                                                    bool __h_case_result  = (true  &&  (((match9459 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9466 */
                                                                                          (unboxed  =  (((match9459 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9469 */
                                                                                        ({ /* cicili#Let9473 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let9477 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9478 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn9480 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9483 */
                                                                                                ({ /* cicili#Let9486 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9488 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9496 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Let9500 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9501 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn9503 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9506 */
                                                                                                      ({ /* cicili#Let9509 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9511 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let9519 */
                                                                                                      // ----------
                                                                                                      
                                                                                                      ({ /* cicili#Progn9523 */
                                                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9530 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn9534 */
                                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let9541 */
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Progn9545 */
                                                                                ({ /* cicili#Let9549 */
                                                                                  __auto_type match9548  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                                  typeof((((match9548 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let9554 */
                                                                                    bool __h_case_result  = (true  &&  (((match9548 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9555 */
                                                                                          (wright  =  (((match9548 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9558 */
                                                                                        ({ /* cicili#Let9561 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let9565 */
                                                                                            __auto_type match9564  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match9564 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Let9570 */
                                                                                              bool __h_case_result  = (true  &&  (((match9564 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9571 */
                                                                                                    (unboxed  =  (((match9564 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9574 */
                                                                                                  ({ /* cicili#Let9578 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let9582 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9583 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9585 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9588 */
                                                                                                          ({ /* cicili#Let9591 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9593 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9601 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Let9605 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9606 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn9608 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9611 */
                                                                                                                ({ /* cicili#Let9614 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9616 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let9624 */
                                                                                                                // ----------
                                                                                                                
                                                                                                                ({ /* cicili#Progn9628 */
                                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9635 */
                                                                                                  // ----------
                                                                                                  
                                                                                                  ({ /* cicili#Progn9639 */
                                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9646 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn9650 */
                                                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let9657 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn9661 */
                                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let9669 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9671 */
                                                                              __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9675 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn9684 */
                                                                                Rc_BTree_CStr_DynamicType __ciciliC_9683 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                                }
                                                                                __ciciliC_9683 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let9691 */
                                                              __auto_type left  = match9416 ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn9695 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let9699 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn9703 */
                                                        ({ /* cicili#Let9707 */
                                                          __auto_type match9706  = deleteWithParent_BTree_CStr_DynamicType (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match9706 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let9712 */
                                                            bool __h_case_result  = (true  &&  (((match9706 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9713 */
                                                                  (nchild  =  (((match9706 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn9716 */
                                                                borrowLeaf_BTree_CStr_DynamicType (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let9721 */
                                                                __auto_type left  = match9706 ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn9725 */
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
                                      }) : ({ /* cicili#Let9729 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn9733 */
                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let9740 */
                                // ----------
                                
                                ({ /* cicili#Progn9744 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let9751 */
                        // ----------
                        
                        ({ /* cicili#Let9755 */
                          bool __h_case_result  = (true  &&  ((match9078 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9757 */
                              ({ /* cicili#Let9760 */
                                __auto_type result  = borrowInternal_BTree_CStr_DynamicType (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let9765 */
                                  // ----------
                                  
                                  ({ /* cicili#Let9769 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9772 */
                                        if (callback )
                                          { /* cicili#Block9776 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let9780 */
                              // ----------
                              
                              ({ /* cicili#Progn9784 */
                                deleteInternal (tree , items , children , Just_List_BTree_CStr_DynamicType_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let9789 */
                // ----------
                
                ({ /* cicili#Progn9793 */
                  ({ /* cicili#Let9797 */
                    __auto_type match9796  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                    typeof((((match9796 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    
                    ({ /* cicili#Let9802 */
                      bool __h_case_result  = (true  &&  (((match9796 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9803 */
                            (child  =  (((match9796 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn9806 */
                          ({ /* cicili#Let9810 */
                            __auto_type match9809  = get_Rc_BTree_CStr_DynamicType (child );
                            typeof((((match9809 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let9815 */
                              bool __h_case_result  = (true  &&  (((match9809 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9816 */
                                    (tr  =  (((match9809 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9819 */
                                  ({ /* cicili#Let9823 */
                                    // ----------
                                    
                                    ({ /* cicili#Let9827 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn9829 */
                                          ({ /* cicili#Let9833 */
                                            __auto_type match9832  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match9832 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9838 */
                                              bool __h_case_result  = (true  &&  (((match9832 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9839 */
                                                    (nchild  =  (((match9832 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn9842 */
                                                  ({ /* cicili#Let9846 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let9850 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9851 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn9853 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9856 */
                                                          ({ /* cicili#Let9860 */
                                                            __auto_type match9859  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                            typeof((((match9859 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let9865 */
                                                              bool __h_case_result  = (true  &&  (((match9859 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9866 */
                                                                    (wleft  =  (((match9859 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn9869 */
                                                                  ({ /* cicili#Let9872 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let9876 */
                                                                      __auto_type match9875  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match9875 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let9881 */
                                                                        bool __h_case_result  = (true  &&  (((match9875 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9882 */
                                                                              (unboxed  =  (((match9875 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9885 */
                                                                            ({ /* cicili#Let9889 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Let9893 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9894 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn9896 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9899 */
                                                                                    ({ /* cicili#Let9902 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9904 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let9912 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let9916 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9917 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn9919 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9922 */
                                                                                          ({ /* cicili#Let9925 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9927 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let9935 */
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Progn9939 */
                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let9946 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn9950 */
                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let9957 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn9961 */
                                                                    ({ /* cicili#Let9965 */
                                                                      __auto_type match9964  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                      typeof((((match9964 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let9970 */
                                                                        bool __h_case_result  = (true  &&  (((match9964 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9971 */
                                                                              (wright  =  (((match9964 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9974 */
                                                                            ({ /* cicili#Let9977 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let9981 */
                                                                                __auto_type match9980  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match9980 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Let9986 */
                                                                                  bool __h_case_result  = (true  &&  (((match9980 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9987 */
                                                                                        (unboxed  =  (((match9980 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9990 */
                                                                                      ({ /* cicili#Let9994 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Let9998 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9999 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn10001 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn10004 */
                                                                                              ({ /* cicili#Let10007 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10009 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let10017 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let10021 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10022 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn10024 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10027 */
                                                                                                    ({ /* cicili#Let10030 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10032 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let10040 */
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Progn10044 */
                                                                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let10051 */
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Progn10055 */
                                                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10062 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn10066 */
                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10073 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10077 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let10085 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10087 */
                                                                  __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10091 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10100 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_10099 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_10099 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let10107 */
                                                  __auto_type left  = match9832 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn10111 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let10115 */
                                          // ----------
                                          
                                          ({ /* cicili#Let10119 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn10121 */
                                                ({ /* cicili#Let10125 */
                                                  __auto_type match10124  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match10124 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10130 */
                                                    bool __h_case_result  = (true  &&  (((match10124 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10131 */
                                                          (nchild  =  (((match10124 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10134 */
                                                        ({ /* cicili#Let10138 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let10142 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10143 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn10145 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn10148 */
                                                                ({ /* cicili#Let10152 */
                                                                  __auto_type match10151  = nth_List_Rc_BTree_CStr_DynamicType ((index  -  1 ), children );
                                                                  typeof((((match10151 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let10157 */
                                                                    bool __h_case_result  = (true  &&  (((match10151 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10158 */
                                                                          (wleft  =  (((match10151 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10161 */
                                                                        ({ /* cicili#Let10164 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let10168 */
                                                                            __auto_type match10167  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match10167 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let10173 */
                                                                              bool __h_case_result  = (true  &&  (((match10167 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10174 */
                                                                                    (unboxed  =  (((match10167 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10177 */
                                                                                  ({ /* cicili#Let10181 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let10185 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10186 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn10188 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10191 */
                                                                                          ({ /* cicili#Let10194 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10196 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let10204 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let10208 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10209 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn10211 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn10214 */
                                                                                                ({ /* cicili#Let10217 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10219 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let10227 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn10231 */
                                                                                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10238 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn10242 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let10249 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn10253 */
                                                                          ({ /* cicili#Let10257 */
                                                                            __auto_type match10256  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                            typeof((((match10256 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let10262 */
                                                                              bool __h_case_result  = (true  &&  (((match10256 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10263 */
                                                                                    (wright  =  (((match10256 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10266 */
                                                                                  ({ /* cicili#Let10269 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let10273 */
                                                                                      __auto_type match10272  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match10272 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let10278 */
                                                                                        bool __h_case_result  = (true  &&  (((match10272 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10279 */
                                                                                              (unboxed  =  (((match10272 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10282 */
                                                                                            ({ /* cicili#Let10286 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let10290 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10291 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn10293 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10296 */
                                                                                                    ({ /* cicili#Let10299 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10301 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let10309 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let10313 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10314 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn10316 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10319 */
                                                                                                          ({ /* cicili#Let10322 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10324 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (mergeUp_BTree_CStr_DynamicType (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let10332 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn10336 */
                                                                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let10343 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn10347 */
                                                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10354 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn10358 */
                                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let10365 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn10369 */
                                                                  Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let10377 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let10379 */
                                                                        __auto_type r1  = new_Rc_BTree_CStr_DynamicType (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10383 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_CStr_DynamicType (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10392 */
                                                                          Rc_BTree_CStr_DynamicType __ciciliC_10391 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                            return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                          }
                                                                          __ciciliC_10391 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let10399 */
                                                        __auto_type left  = match10124 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10403 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10407 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn10411 */
                                                  ({ /* cicili#Let10415 */
                                                    __auto_type match10414  = deleteWithParent_BTree_CStr_DynamicType (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match10414 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let10420 */
                                                      bool __h_case_result  = (true  &&  (((match10414 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10421 */
                                                            (nchild  =  (((match10414 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10424 */
                                                          borrowLeaf_BTree_CStr_DynamicType (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let10429 */
                                                          __auto_type left  = match10414 ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10433 */
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
                                }) : ({ /* cicili#Let10437 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn10441 */
                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let10448 */
                          // ----------
                          
                          ({ /* cicili#Progn10452 */
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
        ({ /* cicili#Let10461 */
          __auto_type rs  = ({ /* cicili#Let10464 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            
            ({ /* cicili#Let10468 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10469 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10472 */
                  ({ /* cicili#Let10476 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    
                    ({ /* cicili#Let10480 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10481 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn10483 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn10486 */
                          ({ /* cicili#Let10489 */
                            __auto_type items_len  = hasLen_List_BTree_CStr_DynamicType_pair_t (items , (L_BTree_CStr_DynamicType  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? result  : ({ /* cicili#Let10497 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                
                                ({ /* cicili#Let10501 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10502 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10505 */
                                      ({ /* cicili#Let10509 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        
                                        ({ /* cicili#Let10513 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10514 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn10517 */
                                              ({ /* cicili#Let10521 */
                                                __auto_type match10520  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                typeof((((match10520 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                
                                                ({ /* cicili#Let10526 */
                                                  bool __h_case_result  = (true  &&  (((match10520 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10527 */
                                                        (bitem  =  (((match10520 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10530 */
                                                      ({ /* cicili#Let10533 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10535 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10548 */
                                                            Rc_BTree_CStr_DynamicType __ciciliC_10547 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                              return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                            }
                                                            __ciciliC_10547 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let10555 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn10559 */
                                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10566 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let10570 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10571 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn10574 */
                                                    ({ /* cicili#Let10578 */
                                                      __auto_type match10577  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                      typeof((((match10577 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10583 */
                                                        bool __h_case_result  = (true  &&  (((match10577 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10584 */
                                                              (bitem  =  (((match10577 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10587 */
                                                            ({ /* cicili#Let10590 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10592 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10605 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_10604 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_10604 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10612 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10616 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10623 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn10627 */
                                                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10634 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10638 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let10643 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            
                                            ({ /* cicili#Let10647 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10648 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn10651 */
                                                  ({ /* cicili#Let10654 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_CStr_DynamicType (head );
                                                    // ----------
                                                    ({ /* cicili#Let10659 */
                                                      __auto_type match10658  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match10658 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10664 */
                                                        bool __h_case_result  = (true  &&  (((match10658 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10665 */
                                                              (unboxed  =  (((match10658 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10668 */
                                                            ({ /* cicili#Let10672 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn10676 */
                                                                ({ /* cicili#Let10679 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10681 */
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
                                                          }) : ({ /* cicili#Let10688 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10692 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let10699 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn10703 */
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
                        }) : ({ /* cicili#Let10707 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          
                          ({ /* cicili#Let10711 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10712 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn10714 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10717 */
                                ({ /* cicili#Let10720 */
                                  __auto_type items_len  = hasLen_List_BTree_CStr_DynamicType_pair_t (items , (L_BTree_CStr_DynamicType  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_CStr_DynamicType  -  1 ) )) ? result  : ({ /* cicili#Let10728 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      
                                      ({ /* cicili#Let10732 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10733 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn10736 */
                                            ({ /* cicili#Let10740 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let10744 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10745 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn10748 */
                                                    ({ /* cicili#Let10752 */
                                                      __auto_type match10751  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                      typeof((((match10751 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10757 */
                                                        bool __h_case_result  = (true  &&  (((match10751 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10758 */
                                                              (bitem  =  (((match10751 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10761 */
                                                            ({ /* cicili#Let10764 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10766 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10779 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_10778 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_10778 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10786 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10790 */
                                                              Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10797 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let10801 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10802 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10805 */
                                                          ({ /* cicili#Let10809 */
                                                            __auto_type match10808  = nth_List_BTree_CStr_DynamicType_pair_t (pitem_index , pitems );
                                                            typeof((((match10808 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let10814 */
                                                              bool __h_case_result  = (true  &&  (((match10808 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10815 */
                                                                    (bitem  =  (((match10808 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10818 */
                                                                  ({ /* cicili#Let10821 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10823 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Branch_BTree_CStr_DynamicType (insertAt_List_BTree_CStr_DynamicType_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn10836 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_10835 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_10835 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let10843 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn10847 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10854 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn10858 */
                                                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let10865 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn10869 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let10874 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10878 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10879 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10882 */
                                                        ({ /* cicili#Let10885 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_CStr_DynamicType (head );
                                                          // ----------
                                                          ({ /* cicili#Let10890 */
                                                            __auto_type match10889  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match10889 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let10895 */
                                                              bool __h_case_result  = (true  &&  (((match10889 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10896 */
                                                                    (unboxed  =  (((match10889 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10899 */
                                                                  ({ /* cicili#Let10903 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    
                                                                    ({ /* cicili#Progn10907 */
                                                                      ({ /* cicili#Let10910 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10912 */
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
                                                                }) : ({ /* cicili#Let10919 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn10923 */
                                                                    Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let10930 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10934 */
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
                              }) : ({ /* cicili#Let10938 */
                                // ----------
                                
                                ({ /* cicili#Progn10942 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10946 */
                  // ----------
                  
                  ({ /* cicili#Progn10950 */
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
    return ({ /* cicili#Let10967 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10971 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10972 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10974 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10976 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10979 */
              ({ /* cicili#Let10983 */
                __auto_type match10982  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10987 */
                  bool __h_case_result  = (true  &&  ((match10982 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10989 */
                      Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let10996 */
                      // ----------
                      
                      ({ /* cicili#Let11000 */
                        bool __h_case_result  = (true  &&  ((match10982 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn11002 */
                            ({ /* cicili#Let11005 */
                              __auto_type result  = Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (delete_List_BTree_CStr_DynamicType_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let11014 */
                                // ----------
                                
                                ({ /* cicili#Let11018 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11021 */
                                      if (callback )
                                        { /* cicili#Block11025 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let11029 */
                            // ----------
                            
                            ({ /* cicili#Progn11033 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11037 */
              // ----------
              
              ({ /* cicili#Progn11041 */
                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11049 */
      __auto_type result  = ({ /* cicili#Let11052 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        
        ({ /* cicili#Let11056 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11057 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11059 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11062 */
              deleteInternal (Just_BTree_CStr_DynamicType (tree ), items , children , Nothing_List_BTree_CStr_DynamicType_pair_t (), items , 0);
            }) : ({ /* cicili#Let11068 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              
              ({ /* cicili#Let11072 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11073 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11075 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11078 */
                    deleteInternal (Just_BTree_CStr_DynamicType (tree ), items , children , Nothing_List_BTree_CStr_DynamicType_pair_t (), items , 0);
                  }) : ({ /* cicili#Let11084 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    
                    ({ /* cicili#Let11088 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11089 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn11092 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let11096 */
                          // ----------
                          
                          ({ /* cicili#Progn11100 */
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
  return ({ /* cicili#Let11123 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      
      ({ /* cicili#Let11127 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11128 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11130 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11133 */
            ({ /* cicili#Let11137 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              
              ({ /* cicili#Let11141 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11142 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11144 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11147 */
                    ({ /* cicili#Let11150 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11152 */
                        __auto_type etree  = fromLists_BTree_CStr_DynamicType (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let11158 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        
                        ({ /* cicili#Let11162 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11163 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11166 */
                              ({ /* cicili#Let11169 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11171 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_CStr_DynamicType (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let11177 */
                              // ----------
                              
                              ({ /* cicili#Progn11181 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let11185 */
                    // ----------
                    
                    ({ /* cicili#Progn11189 */
                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let11197 */
            // ----------
            
            ({ /* cicili#Progn11201 */
              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType pure_BTree_CStr_DynamicType (CStr keys [], DynamicType values [], int len ) {
  return ({ /* cicili#Let11212 */
      BTree_CStr_DynamicType tree  = Leaf_BTree_CStr_DynamicType (Nil_BTree_CStr_DynamicType_pair_t ());
      // ----------
      for (int i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let11220 */
            __auto_type match11219  = insert_BTree_CStr_DynamicType (tree , keys [i ], values [i ]);
            typeof((((match11219 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            
            ({ /* cicili#Let11225 */
              bool __h_case_result  = (true  &&  (((match11219 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11226 */
                    (new_tree  =  (((match11219 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block11230 */
                  { /* cicili#Block11232 */
                    free_BTree_CStr_DynamicType ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let11238 */
                  __auto_type left  = match11219 ;
                  // ----------
                  
                  { /* cicili#Block11242 */
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
    return ({ /* cicili#Let11252 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11256 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11257 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11259 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11262 */
              (({ /* cicili#Let11266 */
                  // ----------
                  
                  ({ /* cicili#Let11270 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11272 */
                        ({ /* cicili#Let11276 */
                          __auto_type match11275  = get_Rc_BTree_CStr_DynamicType (head );
                          typeof((((match11275 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let11281 */
                            bool __h_case_result  = (true  &&  (((match11275 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11282 */
                                  (tr  =  (((match11275 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn11285 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let11289 */
                                // ----------
                                
                                ({ /* cicili#Progn11293 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let11297 */
                        // ----------
                        
                        ({ /* cicili#Progn11301 */
                          ({ /* cicili#Let11305 */
                            __auto_type match11304  = get_Rc_BTree_CStr_DynamicType (head );
                            typeof((((match11304 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let11310 */
                              bool __h_case_result  = (true  &&  (((match11304 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11311 */
                                    (tr  =  (((match11304 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn11314 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let11318 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn11322 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let11326 */
              // ----------
              
              ({ /* cicili#Progn11330 */
                0;
              });
            }));
        });
      });
  }
  int showTree (int indent , BTree_CStr_DynamicType tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let11336 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let11340 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11341 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11343 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn11346 */
                (show_List_BTree_CStr_DynamicType_pair_t (file , items ) +  ({ /* cicili#Let11351 */
                    // ----------
                    
                    ({ /* cicili#Let11355 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn11357 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let11361 */
                          // ----------
                          
                          ({ /* cicili#Progn11365 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let11369 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                
                ({ /* cicili#Let11373 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11374 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11376 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11379 */
                      (show_List_BTree_CStr_DynamicType_pair_t (file , items ) +  ({ /* cicili#Let11384 */
                          // ----------
                          
                          ({ /* cicili#Let11388 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn11390 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let11394 */
                                // ----------
                                
                                ({ /* cicili#Progn11398 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let11402 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      
                      ({ /* cicili#Let11406 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11407 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn11410 */
                            show_List_BTree_CStr_DynamicType_pair_t (file , items );
                          }) : ({ /* cicili#Let11415 */
                            // ----------
                            
                            ({ /* cicili#Progn11419 */
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
    { /* cicili#Let11428 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      
      ({ /* cicili#Let11432 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11433 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11435 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11439 */
            { /* cicili#Let11443 */
              __auto_type match11442  = get_Rc_BTree_CStr_DynamicType (wheadC );
              typeof((((match11442 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              
              ({ /* cicili#Let11448 */
                bool __h_case_result  = (true  &&  (((match11442 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11449 */
                      (headC  =  (((match11442 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block11453 */
                    { /* cicili#Let11457 */
                      // ----------
                      
                      ({ /* cicili#Let11461 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11464 */
                            { /* cicili#Block11466 */
                              { /* cicili#Let11470 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                
                                ({ /* cicili#Let11474 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11475 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11477 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11481 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let11486 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      
                                      ({ /* cicili#Let11490 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11491 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn11493 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block11497 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let11502 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let11506 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11507 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block11511 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let11515 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                
                                ({ /* cicili#Let11519 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11520 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11522 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block11526 */
                                      { /* cicili#Block11528 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let11533 */
                            // ----------
                            
                            { /* cicili#Block11537 */
                              { /* cicili#Block11539 */
                                { /* cicili#Let11543 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  
                                  ({ /* cicili#Let11547 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11548 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11550 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block11554 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let11559 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        
                                        ({ /* cicili#Let11563 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11564 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn11566 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block11570 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let11575 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              
                                              ({ /* cicili#Let11579 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11580 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                if (__h_case_result )
                                                  { /* cicili#Block11584 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let11588 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  
                                  ({ /* cicili#Let11592 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11593 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11595 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block11599 */
                                        { /* cicili#Block11601 */
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
    { /* cicili#Let11608 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11612 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11613 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11615 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11619 */
            { /* cicili#Block11621 */
              callback (head , ({ /* cicili#Let11625 */
                  // ----------
                  
                  ({ /* cicili#Let11629 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11631 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let11635 */
                        // ----------
                        
                        ({ /* cicili#Progn11639 */
                          ({ /* cicili#Let11643 */
                            // ----------
                            
                            ({ /* cicili#Let11647 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn11649 */
                                  True ();
                                }) : ({ /* cicili#Let11653 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn11657 */
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
  { /* cicili#Let11662 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    
    ({ /* cicili#Let11666 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11667 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11669 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11673 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let11678 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let11682 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11683 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11685 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11689 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let11694 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                
                ({ /* cicili#Let11698 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11699 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11703 */
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
    return ({ /* cicili#Let11719 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11723 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11724 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11726 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11729 */
              ({ /* cicili#Let11733 */
                // ----------
                
                ({ /* cicili#Let11737 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11739 */
                      ({ /* cicili#Let11743 */
                        __auto_type match11742  = get_Rc_BTree_CStr_DynamicType (head );
                        typeof((((match11742 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let11748 */
                          bool __h_case_result  = (true  &&  (((match11742 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11749 */
                                (child  =  (((match11742 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11752 */
                              ({ /* cicili#Let11756 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                
                                ({ /* cicili#Let11760 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11761 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn11764 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let11768 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      
                                      ({ /* cicili#Let11772 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11773 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn11776 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let11780 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let11784 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11785 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn11788 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let11792 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn11796 */
                                                    Nothing_BTree_CStr_DynamicType_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let11801 */
                              // ----------
                              
                              ({ /* cicili#Progn11805 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11810 */
                      // ----------
                      
                      ({ /* cicili#Progn11814 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11818 */
              // ----------
              
              ({ /* cicili#Progn11822 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t maxLeaf (List_BTree_CStr_DynamicType_pair_t current ) {
    return ({ /* cicili#Let11830 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11834 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11835 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11837 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11840 */
              ({ /* cicili#Let11844 */
                // ----------
                
                ({ /* cicili#Let11848 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11850 */
                      Just_BTree_CStr_DynamicType_pair_t (head );
                    }) : ({ /* cicili#Let11855 */
                      // ----------
                      
                      ({ /* cicili#Progn11859 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11863 */
              // ----------
              
              ({ /* cicili#Progn11867 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11873 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let11877 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11878 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11881 */
            maxInternal (children );
          }) : ({ /* cicili#Let11885 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let11889 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11890 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn11893 */
                  maxInternal (children );
                }) : ({ /* cicili#Let11897 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let11901 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11902 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn11905 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let11909 */
                        // ----------
                        
                        ({ /* cicili#Progn11913 */
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
    return ({ /* cicili#Let11928 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let11932 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11933 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11936 */
              ({ /* cicili#Let11940 */
                __auto_type match11939  = get_Rc_BTree_CStr_DynamicType (head );
                typeof((((match11939 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                
                ({ /* cicili#Let11945 */
                  bool __h_case_result  = (true  &&  (((match11939 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11946 */
                        (child  =  (((match11939 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11949 */
                      ({ /* cicili#Let11953 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        
                        ({ /* cicili#Let11957 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11958 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn11961 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let11965 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              
                              ({ /* cicili#Let11969 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11970 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn11973 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let11977 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let11981 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11982 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn11985 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let11989 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn11993 */
                                            Nothing_BTree_CStr_DynamicType_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11998 */
                      // ----------
                      
                      ({ /* cicili#Progn12002 */
                        Nothing_BTree_CStr_DynamicType_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12007 */
              // ----------
              
              ({ /* cicili#Progn12011 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t minLeaf (List_BTree_CStr_DynamicType_pair_t first ) {
    return ({ /* cicili#Let12019 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let12023 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12024 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12027 */
              Just_BTree_CStr_DynamicType_pair_t (head );
            }) : ({ /* cicili#Let12032 */
              // ----------
              
              ({ /* cicili#Progn12036 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12042 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let12046 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12047 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12050 */
            minInternal (children );
          }) : ({ /* cicili#Let12054 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let12058 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12059 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn12062 */
                  minInternal (children );
                }) : ({ /* cicili#Let12066 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let12070 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12071 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12074 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let12078 */
                        // ----------
                        
                        ({ /* cicili#Progn12082 */
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
    return ({ /* cicili#Let12100 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12104 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12105 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12107 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12109 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12112 */
              ({ /* cicili#Let12116 */
                __auto_type match12115  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12120 */
                  bool __h_case_result  = (true  &&  ((match12115 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12122 */
                      ({ /* cicili#Let12126 */
                        __auto_type match12125  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                        typeof((((match12125 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        
                        ({ /* cicili#Let12131 */
                          bool __h_case_result  = (true  &&  (((match12125 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12132 */
                                (node  =  (((match12125 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12135 */
                              ({ /* cicili#Let12139 */
                                __auto_type match12138  = get_Rc_BTree_CStr_DynamicType (node );
                                typeof((((match12138 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let12144 */
                                  bool __h_case_result  = (true  &&  (((match12138 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12145 */
                                        (tr  =  (((match12138 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12148 */
                                      search_BTree_CStr_DynamicType (tr , skey );
                                    }) : ({ /* cicili#Let12153 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12157 */
                                        Nothing_BTree_CStr_DynamicType_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let12162 */
                              // ----------
                              
                              ({ /* cicili#Progn12166 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12171 */
                      // ----------
                      
                      ({ /* cicili#Let12175 */
                        bool __h_case_result  = (true  &&  ((match12115 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn12177 */
                            Just_BTree_CStr_DynamicType_pair_t (head );
                          }) : ({ /* cicili#Let12182 */
                            // ----------
                            
                            ({ /* cicili#Progn12186 */
                              ({ /* cicili#Let12190 */
                                // ----------
                                
                                ({ /* cicili#Let12194 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12196 */
                                      ({ /* cicili#Let12200 */
                                        __auto_type match12199  = nth_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                        typeof((((match12199 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        
                                        ({ /* cicili#Let12205 */
                                          bool __h_case_result  = (true  &&  (((match12199 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12206 */
                                                (node  =  (((match12199 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn12209 */
                                              ({ /* cicili#Let12213 */
                                                __auto_type match12212  = get_Rc_BTree_CStr_DynamicType (node );
                                                typeof((((match12212 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                
                                                ({ /* cicili#Let12218 */
                                                  bool __h_case_result  = (true  &&  (((match12212 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12219 */
                                                        (tr  =  (((match12212 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12222 */
                                                      search_BTree_CStr_DynamicType (tr , skey );
                                                    }) : ({ /* cicili#Let12227 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn12231 */
                                                        Nothing_BTree_CStr_DynamicType_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let12236 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn12240 */
                                                Nothing_BTree_CStr_DynamicType_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let12245 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12249 */
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
            }) : ({ /* cicili#Let12253 */
              // ----------
              
              ({ /* cicili#Progn12257 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_CStr_DynamicType_pair_t searchLeaf (List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let12267 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12271 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12272 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12274 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12276 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12279 */
              ({ /* cicili#Let12283 */
                __auto_type match12282  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12287 */
                  bool __h_case_result  = (true  &&  ((match12282 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12289 */
                      Just_BTree_CStr_DynamicType_pair_t (head );
                    }) : ({ /* cicili#Let12294 */
                      // ----------
                      
                      ({ /* cicili#Progn12298 */
                        ({ /* cicili#Let12302 */
                          // ----------
                          
                          ({ /* cicili#Let12306 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn12308 */
                                Nothing_BTree_CStr_DynamicType_pair_t ();
                              }) : ({ /* cicili#Let12313 */
                                // ----------
                                
                                ({ /* cicili#Progn12317 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12321 */
              // ----------
              
              ({ /* cicili#Progn12325 */
                Nothing_BTree_CStr_DynamicType_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12331 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let12335 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12336 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12338 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12341 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let12345 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let12349 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn12350 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn12352 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn12355 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let12359 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let12363 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12364 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12367 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let12371 */
                        // ----------
                        
                        ({ /* cicili#Progn12375 */
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
    { /* cicili#Block12387 */
      return Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_ORDER (3));
    }
  Either_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType insertInternal (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children , List_BTree_CStr_DynamicType_pair_t current , int index ) {
    return ({ /* cicili#Let12399 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12403 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12404 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12406 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12408 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12411 */
              ({ /* cicili#Let12415 */
                __auto_type match12414  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12419 */
                  bool __h_case_result  = (true  &&  ((match12414 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12421 */
                      ({ /* cicili#Let12425 */
                        __auto_type match12424  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                        typeof((((match12424 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let12430 */
                          bool __h_case_result  = (true  &&  (((match12424 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12431 */
                                (child  =  (((match12424 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn12434 */
                              ({ /* cicili#Let12438 */
                                __auto_type match12437  = get_Rc_BTree_CStr_DynamicType (child );
                                typeof((((match12437 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let12443 */
                                  bool __h_case_result  = (true  &&  (((match12437 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12444 */
                                        (tr  =  (((match12437 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn12447 */
                                      ({ /* cicili#Let12451 */
                                        __auto_type match12450  = insert_BTree_CStr_DynamicType (tr , skey , svalue );
                                        typeof((((match12450 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        
                                        ({ /* cicili#Let12456 */
                                          bool __h_case_result  = (true  &&  (((match12450 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12457 */
                                                (child_tree  =  (((match12450 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn12460 */
                                              ({ /* cicili#Let12464 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                
                                                ({ /* cicili#Let12468 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12469 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn12471 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12474 */
                                                      ({ /* cicili#Let12479 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match12477_1_arg ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let12483 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12484 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn12486 */
                                                                    (__h_match12477_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match12477_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn12489 */
                                                              ({ /* cicili#Let12492 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12494 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , single_item , current ), ({ /* cicili#Let12503 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12505 */
                                                                      __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12509 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12513 */
                                                                      __auto_type r3  = append_List_Rc_BTree_CStr_DynamicType (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12517 */
                                                                      __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12526 */
                                                                        Rc_BTree_CStr_DynamicType __ciciliC_12525 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                          return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                        }
                                                                        __ciciliC_12525 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let12533 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn12537 */
                                                                Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let12544 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let12548 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn12550 */
                                                            Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12558 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12560 */
                                                                  __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12564 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12570 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_12569 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_12569 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12577 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12581 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12587 */
                                                                    Rc_BTree_CStr_DynamicType __ciciliC_12586 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                      return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                    }
                                                                    __ciciliC_12586 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12594 */
                                                                  __auto_type r5  = push_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_CStr_DynamicType (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let12602 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn12606 */
                                                              Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12614 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12616 */
                                                                    __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12620 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12626 */
                                                                      Rc_BTree_CStr_DynamicType __ciciliC_12625 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                      }
                                                                      __ciciliC_12625 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12633 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12637 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12643 */
                                                                      Rc_BTree_CStr_DynamicType __ciciliC_12642 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                        return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                      }
                                                                      __ciciliC_12642 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12650 */
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
                                            }) : ({ /* cicili#Let12658 */
                                              __auto_type left  = match12450 ;
                                              // ----------
                                              
                                              ({ /* cicili#Progn12662 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let12666 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn12670 */
                                        Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let12677 */
                              // ----------
                              
                              ({ /* cicili#Progn12681 */
                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , ((BTree_CStr_DynamicType_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12691 */
                      // ----------
                      
                      ({ /* cicili#Let12695 */
                        bool __h_case_result  = (true  &&  ((match12414 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn12697 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let12704 */
                            // ----------
                            
                            ({ /* cicili#Progn12708 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12712 */
              // ----------
              
              ({ /* cicili#Progn12716 */
                ({ /* cicili#Let12720 */
                  __auto_type match12719  = nth_List_Rc_BTree_CStr_DynamicType (index , children );
                  typeof((((match12719 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  
                  ({ /* cicili#Let12725 */
                    bool __h_case_result  = (true  &&  (((match12719 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12726 */
                          (child  =  (((match12719 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn12729 */
                        ({ /* cicili#Let12733 */
                          __auto_type match12732  = get_Rc_BTree_CStr_DynamicType (child );
                          typeof((((match12732 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let12738 */
                            bool __h_case_result  = (true  &&  (((match12732 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12739 */
                                  (tr  =  (((match12732 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn12742 */
                                ({ /* cicili#Let12746 */
                                  __auto_type match12745  = insert_BTree_CStr_DynamicType (tr , skey , svalue );
                                  typeof((((match12745 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  
                                  ({ /* cicili#Let12751 */
                                    bool __h_case_result  = (true  &&  (((match12745 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12752 */
                                          (child_tree  =  (((match12745 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn12755 */
                                        ({ /* cicili#Let12759 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          
                                          ({ /* cicili#Let12763 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12764 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn12766 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn12769 */
                                                ({ /* cicili#Let12774 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match12772_1_arg ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let12778 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12779 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn12781 */
                                                              (__h_match12772_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match12772_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn12784 */
                                                        ({ /* cicili#Let12787 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12789 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , single_item , current ), ({ /* cicili#Let12798 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12800 */
                                                                __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12804 */
                                                                __auto_type r2  = drop_List_Rc_BTree_CStr_DynamicType ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12808 */
                                                                __auto_type r3  = append_List_Rc_BTree_CStr_DynamicType (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12812 */
                                                                __auto_type r4  = append_List_Rc_BTree_CStr_DynamicType (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12821 */
                                                                  Rc_BTree_CStr_DynamicType __ciciliC_12820 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                    return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                  }
                                                                  __ciciliC_12820 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let12828 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn12832 */
                                                          Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let12839 */
                                                // ----------
                                                
                                                ({ /* cicili#Let12843 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn12845 */
                                                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12853 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12855 */
                                                            __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12859 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12865 */
                                                              Rc_BTree_CStr_DynamicType __ciciliC_12864 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                              }
                                                              __ciciliC_12864 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12872 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_CStr_DynamicType (new_Rc_BTree_CStr_DynamicType (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_CStr_DynamicType (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let12880 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn12884 */
                                                        Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Internal_BTree_CStr_DynamicType (copy_List_BTree_CStr_DynamicType_pair_t (items ), ({ /* cicili#Let12892 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12894 */
                                                              __auto_type r1  = take_List_Rc_BTree_CStr_DynamicType (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12898 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_CStr_DynamicType (({ /* cicili#Progn12904 */
                                                                Rc_BTree_CStr_DynamicType __ciciliC_12903 (Rc_BTree_CStr_DynamicType __h_value ) {
                                                                  return clone_Rc_BTree_CStr_DynamicType (__h_value );
                                                                }
                                                                __ciciliC_12903 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12911 */
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
                                      }) : ({ /* cicili#Let12919 */
                                        __auto_type left  = match12745 ;
                                        // ----------
                                        
                                        ({ /* cicili#Progn12923 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let12927 */
                                // ----------
                                
                                ({ /* cicili#Progn12931 */
                                  Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12938 */
                        // ----------
                        
                        ({ /* cicili#Progn12942 */
                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (({ /* cicili#Let12949 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12951 */
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
    return ({ /* cicili#Let12967 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12971 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12972 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn12974 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn12976 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12979 */
              ({ /* cicili#Let12983 */
                __auto_type match12982  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let12987 */
                  bool __h_case_result  = (true  &&  ((match12982 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12989 */
                      Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (insert_List_BTree_CStr_DynamicType_pair_t (items , ((BTree_CStr_DynamicType_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let12999 */
                      // ----------
                      
                      ({ /* cicili#Let13003 */
                        bool __h_case_result  = (true  &&  ((match12982 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn13005 */
                            Left_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (BTree_CStr_DynamicType_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let13012 */
                            // ----------
                            
                            ({ /* cicili#Progn13016 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let13020 */
              // ----------
              
              ({ /* cicili#Progn13024 */
                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (Leaf_BTree_CStr_DynamicType (({ /* cicili#Let13031 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13033 */
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
  return ({ /* cicili#Let13043 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let13047 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13048 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13050 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13053 */
            ({ /* cicili#Let13057 */
              __auto_type match13056  = insertInternal (items , children , items , 0);
              typeof((((match13056 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              
              ({ /* cicili#Let13061 */
                bool __h_case_result  = (true  &&  (((match13056 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13062 */
                      (tr  =  (((match13056 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn13065 */
                    Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                  }) : ({ /* cicili#Let13072 */
                    __auto_type left  = match13056 ;
                    // ----------
                    
                    ({ /* cicili#Progn13076 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let13080 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let13084 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13085 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13087 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn13090 */
                  ({ /* cicili#Let13094 */
                    __auto_type match13093  = insertInternal (items , children , items , 0);
                    typeof((((match13093 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    
                    ({ /* cicili#Let13098 */
                      bool __h_case_result  = (true  &&  (((match13093 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13099 */
                            (tr  =  (((match13093 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn13102 */
                          Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                        }) : ({ /* cicili#Let13109 */
                          __auto_type left  = match13093 ;
                          // ----------
                          
                          ({ /* cicili#Progn13113 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let13117 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let13121 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13122 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn13125 */
                        ({ /* cicili#Let13129 */
                          __auto_type match13128  = insertLeaf (items , items , 0);
                          typeof((((match13128 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let13133 */
                            bool __h_case_result  = (true  &&  (((match13128 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13134 */
                                  (tr  =  (((match13128 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn13137 */
                                Right_BTree_CStr_DynamicType_Error_BTree_CStr_DynamicType (split_BTree_CStr_DynamicType (tr ));
                              }) : ({ /* cicili#Let13144 */
                                __auto_type left  = match13128 ;
                                // ----------
                                
                                ({ /* cicili#Progn13148 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13152 */
                        // ----------
                        
                        ({ /* cicili#Progn13156 */
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
  { /* cicili#Let13165 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_CStr_DynamicType children ) {
      { /* cicili#Let13170 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13174 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13175 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13177 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block13181 */
              { /* cicili#Block13183 */
                free_Rc_BTree_CStr_DynamicType (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let13189 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let13193 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13194 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13196 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block13200 */
            { /* cicili#Block13202 */
              free_List_BTree_CStr_DynamicType_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_CStr_DynamicType ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let13213 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let13217 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13218 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13220 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block13224 */
                  { /* cicili#Block13226 */
                    free_List_BTree_CStr_DynamicType_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_CStr_DynamicType ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let13237 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let13241 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13242 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block13246 */
                        { /* cicili#Block13248 */
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
  { /* cicili#Let13260 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_CStr_DynamicType Internal_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items , List_Rc_BTree_CStr_DynamicType children ) {
  { /* cicili#Let13268 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_CStr_DynamicType Leaf_BTree_CStr_DynamicType (List_BTree_CStr_DynamicType_pair_t items ) {
  { /* cicili#Let13276 */
    BTree_CStr_DynamicType instance  = malloc (sizeof(class_BTree_CStr_DynamicType));
    // ----------
    (*instance ) = ((class_BTree_CStr_DynamicType){ get_BTree_CStr_DynamicType__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_CStr_DynamicType__H_IMPL__ */ 
