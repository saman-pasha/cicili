#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include "draft/fastcgi/router.h"
#include "draft/types/dynamic.h"
#include <unistd.h>
void beforeRequest (Request rr ) {
}
void afterRequest (Request rr ) {
}
int main () {
  ({ /* cicili#Let147 */
    __auto_type dt0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let149 */
      __auto_type dt0  = Dynamic_String (new_String_Const ("pi number is: "));
      // ----------
      ((void)((dt0 . __h_table )-> freeData ));
      dt0 ;
    });
    __auto_type dt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let154 */
      __auto_type dt1  = Dynamic_Integer (12);
      // ----------
      ((void)((dt1 . __h_table )-> freeData ));
      dt1 ;
    });
    __auto_type dt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let159 */
      __auto_type dt2  = Dynamic_Float (3.14);
      // ----------
      ((void)((dt2 . __h_table )-> freeData ));
      dt2 ;
    });
    __auto_type dt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let164 */
      __auto_type dt3  = Dynamic_Boolean (True ());
      // ----------
      ((void)((dt3 . __h_table )-> freeData ));
      dt3 ;
    });
    __auto_type dt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let169 */
      __auto_type dt4  = Dynamic_Boolean (True ());
      // ----------
      ((void)((dt4 . __h_table )-> freeData ));
      dt4 ;
    });
    __auto_type dt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let174 */
      __auto_type dt5  = Dynamic_Boolean (False ());
      // ----------
      ((void)((dt5 . __h_table )-> freeData ));
      dt5 ;
    });
    __auto_type dt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let179 */
      __auto_type dt6  = Dynamic_Boolean (False ());
      // ----------
      ((void)((dt6 . __h_table )-> freeData ));
      dt6 ;
    });
    __auto_type dt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let184 */
      __auto_type dt7  = Dynamic_Null ();
      // ----------
      ((void)((dt7 . __h_table )-> freeData ));
      dt7 ;
    });
    __auto_type dt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let189 */
      __auto_type dt8  = Dynamic_Float (17.18L );
      // ----------
      ((void)((dt8 . __h_table )-> freeData ));
      dt8 ;
    });
    __auto_type dt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let194 */
      __auto_type dt9  = Dynamic_Float (17L );
      // ----------
      ((void)((dt9 . __h_table )-> freeData ));
      dt9 ;
    });
    __auto_type dt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let199 */
      __auto_type dt10  = Dynamic_Integer (12l );
      // ----------
      ((void)((dt10 . __h_table )-> freeData ));
      dt10 ;
    });
    __auto_type dt12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let204 */
      __auto_type dt12  = Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_String (new_String_Const ("a string, a float, an integer, a boolean and null")), Dynamic_Float (2.71828), Dynamic_Integer (9223372036854775807l ), Dynamic_Boolean (True ()), Dynamic_Null ()}), 5), "basic");
      // ----------
      ((void)((dt12 . __h_table )-> freeData ));
      dt12 ;
    });
    __auto_type dt13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let222 */
      __auto_type dt13  = Dynamic_Object (({ /* cicili#Let227 */
        __auto_type match226  = pure_BTree_CStr_DynamicType (((CStr[]){ "friends", "data", "roles", "name", "id"}), ((DynamicType[]){ Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ }), 0), "item"), dt12 , Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_String (new_String_Const ("Founder")), Dynamic_String (new_String_Const ("Developer")), Dynamic_String (new_String_Const ("Backend"))}), 3), "item"), Dynamic_String (new_String_Const ("Saman")), Dynamic_Integer (12)}), 5);
        typeof((((match226 . __h_data ). Right ). __h_0_mem )) tree ;
        // ----------
        
        ({ /* cicili#Let255 */
          bool __h_case_result  = (true  &&  (((match226 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn256 */
                (tree  =  (((match226 . __h_data ). Right ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn259 */
              tree ;
            }) : ({ /* cicili#Let263 */
              typeof((((match226 . __h_data ). Left ). __h_0_mem )) err ;
              // ----------
              
              ({ /* cicili#Let267 */
                bool __h_case_result  = (true  &&  (((match226 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn268 */
                      (err  =  (((match226 . __h_data ). Left ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn271 */
                    ({ /* cicili#Let274 */
                      __auto_type tmp_stdout  = stdout ;
                      // ----------
                      stdout  = stderr ;
                      printf ("DynamicType Object creation error: ");
                      show_BTree_CStr_DynamicType_Error (err );
                      putchar ('\n');
                      exit (-1);
                      NULL ;
                      stdout  = tmp_stdout ;
                    });
                  }) : ({ /* cicili#Let279 */
                    // ----------
                    
                    ({ /* cicili#Progn283 */
                      NULL ;
                    });
                  }));
              });
            }));
        });
      }));
      // ----------
      ((void)((dt13 . __h_table )-> freeData ));
      dt13 ;
    });
    __auto_type dt14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let287 */
      __auto_type dt14  = Dynamic_Object (({ /* cicili#Let292 */
        __auto_type match291  = pure_BTree_CStr_DynamicType (((CStr[]){ "friends", "data", "roles", "name", "id"}), ((DynamicType[]){ Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ dt13 }), 1), "friend"), Dynamic_Object (({ /* cicili#Let306 */
            __auto_type match305  = pure_BTree_CStr_DynamicType (((CStr[]){ "raw", "basics"}), ((DynamicType[]){ Dynamic_Null (), Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ dt0 , dt1 , dt2 }), 3), "item")}), 2);
            typeof((((match305 . __h_data ). Right ). __h_0_mem )) tree ;
            // ----------
            
            ({ /* cicili#Let323 */
              bool __h_case_result  = (true  &&  (((match305 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn324 */
                    (tree  =  (((match305 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn327 */
                  tree ;
                }) : ({ /* cicili#Let331 */
                  typeof((((match305 . __h_data ). Left ). __h_0_mem )) err ;
                  // ----------
                  
                  ({ /* cicili#Let335 */
                    bool __h_case_result  = (true  &&  (((match305 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn336 */
                          (err  =  (((match305 . __h_data ). Left ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn339 */
                        ({ /* cicili#Let342 */
                          __auto_type tmp_stdout  = stdout ;
                          // ----------
                          stdout  = stderr ;
                          printf ("DynamicType Object creation error: ");
                          show_BTree_CStr_DynamicType_Error (err );
                          putchar ('\n');
                          exit (-1);
                          NULL ;
                          stdout  = tmp_stdout ;
                        });
                      }) : ({ /* cicili#Let347 */
                        // ----------
                        
                        ({ /* cicili#Progn351 */
                          NULL ;
                        });
                      }));
                  });
                }));
            });
          })), Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_String (new_String_Const ("CoFounder")), Dynamic_String (new_String_Const ("Developer")), Dynamic_String (new_String_Const ("Frontend"))}), 3), "role"), Dynamic_String (new_String_Const ("Saman's Friend")), Dynamic_Integer (22)}), 5);
        typeof((((match291 . __h_data ). Right ). __h_0_mem )) tree ;
        // ----------
        
        ({ /* cicili#Let371 */
          bool __h_case_result  = (true  &&  (((match291 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn372 */
                (tree  =  (((match291 . __h_data ). Right ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn375 */
              tree ;
            }) : ({ /* cicili#Let379 */
              typeof((((match291 . __h_data ). Left ). __h_0_mem )) err ;
              // ----------
              
              ({ /* cicili#Let383 */
                bool __h_case_result  = (true  &&  (((match291 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn384 */
                      (err  =  (((match291 . __h_data ). Left ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn387 */
                    ({ /* cicili#Let390 */
                      __auto_type tmp_stdout  = stdout ;
                      // ----------
                      stdout  = stderr ;
                      printf ("DynamicType Object creation error: ");
                      show_BTree_CStr_DynamicType_Error (err );
                      putchar ('\n');
                      exit (-1);
                      NULL ;
                      stdout  = tmp_stdout ;
                    });
                  }) : ({ /* cicili#Let395 */
                    // ----------
                    
                    ({ /* cicili#Progn399 */
                      NULL ;
                    });
                  }));
              });
            }));
        });
      }));
      // ----------
      ((void)((dt14 . __h_table )-> freeData ));
      dt14 ;
    });
    // ----------
    show_DynamicType (stdout , dt0 );
    fprintf (stdout , " ");
    show_DynamicType (stdout , dt2 );
    putchar ('\n');
    fprintf (stdout , "an integer: ");
    show_DynamicType (stdout , dt1 );
    putchar ('\n');
    fprintf (stdout , "4 booleans: ");
    show_DynamicType (stdout , dt3 );
    fprintf (stdout , " ");
    show_DynamicType (stdout , dt4 );
    fprintf (stdout , " ");
    show_DynamicType (stdout , dt5 );
    fprintf (stdout , " ");
    show_DynamicType (stdout , dt6 );
    putchar ('\n');
    fprintf (stdout , "long double as float with '.' : ");
    show_DynamicType (stdout , dt8 );
    putchar ('\n');
    fprintf (stdout , "long double as float without '.' : ");
    show_DynamicType (stdout , dt9 );
    putchar ('\n');
    fprintf (stdout , "long int as integer: ");
    show_DynamicType (stdout , dt10 );
    putchar ('\n');
    fprintf (stdout , "a dynamic list: \n");
    show_DynamicType (stdout , dt12 );
    putchar ('\n');
    putchar ('\n');
    fprintf (stdout , "a dynamic object: \n");
    show_DynamicType (stdout , dt13 );
    putchar ('\n');
    { /* cicili#Let426 */
      StringBuffer_char sb  = new_StringBuffer_char (4, true );
      // ----------
      sb  = print_StringBuffer_char (sb , "123", 3);
      sb  = print_StringBuffer_char (sb , "123", 3);
      sb  = print_StringBuffer_char (sb , "123", 3);
      sb  = print_StringBuffer_char (sb , "123", 3);
      sb  = put_StringBuffer_char (sb , 'a');
      sb  = put_StringBuffer_char (sb , 'b');
      sb  = put_StringBuffer_char (sb , 'c');
      sb  = put_StringBuffer_char (sb , 'd');
      sb  = print_StringBuffer_char (sb , "54321", 5);
      { /* cicili#Let441 */
        typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
        typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
        typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
        // ----------
        
        ({ /* cicili#Let445 */
          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ((({ /* cicili#Progn446 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn448 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn450 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block454 */
              printf ("R1 %s %d %d\n", buffer , cursor , size );
            }
          else
            { /* cicili#Let459 */
              // ----------
              
              { /* cicili#Block463 */
                printf ("R1 sb is freed\n");
              }
            }
        });
      }
      free_StringBuffer_char ((&sb ));
      { /* cicili#Let468 */
        typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
        typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
        typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
        // ----------
        
        ({ /* cicili#Let472 */
          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  ((({ /* cicili#Progn473 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn475 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn477 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block481 */
              printf ("R2 %s %d %d\n", buffer , cursor , size );
            }
          else
            { /* cicili#Let486 */
              // ----------
              
              { /* cicili#Block490 */
                printf ("R2 sb is freed\n");
              }
            }
        });
      }
    }
    putchar ('\n');
    { /* cicili#Let492 */
      char buffer [1024] = { 0};
      CFile file  = fmemopen (buffer , sizeof(buffer), "w+");
      // ----------
      toJson_DynamicType (file , dt14 );
      rewind (file );
      ({ /* cicili#Let496 */
        __auto_type dtJson  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let498 */
          __auto_type dtJson  = parseJson_DynamicType (file );
          // ----------
          ((void)((dtJson . __h_table )-> freeData ));
          dtJson ;
        });
        // ----------
        putchar ('\n');
        fprintf (stdout , "a dynamic object from JSON string: \n");
        toJson_DynamicType (stdout , search_DynamicType (dtJson , "data/basics/0/3"));
        putchar ('\n');
      });
      fclose (file );
    }
    ({ /* cicili#Let506 */
      __auto_type result  = ({ /* cicili#Let508 */
        Route routes_defs [] = { { "/json", METHOD_GET , ({ /* cicili#Progn510 */
              void __ciciliC_509 (Request rr ) {
                { /* cicili#Let515 */
                  typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
                  // ----------
                  
                  ({ /* cicili#Let519 */
                    bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn520 */
                          (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block524 */
                        { /* cicili#Let526 */
                          char buffer [1024] = { 0};
                          CFile file  = fmemopen (buffer , sizeof(buffer), "w+");
                          // ----------
                          toJson_DynamicType (file , dt14 );
                          rewind (file );
                          ({ /* cicili#Let530 */
                            __auto_type dtJson  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let532 */
                              __auto_type dtJson  = parseJson_DynamicType (file );
                              // ----------
                              ((void)((dtJson . __h_table )-> freeData ));
                              dtJson ;
                            });
                            // ----------
                            rewind (file );
                            toJson_DynamicType (file , dtJson );
                            FCGX_PutS ("HTTP/1.1 200 OK\r\n", (req -> out ));
                            FCGX_PutS ("Content-Type: application/json\r\n\r\n", (req -> out ));
                            FCGX_PutS (buffer , (req -> out ));
                          });
                        }
                      }
                  });
                }
              }
              __ciciliC_509 ;
            })}, { "/xml", METHOD_GET , ({ /* cicili#Progn538 */
              void __ciciliC_537 (Request rr ) {
                { /* cicili#Let543 */
                  typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
                  // ----------
                  
                  ({ /* cicili#Let547 */
                    bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn548 */
                          (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block552 */
                        { /* cicili#Let554 */
                          char buffer [1024] = { 0};
                          CFile file  = fmemopen (buffer , sizeof(buffer), "w");
                          // ----------
                          toXml_DynamicType (file , "HumanDoc", dt14 );
                          FCGX_PutS ("HTTP/1.1 200 OK\r\n", (req -> out ));
                          FCGX_PutS ("Content-Type: application/xml\r\n\r\n", (req -> out ));
                          FCGX_PutS ("<?xml version=\"1.0\" encoding=\"UTF-8\"?>", (req -> out ));
                          FCGX_PutS (buffer , (req -> out ));
                        }
                      }
                  });
                }
              }
              __ciciliC_537 ;
            })}};
        // ----------
        ({ /* cicili#Let559 */
          __auto_type routes  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let561 */
            __auto_type routes  = Leaf_BTree_CStr_Route (Nil_BTree_CStr_Route_pair_t ());
            // ----------
            ((void)(routes -> __h_table -> freeClass ));
            routes ;
          });
          // ----------
          for (int i  = 0; (i  <  2 ); (++i )) {
              { /* cicili#Let570 */
                __auto_type route  = routes_defs [i ];
                typeof((route . __h_0_mem )) path ;
                // ----------
                
                ({ /* cicili#Let574 */
                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn575 */
                      (path  =  (route . __h_0_mem ) );
                      true ;
                    }) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block579 */
                      { /* cicili#Let583 */
                        __auto_type match582  = insert_BTree_CStr_Route (routes , path , route );
                        typeof((((match582 . __h_data ). Right ). __h_0_mem )) new_routes ;
                        // ----------
                        
                        ({ /* cicili#Let588 */
                          bool __h_case_result  = (true  &&  (((match582 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn589 */
                                (new_routes  =  (((match582 . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block593 */
                              { /* cicili#Block595 */
                                free_BTree_CStr_Route ((&routes ));
                                routes  = new_routes ;
                              }
                            }
                          else
                            { /* cicili#Let601 */
                              typeof((((match582 . __h_data ). Left ). __h_0_mem )) error ;
                              // ----------
                              
                              ({ /* cicili#Let605 */
                                bool __h_case_result  = (true  &&  (((match582 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn606 */
                                      (error  =  (((match582 . __h_data ). Left ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                if (__h_case_result )
                                  { /* cicili#Block610 */
                                    { /* cicili#Block612 */
                                      fprintf (stderr , "router error occured! ");
                                      show_BTree_CStr_Route_Error (error );
                                      putchar ('\n');
                                      break ;
                                    }
                                  }
                              });
                            }
                        });
                      }
                    }
                });
              }
          }
          start_Router (MakeDetailedRouter ("/usr/local/var/run/fcgi.sock", routes , 3, 1024, beforeRequest , afterRequest , True ()));
        });
      });
      // ----------
      { /* cicili#Let620 */
        typeof((((result . __h_data ). Right ). __h_0_mem )) fd ;
        // ----------
        
        ({ /* cicili#Let624 */
          bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn625 */
                (fd  =  (((result . __h_data ). Right ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block629 */
              fprintf (stdout , "FasstCGI server on FD: %d was quitted successfully", fd );
            }
          else
            { /* cicili#Let635 */
              typeof((((result . __h_data ). Left ). __h_0_mem )) err ;
              // ----------
              
              ({ /* cicili#Let639 */
                bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn640 */
                      (err  =  (((result . __h_data ). Left ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block644 */
                    { /* cicili#Block646 */
                      fprintf (stdout , "FasstCGI server was quitet with error: ");
                      show_RouterError (err );
                    }
                  }
              });
            }
        });
      }
    });
  });
  return EXIT_SUCCESS ;
}
