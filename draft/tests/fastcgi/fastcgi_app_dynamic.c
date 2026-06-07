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
DynamicType range (int64_t from , int64_t to , int64_t step ) {
  return Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_Integer (from ), Dynamic_Integer (to ), Dynamic_Integer (step )}), 3), "item");
}
DynamicType take (DynamicType args ) {
  return ({ /* cicili#Let159 */
      __auto_type __h_matchbox  = args ;
      // ----------
      ({ /* cicili#Let163 */
        __auto_type match162  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match162 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let166 */
          bool __h_case_result  = (true  &&  (((match162 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn167 */
                (unboxed  =  (((match162 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn172 */
              ({ /* cicili#Let177 */
                typeof((((unboxed -> __h_data ). List ). __h_0_mem )) __h_match175_0_arg ;
                typeof(__h_match175_0_arg ) __h_match176_0_item ;
                typeof((((__h_match176_0_item -> __h_data ). Cons ). __h_0_mem )) count ;
                typeof((((__h_match176_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match176_1_item ;
                typeof((((__h_match176_1_item -> __h_data ). Cons ). __h_0_mem )) range ;
                // ----------
                ;
                ({ /* cicili#Let179 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  (({ /* cicili#Progn180 */
                          (__h_match175_0_arg  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                          true ;
                        }) &&  ((__h_match175_0_arg -> __h_table -> hasLen )(__h_match175_0_arg , 2) ==  2 ) ) ) );
                  // ----------
                  if (true )
                    { /* cicili#Block185 */
                      __h_match176_0_item  = __h_match175_0_arg ;
                      count  = (((__h_match176_0_item -> __h_data ). Cons ). __h_0_mem );
                      __h_match176_1_item  = (((__h_match176_0_item -> __h_data ). Cons ). __h_1_mem );
                      range  = (((__h_match176_1_item -> __h_data ). Cons ). __h_0_mem );
                    }
                  ((__h_case_result ) ? ({ /* cicili#Progn187 */
                      ({ /* cicili#Let190 */
                        __auto_type __h_matchbox  = range ;
                        // ----------
                        ({ /* cicili#Let194 */
                          __auto_type match193  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match193 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let197 */
                            bool __h_case_result  = (true  &&  (((match193 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn198 */
                                  (unboxed  =  (((match193 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn203 */
                                ({ /* cicili#Let208 */
                                  typeof((((unboxed -> __h_data ). List ). __h_0_mem )) __h_match206_0_arg ;
                                  typeof(__h_match206_0_arg ) __h_match207_0_item ;
                                  typeof((((__h_match207_0_item -> __h_data ). Cons ). __h_0_mem )) from ;
                                  typeof((((__h_match207_0_item -> __h_data ). Cons ). __h_1_mem )) __h_match207_1_item ;
                                  typeof((((__h_match207_1_item -> __h_data ). Cons ). __h_0_mem )) to ;
                                  typeof((((__h_match207_1_item -> __h_data ). Cons ). __h_1_mem )) __h_match207_2_item ;
                                  typeof((((__h_match207_2_item -> __h_data ). Cons ). __h_0_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let210 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_List_t  ) &&  (({ /* cicili#Progn211 */
                                            (__h_match206_0_arg  =  (((unboxed -> __h_data ). List ). __h_0_mem ) );
                                            true ;
                                          }) &&  ((__h_match206_0_arg -> __h_table -> hasLen )(__h_match206_0_arg , 3) ==  3 ) ) ) );
                                    // ----------
                                    if (true )
                                      { /* cicili#Block216 */
                                        __h_match207_0_item  = __h_match206_0_arg ;
                                        from  = (((__h_match207_0_item -> __h_data ). Cons ). __h_0_mem );
                                        __h_match207_1_item  = (((__h_match207_0_item -> __h_data ). Cons ). __h_1_mem );
                                        to  = (((__h_match207_1_item -> __h_data ). Cons ). __h_0_mem );
                                        __h_match207_2_item  = (((__h_match207_1_item -> __h_data ). Cons ). __h_1_mem );
                                        step  = (((__h_match207_2_item -> __h_data ). Cons ). __h_0_mem );
                                      }
                                    ((__h_case_result ) ? ({ /* cicili#Progn218 */
                                        Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ count , to , step , from }), 4), "item");
                                      }) : ({ /* cicili#Let231 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn233 */
                                          Dynamic_Error (strdup ("take wrong range"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let238 */
                                // ----------
                                ;
                                ({ /* cicili#Progn240 */
                                  Dynamic_Error (strdup ("take dead range"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let245 */
                      // ----------
                      ;
                      ({ /* cicili#Progn247 */
                        Dynamic_Error (strdup ("take wrong args"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let252 */
              // ----------
              ;
              ({ /* cicili#Progn254 */
                Dynamic_Error (strdup ("take dead args"));
              });
            }));
        });
      });
    });
}
int main () {
  ({ /* cicili#Let259 */
    __auto_type dt0  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let261 */
      __auto_type dt0  = Dynamic_String (new_String_Const ("pi number is: "));
      // ----------
      ((void)((dt0 . __h_table )-> freeData ));
      dt0 ;
    });
    __auto_type dt1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let266 */
      __auto_type dt1  = Dynamic_Integer (12);
      // ----------
      ((void)((dt1 . __h_table )-> freeData ));
      dt1 ;
    });
    __auto_type dt2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let271 */
      __auto_type dt2  = Dynamic_Float (3.14);
      // ----------
      ((void)((dt2 . __h_table )-> freeData ));
      dt2 ;
    });
    __auto_type dt3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let276 */
      __auto_type dt3  = Dynamic_Boolean (True ());
      // ----------
      ((void)((dt3 . __h_table )-> freeData ));
      dt3 ;
    });
    __auto_type dt4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let281 */
      __auto_type dt4  = Dynamic_Boolean (True ());
      // ----------
      ((void)((dt4 . __h_table )-> freeData ));
      dt4 ;
    });
    __auto_type dt5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let286 */
      __auto_type dt5  = Dynamic_Boolean (False ());
      // ----------
      ((void)((dt5 . __h_table )-> freeData ));
      dt5 ;
    });
    __auto_type dt6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let291 */
      __auto_type dt6  = Dynamic_Boolean (False ());
      // ----------
      ((void)((dt6 . __h_table )-> freeData ));
      dt6 ;
    });
    __auto_type dt7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let296 */
      __auto_type dt7  = Dynamic_Null ();
      // ----------
      ((void)((dt7 . __h_table )-> freeData ));
      dt7 ;
    });
    __auto_type dt8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let301 */
      __auto_type dt8  = Dynamic_Float (17.18L );
      // ----------
      ((void)((dt8 . __h_table )-> freeData ));
      dt8 ;
    });
    __auto_type dt9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let306 */
      __auto_type dt9  = Dynamic_Float (17L );
      // ----------
      ((void)((dt9 . __h_table )-> freeData ));
      dt9 ;
    });
    __auto_type dt10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let311 */
      __auto_type dt10  = Dynamic_Integer (12l );
      // ----------
      ((void)((dt10 . __h_table )-> freeData ));
      dt10 ;
    });
    __auto_type dt12  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let316 */
      __auto_type dt12  = Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_String (new_String_Const ("a string, a float, an integer, a boolean and null")), Dynamic_Float (2.71828), Dynamic_Integer (9223372036854775807l ), Dynamic_Boolean (True ()), Dynamic_Null ()}), 5), "basic");
      // ----------
      ((void)((dt12 . __h_table )-> freeData ));
      dt12 ;
    });
    __auto_type dt13  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let334 */
      __auto_type dt13  = Dynamic_Object (({ /* cicili#Let339 */
        __auto_type match338  = pure_BTree_CStr_DynamicType (((CStr[]){ "friends", "data", "roles", "name", "id"}), ((DynamicType[]){ Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ }), 0), "item"), dt12 , Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_String (new_String_Const ("Founder")), Dynamic_String (new_String_Const ("Developer")), Dynamic_String (new_String_Const ("Backend"))}), 3), "item"), Dynamic_String (new_String_Const ("Saman")), Dynamic_Integer (12)}), 5);
        typeof((((match338 . __h_data ). Right ). __h_0_mem )) tree ;
        // ----------
        ;
        ({ /* cicili#Let365 */
          bool __h_case_result  = (true  &&  (((match338 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn366 */
                (tree  =  (((match338 . __h_data ). Right ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn371 */
              tree ;
            }) : ({ /* cicili#Let375 */
              typeof((((match338 . __h_data ). Left ). __h_0_mem )) err ;
              // ----------
              ;
              ({ /* cicili#Let377 */
                bool __h_case_result  = (true  &&  (((match338 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn378 */
                      (err  =  (((match338 . __h_data ). Left ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn383 */
                    ({ /* cicili#Let386 */
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
                  }) : ({ /* cicili#Let391 */
                    // ----------
                    ;
                    ({ /* cicili#Progn393 */
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
    __auto_type dt14  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let397 */
      __auto_type dt14  = Dynamic_Object (({ /* cicili#Let402 */
        __auto_type match401  = pure_BTree_CStr_DynamicType (((CStr[]){ "friends", "data", "roles", "name", "id"}), ((DynamicType[]){ Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ dt13 }), 1), "friend"), Dynamic_Object (({ /* cicili#Let416 */
            __auto_type match415  = pure_BTree_CStr_DynamicType (((CStr[]){ "raw", "basics"}), ((DynamicType[]){ Dynamic_Null (), Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ dt0 , dt1 , dt2 }), 3), "item")}), 2);
            typeof((((match415 . __h_data ). Right ). __h_0_mem )) tree ;
            // ----------
            ;
            ({ /* cicili#Let431 */
              bool __h_case_result  = (true  &&  (((match415 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn432 */
                    (tree  =  (((match415 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn437 */
                  tree ;
                }) : ({ /* cicili#Let441 */
                  typeof((((match415 . __h_data ). Left ). __h_0_mem )) err ;
                  // ----------
                  ;
                  ({ /* cicili#Let443 */
                    bool __h_case_result  = (true  &&  (((match415 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn444 */
                          (err  =  (((match415 . __h_data ). Left ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn449 */
                        ({ /* cicili#Let452 */
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
                      }) : ({ /* cicili#Let457 */
                        // ----------
                        ;
                        ({ /* cicili#Progn459 */
                          NULL ;
                        });
                      }));
                  });
                }));
            });
          })), Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_String (new_String_Const ("CoFounder")), Dynamic_String (new_String_Const ("Developer")), Dynamic_String (new_String_Const ("Frontend"))}), 3), "role"), Dynamic_String (new_String_Const ("Saman's Friend")), Dynamic_Integer (22)}), 5);
        typeof((((match401 . __h_data ). Right ). __h_0_mem )) tree ;
        // ----------
        ;
        ({ /* cicili#Let477 */
          bool __h_case_result  = (true  &&  (((match401 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn478 */
                (tree  =  (((match401 . __h_data ). Right ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn483 */
              tree ;
            }) : ({ /* cicili#Let487 */
              typeof((((match401 . __h_data ). Left ). __h_0_mem )) err ;
              // ----------
              ;
              ({ /* cicili#Let489 */
                bool __h_case_result  = (true  &&  (((match401 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn490 */
                      (err  =  (((match401 . __h_data ). Left ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn495 */
                    ({ /* cicili#Let498 */
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
                  }) : ({ /* cicili#Let503 */
                    // ----------
                    ;
                    ({ /* cicili#Progn505 */
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
    __auto_type range01  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let509 */
      __auto_type range01  = range (0, 1000000, 1);
      // ----------
      ((void)((range01 . __h_table )-> freeData ));
      range01 ;
    });
    __auto_type thunk02  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let512 */
      __auto_type thunk02  = Dynamic_Thunk (Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_Integer (5), range01 }), 2), "item"), take );
      // ----------
      ((void)((thunk02 . __h_table )-> freeData ));
      thunk02 ;
    });
    __auto_type thunk03  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let524 */
      __auto_type thunk03  = Dynamic_Thunk (Dynamic_List (pure_List_DynamicType (((const DynamicType[]){ Dynamic_Integer (5), range01 }), 2), "item"), take );
      // ----------
      ((void)((thunk03 . __h_table )-> freeData ));
      thunk03 ;
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
    { /* cicili#Let560 */
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
      { /* cicili#Let575 */
        typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
        typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
        typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
        // ----------
        ;
        ({ /* cicili#Let577 */
          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn578 */
                    (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn580 */
                    (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn582 */
                  (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block588 */
              printf ("R1 %s %d %d\n", buffer , cursor , size );
            }
          else
            { /* cicili#Let593 */
              // ----------
              ;
              { /* cicili#Block595 */
                printf ("R1 sb is freed\n");
              }
            }
        });
      }
      free_StringBuffer_char ((&sb ));
      { /* cicili#Let600 */
        typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
        typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
        typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
        // ----------
        ;
        ({ /* cicili#Let602 */
          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn603 */
                    (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn605 */
                    (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn607 */
                  (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block613 */
              printf ("R2 %s %d %d\n", buffer , cursor , size );
            }
          else
            { /* cicili#Let618 */
              // ----------
              ;
              { /* cicili#Block620 */
                printf ("R2 sb is freed\n");
              }
            }
        });
      }
    }
    putchar ('\n');
    { /* cicili#Let622 */
      char buffer [1024] = { 0};
      CFile file  = fmemopen (buffer , sizeof(buffer), "w+");
      // ----------
      toJson_DynamicType (file , dt14 );
      rewind (file );
      ({ /* cicili#Let626 */
        __auto_type dtJson  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let628 */
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
    show_DynamicType (stdout , thunk02 );
    putchar ('\n');
    show_DynamicType (stdout , force_DynamicType (thunk02 ));
    putchar ('\n');
    show_DynamicType (stdout , thunk03 );
    putchar ('\n');
    show_DynamicType (stdout , force_DynamicType (thunk03 ));
    putchar ('\n');
    ({ /* cicili#Let642 */
      __auto_type result  = ({ /* cicili#Let644 */
        Route routes_defs [] = { { "/json", METHOD_GET , ({ /* cicili#Progn646 */
              void __ciciliC_645 (Request rr ) {
                { /* cicili#Let651 */
                  typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
                  // ----------
                  ;
                  ({ /* cicili#Let653 */
                    bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn654 */
                          (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block660 */
                        { /* cicili#Let662 */
                          char buffer [1024] = { 0};
                          CFile file  = fmemopen (buffer , sizeof(buffer), "w+");
                          // ----------
                          toJson_DynamicType (file , dt14 );
                          rewind (file );
                          ({ /* cicili#Let666 */
                            __auto_type dtJson  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let668 */
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
              __ciciliC_645 ;
            })}, { "/xml", METHOD_GET , ({ /* cicili#Progn674 */
              void __ciciliC_673 (Request rr ) {
                { /* cicili#Let679 */
                  typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
                  // ----------
                  ;
                  ({ /* cicili#Let681 */
                    bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ({ /* cicili#Progn682 */
                          (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block688 */
                        { /* cicili#Let690 */
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
              __ciciliC_673 ;
            })}};
        // ----------
        ({ /* cicili#Let695 */
          __auto_type routes  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let697 */
            __auto_type routes  = Leaf_BTree_CStr_Route (Nil_BTree_CStr_Route_pair_t ());
            // ----------
            ((void)(routes -> __h_table -> freeClass ));
            routes ;
          });
          // ----------
          for (int i  = 0; (i  <  2 ); (++i )) {
              { /* cicili#Let706 */
                __auto_type route  = routes_defs [i ];
                typeof((route . __h_0_mem )) path ;
                // ----------
                ;
                ({ /* cicili#Let708 */
                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn709 */
                      (path  =  (route . __h_0_mem ) );
                      true ;
                    }) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block715 */
                      { /* cicili#Let719 */
                        __auto_type match718  = insert_BTree_CStr_Route (routes , path , route );
                        typeof((((match718 . __h_data ). Right ). __h_0_mem )) new_routes ;
                        // ----------
                        ;
                        ({ /* cicili#Let722 */
                          bool __h_case_result  = (true  &&  (((match718 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn723 */
                                (new_routes  =  (((match718 . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block729 */
                              { /* cicili#Block731 */
                                free_BTree_CStr_Route ((&routes ));
                                routes  = new_routes ;
                              }
                            }
                          else
                            { /* cicili#Let737 */
                              typeof((((match718 . __h_data ). Left ). __h_0_mem )) error ;
                              // ----------
                              ;
                              ({ /* cicili#Let739 */
                                bool __h_case_result  = (true  &&  (((match718 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn740 */
                                      (error  =  (((match718 . __h_data ). Left ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                if (__h_case_result )
                                  { /* cicili#Block746 */
                                    { /* cicili#Block748 */
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
      { /* cicili#Let756 */
        typeof((((result . __h_data ). Right ). __h_0_mem )) fd ;
        // ----------
        ;
        ({ /* cicili#Let758 */
          bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn759 */
                (fd  =  (((result . __h_data ). Right ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block765 */
              fprintf (stdout , "FasstCGI server on FD: %d was quitted successfully", fd );
            }
          else
            { /* cicili#Let771 */
              typeof((((result . __h_data ). Left ). __h_0_mem )) err ;
              // ----------
              ;
              ({ /* cicili#Let773 */
                bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn774 */
                      (err  =  (((result . __h_data ). Left ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block780 */
                    { /* cicili#Block782 */
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
