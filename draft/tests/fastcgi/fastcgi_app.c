#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include "draft/fastcgi/router.h"
#include <unistd.h>
void beforeRequest (Request rr ) {
}
void afterRequest (Request rr ) {
}
void __ciciliL_115 (Request rr ) {
  { /* cicili#Let119 */
    typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
    typeof((((rr -> __h_data ). _ ). __h_1_mem )) uri ;
    typeof((((rr -> __h_data ). _ ). __h_2_mem )) method ;
    // ----------
    
    ({ /* cicili#Let123 */
      bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ((({ /* cicili#Progn124 */
                (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn126 */
                (uri  =  (((rr -> __h_data ). _ ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn128 */
              (method  =  (((rr -> __h_data ). _ ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block132 */
          { /* cicili#Block134 */
            FCGX_PutS ("HTTP/1.1 200 OK\r\n", (req -> out ));
            FCGX_PutS ("Content-Type: text/plain\r\n\r\n", (req -> out ));
            FCGX_FPrintF ((req -> out ), "Index page. uri: %s, method: %s\n", uri , method );
            { /* cicili#Let138 */
              __auto_type match137  = param_Request (rr , "QUERY_STRING");
              typeof((((match137 . __h_data ). Just ). __h_0_mem )) query_string ;
              // ----------
              
              ({ /* cicili#Let143 */
                bool __h_case_result  = (true  &&  (((match137 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn144 */
                      (query_string  =  (((match137 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block148 */
                    FCGX_FPrintF ((req -> out ), "QUERY_STRING: %s\n", query_string );
                  }
                else
                  { /* cicili#Let153 */
                    // ----------
                    
                    ({ /* cicili#Let157 */
                      bool __h_case_result  = (true  &&  ((match137 . __h_ctor ) ==  __h_Nothing_t  ) );
                      // ----------
                      if (__h_case_result )
                        { /* cicili#Block160 */
                          FCGX_PutS ("There isn't QUERY_STRING", (req -> out ));
                        }
                    });
                  }
              });
            }
          }
        }
    });
  }
}
void __ciciliL_162 (Request rr ) {
  { /* cicili#Let168 */
    typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
    typeof((((rr -> __h_data ). _ ). __h_3_mem )) query_string ;
    // ----------
    
    ({ /* cicili#Let172 */
      bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  (({ /* cicili#Progn173 */
              (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn175 */
              (query_string  =  (((rr -> __h_data ). _ ). __h_3_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block179 */
          { /* cicili#Let184 */
            __auto_type match182  = query_Request (rr , "phrase");
            typeof((((match182 . __h_data ). Just ). __h_0_mem )) __h_match182_0_arg ;
            typeof((__h_match182_0_arg . __h_0_mem )) phrase ;
            typeof((__h_match182_0_arg . __h_1_mem )) len ;
            // ----------
            
            ({ /* cicili#Let189 */
              bool __h_case_result  = (true  &&  (((match182 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn190 */
                      (__h_match182_0_arg  =  (((match182 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  (({ /* cicili#Progn192 */
                          (phrase  =  (__h_match182_0_arg . __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn194 */
                          (len  =  (__h_match182_0_arg . __h_1_mem ) );
                          true ;
                        }) ) ) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block198 */
                  { /* cicili#Block200 */
                    FCGX_PutS ("HTTP/1.1 200 OK\r\n", (req -> out ));
                    FCGX_PutS ("Content-Type: text/plain\r\n\r\n", (req -> out ));
                    FCGX_PutS ("Search page. phrase: ", (req -> out ));
                    FCGX_FPrintF ((req -> out ), "%.*s", len , phrase );
                    FCGX_FPrintF ((req -> out ), " from query: %s\n", query_string );
                  }
                }
              else
                { /* cicili#Let205 */
                  // ----------
                  
                  ({ /* cicili#Let209 */
                    bool __h_case_result  = (true  &&  ((match182 . __h_ctor ) ==  __h_Nothing_t  ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block212 */
                        FCGX_PutS ("HTTP/1.1 400 Bad Request\r\n", (req -> out ));
                      }
                  });
                }
            });
          }
        }
    });
  }
}
void __ciciliL_214 (Request rr ) {
  { /* cicili#Let220 */
    typeof((((rr -> __h_data ). _ ). __h_0_mem )) req ;
    typeof((((rr -> __h_data ). _ ). __h_2_mem )) method ;
    typeof((((rr -> __h_data ). _ ). __h_4_mem )) post_data ;
    // ----------
    
    ({ /* cicili#Let224 */
      bool __h_case_result  = (true  &&  (((rr -> __h_ctor ) ==  __h___t  ) &&  ((({ /* cicili#Progn225 */
                (req  =  (((rr -> __h_data ). _ ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn227 */
                (method  =  (((rr -> __h_data ). _ ). __h_2_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn229 */
              (post_data  =  (((rr -> __h_data ). _ ). __h_4_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block233 */
          if (strcmp (method , "GET") ==  0 )
            { /* cicili#Block236 */
              FCGX_PutS ("HTTP/1.1 200 OK\r\n", (req -> out ));
              FCGX_PutS ("Content-Type: text/html\r\n\r\n", (req -> out ));
              FCGX_PutS ("<html><head><title>New User</title></head><body>", (req -> out ));
              FCGX_PutS ("<form action\"/newuser\" method=\"post\">", (req -> out ));
              FCGX_PutS ("<br/>User Id: <input type=\"text\" name=\"id\"/>", (req -> out ));
              FCGX_PutS ("<br/>User Name: <input type=\"text\" name=\"name\"/>", (req -> out ));
              FCGX_PutS ("<br/><button type=\"submit\">Register</button>", (req -> out ));
              FCGX_PutS ("</form></body></html>", (req -> out ));
            }
          else
            { /* cicili#Let242 */
              __auto_type match240  = form_Request (rr , "id");
              typeof((((match240 . __h_data ). Just ). __h_0_mem )) __h_match240_0_arg ;
              typeof((__h_match240_0_arg . __h_0_mem )) userId ;
              typeof((__h_match240_0_arg . __h_1_mem )) lenId ;
              // ----------
              
              ({ /* cicili#Let247 */
                bool __h_case_result  = (true  &&  (((match240 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn248 */
                        (__h_match240_0_arg  =  (((match240 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) &&  (true  &&  (({ /* cicili#Progn250 */
                            (userId  =  (__h_match240_0_arg . __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn252 */
                            (lenId  =  (__h_match240_0_arg . __h_1_mem ) );
                            true ;
                          }) ) ) ) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block256 */
                    { /* cicili#Let261 */
                      __auto_type match259  = form_Request (rr , "name");
                      typeof((((match259 . __h_data ). Just ). __h_0_mem )) __h_match259_0_arg ;
                      typeof((__h_match259_0_arg . __h_0_mem )) userName ;
                      typeof((__h_match259_0_arg . __h_1_mem )) lenName ;
                      // ----------
                      
                      ({ /* cicili#Let266 */
                        bool __h_case_result  = (true  &&  (((match259 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn267 */
                                (__h_match259_0_arg  =  (((match259 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) &&  (true  &&  (({ /* cicili#Progn269 */
                                    (userName  =  (__h_match259_0_arg . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn271 */
                                    (lenName  =  (__h_match259_0_arg . __h_1_mem ) );
                                    true ;
                                  }) ) ) ) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block275 */
                            { /* cicili#Block277 */
                              sleep (10);
                              FCGX_PutS ("HTTP/1.1 200 OK\r\n", (req -> out ));
                              FCGX_PutS ("Content-Type: text/html\r\n\r\n", (req -> out ));
                              FCGX_PutS ("<br/>New user page. userId: ", (req -> out ));
                              FCGX_FPrintF ((req -> out ), "%.*s", lenId , userId );
                              FCGX_PutS ("<br/>New user page. userName: ", (req -> out ));
                              FCGX_FPrintF ((req -> out ), "%.*s", lenName , userName );
                              FCGX_FPrintF ((req -> out ), "<br/>from form: %s\n", post_data );
                            }
                          }
                        else
                          { /* cicili#Let282 */
                            // ----------
                            
                            ({ /* cicili#Let286 */
                              bool __h_case_result  = (true  &&  ((match259 . __h_ctor ) ==  __h_Nothing_t  ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block289 */
                                  FCGX_PutS ("HTTP/1.1 400 Bad Request\r\n", (req -> out ));
                                }
                            });
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
int main () {
  ({ /* cicili#Let112 */
    __auto_type result  = ({ /* cicili#Let114 */
      Route routes_defs [] = { { "/index", METHOD_GET , __ciciliL_115 }, { "/search", METHOD_GET , __ciciliL_162 }, { "/newuser", (METHOD_GET  |  METHOD_POST  ), __ciciliL_214 }};
      // ----------
      ({ /* cicili#Let293 */
        __auto_type routes  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let295 */
          __auto_type routes  = Leaf_BTree_CStr_Route (Nil_BTree_CStr_Route_pair_t ());
          // ----------
          ((void)(routes -> __h_table -> freeClass ));
          routes ;
        });
        // ----------
        for (int i  = 0; (i  <  3 ); (++i )) {
            { /* cicili#Let304 */
              __auto_type route  = routes_defs [i ];
              typeof((route . __h_0_mem )) path ;
              // ----------
              
              ({ /* cicili#Let308 */
                bool __h_case_result  = (true  &&  ({ /* cicili#Progn309 */
                    (path  =  (route . __h_0_mem ) );
                    true ;
                  }) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block313 */
                    { /* cicili#Let317 */
                      __auto_type match316  = insert_BTree_CStr_Route (routes , path , route );
                      typeof((((match316 . __h_data ). Right ). __h_0_mem )) new_routes ;
                      // ----------
                      
                      ({ /* cicili#Let322 */
                        bool __h_case_result  = (true  &&  (((match316 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn323 */
                              (new_routes  =  (((match316 . __h_data ). Right ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block327 */
                            { /* cicili#Block329 */
                              free_BTree_CStr_Route ((&routes ));
                              routes  = new_routes ;
                            }
                          }
                        else
                          { /* cicili#Let335 */
                            typeof((((match316 . __h_data ). Left ). __h_0_mem )) error ;
                            // ----------
                            
                            ({ /* cicili#Let339 */
                              bool __h_case_result  = (true  &&  (((match316 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn340 */
                                    (error  =  (((match316 . __h_data ). Left ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block344 */
                                  { /* cicili#Block346 */
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
    { /* cicili#Let354 */
      typeof((((result . __h_data ). Right ). __h_0_mem )) fd ;
      // ----------
      
      ({ /* cicili#Let358 */
        bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn359 */
              (fd  =  (((result . __h_data ). Right ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block363 */
            fprintf (stdout , "FasstCGI server on FD: %d was quitet successfully", fd );
          }
        else
          { /* cicili#Let369 */
            typeof((((result . __h_data ). Left ). __h_0_mem )) err ;
            // ----------
            
            ({ /* cicili#Let373 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn374 */
                    (err  =  (((result . __h_data ). Left ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block378 */
                  { /* cicili#Block380 */
                    fprintf (stdout , "FasstCGI server was quitet with error: ");
                    show_RouterError (err );
                  }
                }
            });
          }
      });
    }
  });
  return EXIT_SUCCESS ;
}
