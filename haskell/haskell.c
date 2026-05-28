#include "../haskell.h"
#ifndef __CICILI_HASKELL_H_IMPL__
#define __CICILI_HASKELL_H_IMPL__
void __h_free_data_router (void * instance ) {
  void __h_free_ (void *** instance ) {
    ((        void (*)(void * this ))(*(*instance )))(instance );
  }
  __h_free_ (instance );
}
void __h_free_class_router (void * instance ) {
  void __h_free_ (void *** instance ) {
    ((        void (*)(void * this ))(*(*((void ***)(*instance )))))(instance );
  }
  __h_free_ (instance );
}
static BoxedList_BoxedList___h_StackItem __h_stack_private ;
static BoxedList_BoxedList___h_StackItem __h_stack_realloc ;
static BoxedList___h_StackItem __h_stack_current ;
static bool __h_stack_initialized ;
static int __h_stack_level ;
void __h_init_haskell () {
  __h_stack_private  = BoxedNil_BoxedList___h_StackItem ();
  __h_stack_realloc  = BoxedNil_BoxedList___h_StackItem ();
  __h_stack_current  = BoxedNil___h_StackItem ();
  __h_stack_initialized  = true ;
  __h_stack_level  = 0;
}
void * __h_stack_push (CVoid pointer ) {
  if (__h_stack_initialized )
    { /* cicili#Block4307 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , pointer , (*((size_t *)pointer ))}), __h_stack_current );
    }
  return pointer ;
}
void __h_stack_push_func (CStr func_name ) {
  if (__h_stack_initialized )
    { /* cicili#Block4313 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ (++__h_stack_level ), ((CVoid)func_name ), 0}), __h_stack_current );
    }
}
void __h_stack_push_data (CStr buffer ) {
  if (__h_stack_initialized )
    { /* cicili#Block4319 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , ((CVoid)buffer ), 1}), __h_stack_current );
    }
}
void __h_stack_push_separator () {
  if (__h_stack_initialized )
    { /* cicili#Block4325 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , 0, 0}), __h_stack_current );
    }
}
void __h_stack_show_item (BoxedList___h_StackItem stack , int counter ) {
  ({ /* cicili#Let4330 */
    __auto_type __h_matchbox  = stack ;
    // ----------
    { /* cicili#Let4334 */
      __auto_type match4333  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
      typeof((((match4333 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      
      ({ /* cicili#Let4339 */
        bool __h_case_result  = (true  &&  (((match4333 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4340 */
              (unboxed  =  (((match4333 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4344 */
            { /* cicili#Let4348 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              
              ({ /* cicili#Let4352 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4353 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn4355 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block4359 */
                    { /* cicili#Let4363 */
                      typeof((head . __h_0_mem )) level ;
                      typeof((head . __h_1_mem )) pointer ;
                      typeof((head . __h_2_mem )) address ;
                      // ----------
                      
                      ({ /* cicili#Let4367 */
                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4368 */
                                (level  =  (head . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4370 */
                                (pointer  =  (head . __h_1_mem ) );
                                true ;
                              }) ) &&  ({ /* cicili#Progn4372 */
                              (address  =  (head . __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block4376 */
                            if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                              ({ /* cicili#Let4380 */
                                __auto_type __h_matchbox  = tail ;
                                // ----------
                                { /* cicili#Let4384 */
                                  __auto_type match4383  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match4383 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  
                                  ({ /* cicili#Let4389 */
                                    bool __h_case_result  = (true  &&  (((match4383 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4390 */
                                          (unboxed  =  (((match4383 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block4394 */
                                        { /* cicili#Let4398 */
                                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) fhead ;
                                          typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                          // ----------
                                          
                                          ({ /* cicili#Let4402 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4403 */
                                                    (fhead  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn4405 */
                                                    (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            if (__h_case_result )
                                              { /* cicili#Block4409 */
                                                { /* cicili#Let4413 */
                                                  typeof((fhead . __h_0_mem )) flevel ;
                                                  typeof((fhead . __h_1_mem )) fpointer ;
                                                  typeof((fhead . __h_2_mem )) faddress ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let4417 */
                                                    bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4418 */
                                                            (flevel  =  (fhead . __h_0_mem ) );
                                                            true ;
                                                          }) &&  ({ /* cicili#Progn4420 */
                                                            (fpointer  =  (fhead . __h_1_mem ) );
                                                            true ;
                                                          }) ) &&  ({ /* cicili#Progn4422 */
                                                          (faddress  =  (fhead . __h_2_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    if (__h_case_result )
                                                      { /* cicili#Block4426 */
                                                        if (faddress  ==  0 )
                                                          { /* cicili#Block4429 */
                                                            printf ("%*d,%*d%*cstack trace function: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                            __h_stack_show_item (ftail , counter );
                                                          }
                                                        else
                                                          { /* cicili#Block4432 */
                                                            printf ("%*d,%*d%*cstack trace data: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                            __h_stack_show_item (ftail , counter );
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
                              });
                            else
                              {
                              if (pointer  &&  ((*((size_t *)pointer )) ==  address  ) )
                                { /* cicili#Block4436 */
                                  printf ("%*d,%*d%*c* alive pointer: %p points to address: %zx *\n", 4, counter , 4, level , level , ' ', pointer , address );
                                  __h_stack_show_item (tail , counter );
                                }
                              else
                                { /* cicili#Block4439 */
                                  printf ("%*d,%*d%*c+ dead pointer: %p points to address: %zx +\n", 4, counter , 4, level , level , ' ', pointer , address );
                                  __h_stack_show_item (tail , counter );
                                }
                              }                          }
                      });
                    }
                  }
              });
            }
          }
      });
    }
  });
}
void __h_stack_show () {
  void __h_stack_iter_ (BoxedList_BoxedList___h_StackItem stack , int counter ) {
    while (true ) {
        ({ /* cicili#Let4445 */
          __auto_type __h_matchbox  = stack ;
          // ----------
          { /* cicili#Let4449 */
            __auto_type match4448  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4448 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            
            ({ /* cicili#Let4454 */
              bool __h_case_result  = (true  &&  (((match4448 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4455 */
                    (unboxed  =  (((match4448 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4459 */
                  { /* cicili#Let4463 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    
                    ({ /* cicili#Let4467 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4468 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn4470 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      if (__h_case_result )
                        { /* cicili#Block4474 */
                          { /* cicili#Block4476 */
                            __h_stack_show_item (head , (++counter ));
                            stack  = tail ;
                          }
                        }
                      else
                        { /* cicili#Let4481 */
                          // ----------
                          
                          { /* cicili#Block4485 */
                            break ;
                          }
                        }
                    });
                  }
                }
            });
          }
        });
    }
  }
  if (__h_stack_initialized )
    { /* cicili#Block4489 */
      printf ("--- [Cicili analyzer stack trace (show state only)]:\n");
      __h_stack_iter_ (__h_stack_private , 0);
      printf ("--- [stack trace reallocated (show state only)]:\n");
      __h_stack_iter_ (__h_stack_realloc , 0);
      printf ("--- [stack trace end]\n");
    }
}
BoxedList_BoxedList___h_StackItem __h_stack () {
  return __h_stack_private ;
}
void __h_stack_free (BoxedList_BoxedList___h_StackItem * pin ) {
  void __h_stack_free_ (BoxedList___h_StackItem stack , bool isAlive ) {
    ({ /* cicili#Let4495 */
      __auto_type __h_matchbox  = stack ;
      // ----------
      { /* cicili#Let4499 */
        __auto_type match4498  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4498 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let4504 */
          bool __h_case_result  = (true  &&  (((match4498 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4505 */
                (unboxed  =  (((match4498 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block4509 */
              { /* cicili#Let4513 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let4517 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4518 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4520 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block4524 */
                      { /* cicili#Let4528 */
                        typeof((head . __h_1_mem )) pointer ;
                        typeof((head . __h_2_mem )) address ;
                        // ----------
                        
                        ({ /* cicili#Let4532 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn4533 */
                                (pointer  =  (head . __h_1_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4535 */
                                (address  =  (head . __h_2_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block4539 */
                              if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                                ({ /* cicili#Let4543 */
                                  __auto_type __h_matchbox  = tail ;
                                  // ----------
                                  { /* cicili#Let4547 */
                                    __auto_type match4546  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match4546 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    
                                    ({ /* cicili#Let4552 */
                                      bool __h_case_result  = (true  &&  (((match4546 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4553 */
                                            (unboxed  =  (((match4546 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block4557 */
                                          { /* cicili#Let4561 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                            // ----------
                                            
                                            ({ /* cicili#Let4565 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4566 */
                                                    (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block4570 */
                                                  if (isAlive )
                                                    { /* cicili#Block4573 */
                                                      __h_stack_current  = clone_Box_BoxedList___h_StackItem (ftail );
                                                    }
                                                  else
                                                    { /* cicili#Block4577 */
                                                      ({ /* cicili#Let4580 */
                                                        __auto_type tmp  = clone_Box_BoxedList___h_StackItem (ftail );
                                                        // ----------
                                                        free_Box_BoxedList___h_StackItem ((&__h_stack_current ));
                                                        __h_stack_current  = tmp ;
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
                                {
                                if (pointer  &&  ((*((size_t *)pointer )) ==  address  ) )
                                  { /* cicili#Block4586 */
                                    __h_stack_private  = BoxedCons_BoxedList___h_StackItem (clone_Box_BoxedList___h_StackItem (stack ), __h_stack_private );
                                    free_Box_BoxedList___h_StackItem ((&__h_stack_current ));
                                    __h_stack_free_ (tail , true );
                                  }
                                else
                                  { /* cicili#Block4592 */
                                    ({ /* cicili#Let4595 */
                                      __auto_type tmp  = clone_Box_BoxedList___h_StackItem (tail );
                                      // ----------
                                      free_Box_BoxedList___h_StackItem ((&__h_stack_current ));
                                      __h_stack_current  = tmp ;
                                      __h_stack_free_ (tail , false );
                                    });
                                  }
                                }                            }
                        });
                      }
                    }
                });
              }
            }
        });
      }
    });
  }
  (--__h_stack_level );
  if (__h_stack_initialized )
    { /* cicili#Block4601 */
      __h_stack_free_ (__h_stack_current , false );
    }
}
void __h_stack_free_main (BoxedList_BoxedList___h_StackItem * pin ) {
  bool __h_stack_show_ (BoxedList___h_StackItem stack , int counter ) {
    ({ /* cicili#Let4606 */
      __auto_type __h_matchbox  = stack ;
      // ----------
      { /* cicili#Let4610 */
        __auto_type match4609  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4609 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let4615 */
          bool __h_case_result  = (true  &&  (((match4609 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4616 */
                (unboxed  =  (((match4609 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block4620 */
              { /* cicili#Let4624 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let4628 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4629 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4631 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block4635 */
                      { /* cicili#Let4639 */
                        typeof((head . __h_0_mem )) level ;
                        typeof((head . __h_1_mem )) pointer ;
                        typeof((head . __h_2_mem )) address ;
                        // ----------
                        
                        ({ /* cicili#Let4643 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4644 */
                                  (level  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4646 */
                                  (pointer  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4648 */
                                (address  =  (head . __h_2_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block4652 */
                              if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                                ({ /* cicili#Let4656 */
                                  __auto_type __h_matchbox  = tail ;
                                  // ----------
                                  { /* cicili#Let4660 */
                                    __auto_type match4659  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match4659 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    
                                    ({ /* cicili#Let4665 */
                                      bool __h_case_result  = (true  &&  (((match4659 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4666 */
                                            (unboxed  =  (((match4659 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      if (__h_case_result )
                                        { /* cicili#Block4670 */
                                          { /* cicili#Let4674 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) fhead ;
                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                            // ----------
                                            
                                            ({ /* cicili#Let4678 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4679 */
                                                      (fhead  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) &&  ({ /* cicili#Progn4681 */
                                                      (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                      true ;
                                                    }) ) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block4685 */
                                                  { /* cicili#Let4689 */
                                                    typeof((fhead . __h_0_mem )) flevel ;
                                                    typeof((fhead . __h_1_mem )) fpointer ;
                                                    typeof((fhead . __h_2_mem )) faddress ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let4693 */
                                                      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4694 */
                                                              (flevel  =  (fhead . __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn4696 */
                                                              (fpointer  =  (fhead . __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  ({ /* cicili#Progn4698 */
                                                            (faddress  =  (fhead . __h_2_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      if (__h_case_result )
                                                        { /* cicili#Block4702 */
                                                          if (faddress  ==  0 )
                                                            { /* cicili#Block4705 */
                                                              printf ("%*d,%*d%*cstack trace function: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                              __h_stack_show_ (ftail , counter );
                                                            }
                                                          else
                                                            { /* cicili#Block4708 */
                                                              printf ("%*d,%*d%*cstack trace data: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                              __h_stack_show_ (ftail , counter );
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
                                });
                              else
                                { /* cicili#Block4711 */
                                  if (pointer  &&  ((*((size_t *)pointer )) ==  address  ) )
                                    { /* cicili#Block4714 */
                                      printf ("%*d,%*d%*c* alive pointer: %p points to address: %zx *\n", 4, counter , 4, level , level , ' ', pointer , address );
                                      __h_stack_show_ (tail , counter );
                                    }
                                  else
                                    return false ;
                                }
                            }
                          else
                            { /* cicili#Let4720 */
                              // ----------
                              
                              { /* cicili#Block4724 */
                                return false ;
                              }
                            }
                        });
                      }
                    }
                  else
                    { /* cicili#Let4729 */
                      // ----------
                      
                      { /* cicili#Block4733 */
                        return false ;
                      }
                    }
                });
              }
            }
        });
      }
    });
    return true ;
  }
  void __h_stack_iter_ (BoxedList_BoxedList___h_StackItem stack , int counter ) {
    while (true ) {
        ({ /* cicili#Let4738 */
          __auto_type __h_matchbox  = stack ;
          // ----------
          { /* cicili#Let4742 */
            __auto_type match4741  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4741 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            
            ({ /* cicili#Let4747 */
              bool __h_case_result  = (true  &&  (((match4741 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4748 */
                    (unboxed  =  (((match4741 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4752 */
                  { /* cicili#Let4756 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    
                    ({ /* cicili#Let4760 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4761 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn4763 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      if (__h_case_result )
                        { /* cicili#Block4767 */
                          { /* cicili#Block4769 */
                            stack  = tail ;
                            ((__h_stack_show_ (head , (++counter ))) ? counter  : (--counter ));
                            free_Box_BoxedList___h_StackItem ((&head ));
                          }
                        }
                      else
                        { /* cicili#Let4775 */
                          // ----------
                          
                          { /* cicili#Block4779 */
                            break ;
                          }
                        }
                    });
                  }
                }
            });
          }
        });
    }
  }
  if (__h_stack_initialized )
    { /* cicili#Block4783 */
      __h_stack_free (pin );
      printf ("--- [Cicili analyzer stack trace]:\n");
      __h_stack_iter_ (__h_stack_private , 0);
      printf ("--- [stack trace end]\n");
    }
}
#ifndef __Maybe___h_StackItem__H_IMPL__
#define __Maybe___h_StackItem__H_IMPL__
void free_Maybe___h_StackItem (Maybe___h_StackItem * this ) {
}
const Maybe___h_StackItem__H_Table * const get_Maybe___h_StackItem__H_Table () {
  static const Maybe___h_StackItem__H_Table table  = { free_Maybe___h_StackItem };
  return (&table );
}
Maybe___h_StackItem Just___h_StackItem (__h_StackItem value ) {
  { /* cicili#Let4800 */
    Maybe___h_StackItem instance  = ((Maybe___h_StackItem){ get_Maybe___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe___h_StackItem Nothing___h_StackItem () {
  { /* cicili#Let4805 */
    Maybe___h_StackItem instance  = ((Maybe___h_StackItem){ get_Maybe___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe___h_StackItem__H_IMPL__ */ 
#ifndef __BoxedList___h_StackItem__H_IMPL__
#define __BoxedList___h_StackItem__H_IMPL__
#ifndef __Maybe_BoxedList___h_StackItem_x__H_IMPL__
#define __Maybe_BoxedList___h_StackItem_x__H_IMPL__
void free_Maybe_BoxedList___h_StackItem_x (Maybe_BoxedList___h_StackItem_x * this ) {
}
const Maybe_BoxedList___h_StackItem_x__H_Table * const get_Maybe_BoxedList___h_StackItem_x__H_Table () {
  static const Maybe_BoxedList___h_StackItem_x__H_Table table  = { free_Maybe_BoxedList___h_StackItem_x };
  return (&table );
}
Maybe_BoxedList___h_StackItem_x Just_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x value ) {
  { /* cicili#Let4825 */
    Maybe_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList___h_StackItem_x){ get_Maybe_BoxedList___h_StackItem_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem_x Nothing_BoxedList___h_StackItem_x () {
  { /* cicili#Let4830 */
    Maybe_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList___h_StackItem_x){ get_Maybe_BoxedList___h_StackItem_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList___h_StackItem_x__H_IMPL__ */ 
#ifndef __Box_BoxedList___h_StackItem__H_IMPL__
#define __Box_BoxedList___h_StackItem__H_IMPL__
Box_BoxedList___h_StackItem new_Box_BoxedList___h_StackItem (BoxedList___h_StackItem_x pointer ) {
  return ({ /* cicili#Let4837 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BoxedList___h_StackItem_x *)malloc (sizeof(BoxedList___h_StackItem_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BoxedList___h_StackItem_x (holder , count , ((size_t)pointer ));
    });
}
Box_BoxedList___h_StackItem clone_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let4846 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let4850 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4851 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4853 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4855 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4858 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4861 */
                (++(*count ));
                __h_Hold_BoxedList___h_StackItem_x (pointer , count , address );
              }) : Gone_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let4867 */
            // ----------
            
            ({ /* cicili#Progn4871 */
              Gone_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList___h_StackItem_x take_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this ) {
  return ({ /* cicili#Let4879 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let4883 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4884 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4886 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4888 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4891 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4895 */
                __auto_type result  = Just_BoxedList___h_StackItem_x ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block4901 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BoxedList___h_StackItem_x ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let4908 */
            // ----------
            
            ({ /* cicili#Progn4912 */
              Nothing_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList___h_StackItem_x get_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let4920 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let4924 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4925 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4927 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4929 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4932 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BoxedList___h_StackItem_x ((*pointer )) : Nothing_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let4939 */
            // ----------
            
            ({ /* cicili#Progn4943 */
              Nothing_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this ) {
  { /* cicili#Let4952 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let4956 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4957 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4959 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4961 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4965 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block4969 */
              if ((*count ) ==  1 )
                { /* cicili#Block4972 */
                  free_BoxedList___h_StackItem_x (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_BoxedList___h_StackItem_x ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let4982 */
          // ----------
          
          ({ /* cicili#Let4986 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block4989 */
              }
          });
        }
    });
  }
}
const Box_BoxedList___h_StackItem__H_Table * const get_Box_BoxedList___h_StackItem__H_Table () {
  static const Box_BoxedList___h_StackItem__H_Table table  = { free_Box_BoxedList___h_StackItem , new_Box_BoxedList___h_StackItem , clone_Box_BoxedList___h_StackItem , take_Box_BoxedList___h_StackItem , get_Box_BoxedList___h_StackItem };
  return (&table );
}
Box_BoxedList___h_StackItem __h_Hold_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x * pointer , int * count , size_t address ) {
  { /* cicili#Let5000 */
    Box_BoxedList___h_StackItem instance  = ((Box_BoxedList___h_StackItem){ get_Box_BoxedList___h_StackItem__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_BoxedList___h_StackItem Gone_BoxedList___h_StackItem_x () {
  { /* cicili#Let5005 */
    Box_BoxedList___h_StackItem instance  = ((Box_BoxedList___h_StackItem){ get_Box_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_BoxedList___h_StackItem__H_IMPL__ */ 
__h_StackItem * toArray_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem term ) {
  __h_StackItem * array (BoxedList___h_StackItem list , int count ) {
    return ({ /* cicili#Let5012 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5016 */
          __auto_type match5015  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5015 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let5021 */
            bool __h_case_result  = (true  &&  (((match5015 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5022 */
                  (unboxed  =  (((match5015 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn5025 */
                ({ /* cicili#Let5029 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let5033 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5034 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5036 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn5039 */
                        ({ /* cicili#Let5041 */
                          __h_StackItem * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let5045 */
                        // ----------
                        
                        ({ /* cicili#Progn5049 */
                          ({ /* cicili#Let5051 */
                            __h_StackItem * arr  = calloc (count , sizeof(__h_StackItem));
                            // ----------
                            arr [(count  -  1 )] = term ;
                            arr ;
                          });
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5055 */
                // ----------
                
                ({ /* cicili#Progn5059 */
                  ({ /* cicili#Let5061 */
                    __h_StackItem * arr  = calloc (count , sizeof(__h_StackItem));
                    // ----------
                    arr [(count  -  1 )] = term ;
                    arr ;
                  });
                });
              }));
          });
        });
      });
  }
  return array (list , 0);
}
BoxedList___h_StackItem wrap_BoxedList___h_StackItem (const __h_StackItem item ) {
  return BoxedCons___h_StackItem (item , BoxedNil___h_StackItem ());
}
BoxedList___h_StackItem pure_BoxedList___h_StackItem (const __h_StackItem * buf , int len ) {
  return (((buf  ==  NULL  )) ? BoxedNil___h_StackItem () : ({ /* cicili#Let5072 */
        __h_StackItem item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil___h_StackItem () : BoxedCons___h_StackItem (item , pure_BoxedList___h_StackItem ((++buf ), (--len ))));
      }));
}
int show_BoxedList___h_StackItem (CFile file , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5081 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5085 */
        __auto_type match5084  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5084 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let5090 */
          bool __h_case_result  = (true  &&  (((match5084 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5091 */
                (unboxed  =  (((match5084 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5094 */
              ({ /* cicili#Let5098 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let5102 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5103 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5105 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5108 */
                      (({ /* cicili#Let5111 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let5115 */
                            __auto_type match5114  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match5114 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            
                            ({ /* cicili#Let5120 */
                              bool __h_case_result  = (true  &&  (((match5114 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5121 */
                                    (unboxed  =  (((match5114 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn5124 */
                                  ({ /* cicili#Let5128 */
                                    // ----------
                                    
                                    ({ /* cicili#Let5132 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn5134 */
                                          (({ /* cicili#Let5142 */
                                              typeof((head . __h_0_mem )) level ;
                                              typeof((head . __h_1_mem )) pointer ;
                                              typeof((head . __h_2_mem )) address ;
                                              // ----------
                                              
                                              ({ /* cicili#Let5146 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn5147 */
                                                        (level  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5149 */
                                                        (pointer  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  ({ /* cicili#Progn5151 */
                                                      (address  =  (head . __h_2_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn5154 */
                                                    fprintf (file , "%d, %p: %zu", level , pointer , address );
                                                  }) : ({ /* cicili#Let5158 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn5162 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", "\n") );
                                        }) : ({ /* cicili#Let5166 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn5170 */
                                            ({ /* cicili#Let5178 */
                                              typeof((head . __h_0_mem )) level ;
                                              typeof((head . __h_1_mem )) pointer ;
                                              typeof((head . __h_2_mem )) address ;
                                              // ----------
                                              
                                              ({ /* cicili#Let5182 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn5183 */
                                                        (level  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5185 */
                                                        (pointer  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  ({ /* cicili#Progn5187 */
                                                      (address  =  (head . __h_2_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn5190 */
                                                    fprintf (file , "%d, %p: %zu", level , pointer , address );
                                                  }) : ({ /* cicili#Let5194 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn5198 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let5202 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn5206 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_BoxedList___h_StackItem (file , tail ) );
                    }) : ({ /* cicili#Let5211 */
                      // ----------
                      
                      ({ /* cicili#Progn5215 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5219 */
              // ----------
              
              ({ /* cicili#Progn5223 */
                0;
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem copy_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5228 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5232 */
        __auto_type match5231  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5231 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let5237 */
          bool __h_case_result  = (true  &&  (((match5231 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5238 */
                (unboxed  =  (((match5231 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5241 */
              ({ /* cicili#Let5245 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let5249 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5250 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5252 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5255 */
                      BoxedCons___h_StackItem (head , copy_BoxedList___h_StackItem (tail ));
                    }) : ({ /* cicili#Let5261 */
                      // ----------
                      
                      ({ /* cicili#Progn5265 */
                        BoxedNil___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5270 */
              // ----------
              
              ({ /* cicili#Progn5274 */
                BoxedNil___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem replaceAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , int index ) {
  return ({ /* cicili#Let5280 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5284 */
        __auto_type match5283  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5283 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let5289 */
          bool __h_case_result  = (true  &&  (((match5283 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5290 */
                (unboxed  =  (((match5283 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5293 */
              ({ /* cicili#Let5297 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let5301 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5302 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5304 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5307 */
                      BoxedCons___h_StackItem (head , replaceAt_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let5313 */
                      // ----------
                      
                      ({ /* cicili#Progn5317 */
                        ({ /* cicili#Let5320 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let5324 */
                            __auto_type match5323  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match5323 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            
                            ({ /* cicili#Let5329 */
                              bool __h_case_result  = (true  &&  (((match5323 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5330 */
                                    (unboxed  =  (((match5323 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn5333 */
                                  ({ /* cicili#Let5337 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    
                                    ({ /* cicili#Let5341 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5342 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn5345 */
                                          BoxedCons___h_StackItem (item , taill );
                                        }) : ({ /* cicili#Let5350 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn5354 */
                                            clone_Box_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let5359 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn5363 */
                                    clone_Box_BoxedList___h_StackItem (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5368 */
              // ----------
              
              ({ /* cicili#Progn5372 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem deleteAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , int index ) {
  return ({ /* cicili#Let5378 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5382 */
        __auto_type match5381  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5381 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let5387 */
          bool __h_case_result  = (true  &&  (((match5381 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5388 */
                (unboxed  =  (((match5381 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5391 */
              ({ /* cicili#Let5395 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let5399 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5400 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5402 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5405 */
                      BoxedCons___h_StackItem (head , deleteAt_BoxedList___h_StackItem (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let5411 */
                      // ----------
                      
                      ({ /* cicili#Progn5415 */
                        ({ /* cicili#Let5418 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let5422 */
                            __auto_type match5421  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match5421 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            
                            ({ /* cicili#Let5427 */
                              bool __h_case_result  = (true  &&  (((match5421 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5428 */
                                    (unboxed  =  (((match5421 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn5431 */
                                  ({ /* cicili#Let5435 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    
                                    ({ /* cicili#Let5439 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5440 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn5443 */
                                          taill ;
                                        }) : ({ /* cicili#Let5447 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn5451 */
                                            clone_Box_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let5456 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn5460 */
                                    clone_Box_BoxedList___h_StackItem (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5465 */
              // ----------
              
              ({ /* cicili#Progn5469 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem insertAt_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , int index ) {
  return ({ /* cicili#Let5475 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let5479 */
        __auto_type match5478  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5478 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let5484 */
          bool __h_case_result  = (true  &&  (((match5478 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5485 */
                (unboxed  =  (((match5478 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5488 */
              ({ /* cicili#Let5492 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let5496 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5497 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5499 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5502 */
                      BoxedCons___h_StackItem (head , insertAt_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let5508 */
                      // ----------
                      
                      ({ /* cicili#Progn5512 */
                        BoxedCons___h_StackItem (item , llist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5517 */
              // ----------
              
              ({ /* cicili#Progn5521 */
                BoxedCons___h_StackItem (item , llist );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem replace_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let5528 */
      __auto_type match5527  = get_Box_BoxedList___h_StackItem (list );
      typeof((((match5527 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      
      ({ /* cicili#Let5533 */
        bool __h_case_result  = (true  &&  (((match5527 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5534 */
              (listp  =  (((match5527 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5537 */
            ({ /* cicili#Let5541 */
              __auto_type match5540  = get_Box_BoxedList___h_StackItem (aimed );
              typeof((((match5540 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              
              ({ /* cicili#Let5546 */
                bool __h_case_result  = (true  &&  (((match5540 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5547 */
                      (aimedp  =  (((match5540 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5550 */
                    ({ /* cicili#Let5554 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      
                      ({ /* cicili#Let5558 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5559 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5561 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn5564 */
                            BoxedCons___h_StackItem (head , replace_BoxedList___h_StackItem (tail , item , aimed ));
                          }) : ({ /* cicili#Let5570 */
                            // ----------
                            
                            ({ /* cicili#Progn5574 */
                              ({ /* cicili#Let5578 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                
                                ({ /* cicili#Let5582 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5583 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn5586 */
                                      BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (taill ));
                                    }) : ({ /* cicili#Let5592 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn5596 */
                                        clone_Box_BoxedList___h_StackItem (aimed );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5601 */
                    // ----------
                    
                    ({ /* cicili#Progn5605 */
                      clone_Box_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5610 */
            // ----------
            
            ({ /* cicili#Progn5614 */
              clone_Box_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList___h_StackItem delete_BoxedList___h_StackItem (BoxedList___h_StackItem list , BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let5621 */
      __auto_type match5620  = get_Box_BoxedList___h_StackItem (list );
      typeof((((match5620 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      
      ({ /* cicili#Let5626 */
        bool __h_case_result  = (true  &&  (((match5620 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5627 */
              (listp  =  (((match5620 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5630 */
            ({ /* cicili#Let5634 */
              __auto_type match5633  = get_Box_BoxedList___h_StackItem (aimed );
              typeof((((match5633 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              
              ({ /* cicili#Let5639 */
                bool __h_case_result  = (true  &&  (((match5633 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5640 */
                      (aimedp  =  (((match5633 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5643 */
                    ({ /* cicili#Let5647 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      
                      ({ /* cicili#Let5651 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5652 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5654 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn5657 */
                            BoxedCons___h_StackItem (head , delete_BoxedList___h_StackItem (tail , aimed ));
                          }) : ({ /* cicili#Let5663 */
                            // ----------
                            
                            ({ /* cicili#Progn5667 */
                              ({ /* cicili#Let5671 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                
                                ({ /* cicili#Let5675 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5676 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn5679 */
                                      clone_Box_BoxedList___h_StackItem (taill );
                                    }) : ({ /* cicili#Let5684 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn5688 */
                                        BoxedNil___h_StackItem ();
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5693 */
                    // ----------
                    
                    ({ /* cicili#Progn5697 */
                      clone_Box_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5702 */
            // ----------
            
            ({ /* cicili#Progn5706 */
              clone_Box_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList___h_StackItem insert_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let5713 */
      __auto_type match5712  = get_Box_BoxedList___h_StackItem (llist );
      typeof((((match5712 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      
      ({ /* cicili#Let5718 */
        bool __h_case_result  = (true  &&  (((match5712 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5719 */
              (llistp  =  (((match5712 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn5722 */
            ({ /* cicili#Let5726 */
              __auto_type match5725  = get_Box_BoxedList___h_StackItem (rlist );
              typeof((((match5725 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              
              ({ /* cicili#Let5731 */
                bool __h_case_result  = (true  &&  (((match5725 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5732 */
                      (rlistp  =  (((match5725 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5735 */
                    ({ /* cicili#Let5739 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      
                      ({ /* cicili#Let5743 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5744 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5746 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn5749 */
                            BoxedCons___h_StackItem (head , insert_BoxedList___h_StackItem (tail , item , rlist ));
                          }) : ({ /* cicili#Let5755 */
                            // ----------
                            
                            ({ /* cicili#Progn5759 */
                              BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5765 */
                    // ----------
                    
                    ({ /* cicili#Progn5769 */
                      ({ /* cicili#Let5772 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5774 */
                          __auto_type nil_item  = BoxedNil___h_StackItem ();
                          // ----------
                          ((void)((nil_item . __h_table )-> freeData ));
                          nil_item ;
                        });
                        // ----------
                        insert_BoxedList___h_StackItem (llist , item , nil_item );
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5781 */
            // ----------
            
            ({ /* cicili#Progn5785 */
              BoxedCons___h_StackItem (item , rlist );
            });
          }));
      });
    });
}
BoxedList___h_StackItem reverse_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  BoxedList___h_StackItem _reverse (BoxedList___h_StackItem list , BoxedList___h_StackItem rlist ) {
    return ({ /* cicili#Let5792 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5796 */
          __auto_type match5795  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5795 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let5801 */
            bool __h_case_result  = (true  &&  (((match5795 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5802 */
                  (unboxed  =  (((match5795 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn5805 */
                ({ /* cicili#Let5809 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let5813 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5814 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5816 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn5819 */
                        _reverse (tail , BoxedCons___h_StackItem (head , rlist ));
                      }) : ({ /* cicili#Let5824 */
                        // ----------
                        
                        ({ /* cicili#Progn5828 */
                          rlist ;
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5832 */
                // ----------
                
                ({ /* cicili#Progn5836 */
                  rlist ;
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let5839 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5843 */
        __auto_type match5842  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5842 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let5848 */
          bool __h_case_result  = (true  &&  (((match5842 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5849 */
                (unboxed  =  (((match5842 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5852 */
              ({ /* cicili#Let5856 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let5860 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5861 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5863 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5866 */
                      _reverse (tail , BoxedCons___h_StackItem (head , BoxedNil___h_StackItem ()));
                    }) : ({ /* cicili#Let5872 */
                      // ----------
                      
                      ({ /* cicili#Progn5876 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5880 */
              // ----------
              
              ({ /* cicili#Progn5884 */
                list ;
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem append_BoxedList___h_StackItem (BoxedList___h_StackItem llist , BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let5889 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let5893 */
        __auto_type match5892  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5892 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let5898 */
          bool __h_case_result  = (true  &&  (((match5892 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5899 */
                (unboxed  =  (((match5892 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5902 */
              ({ /* cicili#Let5906 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let5910 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5911 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5913 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5916 */
                      BoxedCons___h_StackItem (head , append_BoxedList___h_StackItem (tail , rlist ));
                    }) : ({ /* cicili#Let5922 */
                      // ----------
                      
                      ({ /* cicili#Progn5926 */
                        clone_Box_BoxedList___h_StackItem (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5931 */
              // ----------
              
              ({ /* cicili#Progn5935 */
                clone_Box_BoxedList___h_StackItem (rlist );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem push_BoxedList___h_StackItem (__h_StackItem item , BoxedList___h_StackItem list ) {
  return BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (list ));
}
BoxedList___h_StackItem take_BoxedList___h_StackItem (int len , BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? BoxedNil___h_StackItem () : ({ /* cicili#Let5947 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5951 */
          __auto_type match5950  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5950 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let5956 */
            bool __h_case_result  = (true  &&  (((match5950 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5957 */
                  (unboxed  =  (((match5950 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn5960 */
                ({ /* cicili#Let5964 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let5968 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5969 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5971 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn5974 */
                        BoxedCons___h_StackItem (head , take_BoxedList___h_StackItem ((--len ), tail ));
                      }) : ({ /* cicili#Let5980 */
                        // ----------
                        
                        ({ /* cicili#Progn5984 */
                          BoxedNil___h_StackItem ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5989 */
                // ----------
                
                ({ /* cicili#Progn5993 */
                  BoxedNil___h_StackItem ();
                });
              }));
          });
        });
      }));
}
BoxedList___h_StackItem last_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5999 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6003 */
        __auto_type match6002  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6002 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6008 */
          bool __h_case_result  = (true  &&  (((match6002 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6009 */
                (unboxed  =  (((match6002 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6012 */
              ({ /* cicili#Let6016 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6020 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6021 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6024 */
                      ({ /* cicili#Let6027 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let6031 */
                          __auto_type match6030  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match6030 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let6036 */
                            bool __h_case_result  = (true  &&  (((match6030 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6037 */
                                  (unboxed  =  (((match6030 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn6040 */
                                ({ /* cicili#Let6044 */
                                  // ----------
                                  
                                  ({ /* cicili#Let6048 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6050 */
                                        clone_Box_BoxedList___h_StackItem (list );
                                      }) : ({ /* cicili#Let6055 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6059 */
                                          last_BoxedList___h_StackItem (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let6064 */
                                // ----------
                                
                                ({ /* cicili#Progn6068 */
                                  clone_Box_BoxedList___h_StackItem (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6073 */
                      // ----------
                      
                      ({ /* cicili#Progn6077 */
                        clone_Box_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6082 */
              // ----------
              
              ({ /* cicili#Progn6086 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem init_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6092 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6096 */
        __auto_type match6095  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6095 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6101 */
          bool __h_case_result  = (true  &&  (((match6095 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6102 */
                (unboxed  =  (((match6095 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6105 */
              ({ /* cicili#Let6109 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6113 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6114 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6116 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6119 */
                      ({ /* cicili#Let6122 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let6126 */
                          __auto_type match6125  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match6125 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let6131 */
                            bool __h_case_result  = (true  &&  (((match6125 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6132 */
                                  (unboxed  =  (((match6125 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn6135 */
                                ({ /* cicili#Let6139 */
                                  // ----------
                                  
                                  ({ /* cicili#Let6143 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6145 */
                                        BoxedCons___h_StackItem (head , init_BoxedList___h_StackItem (tail ));
                                      }) : ({ /* cicili#Let6151 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6155 */
                                          tail ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let6159 */
                                // ----------
                                
                                ({ /* cicili#Progn6163 */
                                  tail ;
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6167 */
                      // ----------
                      
                      ({ /* cicili#Progn6171 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6175 */
              // ----------
              
              ({ /* cicili#Progn6179 */
                list ;
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem tail_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return drop_BoxedList___h_StackItem (1, list );
}
BoxedList___h_StackItem drop_BoxedList___h_StackItem (int len , BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? clone_Box_BoxedList___h_StackItem (list ) : ({ /* cicili#Let6189 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6193 */
          __auto_type match6192  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6192 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let6198 */
            bool __h_case_result  = (true  &&  (((match6192 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6199 */
                  (unboxed  =  (((match6192 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn6202 */
                ({ /* cicili#Let6206 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let6210 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6211 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6214 */
                        drop_BoxedList___h_StackItem ((--len ), tail );
                      }) : ({ /* cicili#Let6219 */
                        // ----------
                        
                        ({ /* cicili#Progn6223 */
                          clone_Box_BoxedList___h_StackItem (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6228 */
                // ----------
                
                ({ /* cicili#Progn6232 */
                  clone_Box_BoxedList___h_StackItem (list );
                });
              }));
          });
        });
      }));
}
Maybe___h_StackItem head_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return nth_BoxedList___h_StackItem (0, list );
}
BoxedList___h_StackItem nthcdr_BoxedList___h_StackItem (int index , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6242 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6246 */
        __auto_type match6245  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6245 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6251 */
          bool __h_case_result  = (true  &&  (((match6245 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6252 */
                (unboxed  =  (((match6245 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6255 */
              ({ /* cicili#Let6259 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6263 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6264 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6267 */
                      nthcdr_BoxedList___h_StackItem ((--index ), tail );
                    }) : ({ /* cicili#Let6272 */
                      // ----------
                      
                      ({ /* cicili#Progn6276 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6280 */
              // ----------
              
              ({ /* cicili#Progn6284 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe___h_StackItem nth_BoxedList___h_StackItem (int index , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6290 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6294 */
        __auto_type match6293  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6293 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6299 */
          bool __h_case_result  = (true  &&  (((match6293 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6300 */
                (unboxed  =  (((match6293 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6303 */
              ({ /* cicili#Let6307 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6311 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6312 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6314 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6317 */
                      (((index  ==  0 )) ? Just___h_StackItem (head ) : (((index  <  0 )) ? Nothing___h_StackItem () : nth_BoxedList___h_StackItem ((--index ), tail )));
                    }) : ({ /* cicili#Let6326 */
                      // ----------
                      
                      ({ /* cicili#Progn6330 */
                        Nothing___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6335 */
              // ----------
              
              ({ /* cicili#Progn6339 */
                Nothing___h_StackItem ();
              });
            }));
        });
      });
    });
}
int hasLen_BoxedList___h_StackItem (BoxedList___h_StackItem list , int desired ) {
  return ({ /* cicili#Let6345 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6349 */
        __auto_type match6348  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6348 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6354 */
          bool __h_case_result  = (true  &&  (((match6348 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6355 */
                (unboxed  =  (((match6348 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6358 */
              ({ /* cicili#Let6362 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6366 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6367 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6370 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_BoxedList___h_StackItem (tail , (--desired )) ));
                    }) : ({ /* cicili#Let6376 */
                      // ----------
                      
                      ({ /* cicili#Progn6380 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6384 */
              // ----------
              
              ({ /* cicili#Progn6388 */
                0;
              });
            }));
        });
      });
    });
}
int len_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6393 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6397 */
        __auto_type match6396  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6396 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6402 */
          bool __h_case_result  = (true  &&  (((match6396 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6403 */
                (unboxed  =  (((match6396 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6406 */
              ({ /* cicili#Let6410 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6414 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6415 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6418 */
                      (1 +  len_BoxedList___h_StackItem (tail ) );
                    }) : ({ /* cicili#Let6423 */
                      // ----------
                      
                      ({ /* cicili#Progn6427 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6431 */
              // ----------
              
              ({ /* cicili#Progn6435 */
                0;
              });
            }));
        });
      });
    });
}
void free_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x * this_ptr ) {
  { /* cicili#Let6439 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6445 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let6449 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6450 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block6454 */
            { /* cicili#Block6456 */
              free (this );
              free_Box_BoxedList___h_StackItem ((&tail ));
            }
          }
        else
          { /* cicili#Let6464 */
            // ----------
            
            ({ /* cicili#Let6468 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block6471 */
                  { /* cicili#Block6473 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
BoxedList___h_StackItem__H_Table * const get_BoxedList___h_StackItem__H_Table () {
  static BoxedList___h_StackItem__H_Table table  = { free_BoxedList___h_StackItem_x , toArray_BoxedList___h_StackItem , wrap_BoxedList___h_StackItem , pure_BoxedList___h_StackItem , show_BoxedList___h_StackItem , copy_BoxedList___h_StackItem , replaceAt_BoxedList___h_StackItem , deleteAt_BoxedList___h_StackItem , insertAt_BoxedList___h_StackItem , replace_BoxedList___h_StackItem , delete_BoxedList___h_StackItem , insert_BoxedList___h_StackItem , reverse_BoxedList___h_StackItem , append_BoxedList___h_StackItem , push_BoxedList___h_StackItem , take_BoxedList___h_StackItem , last_BoxedList___h_StackItem , init_BoxedList___h_StackItem , tail_BoxedList___h_StackItem , drop_BoxedList___h_StackItem , head_BoxedList___h_StackItem , nthcdr_BoxedList___h_StackItem , nth_BoxedList___h_StackItem , hasLen_BoxedList___h_StackItem , len_BoxedList___h_StackItem };
  return (&table );
}
BoxedList___h_StackItem BoxedCons___h_StackItem (__h_StackItem head , BoxedList___h_StackItem tail ) {
  { /* cicili#Let6484 */
    BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList___h_StackItem){ get_BoxedList___h_StackItem__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList___h_StackItem (instance );
  }
}
BoxedList___h_StackItem BoxedNil___h_StackItem () {
  { /* cicili#Let6491 */
    BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList___h_StackItem){ get_BoxedList___h_StackItem__H_Table (), __h___t });
    return new_Box_BoxedList___h_StackItem (instance );
  }
}
#endif /* __BoxedList___h_StackItem__H_IMPL__ */ 
#ifndef __Maybe_BoxedList___h_StackItem__H_IMPL__
#define __Maybe_BoxedList___h_StackItem__H_IMPL__
void free_Maybe_BoxedList___h_StackItem (Maybe_BoxedList___h_StackItem * this ) {
}
const Maybe_BoxedList___h_StackItem__H_Table * const get_Maybe_BoxedList___h_StackItem__H_Table () {
  static const Maybe_BoxedList___h_StackItem__H_Table table  = { free_Maybe_BoxedList___h_StackItem };
  return (&table );
}
Maybe_BoxedList___h_StackItem Just_BoxedList___h_StackItem (BoxedList___h_StackItem value ) {
  { /* cicili#Let6509 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem () {
  { /* cicili#Let6514 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList___h_StackItem__H_IMPL__ */ 
#ifndef __Maybe_BoxedList___h_StackItem__H_IMPL__
#define __Maybe_BoxedList___h_StackItem__H_IMPL__
void free_Maybe_BoxedList___h_StackItem (Maybe_BoxedList___h_StackItem * this ) {
}
const Maybe_BoxedList___h_StackItem__H_Table * const get_Maybe_BoxedList___h_StackItem__H_Table () {
  static const Maybe_BoxedList___h_StackItem__H_Table table  = { free_Maybe_BoxedList___h_StackItem };
  return (&table );
}
Maybe_BoxedList___h_StackItem Just_BoxedList___h_StackItem (BoxedList___h_StackItem value ) {
  { /* cicili#Let6532 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem () {
  { /* cicili#Let6537 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList___h_StackItem__H_IMPL__ */ 
#ifndef __BoxedList_BoxedList___h_StackItem__H_IMPL__
#define __BoxedList_BoxedList___h_StackItem__H_IMPL__
#ifndef __Maybe_BoxedList_BoxedList___h_StackItem_x__H_IMPL__
#define __Maybe_BoxedList_BoxedList___h_StackItem_x__H_IMPL__
void free_Maybe_BoxedList_BoxedList___h_StackItem_x (Maybe_BoxedList_BoxedList___h_StackItem_x * this ) {
}
const Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table * const get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table () {
  static const Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table table  = { free_Maybe_BoxedList_BoxedList___h_StackItem_x };
  return (&table );
}
Maybe_BoxedList_BoxedList___h_StackItem_x Just_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x value ) {
  { /* cicili#Let6557 */
    Maybe_BoxedList_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList_BoxedList___h_StackItem_x){ get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_BoxedList___h_StackItem_x Nothing_BoxedList_BoxedList___h_StackItem_x () {
  { /* cicili#Let6562 */
    Maybe_BoxedList_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList_BoxedList___h_StackItem_x){ get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem_x__H_IMPL__ */ 
#ifndef __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__
#define __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__
Box_BoxedList_BoxedList___h_StackItem new_Box_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem_x pointer ) {
  return ({ /* cicili#Let6569 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BoxedList_BoxedList___h_StackItem_x *)malloc (sizeof(BoxedList_BoxedList___h_StackItem_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BoxedList_BoxedList___h_StackItem_x (holder , count , ((size_t)pointer ));
    });
}
Box_BoxedList_BoxedList___h_StackItem clone_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let6578 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let6582 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6583 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6585 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn6587 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6590 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn6593 */
                (++(*count ));
                __h_Hold_BoxedList_BoxedList___h_StackItem_x (pointer , count , address );
              }) : Gone_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let6599 */
            // ----------
            
            ({ /* cicili#Progn6603 */
              Gone_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_BoxedList___h_StackItem_x take_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this ) {
  return ({ /* cicili#Let6611 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let6615 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6616 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6618 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn6620 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6623 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let6627 */
                __auto_type result  = Just_BoxedList_BoxedList___h_StackItem_x ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block6633 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BoxedList_BoxedList___h_StackItem_x ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let6640 */
            // ----------
            
            ({ /* cicili#Progn6644 */
              Nothing_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_BoxedList___h_StackItem_x get_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let6652 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let6656 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6657 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6659 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn6661 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn6664 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BoxedList_BoxedList___h_StackItem_x ((*pointer )) : Nothing_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let6671 */
            // ----------
            
            ({ /* cicili#Progn6675 */
              Nothing_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this ) {
  { /* cicili#Let6684 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let6688 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6689 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6691 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn6693 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block6697 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block6701 */
              if ((*count ) ==  1 )
                { /* cicili#Block6704 */
                  free_BoxedList_BoxedList___h_StackItem_x (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_BoxedList_BoxedList___h_StackItem_x ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let6714 */
          // ----------
          
          ({ /* cicili#Let6718 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block6721 */
              }
          });
        }
    });
  }
}
const Box_BoxedList_BoxedList___h_StackItem__H_Table * const get_Box_BoxedList_BoxedList___h_StackItem__H_Table () {
  static const Box_BoxedList_BoxedList___h_StackItem__H_Table table  = { free_Box_BoxedList_BoxedList___h_StackItem , new_Box_BoxedList_BoxedList___h_StackItem , clone_Box_BoxedList_BoxedList___h_StackItem , take_Box_BoxedList_BoxedList___h_StackItem , get_Box_BoxedList_BoxedList___h_StackItem };
  return (&table );
}
Box_BoxedList_BoxedList___h_StackItem __h_Hold_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x * pointer , int * count , size_t address ) {
  { /* cicili#Let6732 */
    Box_BoxedList_BoxedList___h_StackItem instance  = ((Box_BoxedList_BoxedList___h_StackItem){ get_Box_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_BoxedList_BoxedList___h_StackItem Gone_BoxedList_BoxedList___h_StackItem_x () {
  { /* cicili#Let6737 */
    Box_BoxedList_BoxedList___h_StackItem instance  = ((Box_BoxedList_BoxedList___h_StackItem){ get_Box_BoxedList_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__ */ 
BoxedList___h_StackItem * toArray_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem term ) {
  BoxedList___h_StackItem * array (BoxedList_BoxedList___h_StackItem list , int count ) {
    return ({ /* cicili#Let6744 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6748 */
          __auto_type match6747  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6747 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let6753 */
            bool __h_case_result  = (true  &&  (((match6747 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6754 */
                  (unboxed  =  (((match6747 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn6757 */
                ({ /* cicili#Let6761 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let6765 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6766 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6768 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6771 */
                        ({ /* cicili#Let6773 */
                          BoxedList___h_StackItem * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let6777 */
                        // ----------
                        
                        ({ /* cicili#Progn6781 */
                          ({ /* cicili#Let6783 */
                            BoxedList___h_StackItem * arr  = calloc (count , sizeof(BoxedList___h_StackItem));
                            // ----------
                            arr [(count  -  1 )] = term ;
                            arr ;
                          });
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6787 */
                // ----------
                
                ({ /* cicili#Progn6791 */
                  ({ /* cicili#Let6793 */
                    BoxedList___h_StackItem * arr  = calloc (count , sizeof(BoxedList___h_StackItem));
                    // ----------
                    arr [(count  -  1 )] = term ;
                    arr ;
                  });
                });
              }));
          });
        });
      });
  }
  return array (list , 0);
}
BoxedList_BoxedList___h_StackItem wrap_BoxedList_BoxedList___h_StackItem (const BoxedList___h_StackItem item ) {
  return BoxedCons_BoxedList___h_StackItem (item , BoxedNil_BoxedList___h_StackItem ());
}
BoxedList_BoxedList___h_StackItem pure_BoxedList_BoxedList___h_StackItem (const BoxedList___h_StackItem * buf , int len ) {
  return (((buf  ==  NULL  )) ? BoxedNil_BoxedList___h_StackItem () : ({ /* cicili#Let6804 */
        BoxedList___h_StackItem item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_BoxedList___h_StackItem () : BoxedCons_BoxedList___h_StackItem (item , pure_BoxedList_BoxedList___h_StackItem ((++buf ), (--len ))));
      }));
}
int show_BoxedList_BoxedList___h_StackItem (CFile file , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6813 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6817 */
        __auto_type match6816  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6816 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6822 */
          bool __h_case_result  = (true  &&  (((match6816 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6823 */
                (unboxed  =  (((match6816 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6826 */
              ({ /* cicili#Let6830 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6834 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6835 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6837 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6840 */
                      (({ /* cicili#Let6843 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let6847 */
                            __auto_type match6846  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match6846 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            
                            ({ /* cicili#Let6852 */
                              bool __h_case_result  = (true  &&  (((match6846 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6853 */
                                    (unboxed  =  (((match6846 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn6856 */
                                  ({ /* cicili#Let6860 */
                                    // ----------
                                    
                                    ({ /* cicili#Let6864 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn6866 */
                                          (show_BoxedList___h_StackItem (file , head ) +  fprintf (file , "%s", "\n") );
                                        }) : ({ /* cicili#Let6876 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn6880 */
                                            show_BoxedList___h_StackItem (file , head );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let6890 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn6894 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_BoxedList_BoxedList___h_StackItem (file , tail ) );
                    }) : ({ /* cicili#Let6899 */
                      // ----------
                      
                      ({ /* cicili#Progn6903 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6907 */
              // ----------
              
              ({ /* cicili#Progn6911 */
                0;
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem copy_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6916 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6920 */
        __auto_type match6919  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6919 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6925 */
          bool __h_case_result  = (true  &&  (((match6919 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6926 */
                (unboxed  =  (((match6919 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6929 */
              ({ /* cicili#Let6933 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6937 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6938 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6940 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6943 */
                      BoxedCons_BoxedList___h_StackItem (head , copy_BoxedList_BoxedList___h_StackItem (tail ));
                    }) : ({ /* cicili#Let6949 */
                      // ----------
                      
                      ({ /* cicili#Progn6953 */
                        BoxedNil_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6958 */
              // ----------
              
              ({ /* cicili#Progn6962 */
                BoxedNil_BoxedList___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem replaceAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , int index ) {
  return ({ /* cicili#Let6968 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6972 */
        __auto_type match6971  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6971 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let6977 */
          bool __h_case_result  = (true  &&  (((match6971 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6978 */
                (unboxed  =  (((match6971 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6981 */
              ({ /* cicili#Let6985 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let6989 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6990 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6992 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6995 */
                      BoxedCons_BoxedList___h_StackItem (head , replaceAt_BoxedList_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let7001 */
                      // ----------
                      
                      ({ /* cicili#Progn7005 */
                        ({ /* cicili#Let7008 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let7012 */
                            __auto_type match7011  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match7011 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            
                            ({ /* cicili#Let7017 */
                              bool __h_case_result  = (true  &&  (((match7011 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7018 */
                                    (unboxed  =  (((match7011 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn7021 */
                                  ({ /* cicili#Let7025 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7029 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7030 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7033 */
                                          BoxedCons_BoxedList___h_StackItem (item , taill );
                                        }) : ({ /* cicili#Let7038 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7042 */
                                            clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let7047 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn7051 */
                                    clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7056 */
              // ----------
              
              ({ /* cicili#Progn7060 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem deleteAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , int index ) {
  return ({ /* cicili#Let7066 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7070 */
        __auto_type match7069  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7069 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7075 */
          bool __h_case_result  = (true  &&  (((match7069 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7076 */
                (unboxed  =  (((match7069 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7079 */
              ({ /* cicili#Let7083 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7087 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7088 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7090 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7093 */
                      BoxedCons_BoxedList___h_StackItem (head , deleteAt_BoxedList_BoxedList___h_StackItem (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let7099 */
                      // ----------
                      
                      ({ /* cicili#Progn7103 */
                        ({ /* cicili#Let7106 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let7110 */
                            __auto_type match7109  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match7109 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            
                            ({ /* cicili#Let7115 */
                              bool __h_case_result  = (true  &&  (((match7109 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7116 */
                                    (unboxed  =  (((match7109 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn7119 */
                                  ({ /* cicili#Let7123 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    
                                    ({ /* cicili#Let7127 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7128 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7131 */
                                          taill ;
                                        }) : ({ /* cicili#Let7135 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn7139 */
                                            clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let7144 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn7148 */
                                    clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7153 */
              // ----------
              
              ({ /* cicili#Progn7157 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem insertAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , int index ) {
  return ({ /* cicili#Let7163 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let7167 */
        __auto_type match7166  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7166 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7172 */
          bool __h_case_result  = (true  &&  (((match7166 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7173 */
                (unboxed  =  (((match7166 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7176 */
              ({ /* cicili#Let7180 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7184 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7185 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7187 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7190 */
                      BoxedCons_BoxedList___h_StackItem (head , insertAt_BoxedList_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let7196 */
                      // ----------
                      
                      ({ /* cicili#Progn7200 */
                        BoxedCons_BoxedList___h_StackItem (item , llist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7205 */
              // ----------
              
              ({ /* cicili#Progn7209 */
                BoxedCons_BoxedList___h_StackItem (item , llist );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem replace_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let7216 */
      __auto_type match7215  = get_Box_BoxedList_BoxedList___h_StackItem (list );
      typeof((((match7215 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      
      ({ /* cicili#Let7221 */
        bool __h_case_result  = (true  &&  (((match7215 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7222 */
              (listp  =  (((match7215 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn7225 */
            ({ /* cicili#Let7229 */
              __auto_type match7228  = get_Box_BoxedList_BoxedList___h_StackItem (aimed );
              typeof((((match7228 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              
              ({ /* cicili#Let7234 */
                bool __h_case_result  = (true  &&  (((match7228 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7235 */
                      (aimedp  =  (((match7228 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7238 */
                    ({ /* cicili#Let7242 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      
                      ({ /* cicili#Let7246 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7247 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7249 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn7252 */
                            BoxedCons_BoxedList___h_StackItem (head , replace_BoxedList_BoxedList___h_StackItem (tail , item , aimed ));
                          }) : ({ /* cicili#Let7258 */
                            // ----------
                            
                            ({ /* cicili#Progn7262 */
                              ({ /* cicili#Let7266 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                
                                ({ /* cicili#Let7270 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7271 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn7274 */
                                      BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (taill ));
                                    }) : ({ /* cicili#Let7280 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn7284 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (aimed );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let7289 */
                    // ----------
                    
                    ({ /* cicili#Progn7293 */
                      clone_Box_BoxedList_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let7298 */
            // ----------
            
            ({ /* cicili#Progn7302 */
              clone_Box_BoxedList_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem delete_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let7309 */
      __auto_type match7308  = get_Box_BoxedList_BoxedList___h_StackItem (list );
      typeof((((match7308 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      
      ({ /* cicili#Let7314 */
        bool __h_case_result  = (true  &&  (((match7308 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7315 */
              (listp  =  (((match7308 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn7318 */
            ({ /* cicili#Let7322 */
              __auto_type match7321  = get_Box_BoxedList_BoxedList___h_StackItem (aimed );
              typeof((((match7321 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              
              ({ /* cicili#Let7327 */
                bool __h_case_result  = (true  &&  (((match7321 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7328 */
                      (aimedp  =  (((match7321 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7331 */
                    ({ /* cicili#Let7335 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      
                      ({ /* cicili#Let7339 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7340 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7342 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn7345 */
                            BoxedCons_BoxedList___h_StackItem (head , delete_BoxedList_BoxedList___h_StackItem (tail , aimed ));
                          }) : ({ /* cicili#Let7351 */
                            // ----------
                            
                            ({ /* cicili#Progn7355 */
                              ({ /* cicili#Let7359 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                
                                ({ /* cicili#Let7363 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7364 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn7367 */
                                      clone_Box_BoxedList_BoxedList___h_StackItem (taill );
                                    }) : ({ /* cicili#Let7372 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn7376 */
                                        BoxedNil_BoxedList___h_StackItem ();
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let7381 */
                    // ----------
                    
                    ({ /* cicili#Progn7385 */
                      clone_Box_BoxedList_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let7390 */
            // ----------
            
            ({ /* cicili#Progn7394 */
              clone_Box_BoxedList_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem insert_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let7401 */
      __auto_type match7400  = get_Box_BoxedList_BoxedList___h_StackItem (llist );
      typeof((((match7400 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      
      ({ /* cicili#Let7406 */
        bool __h_case_result  = (true  &&  (((match7400 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7407 */
              (llistp  =  (((match7400 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn7410 */
            ({ /* cicili#Let7414 */
              __auto_type match7413  = get_Box_BoxedList_BoxedList___h_StackItem (rlist );
              typeof((((match7413 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              
              ({ /* cicili#Let7419 */
                bool __h_case_result  = (true  &&  (((match7413 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7420 */
                      (rlistp  =  (((match7413 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn7423 */
                    ({ /* cicili#Let7427 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      
                      ({ /* cicili#Let7431 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7432 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7434 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn7437 */
                            BoxedCons_BoxedList___h_StackItem (head , insert_BoxedList_BoxedList___h_StackItem (tail , item , rlist ));
                          }) : ({ /* cicili#Let7443 */
                            // ----------
                            
                            ({ /* cicili#Progn7447 */
                              BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let7453 */
                    // ----------
                    
                    ({ /* cicili#Progn7457 */
                      ({ /* cicili#Let7460 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7462 */
                          __auto_type nil_item  = BoxedNil_BoxedList___h_StackItem ();
                          // ----------
                          ((void)((nil_item . __h_table )-> freeData ));
                          nil_item ;
                        });
                        // ----------
                        insert_BoxedList_BoxedList___h_StackItem (llist , item , nil_item );
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let7469 */
            // ----------
            
            ({ /* cicili#Progn7473 */
              BoxedCons_BoxedList___h_StackItem (item , rlist );
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem reverse_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  BoxedList_BoxedList___h_StackItem _reverse (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem rlist ) {
    return ({ /* cicili#Let7480 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let7484 */
          __auto_type match7483  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7483 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let7489 */
            bool __h_case_result  = (true  &&  (((match7483 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7490 */
                  (unboxed  =  (((match7483 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn7493 */
                ({ /* cicili#Let7497 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let7501 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7502 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7504 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7507 */
                        _reverse (tail , BoxedCons_BoxedList___h_StackItem (head , rlist ));
                      }) : ({ /* cicili#Let7512 */
                        // ----------
                        
                        ({ /* cicili#Progn7516 */
                          rlist ;
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7520 */
                // ----------
                
                ({ /* cicili#Progn7524 */
                  rlist ;
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let7527 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7531 */
        __auto_type match7530  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7530 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7536 */
          bool __h_case_result  = (true  &&  (((match7530 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7537 */
                (unboxed  =  (((match7530 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7540 */
              ({ /* cicili#Let7544 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7548 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7549 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7551 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7554 */
                      _reverse (tail , BoxedCons_BoxedList___h_StackItem (head , BoxedNil_BoxedList___h_StackItem ()));
                    }) : ({ /* cicili#Let7560 */
                      // ----------
                      
                      ({ /* cicili#Progn7564 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7568 */
              // ----------
              
              ({ /* cicili#Progn7572 */
                list ;
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem append_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList_BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let7577 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let7581 */
        __auto_type match7580  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7580 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7586 */
          bool __h_case_result  = (true  &&  (((match7580 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7587 */
                (unboxed  =  (((match7580 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7590 */
              ({ /* cicili#Let7594 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7598 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7599 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7601 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7604 */
                      BoxedCons_BoxedList___h_StackItem (head , append_BoxedList_BoxedList___h_StackItem (tail , rlist ));
                    }) : ({ /* cicili#Let7610 */
                      // ----------
                      
                      ({ /* cicili#Progn7614 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7619 */
              // ----------
              
              ({ /* cicili#Progn7623 */
                clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem push_BoxedList_BoxedList___h_StackItem (BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem list ) {
  return BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (list ));
}
BoxedList_BoxedList___h_StackItem take_BoxedList_BoxedList___h_StackItem (int len , BoxedList_BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? BoxedNil_BoxedList___h_StackItem () : ({ /* cicili#Let7635 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let7639 */
          __auto_type match7638  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7638 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let7644 */
            bool __h_case_result  = (true  &&  (((match7638 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7645 */
                  (unboxed  =  (((match7638 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn7648 */
                ({ /* cicili#Let7652 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let7656 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7657 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7659 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7662 */
                        BoxedCons_BoxedList___h_StackItem (head , take_BoxedList_BoxedList___h_StackItem ((--len ), tail ));
                      }) : ({ /* cicili#Let7668 */
                        // ----------
                        
                        ({ /* cicili#Progn7672 */
                          BoxedNil_BoxedList___h_StackItem ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7677 */
                // ----------
                
                ({ /* cicili#Progn7681 */
                  BoxedNil_BoxedList___h_StackItem ();
                });
              }));
          });
        });
      }));
}
BoxedList_BoxedList___h_StackItem last_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7687 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7691 */
        __auto_type match7690  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7690 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7696 */
          bool __h_case_result  = (true  &&  (((match7690 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7697 */
                (unboxed  =  (((match7690 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7700 */
              ({ /* cicili#Let7704 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7708 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7709 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7712 */
                      ({ /* cicili#Let7715 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let7719 */
                          __auto_type match7718  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match7718 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let7724 */
                            bool __h_case_result  = (true  &&  (((match7718 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7725 */
                                  (unboxed  =  (((match7718 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7728 */
                                ({ /* cicili#Let7732 */
                                  // ----------
                                  
                                  ({ /* cicili#Let7736 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7738 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                      }) : ({ /* cicili#Let7743 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7747 */
                                          last_BoxedList_BoxedList___h_StackItem (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7752 */
                                // ----------
                                
                                ({ /* cicili#Progn7756 */
                                  clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7761 */
                      // ----------
                      
                      ({ /* cicili#Progn7765 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7770 */
              // ----------
              
              ({ /* cicili#Progn7774 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem init_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7780 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7784 */
        __auto_type match7783  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7783 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7789 */
          bool __h_case_result  = (true  &&  (((match7783 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7790 */
                (unboxed  =  (((match7783 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7793 */
              ({ /* cicili#Let7797 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7801 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7802 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7804 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7807 */
                      ({ /* cicili#Let7810 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let7814 */
                          __auto_type match7813  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match7813 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let7819 */
                            bool __h_case_result  = (true  &&  (((match7813 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7820 */
                                  (unboxed  =  (((match7813 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn7823 */
                                ({ /* cicili#Let7827 */
                                  // ----------
                                  
                                  ({ /* cicili#Let7831 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn7833 */
                                        BoxedCons_BoxedList___h_StackItem (head , init_BoxedList_BoxedList___h_StackItem (tail ));
                                      }) : ({ /* cicili#Let7839 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7843 */
                                          tail ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7847 */
                                // ----------
                                
                                ({ /* cicili#Progn7851 */
                                  tail ;
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7855 */
                      // ----------
                      
                      ({ /* cicili#Progn7859 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7863 */
              // ----------
              
              ({ /* cicili#Progn7867 */
                list ;
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem tail_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return drop_BoxedList_BoxedList___h_StackItem (1, list );
}
BoxedList_BoxedList___h_StackItem drop_BoxedList_BoxedList___h_StackItem (int len , BoxedList_BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? clone_Box_BoxedList_BoxedList___h_StackItem (list ) : ({ /* cicili#Let7877 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let7881 */
          __auto_type match7880  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7880 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          
          ({ /* cicili#Let7886 */
            bool __h_case_result  = (true  &&  (((match7880 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7887 */
                  (unboxed  =  (((match7880 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn7890 */
                ({ /* cicili#Let7894 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  
                  ({ /* cicili#Let7898 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7899 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn7902 */
                        drop_BoxedList_BoxedList___h_StackItem ((--len ), tail );
                      }) : ({ /* cicili#Let7907 */
                        // ----------
                        
                        ({ /* cicili#Progn7911 */
                          clone_Box_BoxedList_BoxedList___h_StackItem (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7916 */
                // ----------
                
                ({ /* cicili#Progn7920 */
                  clone_Box_BoxedList_BoxedList___h_StackItem (list );
                });
              }));
          });
        });
      }));
}
Maybe_BoxedList___h_StackItem head_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return nth_BoxedList_BoxedList___h_StackItem (0, list );
}
BoxedList_BoxedList___h_StackItem nthcdr_BoxedList_BoxedList___h_StackItem (int index , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7930 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7934 */
        __auto_type match7933  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7933 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7939 */
          bool __h_case_result  = (true  &&  (((match7933 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7940 */
                (unboxed  =  (((match7933 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7943 */
              ({ /* cicili#Let7947 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7951 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7952 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn7955 */
                      nthcdr_BoxedList_BoxedList___h_StackItem ((--index ), tail );
                    }) : ({ /* cicili#Let7960 */
                      // ----------
                      
                      ({ /* cicili#Progn7964 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7968 */
              // ----------
              
              ({ /* cicili#Progn7972 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_BoxedList___h_StackItem nth_BoxedList_BoxedList___h_StackItem (int index , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7978 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7982 */
        __auto_type match7981  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7981 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let7987 */
          bool __h_case_result  = (true  &&  (((match7981 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7988 */
                (unboxed  =  (((match7981 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn7991 */
              ({ /* cicili#Let7995 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let7999 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8000 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn8002 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8005 */
                      (((index  ==  0 )) ? Just_BoxedList___h_StackItem (head ) : (((index  <  0 )) ? Nothing_BoxedList___h_StackItem () : nth_BoxedList_BoxedList___h_StackItem ((--index ), tail )));
                    }) : ({ /* cicili#Let8014 */
                      // ----------
                      
                      ({ /* cicili#Progn8018 */
                        Nothing_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8023 */
              // ----------
              
              ({ /* cicili#Progn8027 */
                Nothing_BoxedList___h_StackItem ();
              });
            }));
        });
      });
    });
}
int hasLen_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , int desired ) {
  return ({ /* cicili#Let8033 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let8037 */
        __auto_type match8036  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8036 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let8042 */
          bool __h_case_result  = (true  &&  (((match8036 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8043 */
                (unboxed  =  (((match8036 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8046 */
              ({ /* cicili#Let8050 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let8054 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8055 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8058 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_BoxedList_BoxedList___h_StackItem (tail , (--desired )) ));
                    }) : ({ /* cicili#Let8064 */
                      // ----------
                      
                      ({ /* cicili#Progn8068 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8072 */
              // ----------
              
              ({ /* cicili#Progn8076 */
                0;
              });
            }));
        });
      });
    });
}
int len_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let8081 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let8085 */
        __auto_type match8084  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8084 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let8090 */
          bool __h_case_result  = (true  &&  (((match8084 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8091 */
                (unboxed  =  (((match8084 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8094 */
              ({ /* cicili#Let8098 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let8102 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8103 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8106 */
                      (1 +  len_BoxedList_BoxedList___h_StackItem (tail ) );
                    }) : ({ /* cicili#Let8111 */
                      // ----------
                      
                      ({ /* cicili#Progn8115 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8119 */
              // ----------
              
              ({ /* cicili#Progn8123 */
                0;
              });
            }));
        });
      });
    });
}
void free_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x * this_ptr ) {
  { /* cicili#Let8127 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let8133 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8137 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8138 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block8142 */
            { /* cicili#Block8144 */
              free (this );
              free_Box_BoxedList_BoxedList___h_StackItem ((&tail ));
            }
          }
        else
          { /* cicili#Let8152 */
            // ----------
            
            ({ /* cicili#Let8156 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block8159 */
                  { /* cicili#Block8161 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
BoxedList_BoxedList___h_StackItem__H_Table * const get_BoxedList_BoxedList___h_StackItem__H_Table () {
  static BoxedList_BoxedList___h_StackItem__H_Table table  = { free_BoxedList_BoxedList___h_StackItem_x , toArray_BoxedList_BoxedList___h_StackItem , wrap_BoxedList_BoxedList___h_StackItem , pure_BoxedList_BoxedList___h_StackItem , show_BoxedList_BoxedList___h_StackItem , copy_BoxedList_BoxedList___h_StackItem , replaceAt_BoxedList_BoxedList___h_StackItem , deleteAt_BoxedList_BoxedList___h_StackItem , insertAt_BoxedList_BoxedList___h_StackItem , replace_BoxedList_BoxedList___h_StackItem , delete_BoxedList_BoxedList___h_StackItem , insert_BoxedList_BoxedList___h_StackItem , reverse_BoxedList_BoxedList___h_StackItem , append_BoxedList_BoxedList___h_StackItem , push_BoxedList_BoxedList___h_StackItem , take_BoxedList_BoxedList___h_StackItem , last_BoxedList_BoxedList___h_StackItem , init_BoxedList_BoxedList___h_StackItem , tail_BoxedList_BoxedList___h_StackItem , drop_BoxedList_BoxedList___h_StackItem , head_BoxedList_BoxedList___h_StackItem , nthcdr_BoxedList_BoxedList___h_StackItem , nth_BoxedList_BoxedList___h_StackItem , hasLen_BoxedList_BoxedList___h_StackItem , len_BoxedList_BoxedList___h_StackItem };
  return (&table );
}
BoxedList_BoxedList___h_StackItem BoxedCons_BoxedList___h_StackItem (BoxedList___h_StackItem head , BoxedList_BoxedList___h_StackItem tail ) {
  { /* cicili#Let8172 */
    BoxedList_BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList_BoxedList___h_StackItem){ get_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList_BoxedList___h_StackItem (instance );
  }
}
BoxedList_BoxedList___h_StackItem BoxedNil_BoxedList___h_StackItem () {
  { /* cicili#Let8179 */
    BoxedList_BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList_BoxedList___h_StackItem){ get_BoxedList_BoxedList___h_StackItem__H_Table (), __h___t });
    return new_Box_BoxedList_BoxedList___h_StackItem (instance );
  }
}
#endif /* __BoxedList_BoxedList___h_StackItem__H_IMPL__ */ 
#ifndef __Maybe_BoxedList_BoxedList___h_StackItem__H_IMPL__
#define __Maybe_BoxedList_BoxedList___h_StackItem__H_IMPL__
void free_Maybe_BoxedList_BoxedList___h_StackItem (Maybe_BoxedList_BoxedList___h_StackItem * this ) {
}
const Maybe_BoxedList_BoxedList___h_StackItem__H_Table * const get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table () {
  static const Maybe_BoxedList_BoxedList___h_StackItem__H_Table table  = { free_Maybe_BoxedList_BoxedList___h_StackItem };
  return (&table );
}
Maybe_BoxedList_BoxedList___h_StackItem Just_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem value ) {
  { /* cicili#Let8197 */
    Maybe_BoxedList_BoxedList___h_StackItem instance  = ((Maybe_BoxedList_BoxedList___h_StackItem){ get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_BoxedList___h_StackItem Nothing_BoxedList_BoxedList___h_StackItem () {
  { /* cicili#Let8202 */
    Maybe_BoxedList_BoxedList___h_StackItem instance  = ((Maybe_BoxedList_BoxedList___h_StackItem){ get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem__H_IMPL__ */ 
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
int show_Bool (CFile file , Bool value ) {
  return ({ /* cicili#Let8211 */
      // ----------
      
      ({ /* cicili#Let8215 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor ) ==  __h_False_t  ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8217 */
            fprintf (file , "%s", "False");
          }) : ({ /* cicili#Let8221 */
            // ----------
            
            ({ /* cicili#Progn8225 */
              fprintf (file , "%s", "True");
            });
          }));
      });
    });
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let8231 */
      // ----------
      
      ({ /* cicili#Let8235 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor ) ==  __h_True_t  ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8237 */
            True ();
          }) : ({ /* cicili#Let8241 */
            // ----------
            
            ({ /* cicili#Progn8245 */
              ({ /* cicili#Let8249 */
                // ----------
                
                ({ /* cicili#Let8253 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor ) ==  __h_True_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8255 */
                      True ();
                    }) : ({ /* cicili#Let8259 */
                      // ----------
                      
                      ({ /* cicili#Progn8263 */
                        False ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let8269 */
      // ----------
      
      ({ /* cicili#Let8273 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor ) ==  __h_False_t  ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8275 */
            False ();
          }) : ({ /* cicili#Let8279 */
            // ----------
            
            ({ /* cicili#Progn8283 */
              ({ /* cicili#Let8287 */
                // ----------
                
                ({ /* cicili#Let8291 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor ) ==  __h_False_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8293 */
                      False ();
                    }) : ({ /* cicili#Let8297 */
                      // ----------
                      
                      ({ /* cicili#Progn8301 */
                        True ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
void free_Bool (Bool * this ) {
}
const Bool__H_Table * const get_Bool__H_Table () {
  static const Bool__H_Table table  = { free_Bool , show_Bool , or_Bool , and_Bool };
  return (&table );
}
Bool True () {
  { /* cicili#Let8311 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_True_t });
    // ----------
    return instance ;
  }
}
Bool False () {
  { /* cicili#Let8315 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Bool__H_IMPL__ */ 
#ifndef __Ordering__H_IMPL__
#define __Ordering__H_IMPL__
void free_Ordering (Ordering * this ) {
}
const Ordering__H_Table * const get_Ordering__H_Table () {
  static const Ordering__H_Table table  = { free_Ordering };
  return (&table );
}
Ordering LT () {
  { /* cicili#Let8328 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
    // ----------
    return instance ;
  }
}
Ordering EQ () {
  { /* cicili#Let8332 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
    // ----------
    return instance ;
  }
}
Ordering GT () {
  { /* cicili#Let8336 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Ordering__H_IMPL__ */ 
#ifndef __Maybe_CStr__H_IMPL__
#define __Maybe_CStr__H_IMPL__
void free_Maybe_CStr (Maybe_CStr * this ) {
}
const Maybe_CStr__H_Table * const get_Maybe_CStr__H_Table () {
  static const Maybe_CStr__H_Table table  = { free_Maybe_CStr };
  return (&table );
}
Maybe_CStr Just_CStr (CStr value ) {
  { /* cicili#Let8352 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CStr Nothing_CStr () {
  { /* cicili#Let8357 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_CStr__H_IMPL__ */ 
#ifndef __Maybe_CFile__H_IMPL__
#define __Maybe_CFile__H_IMPL__
void free_Maybe_CFile (Maybe_CFile * this ) {
}
const Maybe_CFile__H_Table * const get_Maybe_CFile__H_Table () {
  static const Maybe_CFile__H_Table table  = { free_Maybe_CFile };
  return (&table );
}
Maybe_CFile Just_CFile (CFile value ) {
  { /* cicili#Let8373 */
    Maybe_CFile instance  = ((Maybe_CFile){ get_Maybe_CFile__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CFile Nothing_CFile () {
  { /* cicili#Let8378 */
    Maybe_CFile instance  = ((Maybe_CFile){ get_Maybe_CFile__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_CFile__H_IMPL__ */ 
#ifndef __Maybe_Bool__H_IMPL__
#define __Maybe_Bool__H_IMPL__
void free_Maybe_Bool (Maybe_Bool * this ) {
}
const Maybe_Bool__H_Table * const get_Maybe_Bool__H_Table () {
  static const Maybe_Bool__H_Table table  = { free_Maybe_Bool };
  return (&table );
}
Maybe_Bool Just_Bool (Bool value ) {
  { /* cicili#Let8396 */
    Maybe_Bool instance  = ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Bool Nothing_Bool () {
  { /* cicili#Let8401 */
    Maybe_Bool instance  = ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Bool__H_IMPL__ */ 
#ifndef __List_Bool__H_IMPL__
#define __List_Bool__H_IMPL__
Bool * toArray_List_Bool (List_Bool list , Bool term ) {
  Bool * array (List_Bool list , int count ) {
    return ({ /* cicili#Let8411 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let8415 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8416 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8418 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8421 */
              ({ /* cicili#Let8423 */
                Bool * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let8427 */
              // ----------
              
              ({ /* cicili#Progn8431 */
                ({ /* cicili#Let8433 */
                  Bool * arr  = calloc (count , sizeof(Bool));
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
List_Bool wrap_List_Bool (const Bool item ) {
  return Cons_Bool (item , Nil_Bool ());
}
List_Bool pure_List_Bool (const Bool * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_Bool () : ({ /* cicili#Let8444 */
        Bool item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Bool () : Cons_Bool (item , pure_List_Bool ((++buf ), (--len ))));
      }));
}
int show_List_Bool (CFile file , List_Bool list ) {
  return ({ /* cicili#Let8454 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8458 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8459 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8461 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8464 */
            (({ /* cicili#Let8468 */
                // ----------
                
                ({ /* cicili#Let8472 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8474 */
                      (show_Bool (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let8484 */
                      // ----------
                      
                      ({ /* cicili#Progn8488 */
                        show_Bool (file , head );
                      });
                    }));
                });
              }) +  show_List_Bool (file , tail ) );
          }) : ({ /* cicili#Let8499 */
            // ----------
            
            ({ /* cicili#Progn8503 */
              0;
            });
          }));
      });
    });
}
List_Bool copy_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8509 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8513 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8514 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8516 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8519 */
            Cons_Bool (head , copy_List_Bool (tail ));
          }) : ({ /* cicili#Let8525 */
            // ----------
            
            ({ /* cicili#Progn8529 */
              Nil_Bool ();
            });
          }));
      });
    });
}
List_Bool replaceAt_List_Bool (List_Bool list , Bool item , int index ) {
  return ({ /* cicili#Let8536 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8540 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8541 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8543 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8546 */
            Cons_Bool (head , replaceAt_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let8552 */
            // ----------
            
            ({ /* cicili#Progn8556 */
              ({ /* cicili#Let8560 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let8564 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8565 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8568 */
                      Cons_Bool (item , copy_List_Bool (taill ));
                    }) : ({ /* cicili#Let8574 */
                      // ----------
                      
                      ({ /* cicili#Progn8578 */
                        Nil_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Bool deleteAt_List_Bool (List_Bool list , int index ) {
  return ({ /* cicili#Let8585 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8589 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8590 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8592 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8595 */
            Cons_Bool (head , deleteAt_List_Bool (tail , (index  -  1 )));
          }) : ({ /* cicili#Let8601 */
            // ----------
            
            ({ /* cicili#Progn8605 */
              ({ /* cicili#Let8609 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let8613 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8614 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8617 */
                      copy_List_Bool (taill );
                    }) : ({ /* cicili#Let8622 */
                      // ----------
                      
                      ({ /* cicili#Progn8626 */
                        Nil_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Bool insertAt_List_Bool (List_Bool llist , Bool item , int index ) {
  return ({ /* cicili#Let8633 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8637 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8638 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8640 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8643 */
            Cons_Bool (head , insertAt_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let8649 */
            // ----------
            
            ({ /* cicili#Progn8653 */
              Cons_Bool (item , copy_List_Bool (llist ));
            });
          }));
      });
    });
}
List_Bool replace_List_Bool (List_Bool list , Bool item , List_Bool aimed ) {
  return ({ /* cicili#Let8661 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8665 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8666 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8668 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8671 */
            Cons_Bool (head , replace_List_Bool (tail , item , aimed ));
          }) : ({ /* cicili#Let8677 */
            // ----------
            
            ({ /* cicili#Progn8681 */
              ({ /* cicili#Let8685 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let8689 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8690 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8693 */
                      Cons_Bool (item , copy_List_Bool (taill ));
                    }) : ({ /* cicili#Let8699 */
                      // ----------
                      
                      ({ /* cicili#Progn8703 */
                        Nil_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Bool delete_List_Bool (List_Bool list , List_Bool aimed ) {
  return ({ /* cicili#Let8710 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8714 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8715 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8717 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8720 */
            Cons_Bool (head , delete_List_Bool (tail , aimed ));
          }) : ({ /* cicili#Let8726 */
            // ----------
            
            ({ /* cicili#Progn8730 */
              ({ /* cicili#Let8734 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let8738 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8739 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8742 */
                      copy_List_Bool (taill );
                    }) : ({ /* cicili#Let8747 */
                      // ----------
                      
                      ({ /* cicili#Progn8751 */
                        Nil_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Bool insert_List_Bool (List_Bool llist , Bool item , List_Bool rlist ) {
  return ({ /* cicili#Let8758 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8762 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8763 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8765 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8768 */
            Cons_Bool (head , insert_List_Bool (tail , item , rlist ));
          }) : ({ /* cicili#Let8774 */
            // ----------
            
            ({ /* cicili#Progn8778 */
              Cons_Bool (item , copy_List_Bool (rlist ));
            });
          }));
      });
    });
}
List_Bool reverse_List_Bool (List_Bool list ) {
  List_Bool _reverse (List_Bool list , List_Bool rlist ) {
    return ({ /* cicili#Let8787 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let8791 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8792 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8794 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8797 */
              _reverse (tail , Cons_Bool (head , rlist ));
            }) : ({ /* cicili#Let8802 */
              // ----------
              
              ({ /* cicili#Progn8806 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8810 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8814 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8815 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8817 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8820 */
            _reverse (tail , Cons_Bool (head , Nil_Bool ()));
          }) : ({ /* cicili#Let8826 */
            // ----------
            
            ({ /* cicili#Progn8830 */
              list ;
            });
          }));
      });
    });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let8836 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8840 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8841 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8843 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8846 */
            Cons_Bool (head , append_List_Bool (tail , rlist ));
          }) : ({ /* cicili#Let8852 */
            // ----------
            
            ({ /* cicili#Progn8856 */
              copy_List_Bool (rlist );
            });
          }));
      });
    });
}
List_Bool push_List_Bool (Bool item , List_Bool list ) {
  return Cons_Bool (item , copy_List_Bool (list ));
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return (((len  <=  0 )) ? Nil_Bool () : ({ /* cicili#Let8869 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let8873 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8874 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8876 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8879 */
              Cons_Bool (head , take_List_Bool ((--len ), tail ));
            }) : ({ /* cicili#Let8885 */
              // ----------
              
              ({ /* cicili#Progn8889 */
                Nil_Bool ();
              });
            }));
        });
      }));
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8896 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8900 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8901 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8904 */
            ({ /* cicili#Let8908 */
              // ----------
              
              ({ /* cicili#Let8912 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn8914 */
                    copy_List_Bool (list );
                  }) : ({ /* cicili#Let8919 */
                    // ----------
                    
                    ({ /* cicili#Progn8923 */
                      last_List_Bool (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8928 */
            // ----------
            
            ({ /* cicili#Progn8932 */
              Nil_Bool ();
            });
          }));
      });
    });
}
List_Bool init_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8940 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8944 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8945 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8947 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8950 */
            Cons_Bool (head , init_List_Bool (tail ));
          }) : ({ /* cicili#Let8956 */
            // ----------
            
            ({ /* cicili#Progn8960 */
              Nil_Bool ();
            });
          }));
      });
    });
}
int hasLen_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let8967 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8971 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8972 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8975 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Bool (tail , (--desired )) ));
          }) : ({ /* cicili#Let8981 */
            // ----------
            
            ({ /* cicili#Progn8985 */
              0;
            });
          }));
      });
    });
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8991 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let8995 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8996 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8999 */
            (1 +  len_List_Bool (tail ) );
          }) : ({ /* cicili#Let9004 */
            // ----------
            
            ({ /* cicili#Progn9008 */
              0;
            });
          }));
      });
    });
}
List_Bool tail_List_Bool (List_Bool list ) {
  return drop_List_Bool (1, list );
}
List_Bool drop_List_Bool (int len , List_Bool list ) {
  return (((len  <=  0 )) ? copy_List_Bool (list ) : ({ /* cicili#Let9019 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9023 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9024 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9027 */
              drop_List_Bool ((--len ), tail );
            }) : ({ /* cicili#Let9032 */
              // ----------
              
              ({ /* cicili#Progn9036 */
                Nil_Bool ();
              });
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let9044 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let9048 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9049 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9052 */
            Just_Bool (head );
          }) : ({ /* cicili#Let9057 */
            // ----------
            
            ({ /* cicili#Progn9061 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
List_Bool nthcdr_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let9068 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9072 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9073 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9076 */
            nthcdr_List_Bool ((--index ), tail );
          }) : ({ /* cicili#Let9081 */
            // ----------
            
            ({ /* cicili#Progn9085 */
              list ;
            });
          }));
      });
    });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let9092 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9096 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9097 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9099 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9102 */
            (((index  ==  0 )) ? Just_Bool (head ) : (((index  <  0 )) ? Nothing_Bool () : nth_List_Bool ((--index ), tail )));
          }) : ({ /* cicili#Let9111 */
            // ----------
            
            ({ /* cicili#Progn9115 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let9120 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let9124 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9128 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9129 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9133 */
            { /* cicili#Block9135 */
              free (this );
              free_List_Bool ((&tail ));
            }
          }
        else
          { /* cicili#Let9143 */
            // ----------
            
            ({ /* cicili#Let9147 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block9150 */
                  { /* cicili#Block9152 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_Bool__H_Table * const get_List_Bool__H_Table () {
  static List_Bool__H_Table table  = { free_List_Bool , toArray_List_Bool , wrap_List_Bool , pure_List_Bool , show_List_Bool , copy_List_Bool , replaceAt_List_Bool , deleteAt_List_Bool , insertAt_List_Bool , replace_List_Bool , delete_List_Bool , insert_List_Bool , reverse_List_Bool , append_List_Bool , push_List_Bool , take_List_Bool , last_List_Bool , init_List_Bool , hasLen_List_Bool , len_List_Bool , tail_List_Bool , drop_List_Bool , head_List_Bool , nthcdr_List_Bool , nth_List_Bool };
  return (&table );
}
List_Bool Cons_Bool (Bool head , List_Bool tail ) {
  { /* cicili#Let9163 */
    List_Bool instance  = malloc (sizeof(class_List_Bool));
    // ----------
    (*instance ) = ((class_List_Bool){ get_List_Bool__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Bool Nil_Bool () {
  { /* cicili#Let9169 */
    List_Bool instance  = malloc (sizeof(class_List_Bool));
    // ----------
    (*instance ) = ((class_List_Bool){ get_List_Bool__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_Bool__H_IMPL__ */ 
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  { /* cicili#Let9186 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let9191 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
void free_Maybe_int (Maybe_int * this ) {
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Just_int (int value ) {
  { /* cicili#Let9209 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* cicili#Let9214 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
int * toArray_List_int (List_int list , int term ) {
  int * array (List_int list , int count ) {
    return ({ /* cicili#Let9224 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9228 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9229 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9231 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9234 */
              ({ /* cicili#Let9236 */
                int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let9240 */
              // ----------
              
              ({ /* cicili#Progn9244 */
                ({ /* cicili#Let9246 */
                  int * arr  = calloc (count , sizeof(int));
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
List_int wrap_List_int (const int item ) {
  return Cons_int (item , Nil_int ());
}
List_int pure_List_int (const int * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_int () : ({ /* cicili#Let9257 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int () : Cons_int (item , pure_List_int ((++buf ), (--len ))));
      }));
}
int show_List_int (CFile file , List_int list ) {
  return ({ /* cicili#Let9267 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9271 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9272 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9274 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9277 */
            (({ /* cicili#Let9281 */
                // ----------
                
                ({ /* cicili#Let9285 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9287 */
                      (fprintf (file , "%d", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let9296 */
                      // ----------
                      
                      ({ /* cicili#Progn9300 */
                        fprintf (file , "%d", head );
                      });
                    }));
                });
              }) +  show_List_int (file , tail ) );
          }) : ({ /* cicili#Let9310 */
            // ----------
            
            ({ /* cicili#Progn9314 */
              0;
            });
          }));
      });
    });
}
List_int copy_List_int (List_int list ) {
  return ({ /* cicili#Let9320 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9324 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9325 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9327 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9330 */
            Cons_int (head , copy_List_int (tail ));
          }) : ({ /* cicili#Let9336 */
            // ----------
            
            ({ /* cicili#Progn9340 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int replaceAt_List_int (List_int list , int item , int index ) {
  return ({ /* cicili#Let9347 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9351 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9352 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9354 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9357 */
            Cons_int (head , replaceAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let9363 */
            // ----------
            
            ({ /* cicili#Progn9367 */
              ({ /* cicili#Let9371 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let9375 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9376 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9379 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* cicili#Let9385 */
                      // ----------
                      
                      ({ /* cicili#Progn9389 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int deleteAt_List_int (List_int list , int index ) {
  return ({ /* cicili#Let9396 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9400 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9401 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9403 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9406 */
            Cons_int (head , deleteAt_List_int (tail , (index  -  1 )));
          }) : ({ /* cicili#Let9412 */
            // ----------
            
            ({ /* cicili#Progn9416 */
              ({ /* cicili#Let9420 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let9424 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9425 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9428 */
                      copy_List_int (taill );
                    }) : ({ /* cicili#Let9433 */
                      // ----------
                      
                      ({ /* cicili#Progn9437 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int insertAt_List_int (List_int llist , int item , int index ) {
  return ({ /* cicili#Let9444 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9448 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9449 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9451 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9454 */
            Cons_int (head , insertAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let9460 */
            // ----------
            
            ({ /* cicili#Progn9464 */
              Cons_int (item , copy_List_int (llist ));
            });
          }));
      });
    });
}
List_int replace_List_int (List_int list , int item , List_int aimed ) {
  return ({ /* cicili#Let9472 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9476 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9477 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9479 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9482 */
            Cons_int (head , replace_List_int (tail , item , aimed ));
          }) : ({ /* cicili#Let9488 */
            // ----------
            
            ({ /* cicili#Progn9492 */
              ({ /* cicili#Let9496 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let9500 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9501 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9504 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* cicili#Let9510 */
                      // ----------
                      
                      ({ /* cicili#Progn9514 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int delete_List_int (List_int list , List_int aimed ) {
  return ({ /* cicili#Let9521 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9525 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9526 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9528 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9531 */
            Cons_int (head , delete_List_int (tail , aimed ));
          }) : ({ /* cicili#Let9537 */
            // ----------
            
            ({ /* cicili#Progn9541 */
              ({ /* cicili#Let9545 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let9549 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9550 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9553 */
                      copy_List_int (taill );
                    }) : ({ /* cicili#Let9558 */
                      // ----------
                      
                      ({ /* cicili#Progn9562 */
                        Nil_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_int insert_List_int (List_int llist , int item , List_int rlist ) {
  return ({ /* cicili#Let9569 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9573 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9574 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9576 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9579 */
            Cons_int (head , insert_List_int (tail , item , rlist ));
          }) : ({ /* cicili#Let9585 */
            // ----------
            
            ({ /* cicili#Progn9589 */
              Cons_int (item , copy_List_int (rlist ));
            });
          }));
      });
    });
}
List_int reverse_List_int (List_int list ) {
  List_int _reverse (List_int list , List_int rlist ) {
    return ({ /* cicili#Let9598 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9602 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9603 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9605 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9608 */
              _reverse (tail , Cons_int (head , rlist ));
            }) : ({ /* cicili#Let9613 */
              // ----------
              
              ({ /* cicili#Progn9617 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9621 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9625 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9626 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9628 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9631 */
            _reverse (tail , Cons_int (head , Nil_int ()));
          }) : ({ /* cicili#Let9637 */
            // ----------
            
            ({ /* cicili#Progn9641 */
              list ;
            });
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let9647 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9651 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9652 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9654 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9657 */
            Cons_int (head , append_List_int (tail , rlist ));
          }) : ({ /* cicili#Let9663 */
            // ----------
            
            ({ /* cicili#Progn9667 */
              copy_List_int (rlist );
            });
          }));
      });
    });
}
List_int push_List_int (int item , List_int list ) {
  return Cons_int (item , copy_List_int (list ));
}
List_int take_List_int (int len , List_int list ) {
  return (((len  <=  0 )) ? Nil_int () : ({ /* cicili#Let9680 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9684 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9685 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9687 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9690 */
              Cons_int (head , take_List_int ((--len ), tail ));
            }) : ({ /* cicili#Let9696 */
              // ----------
              
              ({ /* cicili#Progn9700 */
                Nil_int ();
              });
            }));
        });
      }));
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let9707 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9711 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9712 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9715 */
            ({ /* cicili#Let9719 */
              // ----------
              
              ({ /* cicili#Let9723 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn9725 */
                    copy_List_int (list );
                  }) : ({ /* cicili#Let9730 */
                    // ----------
                    
                    ({ /* cicili#Progn9734 */
                      last_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let9739 */
            // ----------
            
            ({ /* cicili#Progn9743 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int init_List_int (List_int list ) {
  return ({ /* cicili#Let9751 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9755 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9756 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9758 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9761 */
            Cons_int (head , init_List_int (tail ));
          }) : ({ /* cicili#Let9767 */
            // ----------
            
            ({ /* cicili#Progn9771 */
              Nil_int ();
            });
          }));
      });
    });
}
int hasLen_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let9778 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9782 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9783 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9786 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int (tail , (--desired )) ));
          }) : ({ /* cicili#Let9792 */
            // ----------
            
            ({ /* cicili#Progn9796 */
              0;
            });
          }));
      });
    });
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let9802 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9806 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9807 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9810 */
            (1 +  len_List_int (tail ) );
          }) : ({ /* cicili#Let9815 */
            // ----------
            
            ({ /* cicili#Progn9819 */
              0;
            });
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return drop_List_int (1, list );
}
List_int drop_List_int (int len , List_int list ) {
  return (((len  <=  0 )) ? copy_List_int (list ) : ({ /* cicili#Let9830 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9834 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9835 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9838 */
              drop_List_int ((--len ), tail );
            }) : ({ /* cicili#Let9843 */
              // ----------
              
              ({ /* cicili#Progn9847 */
                Nil_int ();
              });
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return ({ /* cicili#Let9855 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let9859 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9860 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9863 */
            Just_int (head );
          }) : ({ /* cicili#Let9868 */
            // ----------
            
            ({ /* cicili#Progn9872 */
              Nothing_int ();
            });
          }));
      });
    });
}
List_int nthcdr_List_int (int index , List_int list ) {
  return ({ /* cicili#Let9879 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9883 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9884 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9887 */
            nthcdr_List_int ((--index ), tail );
          }) : ({ /* cicili#Let9892 */
            // ----------
            
            ({ /* cicili#Progn9896 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let9903 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9907 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9908 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9910 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9913 */
            (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_List_int ((--index ), tail )));
          }) : ({ /* cicili#Let9922 */
            // ----------
            
            ({ /* cicili#Progn9926 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let9931 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let9935 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9939 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9940 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9944 */
            { /* cicili#Block9946 */
              free (this );
              free_List_int ((&tail ));
            }
          }
        else
          { /* cicili#Let9954 */
            // ----------
            
            ({ /* cicili#Let9958 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block9961 */
                  { /* cicili#Block9963 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_int__H_Table * const get_List_int__H_Table () {
  static List_int__H_Table table  = { free_List_int , toArray_List_int , wrap_List_int , pure_List_int , show_List_int , copy_List_int , replaceAt_List_int , deleteAt_List_int , insertAt_List_int , replace_List_int , delete_List_int , insert_List_int , reverse_List_int , append_List_int , push_List_int , take_List_int , last_List_int , init_List_int , hasLen_List_int , len_List_int , tail_List_int , drop_List_int , head_List_int , nthcdr_List_int , nth_List_int };
  return (&table );
}
List_int Cons_int (int head , List_int tail ) {
  { /* cicili#Let9974 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int Nil_int () {
  { /* cicili#Let9980 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_int__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* cicili#Let9997 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let10002 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Just_char (char value ) {
  { /* cicili#Let10022 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let10027 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __List_char__H_IMPL__
#define __List_char__H_IMPL__
char * toArray_List_char (List_char list , char term ) {
  char * array (List_char list , int count ) {
    return ({ /* cicili#Let10037 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10041 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10042 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10044 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10047 */
              ({ /* cicili#Let10049 */
                char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let10053 */
              // ----------
              
              ({ /* cicili#Progn10057 */
                ({ /* cicili#Let10059 */
                  char * arr  = calloc (count , sizeof(char));
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
List_char wrap_List_char (const char item ) {
  return Cons_char (item , Nil_char ());
}
List_char pure_List_char (const char * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_char () : ({ /* cicili#Let10070 */
        char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_char () : Cons_char (item , pure_List_char ((++buf ), (--len ))));
      }));
}
int show_List_char (CFile file , List_char list ) {
  return ({ /* cicili#Let10080 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10084 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10085 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10087 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10090 */
            (({ /* cicili#Let10094 */
                // ----------
                
                ({ /* cicili#Let10098 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10100 */
                      (fprintf (file , "%c", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let10109 */
                      // ----------
                      
                      ({ /* cicili#Progn10113 */
                        fprintf (file , "%c", head );
                      });
                    }));
                });
              }) +  show_List_char (file , tail ) );
          }) : ({ /* cicili#Let10123 */
            // ----------
            
            ({ /* cicili#Progn10127 */
              0;
            });
          }));
      });
    });
}
List_char copy_List_char (List_char list ) {
  return ({ /* cicili#Let10133 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10137 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10138 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10140 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10143 */
            Cons_char (head , copy_List_char (tail ));
          }) : ({ /* cicili#Let10149 */
            // ----------
            
            ({ /* cicili#Progn10153 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char replaceAt_List_char (List_char list , char item , int index ) {
  return ({ /* cicili#Let10160 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10164 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10165 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10167 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10170 */
            Cons_char (head , replaceAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let10176 */
            // ----------
            
            ({ /* cicili#Progn10180 */
              ({ /* cicili#Let10184 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let10188 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10189 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10192 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* cicili#Let10198 */
                      // ----------
                      
                      ({ /* cicili#Progn10202 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char deleteAt_List_char (List_char list , int index ) {
  return ({ /* cicili#Let10209 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10213 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10214 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10216 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10219 */
            Cons_char (head , deleteAt_List_char (tail , (index  -  1 )));
          }) : ({ /* cicili#Let10225 */
            // ----------
            
            ({ /* cicili#Progn10229 */
              ({ /* cicili#Let10233 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let10237 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10238 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10241 */
                      copy_List_char (taill );
                    }) : ({ /* cicili#Let10246 */
                      // ----------
                      
                      ({ /* cicili#Progn10250 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char insertAt_List_char (List_char llist , char item , int index ) {
  return ({ /* cicili#Let10257 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10261 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10262 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10264 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10267 */
            Cons_char (head , insertAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let10273 */
            // ----------
            
            ({ /* cicili#Progn10277 */
              Cons_char (item , copy_List_char (llist ));
            });
          }));
      });
    });
}
List_char replace_List_char (List_char list , char item , List_char aimed ) {
  return ({ /* cicili#Let10285 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10289 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10290 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10292 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10295 */
            Cons_char (head , replace_List_char (tail , item , aimed ));
          }) : ({ /* cicili#Let10301 */
            // ----------
            
            ({ /* cicili#Progn10305 */
              ({ /* cicili#Let10309 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let10313 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10314 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10317 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* cicili#Let10323 */
                      // ----------
                      
                      ({ /* cicili#Progn10327 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char delete_List_char (List_char list , List_char aimed ) {
  return ({ /* cicili#Let10334 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10338 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10339 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10341 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10344 */
            Cons_char (head , delete_List_char (tail , aimed ));
          }) : ({ /* cicili#Let10350 */
            // ----------
            
            ({ /* cicili#Progn10354 */
              ({ /* cicili#Let10358 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let10362 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10363 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10366 */
                      copy_List_char (taill );
                    }) : ({ /* cicili#Let10371 */
                      // ----------
                      
                      ({ /* cicili#Progn10375 */
                        Nil_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_char insert_List_char (List_char llist , char item , List_char rlist ) {
  return ({ /* cicili#Let10382 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10386 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10387 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10389 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10392 */
            Cons_char (head , insert_List_char (tail , item , rlist ));
          }) : ({ /* cicili#Let10398 */
            // ----------
            
            ({ /* cicili#Progn10402 */
              Cons_char (item , copy_List_char (rlist ));
            });
          }));
      });
    });
}
List_char reverse_List_char (List_char list ) {
  List_char _reverse (List_char list , List_char rlist ) {
    return ({ /* cicili#Let10411 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10415 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10416 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10418 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10421 */
              _reverse (tail , Cons_char (head , rlist ));
            }) : ({ /* cicili#Let10426 */
              // ----------
              
              ({ /* cicili#Progn10430 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10434 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10438 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10439 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10441 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10444 */
            _reverse (tail , Cons_char (head , Nil_char ()));
          }) : ({ /* cicili#Let10450 */
            // ----------
            
            ({ /* cicili#Progn10454 */
              list ;
            });
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let10460 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10464 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10465 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10467 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10470 */
            Cons_char (head , append_List_char (tail , rlist ));
          }) : ({ /* cicili#Let10476 */
            // ----------
            
            ({ /* cicili#Progn10480 */
              copy_List_char (rlist );
            });
          }));
      });
    });
}
List_char push_List_char (char item , List_char list ) {
  return Cons_char (item , copy_List_char (list ));
}
List_char take_List_char (int len , List_char list ) {
  return (((len  <=  0 )) ? Nil_char () : ({ /* cicili#Let10493 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10497 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10498 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10500 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10503 */
              Cons_char (head , take_List_char ((--len ), tail ));
            }) : ({ /* cicili#Let10509 */
              // ----------
              
              ({ /* cicili#Progn10513 */
                Nil_char ();
              });
            }));
        });
      }));
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let10520 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10524 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10525 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10528 */
            ({ /* cicili#Let10532 */
              // ----------
              
              ({ /* cicili#Let10536 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn10538 */
                    copy_List_char (list );
                  }) : ({ /* cicili#Let10543 */
                    // ----------
                    
                    ({ /* cicili#Progn10547 */
                      last_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10552 */
            // ----------
            
            ({ /* cicili#Progn10556 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char init_List_char (List_char list ) {
  return ({ /* cicili#Let10564 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10568 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10569 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10571 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10574 */
            Cons_char (head , init_List_char (tail ));
          }) : ({ /* cicili#Let10580 */
            // ----------
            
            ({ /* cicili#Progn10584 */
              Nil_char ();
            });
          }));
      });
    });
}
int hasLen_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let10591 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10595 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10596 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10599 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_char (tail , (--desired )) ));
          }) : ({ /* cicili#Let10605 */
            // ----------
            
            ({ /* cicili#Progn10609 */
              0;
            });
          }));
      });
    });
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let10615 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10619 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10620 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10623 */
            (1 +  len_List_char (tail ) );
          }) : ({ /* cicili#Let10628 */
            // ----------
            
            ({ /* cicili#Progn10632 */
              0;
            });
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return drop_List_char (1, list );
}
List_char drop_List_char (int len , List_char list ) {
  return (((len  <=  0 )) ? copy_List_char (list ) : ({ /* cicili#Let10643 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10647 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10648 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10651 */
              drop_List_char ((--len ), tail );
            }) : ({ /* cicili#Let10656 */
              // ----------
              
              ({ /* cicili#Progn10660 */
                Nil_char ();
              });
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return ({ /* cicili#Let10668 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let10672 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10673 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10676 */
            Just_char (head );
          }) : ({ /* cicili#Let10681 */
            // ----------
            
            ({ /* cicili#Progn10685 */
              Nothing_char ();
            });
          }));
      });
    });
}
List_char nthcdr_List_char (int index , List_char list ) {
  return ({ /* cicili#Let10692 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10696 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10697 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10700 */
            nthcdr_List_char ((--index ), tail );
          }) : ({ /* cicili#Let10705 */
            // ----------
            
            ({ /* cicili#Progn10709 */
              list ;
            });
          }));
      });
    });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let10716 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10720 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10721 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10723 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10726 */
            (((index  ==  0 )) ? Just_char (head ) : (((index  <  0 )) ? Nothing_char () : nth_List_char ((--index ), tail )));
          }) : ({ /* cicili#Let10735 */
            // ----------
            
            ({ /* cicili#Progn10739 */
              Nothing_char ();
            });
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let10744 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let10748 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10752 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10753 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block10757 */
            { /* cicili#Block10759 */
              free (this );
              free_List_char ((&tail ));
            }
          }
        else
          { /* cicili#Let10767 */
            // ----------
            
            ({ /* cicili#Let10771 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block10774 */
                  { /* cicili#Block10776 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_char__H_Table * const get_List_char__H_Table () {
  static List_char__H_Table table  = { free_List_char , toArray_List_char , wrap_List_char , pure_List_char , show_List_char , copy_List_char , replaceAt_List_char , deleteAt_List_char , insertAt_List_char , replace_List_char , delete_List_char , insert_List_char , reverse_List_char , append_List_char , push_List_char , take_List_char , last_List_char , init_List_char , hasLen_List_char , len_List_char , tail_List_char , drop_List_char , head_List_char , nthcdr_List_char , nth_List_char };
  return (&table );
}
List_char Cons_char (char head , List_char tail ) {
  { /* cicili#Let10787 */
    List_char instance  = malloc (sizeof(class_List_char));
    // ----------
    (*instance ) = ((class_List_char){ get_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_char Nil_char () {
  { /* cicili#Let10793 */
    List_char instance  = malloc (sizeof(class_List_char));
    // ----------
    (*instance ) = ((class_List_char){ get_List_char__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_char__H_IMPL__ */ 
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Just_List_char (List_char value ) {
  { /* cicili#Let10810 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let10815 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
List_char new_List_char_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Nil_char ();
  else
    { /* cicili#Let10824 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nil_char ();
      else
        return Cons_char (item , new_List_char_Const ((++buf )));
    }
}
#ifndef __Maybe_Char__H_IMPL__
#define __Maybe_Char__H_IMPL__
void free_Maybe_Char (Maybe_Char * this ) {
}
const Maybe_Char__H_Table * const get_Maybe_Char__H_Table () {
  static const Maybe_Char__H_Table table  = { free_Maybe_Char };
  return (&table );
}
Maybe_Char Just_Char (Char value ) {
  { /* cicili#Let10848 */
    Maybe_Char instance  = ((Maybe_Char){ get_Maybe_Char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Char Nothing_Char () {
  { /* cicili#Let10853 */
    Maybe_Char instance  = ((Maybe_Char){ get_Maybe_Char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Char__H_IMPL__ */ 
#ifndef __String__H_IMPL__
#define __String__H_IMPL__
Char * toArray_String (String list , Char term ) {
  Char * array (String list , int count ) {
    return ({ /* cicili#Let10863 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10867 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10868 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10870 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10873 */
              ({ /* cicili#Let10875 */
                Char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let10879 */
              // ----------
              
              ({ /* cicili#Progn10883 */
                ({ /* cicili#Let10885 */
                  Char * arr  = calloc (count , sizeof(Char));
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
String wrap_String (const Char item ) {
  return Cons_Char (item , Nil_Char ());
}
String pure_String (const Char * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_Char () : ({ /* cicili#Let10896 */
        Char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Char () : Cons_Char (item , pure_String ((++buf ), (--len ))));
      }));
}
int show_String (CFile file , String list ) {
  return ({ /* cicili#Let10906 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10910 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10911 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10913 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10916 */
            (({ /* cicili#Let10920 */
                // ----------
                
                ({ /* cicili#Let10924 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10926 */
                      (fprintf (file , "%c", head ) +  fprintf (file , "%s", "") );
                    }) : ({ /* cicili#Let10935 */
                      // ----------
                      
                      ({ /* cicili#Progn10939 */
                        fprintf (file , "%c", head );
                      });
                    }));
                });
              }) +  show_String (file , tail ) );
          }) : ({ /* cicili#Let10949 */
            // ----------
            
            ({ /* cicili#Progn10953 */
              0;
            });
          }));
      });
    });
}
String copy_String (String list ) {
  return ({ /* cicili#Let10959 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10963 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10964 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10966 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10969 */
            Cons_Char (head , copy_String (tail ));
          }) : ({ /* cicili#Let10975 */
            // ----------
            
            ({ /* cicili#Progn10979 */
              Nil_Char ();
            });
          }));
      });
    });
}
String replaceAt_String (String list , Char item , int index ) {
  return ({ /* cicili#Let10986 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let10990 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10991 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10993 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10996 */
            Cons_Char (head , replaceAt_String (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let11002 */
            // ----------
            
            ({ /* cicili#Progn11006 */
              ({ /* cicili#Let11010 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let11014 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11015 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11018 */
                      Cons_Char (item , copy_String (taill ));
                    }) : ({ /* cicili#Let11024 */
                      // ----------
                      
                      ({ /* cicili#Progn11028 */
                        Nil_Char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
String deleteAt_String (String list , int index ) {
  return ({ /* cicili#Let11035 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11039 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11040 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11042 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11045 */
            Cons_Char (head , deleteAt_String (tail , (index  -  1 )));
          }) : ({ /* cicili#Let11051 */
            // ----------
            
            ({ /* cicili#Progn11055 */
              ({ /* cicili#Let11059 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let11063 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11064 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11067 */
                      copy_String (taill );
                    }) : ({ /* cicili#Let11072 */
                      // ----------
                      
                      ({ /* cicili#Progn11076 */
                        Nil_Char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
String insertAt_String (String llist , Char item , int index ) {
  return ({ /* cicili#Let11083 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11087 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11088 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11090 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11093 */
            Cons_Char (head , insertAt_String (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let11099 */
            // ----------
            
            ({ /* cicili#Progn11103 */
              Cons_Char (item , copy_String (llist ));
            });
          }));
      });
    });
}
String replace_String (String list , Char item , String aimed ) {
  return ({ /* cicili#Let11111 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11115 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11116 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11118 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11121 */
            Cons_Char (head , replace_String (tail , item , aimed ));
          }) : ({ /* cicili#Let11127 */
            // ----------
            
            ({ /* cicili#Progn11131 */
              ({ /* cicili#Let11135 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let11139 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11140 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11143 */
                      Cons_Char (item , copy_String (taill ));
                    }) : ({ /* cicili#Let11149 */
                      // ----------
                      
                      ({ /* cicili#Progn11153 */
                        Nil_Char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
String delete_String (String list , String aimed ) {
  return ({ /* cicili#Let11160 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11164 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11165 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11167 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11170 */
            Cons_Char (head , delete_String (tail , aimed ));
          }) : ({ /* cicili#Let11176 */
            // ----------
            
            ({ /* cicili#Progn11180 */
              ({ /* cicili#Let11184 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let11188 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11189 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11192 */
                      copy_String (taill );
                    }) : ({ /* cicili#Let11197 */
                      // ----------
                      
                      ({ /* cicili#Progn11201 */
                        Nil_Char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
String insert_String (String llist , Char item , String rlist ) {
  return ({ /* cicili#Let11208 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11212 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11213 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11215 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11218 */
            Cons_Char (head , insert_String (tail , item , rlist ));
          }) : ({ /* cicili#Let11224 */
            // ----------
            
            ({ /* cicili#Progn11228 */
              Cons_Char (item , copy_String (rlist ));
            });
          }));
      });
    });
}
String reverse_String (String list ) {
  String _reverse (String list , String rlist ) {
    return ({ /* cicili#Let11237 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11241 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11242 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11244 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11247 */
              _reverse (tail , Cons_Char (head , rlist ));
            }) : ({ /* cicili#Let11252 */
              // ----------
              
              ({ /* cicili#Progn11256 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11260 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11264 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11265 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11267 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11270 */
            _reverse (tail , Cons_Char (head , Nil_Char ()));
          }) : ({ /* cicili#Let11276 */
            // ----------
            
            ({ /* cicili#Progn11280 */
              list ;
            });
          }));
      });
    });
}
String append_String (String llist , String rlist ) {
  return ({ /* cicili#Let11286 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11290 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11291 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11293 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11296 */
            Cons_Char (head , append_String (tail , rlist ));
          }) : ({ /* cicili#Let11302 */
            // ----------
            
            ({ /* cicili#Progn11306 */
              copy_String (rlist );
            });
          }));
      });
    });
}
String push_String (Char item , String list ) {
  return Cons_Char (item , copy_String (list ));
}
String take_String (int len , String list ) {
  return (((len  <=  0 )) ? Nil_Char () : ({ /* cicili#Let11319 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11323 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11324 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11326 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11329 */
              Cons_Char (head , take_String ((--len ), tail ));
            }) : ({ /* cicili#Let11335 */
              // ----------
              
              ({ /* cicili#Progn11339 */
                Nil_Char ();
              });
            }));
        });
      }));
}
String last_String (String list ) {
  return ({ /* cicili#Let11346 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11350 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11351 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11354 */
            ({ /* cicili#Let11358 */
              // ----------
              
              ({ /* cicili#Let11362 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn11364 */
                    copy_String (list );
                  }) : ({ /* cicili#Let11369 */
                    // ----------
                    
                    ({ /* cicili#Progn11373 */
                      last_String (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let11378 */
            // ----------
            
            ({ /* cicili#Progn11382 */
              Nil_Char ();
            });
          }));
      });
    });
}
String init_String (String list ) {
  return ({ /* cicili#Let11390 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11394 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11395 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11397 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11400 */
            Cons_Char (head , init_String (tail ));
          }) : ({ /* cicili#Let11406 */
            // ----------
            
            ({ /* cicili#Progn11410 */
              Nil_Char ();
            });
          }));
      });
    });
}
int hasLen_String (String list , int desired ) {
  return ({ /* cicili#Let11417 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11421 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11422 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11425 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_String (tail , (--desired )) ));
          }) : ({ /* cicili#Let11431 */
            // ----------
            
            ({ /* cicili#Progn11435 */
              0;
            });
          }));
      });
    });
}
int len_String (String list ) {
  return ({ /* cicili#Let11441 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11445 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11446 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11449 */
            (1 +  len_String (tail ) );
          }) : ({ /* cicili#Let11454 */
            // ----------
            
            ({ /* cicili#Progn11458 */
              0;
            });
          }));
      });
    });
}
String tail_String (String list ) {
  return drop_String (1, list );
}
String drop_String (int len , String list ) {
  return (((len  <=  0 )) ? copy_String (list ) : ({ /* cicili#Let11469 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let11473 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11474 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn11477 */
              drop_String ((--len ), tail );
            }) : ({ /* cicili#Let11482 */
              // ----------
              
              ({ /* cicili#Progn11486 */
                Nil_Char ();
              });
            }));
        });
      }));
}
Maybe_Char head_String (String list ) {
  return ({ /* cicili#Let11494 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let11498 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11499 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11502 */
            Just_Char (head );
          }) : ({ /* cicili#Let11507 */
            // ----------
            
            ({ /* cicili#Progn11511 */
              Nothing_Char ();
            });
          }));
      });
    });
}
String nthcdr_String (int index , String list ) {
  return ({ /* cicili#Let11518 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11522 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11523 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11526 */
            nthcdr_String ((--index ), tail );
          }) : ({ /* cicili#Let11531 */
            // ----------
            
            ({ /* cicili#Progn11535 */
              list ;
            });
          }));
      });
    });
}
Maybe_Char nth_String (int index , String list ) {
  return ({ /* cicili#Let11542 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11546 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11547 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11549 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11552 */
            (((index  ==  0 )) ? Just_Char (head ) : (((index  <  0 )) ? Nothing_Char () : nth_String ((--index ), tail )));
          }) : ({ /* cicili#Let11561 */
            // ----------
            
            ({ /* cicili#Progn11565 */
              Nothing_Char ();
            });
          }));
      });
    });
}
void free_String (String * this_ptr ) {
  { /* cicili#Let11570 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let11574 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let11578 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11579 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block11583 */
            { /* cicili#Block11585 */
              free (this );
              free_String ((&tail ));
            }
          }
        else
          { /* cicili#Let11593 */
            // ----------
            
            ({ /* cicili#Let11597 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block11600 */
                  { /* cicili#Block11602 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
String__H_Table * const get_String__H_Table () {
  static String__H_Table table  = { free_String , toArray_String , wrap_String , pure_String , show_String , copy_String , replaceAt_String , deleteAt_String , insertAt_String , replace_String , delete_String , insert_String , reverse_String , append_String , push_String , take_String , last_String , init_String , hasLen_String , len_String , tail_String , drop_String , head_String , nthcdr_String , nth_String };
  return (&table );
}
String Cons_Char (Char head , String tail ) {
  { /* cicili#Let11613 */
    String instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
String Nil_Char () {
  { /* cicili#Let11619 */
    String instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __String__H_IMPL__ */ 
#ifndef __Maybe_String__H_IMPL__
#define __Maybe_String__H_IMPL__
void free_Maybe_String (Maybe_String * this ) {
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table () {
  static const Maybe_String__H_Table table  = { free_Maybe_String };
  return (&table );
}
Maybe_String Just_String (String value ) {
  { /* cicili#Let11636 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String Nothing_String () {
  { /* cicili#Let11641 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String__H_IMPL__ */ 
String new_String_Const (const Char * buf ) {
  if (buf  ==  NULL  )
    return Nil_Char ();
  else
    { /* cicili#Let11650 */
      Char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nil_Char ();
      else
        return Cons_Char (item , new_String_Const ((++buf )));
    }
}
#ifndef __Range_int__H_IMPL__
#define __Range_int__H_IMPL__
int show_Range_int (CFile file , Range_int list ) {
  return ({ /* cicili#Let11665 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      
      ({ /* cicili#Let11669 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11670 */
              (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11673 */
            (fprintf (file , "%d", from ) +  fprintf (file , "%s", " ") );
          }) : ({ /* cicili#Let11682 */
            // ----------
            
            ({ /* cicili#Progn11686 */
              0;
            });
          }));
      });
    });
}
Range_int drop_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let11692 */
      // ----------
      
      ({ /* cicili#Let11696 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11698 */
            ({ /* cicili#Let11700 */
              __auto_type ne  = next_Range_int (list );
              // ----------
              ({ /* cicili#Let11705 */
                // ----------
                
                ({ /* cicili#Let11709 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11711 */
                      drop_Range_int ((--len ), ne );
                    }) : ({ /* cicili#Let11716 */
                      // ----------
                      
                      ({ /* cicili#Progn11720 */
                        list ;
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let11724 */
            // ----------
            
            ({ /* cicili#Progn11728 */
              list ;
            });
          }));
      });
    });
}
List_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let11734 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      
      ({ /* cicili#Let11738 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11739 */
                (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  (len  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11742 */
            ({ /* cicili#Let11744 */
              __auto_type ne  = next_Range_int (list );
              // ----------
              ({ /* cicili#Let11749 */
                // ----------
                
                ({ /* cicili#Let11753 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11755 */
                      Cons_int (from , take_Range_int ((--len ), ne ));
                    }) : ({ /* cicili#Let11761 */
                      // ----------
                      
                      ({ /* cicili#Progn11765 */
                        Cons_int (from , Nil_int ());
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let11771 */
            // ----------
            
            ({ /* cicili#Progn11775 */
              Nil_int ();
            });
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let11782 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) to ;
      typeof((((list -> __h_data ). Cons ). __h_2_mem )) step ;
      // ----------
      
      ({ /* cicili#Let11786 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((({ /* cicili#Progn11787 */
                    (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11789 */
                    (to  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn11791 */
                  (step  =  (((list -> __h_data ). Cons ). __h_2_mem ) );
                  true ;
                }) ) &&  ((from  +  step  ) <=  to  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11794 */
            Cons_Range_int ((from  +  step  ), to , step );
          }) : ({ /* cicili#Let11799 */
            // ----------
            
            ({ /* cicili#Progn11803 */
              Nil_Range_int ();
            });
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let11808 */
    __auto_type this  = (*this_ptr );
    // ----------
    free (this );
  }
}
Range_int__H_Table * const get_Range_int__H_Table () {
  static Range_int__H_Table table  = { free_Range_int , show_Range_int , drop_Range_int , take_Range_int , next_Range_int };
  return (&table );
}
Range_int Cons_Range_int (int from , int to , int step ) {
  { /* cicili#Let11817 */
    Range_int instance  = malloc (sizeof(class_Range_int));
    // ----------
    (*instance ) = ((class_Range_int){ get_Range_int__H_Table (), __h_Cons_t , .__h_data.Cons = { from , to , step }});
    return instance ;
  }
}
Range_int Nil_Range_int () {
  { /* cicili#Let11823 */
    Range_int instance  = malloc (sizeof(class_Range_int));
    // ----------
    (*instance ) = ((class_Range_int){ get_Range_int__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __Range_int__H_IMPL__ */ 
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Cons_Range_int (from , to , step ) : Nil_Range_int ());
}
#ifndef __Range_char__H_IMPL__
#define __Range_char__H_IMPL__
int show_Range_char (CFile file , Range_char list ) {
  return ({ /* cicili#Let11840 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      
      ({ /* cicili#Let11844 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11845 */
              (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11848 */
            (fprintf (file , "%c", from ) +  fprintf (file , "%s", " ") );
          }) : ({ /* cicili#Let11857 */
            // ----------
            
            ({ /* cicili#Progn11861 */
              0;
            });
          }));
      });
    });
}
Range_char drop_Range_char (int len , Range_char list ) {
  return ({ /* cicili#Let11867 */
      // ----------
      
      ({ /* cicili#Let11871 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11873 */
            ({ /* cicili#Let11875 */
              __auto_type ne  = next_Range_char (list );
              // ----------
              ({ /* cicili#Let11880 */
                // ----------
                
                ({ /* cicili#Let11884 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11886 */
                      drop_Range_char ((--len ), ne );
                    }) : ({ /* cicili#Let11891 */
                      // ----------
                      
                      ({ /* cicili#Progn11895 */
                        list ;
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let11899 */
            // ----------
            
            ({ /* cicili#Progn11903 */
              list ;
            });
          }));
      });
    });
}
List_char take_Range_char (int len , Range_char list ) {
  return ({ /* cicili#Let11909 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      
      ({ /* cicili#Let11913 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11914 */
                (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  (len  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11917 */
            ({ /* cicili#Let11919 */
              __auto_type ne  = next_Range_char (list );
              // ----------
              ({ /* cicili#Let11924 */
                // ----------
                
                ({ /* cicili#Let11928 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn11930 */
                      Cons_char (from , take_Range_char ((--len ), ne ));
                    }) : ({ /* cicili#Let11936 */
                      // ----------
                      
                      ({ /* cicili#Progn11940 */
                        Cons_char (from , Nil_char ());
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let11946 */
            // ----------
            
            ({ /* cicili#Progn11950 */
              Nil_char ();
            });
          }));
      });
    });
}
Range_char next_Range_char (Range_char list ) {
  return ({ /* cicili#Let11957 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) to ;
      typeof((((list -> __h_data ). Cons ). __h_2_mem )) step ;
      // ----------
      
      ({ /* cicili#Let11961 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((({ /* cicili#Progn11962 */
                    (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11964 */
                    (to  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn11966 */
                  (step  =  (((list -> __h_data ). Cons ). __h_2_mem ) );
                  true ;
                }) ) &&  ((from  +  step  ) <=  to  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11969 */
            Cons_Range_char ((from  +  step  ), to , step );
          }) : ({ /* cicili#Let11974 */
            // ----------
            
            ({ /* cicili#Progn11978 */
              Nil_Range_char ();
            });
          }));
      });
    });
}
void free_Range_char (Range_char * this_ptr ) {
  { /* cicili#Let11983 */
    __auto_type this  = (*this_ptr );
    // ----------
    free (this );
  }
}
Range_char__H_Table * const get_Range_char__H_Table () {
  static Range_char__H_Table table  = { free_Range_char , show_Range_char , drop_Range_char , take_Range_char , next_Range_char };
  return (&table );
}
Range_char Cons_Range_char (char from , char to , char step ) {
  { /* cicili#Let11992 */
    Range_char instance  = malloc (sizeof(class_Range_char));
    // ----------
    (*instance ) = ((class_Range_char){ get_Range_char__H_Table (), __h_Cons_t , .__h_data.Cons = { from , to , step }});
    return instance ;
  }
}
Range_char Nil_Range_char () {
  { /* cicili#Let11998 */
    Range_char instance  = malloc (sizeof(class_Range_char));
    // ----------
    (*instance ) = ((class_Range_char){ get_Range_char__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __Range_char__H_IMPL__ */ 
Range_char new_Range_char (char from , char to , char step ) {
  return (((from  <=  to  )) ? Cons_Range_char (from , to , step ) : Nil_Range_char ());
}
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  { /* cicili#Let12022 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let12027 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __List_List_Bool__H_IMPL__
#define __List_List_Bool__H_IMPL__
List_Bool * toArray_List_List_Bool (List_List_Bool list , List_Bool term ) {
  List_Bool * array (List_List_Bool list , int count ) {
    return ({ /* cicili#Let12037 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12041 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12042 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12044 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12047 */
              ({ /* cicili#Let12049 */
                List_Bool * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let12053 */
              // ----------
              
              ({ /* cicili#Progn12057 */
                ({ /* cicili#Let12059 */
                  List_Bool * arr  = calloc (count , sizeof(List_Bool));
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
List_List_Bool wrap_List_List_Bool (const List_Bool item ) {
  return Cons_List_Bool (item , Nil_List_Bool ());
}
List_List_Bool pure_List_List_Bool (const List_Bool * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_List_Bool () : ({ /* cicili#Let12070 */
        List_Bool item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_Bool () : Cons_List_Bool (item , pure_List_List_Bool ((++buf ), (--len ))));
      }));
}
int show_List_List_Bool (CFile file , List_List_Bool list ) {
  return ({ /* cicili#Let12080 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12084 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12085 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12087 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12090 */
            (({ /* cicili#Let12094 */
                // ----------
                
                ({ /* cicili#Let12098 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12100 */
                      (show_List_Bool (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let12110 */
                      // ----------
                      
                      ({ /* cicili#Progn12114 */
                        show_List_Bool (file , head );
                      });
                    }));
                });
              }) +  show_List_List_Bool (file , tail ) );
          }) : ({ /* cicili#Let12125 */
            // ----------
            
            ({ /* cicili#Progn12129 */
              0;
            });
          }));
      });
    });
}
List_List_Bool copy_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let12135 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12139 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12140 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12142 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12145 */
            Cons_List_Bool (head , copy_List_List_Bool (tail ));
          }) : ({ /* cicili#Let12151 */
            // ----------
            
            ({ /* cicili#Progn12155 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool replaceAt_List_List_Bool (List_List_Bool list , List_Bool item , int index ) {
  return ({ /* cicili#Let12162 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12166 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12167 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12169 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12172 */
            Cons_List_Bool (head , replaceAt_List_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let12178 */
            // ----------
            
            ({ /* cicili#Progn12182 */
              ({ /* cicili#Let12186 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let12190 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12191 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12194 */
                      Cons_List_Bool (item , copy_List_List_Bool (taill ));
                    }) : ({ /* cicili#Let12200 */
                      // ----------
                      
                      ({ /* cicili#Progn12204 */
                        Nil_List_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_Bool deleteAt_List_List_Bool (List_List_Bool list , int index ) {
  return ({ /* cicili#Let12211 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12215 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12216 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12218 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12221 */
            Cons_List_Bool (head , deleteAt_List_List_Bool (tail , (index  -  1 )));
          }) : ({ /* cicili#Let12227 */
            // ----------
            
            ({ /* cicili#Progn12231 */
              ({ /* cicili#Let12235 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let12239 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12240 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12243 */
                      copy_List_List_Bool (taill );
                    }) : ({ /* cicili#Let12248 */
                      // ----------
                      
                      ({ /* cicili#Progn12252 */
                        Nil_List_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_Bool insertAt_List_List_Bool (List_List_Bool llist , List_Bool item , int index ) {
  return ({ /* cicili#Let12259 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12263 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12264 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12266 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12269 */
            Cons_List_Bool (head , insertAt_List_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let12275 */
            // ----------
            
            ({ /* cicili#Progn12279 */
              Cons_List_Bool (item , copy_List_List_Bool (llist ));
            });
          }));
      });
    });
}
List_List_Bool replace_List_List_Bool (List_List_Bool list , List_Bool item , List_List_Bool aimed ) {
  return ({ /* cicili#Let12287 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12291 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12292 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12294 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12297 */
            Cons_List_Bool (head , replace_List_List_Bool (tail , item , aimed ));
          }) : ({ /* cicili#Let12303 */
            // ----------
            
            ({ /* cicili#Progn12307 */
              ({ /* cicili#Let12311 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let12315 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12316 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12319 */
                      Cons_List_Bool (item , copy_List_List_Bool (taill ));
                    }) : ({ /* cicili#Let12325 */
                      // ----------
                      
                      ({ /* cicili#Progn12329 */
                        Nil_List_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_Bool delete_List_List_Bool (List_List_Bool list , List_List_Bool aimed ) {
  return ({ /* cicili#Let12336 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12340 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12341 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12343 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12346 */
            Cons_List_Bool (head , delete_List_List_Bool (tail , aimed ));
          }) : ({ /* cicili#Let12352 */
            // ----------
            
            ({ /* cicili#Progn12356 */
              ({ /* cicili#Let12360 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let12364 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12365 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12368 */
                      copy_List_List_Bool (taill );
                    }) : ({ /* cicili#Let12373 */
                      // ----------
                      
                      ({ /* cicili#Progn12377 */
                        Nil_List_Bool ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_Bool insert_List_List_Bool (List_List_Bool llist , List_Bool item , List_List_Bool rlist ) {
  return ({ /* cicili#Let12384 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12388 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12389 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12391 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12394 */
            Cons_List_Bool (head , insert_List_List_Bool (tail , item , rlist ));
          }) : ({ /* cicili#Let12400 */
            // ----------
            
            ({ /* cicili#Progn12404 */
              Cons_List_Bool (item , copy_List_List_Bool (rlist ));
            });
          }));
      });
    });
}
List_List_Bool reverse_List_List_Bool (List_List_Bool list ) {
  List_List_Bool _reverse (List_List_Bool list , List_List_Bool rlist ) {
    return ({ /* cicili#Let12413 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12417 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12418 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12420 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12423 */
              _reverse (tail , Cons_List_Bool (head , rlist ));
            }) : ({ /* cicili#Let12428 */
              // ----------
              
              ({ /* cicili#Progn12432 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12436 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12440 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12441 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12443 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12446 */
            _reverse (tail , Cons_List_Bool (head , Nil_List_Bool ()));
          }) : ({ /* cicili#Let12452 */
            // ----------
            
            ({ /* cicili#Progn12456 */
              list ;
            });
          }));
      });
    });
}
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist ) {
  return ({ /* cicili#Let12462 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12466 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12467 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12469 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12472 */
            Cons_List_Bool (head , append_List_List_Bool (tail , rlist ));
          }) : ({ /* cicili#Let12478 */
            // ----------
            
            ({ /* cicili#Progn12482 */
              copy_List_List_Bool (rlist );
            });
          }));
      });
    });
}
List_List_Bool push_List_List_Bool (List_Bool item , List_List_Bool list ) {
  return Cons_List_Bool (item , copy_List_List_Bool (list ));
}
List_List_Bool take_List_List_Bool (int len , List_List_Bool list ) {
  return (((len  <=  0 )) ? Nil_List_Bool () : ({ /* cicili#Let12495 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12499 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12500 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12502 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12505 */
              Cons_List_Bool (head , take_List_List_Bool ((--len ), tail ));
            }) : ({ /* cicili#Let12511 */
              // ----------
              
              ({ /* cicili#Progn12515 */
                Nil_List_Bool ();
              });
            }));
        });
      }));
}
List_List_Bool last_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let12522 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12526 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12527 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12530 */
            ({ /* cicili#Let12534 */
              // ----------
              
              ({ /* cicili#Let12538 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn12540 */
                    copy_List_List_Bool (list );
                  }) : ({ /* cicili#Let12545 */
                    // ----------
                    
                    ({ /* cicili#Progn12549 */
                      last_List_List_Bool (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let12554 */
            // ----------
            
            ({ /* cicili#Progn12558 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool init_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let12566 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12570 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12571 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12573 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12576 */
            Cons_List_Bool (head , init_List_List_Bool (tail ));
          }) : ({ /* cicili#Let12582 */
            // ----------
            
            ({ /* cicili#Progn12586 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
int hasLen_List_List_Bool (List_List_Bool list , int desired ) {
  return ({ /* cicili#Let12593 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12597 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12598 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12601 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_Bool (tail , (--desired )) ));
          }) : ({ /* cicili#Let12607 */
            // ----------
            
            ({ /* cicili#Progn12611 */
              0;
            });
          }));
      });
    });
}
int len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let12617 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12621 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12622 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12625 */
            (1 +  len_List_List_Bool (tail ) );
          }) : ({ /* cicili#Let12630 */
            // ----------
            
            ({ /* cicili#Progn12634 */
              0;
            });
          }));
      });
    });
}
List_List_Bool tail_List_List_Bool (List_List_Bool list ) {
  return drop_List_List_Bool (1, list );
}
List_List_Bool drop_List_List_Bool (int len , List_List_Bool list ) {
  return (((len  <=  0 )) ? copy_List_List_Bool (list ) : ({ /* cicili#Let12645 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12649 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12650 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12653 */
              drop_List_List_Bool ((--len ), tail );
            }) : ({ /* cicili#Let12658 */
              // ----------
              
              ({ /* cicili#Progn12662 */
                Nil_List_Bool ();
              });
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let12670 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let12674 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12675 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12678 */
            Just_List_Bool (head );
          }) : ({ /* cicili#Let12683 */
            // ----------
            
            ({ /* cicili#Progn12687 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool nthcdr_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let12694 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12698 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12699 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12702 */
            nthcdr_List_List_Bool ((--index ), tail );
          }) : ({ /* cicili#Let12707 */
            // ----------
            
            ({ /* cicili#Progn12711 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let12718 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12722 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12723 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12725 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12728 */
            (((index  ==  0 )) ? Just_List_Bool (head ) : (((index  <  0 )) ? Nothing_List_Bool () : nth_List_List_Bool ((--index ), tail )));
          }) : ({ /* cicili#Let12737 */
            // ----------
            
            ({ /* cicili#Progn12741 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let12746 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let12750 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12754 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12755 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block12759 */
            { /* cicili#Block12761 */
              free (this );
              free_List_List_Bool ((&tail ));
            }
          }
        else
          { /* cicili#Let12769 */
            // ----------
            
            ({ /* cicili#Let12773 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block12776 */
                  { /* cicili#Block12778 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_List_Bool__H_Table * const get_List_List_Bool__H_Table () {
  static List_List_Bool__H_Table table  = { free_List_List_Bool , toArray_List_List_Bool , wrap_List_List_Bool , pure_List_List_Bool , show_List_List_Bool , copy_List_List_Bool , replaceAt_List_List_Bool , deleteAt_List_List_Bool , insertAt_List_List_Bool , replace_List_List_Bool , delete_List_List_Bool , insert_List_List_Bool , reverse_List_List_Bool , append_List_List_Bool , push_List_List_Bool , take_List_List_Bool , last_List_List_Bool , init_List_List_Bool , hasLen_List_List_Bool , len_List_List_Bool , tail_List_List_Bool , drop_List_List_Bool , head_List_List_Bool , nthcdr_List_List_Bool , nth_List_List_Bool };
  return (&table );
}
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail ) {
  { /* cicili#Let12789 */
    List_List_Bool instance  = malloc (sizeof(class_List_List_Bool));
    // ----------
    (*instance ) = ((class_List_List_Bool){ get_List_List_Bool__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_Bool Nil_List_Bool () {
  { /* cicili#Let12795 */
    List_List_Bool instance  = malloc (sizeof(class_List_List_Bool));
    // ----------
    (*instance ) = ((class_List_List_Bool){ get_List_List_Bool__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_List_Bool__H_IMPL__ */ 
#ifndef __Maybe_List_List_Bool__H_IMPL__
#define __Maybe_List_List_Bool__H_IMPL__
void free_Maybe_List_List_Bool (Maybe_List_List_Bool * this ) {
}
const Maybe_List_List_Bool__H_Table * const get_Maybe_List_List_Bool__H_Table () {
  static const Maybe_List_List_Bool__H_Table table  = { free_Maybe_List_List_Bool };
  return (&table );
}
Maybe_List_List_Bool Just_List_List_Bool (List_List_Bool value ) {
  { /* cicili#Let12812 */
    Maybe_List_List_Bool instance  = ((Maybe_List_List_Bool){ get_Maybe_List_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_Bool Nothing_List_List_Bool () {
  { /* cicili#Let12817 */
    Maybe_List_List_Bool instance  = ((Maybe_List_List_Bool){ get_Maybe_List_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_List_Bool__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* cicili#Let12835 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let12840 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __List_List_int__H_IMPL__
#define __List_List_int__H_IMPL__
List_int * toArray_List_List_int (List_List_int list , List_int term ) {
  List_int * array (List_List_int list , int count ) {
    return ({ /* cicili#Let12850 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let12854 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12855 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12857 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn12860 */
              ({ /* cicili#Let12862 */
                List_int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let12866 */
              // ----------
              
              ({ /* cicili#Progn12870 */
                ({ /* cicili#Let12872 */
                  List_int * arr  = calloc (count , sizeof(List_int));
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
List_List_int wrap_List_List_int (const List_int item ) {
  return Cons_List_int (item , Nil_List_int ());
}
List_List_int pure_List_List_int (const List_int * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_List_int () : ({ /* cicili#Let12883 */
        List_int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_int () : Cons_List_int (item , pure_List_List_int ((++buf ), (--len ))));
      }));
}
int show_List_List_int (CFile file , List_List_int list ) {
  return ({ /* cicili#Let12893 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12897 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12898 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12900 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12903 */
            (({ /* cicili#Let12907 */
                // ----------
                
                ({ /* cicili#Let12911 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn12913 */
                      (show_List_int (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let12923 */
                      // ----------
                      
                      ({ /* cicili#Progn12927 */
                        show_List_int (file , head );
                      });
                    }));
                });
              }) +  show_List_List_int (file , tail ) );
          }) : ({ /* cicili#Let12938 */
            // ----------
            
            ({ /* cicili#Progn12942 */
              0;
            });
          }));
      });
    });
}
List_List_int copy_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let12948 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12952 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12953 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12955 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12958 */
            Cons_List_int (head , copy_List_List_int (tail ));
          }) : ({ /* cicili#Let12964 */
            // ----------
            
            ({ /* cicili#Progn12968 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , int index ) {
  return ({ /* cicili#Let12975 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let12979 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12980 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12982 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn12985 */
            Cons_List_int (head , replaceAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let12991 */
            // ----------
            
            ({ /* cicili#Progn12995 */
              ({ /* cicili#Let12999 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13003 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13004 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13007 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* cicili#Let13013 */
                      // ----------
                      
                      ({ /* cicili#Progn13017 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int deleteAt_List_List_int (List_List_int list , int index ) {
  return ({ /* cicili#Let13024 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13028 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13029 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13031 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13034 */
            Cons_List_int (head , deleteAt_List_List_int (tail , (index  -  1 )));
          }) : ({ /* cicili#Let13040 */
            // ----------
            
            ({ /* cicili#Progn13044 */
              ({ /* cicili#Let13048 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13052 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13053 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13056 */
                      copy_List_List_int (taill );
                    }) : ({ /* cicili#Let13061 */
                      // ----------
                      
                      ({ /* cicili#Progn13065 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int insertAt_List_List_int (List_List_int llist , List_int item , int index ) {
  return ({ /* cicili#Let13072 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13076 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13077 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13079 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13082 */
            Cons_List_int (head , insertAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let13088 */
            // ----------
            
            ({ /* cicili#Progn13092 */
              Cons_List_int (item , copy_List_List_int (llist ));
            });
          }));
      });
    });
}
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed ) {
  return ({ /* cicili#Let13100 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13104 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13105 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13107 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13110 */
            Cons_List_int (head , replace_List_List_int (tail , item , aimed ));
          }) : ({ /* cicili#Let13116 */
            // ----------
            
            ({ /* cicili#Progn13120 */
              ({ /* cicili#Let13124 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13128 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13129 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13132 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* cicili#Let13138 */
                      // ----------
                      
                      ({ /* cicili#Progn13142 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int delete_List_List_int (List_List_int list , List_List_int aimed ) {
  return ({ /* cicili#Let13149 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13153 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13154 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13156 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13159 */
            Cons_List_int (head , delete_List_List_int (tail , aimed ));
          }) : ({ /* cicili#Let13165 */
            // ----------
            
            ({ /* cicili#Progn13169 */
              ({ /* cicili#Let13173 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13177 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13178 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13181 */
                      copy_List_List_int (taill );
                    }) : ({ /* cicili#Let13186 */
                      // ----------
                      
                      ({ /* cicili#Progn13190 */
                        Nil_List_int ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_int insert_List_List_int (List_List_int llist , List_int item , List_List_int rlist ) {
  return ({ /* cicili#Let13197 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13201 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13202 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13204 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13207 */
            Cons_List_int (head , insert_List_List_int (tail , item , rlist ));
          }) : ({ /* cicili#Let13213 */
            // ----------
            
            ({ /* cicili#Progn13217 */
              Cons_List_int (item , copy_List_List_int (rlist ));
            });
          }));
      });
    });
}
List_List_int reverse_List_List_int (List_List_int list ) {
  List_List_int _reverse (List_List_int list , List_List_int rlist ) {
    return ({ /* cicili#Let13226 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13230 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13231 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13233 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn13236 */
              _reverse (tail , Cons_List_int (head , rlist ));
            }) : ({ /* cicili#Let13241 */
              // ----------
              
              ({ /* cicili#Progn13245 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let13249 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13253 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13254 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13256 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13259 */
            _reverse (tail , Cons_List_int (head , Nil_List_int ()));
          }) : ({ /* cicili#Let13265 */
            // ----------
            
            ({ /* cicili#Progn13269 */
              list ;
            });
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let13275 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13279 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13280 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13282 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13285 */
            Cons_List_int (head , append_List_List_int (tail , rlist ));
          }) : ({ /* cicili#Let13291 */
            // ----------
            
            ({ /* cicili#Progn13295 */
              copy_List_List_int (rlist );
            });
          }));
      });
    });
}
List_List_int push_List_List_int (List_int item , List_List_int list ) {
  return Cons_List_int (item , copy_List_List_int (list ));
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return (((len  <=  0 )) ? Nil_List_int () : ({ /* cicili#Let13308 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13312 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13313 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13315 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn13318 */
              Cons_List_int (head , take_List_List_int ((--len ), tail ));
            }) : ({ /* cicili#Let13324 */
              // ----------
              
              ({ /* cicili#Progn13328 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let13335 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13339 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13340 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13343 */
            ({ /* cicili#Let13347 */
              // ----------
              
              ({ /* cicili#Let13351 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn13353 */
                    copy_List_List_int (list );
                  }) : ({ /* cicili#Let13358 */
                    // ----------
                    
                    ({ /* cicili#Progn13362 */
                      last_List_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let13367 */
            // ----------
            
            ({ /* cicili#Progn13371 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int init_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let13379 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13383 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13384 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13386 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13389 */
            Cons_List_int (head , init_List_List_int (tail ));
          }) : ({ /* cicili#Let13395 */
            // ----------
            
            ({ /* cicili#Progn13399 */
              Nil_List_int ();
            });
          }));
      });
    });
}
int hasLen_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let13406 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13410 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13411 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13414 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_int (tail , (--desired )) ));
          }) : ({ /* cicili#Let13420 */
            // ----------
            
            ({ /* cicili#Progn13424 */
              0;
            });
          }));
      });
    });
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let13430 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13434 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13435 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13438 */
            (1 +  len_List_List_int (tail ) );
          }) : ({ /* cicili#Let13443 */
            // ----------
            
            ({ /* cicili#Progn13447 */
              0;
            });
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return drop_List_List_int (1, list );
}
List_List_int drop_List_List_int (int len , List_List_int list ) {
  return (((len  <=  0 )) ? copy_List_List_int (list ) : ({ /* cicili#Let13458 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13462 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13463 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn13466 */
              drop_List_List_int ((--len ), tail );
            }) : ({ /* cicili#Let13471 */
              // ----------
              
              ({ /* cicili#Progn13475 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let13483 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let13487 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13488 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13491 */
            Just_List_int (head );
          }) : ({ /* cicili#Let13496 */
            // ----------
            
            ({ /* cicili#Progn13500 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
List_List_int nthcdr_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let13507 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13511 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13512 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13515 */
            nthcdr_List_List_int ((--index ), tail );
          }) : ({ /* cicili#Let13520 */
            // ----------
            
            ({ /* cicili#Progn13524 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let13531 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13535 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13536 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13538 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13541 */
            (((index  ==  0 )) ? Just_List_int (head ) : (((index  <  0 )) ? Nothing_List_int () : nth_List_List_int ((--index ), tail )));
          }) : ({ /* cicili#Let13550 */
            // ----------
            
            ({ /* cicili#Progn13554 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let13559 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let13563 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13567 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13568 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block13572 */
            { /* cicili#Block13574 */
              free (this );
              free_List_List_int ((&tail ));
            }
          }
        else
          { /* cicili#Let13582 */
            // ----------
            
            ({ /* cicili#Let13586 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block13589 */
                  { /* cicili#Block13591 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_List_int__H_Table * const get_List_List_int__H_Table () {
  static List_List_int__H_Table table  = { free_List_List_int , toArray_List_List_int , wrap_List_List_int , pure_List_List_int , show_List_List_int , copy_List_List_int , replaceAt_List_List_int , deleteAt_List_List_int , insertAt_List_List_int , replace_List_List_int , delete_List_List_int , insert_List_List_int , reverse_List_List_int , append_List_List_int , push_List_List_int , take_List_List_int , last_List_List_int , init_List_List_int , hasLen_List_List_int , len_List_List_int , tail_List_List_int , drop_List_List_int , head_List_List_int , nthcdr_List_List_int , nth_List_List_int };
  return (&table );
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* cicili#Let13602 */
    List_List_int instance  = malloc (sizeof(class_List_List_int));
    // ----------
    (*instance ) = ((class_List_List_int){ get_List_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_int Nil_List_int () {
  { /* cicili#Let13608 */
    List_List_int instance  = malloc (sizeof(class_List_List_int));
    // ----------
    (*instance ) = ((class_List_List_int){ get_List_List_int__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_List_int__H_IMPL__ */ 
#ifndef __Maybe_List_List_int__H_IMPL__
#define __Maybe_List_List_int__H_IMPL__
void free_Maybe_List_List_int (Maybe_List_List_int * this ) {
}
const Maybe_List_List_int__H_Table * const get_Maybe_List_List_int__H_Table () {
  static const Maybe_List_List_int__H_Table table  = { free_Maybe_List_List_int };
  return (&table );
}
Maybe_List_List_int Just_List_List_int (List_List_int value ) {
  { /* cicili#Let13625 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_int Nothing_List_List_int () {
  { /* cicili#Let13630 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_List_int__H_IMPL__ */ 
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Just_List_char (List_char value ) {
  { /* cicili#Let13648 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let13653 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __List_List_char__H_IMPL__
#define __List_List_char__H_IMPL__
List_char * toArray_List_List_char (List_List_char list , List_char term ) {
  List_char * array (List_List_char list , int count ) {
    return ({ /* cicili#Let13663 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let13667 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13668 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13670 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn13673 */
              ({ /* cicili#Let13675 */
                List_char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let13679 */
              // ----------
              
              ({ /* cicili#Progn13683 */
                ({ /* cicili#Let13685 */
                  List_char * arr  = calloc (count , sizeof(List_char));
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
List_List_char wrap_List_List_char (const List_char item ) {
  return Cons_List_char (item , Nil_List_char ());
}
List_List_char pure_List_List_char (const List_char * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_List_char () : ({ /* cicili#Let13696 */
        List_char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_char () : Cons_List_char (item , pure_List_List_char ((++buf ), (--len ))));
      }));
}
int show_List_List_char (CFile file , List_List_char list ) {
  return ({ /* cicili#Let13706 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13710 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13711 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13713 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13716 */
            (({ /* cicili#Let13720 */
                // ----------
                
                ({ /* cicili#Let13724 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13726 */
                      (show_List_char (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let13736 */
                      // ----------
                      
                      ({ /* cicili#Progn13740 */
                        show_List_char (file , head );
                      });
                    }));
                });
              }) +  show_List_List_char (file , tail ) );
          }) : ({ /* cicili#Let13751 */
            // ----------
            
            ({ /* cicili#Progn13755 */
              0;
            });
          }));
      });
    });
}
List_List_char copy_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let13761 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13765 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13766 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13768 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13771 */
            Cons_List_char (head , copy_List_List_char (tail ));
          }) : ({ /* cicili#Let13777 */
            // ----------
            
            ({ /* cicili#Progn13781 */
              Nil_List_char ();
            });
          }));
      });
    });
}
List_List_char replaceAt_List_List_char (List_List_char list , List_char item , int index ) {
  return ({ /* cicili#Let13788 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13792 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13793 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13795 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13798 */
            Cons_List_char (head , replaceAt_List_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let13804 */
            // ----------
            
            ({ /* cicili#Progn13808 */
              ({ /* cicili#Let13812 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13816 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13817 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13820 */
                      Cons_List_char (item , copy_List_List_char (taill ));
                    }) : ({ /* cicili#Let13826 */
                      // ----------
                      
                      ({ /* cicili#Progn13830 */
                        Nil_List_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_char deleteAt_List_List_char (List_List_char list , int index ) {
  return ({ /* cicili#Let13837 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13841 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13842 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13844 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13847 */
            Cons_List_char (head , deleteAt_List_List_char (tail , (index  -  1 )));
          }) : ({ /* cicili#Let13853 */
            // ----------
            
            ({ /* cicili#Progn13857 */
              ({ /* cicili#Let13861 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13865 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13866 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13869 */
                      copy_List_List_char (taill );
                    }) : ({ /* cicili#Let13874 */
                      // ----------
                      
                      ({ /* cicili#Progn13878 */
                        Nil_List_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_char insertAt_List_List_char (List_List_char llist , List_char item , int index ) {
  return ({ /* cicili#Let13885 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13889 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13890 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13892 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13895 */
            Cons_List_char (head , insertAt_List_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let13901 */
            // ----------
            
            ({ /* cicili#Progn13905 */
              Cons_List_char (item , copy_List_List_char (llist ));
            });
          }));
      });
    });
}
List_List_char replace_List_List_char (List_List_char list , List_char item , List_List_char aimed ) {
  return ({ /* cicili#Let13913 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13917 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13918 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13920 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13923 */
            Cons_List_char (head , replace_List_List_char (tail , item , aimed ));
          }) : ({ /* cicili#Let13929 */
            // ----------
            
            ({ /* cicili#Progn13933 */
              ({ /* cicili#Let13937 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13941 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13942 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13945 */
                      Cons_List_char (item , copy_List_List_char (taill ));
                    }) : ({ /* cicili#Let13951 */
                      // ----------
                      
                      ({ /* cicili#Progn13955 */
                        Nil_List_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_char delete_List_List_char (List_List_char list , List_List_char aimed ) {
  return ({ /* cicili#Let13962 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let13966 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13967 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13969 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn13972 */
            Cons_List_char (head , delete_List_List_char (tail , aimed ));
          }) : ({ /* cicili#Let13978 */
            // ----------
            
            ({ /* cicili#Progn13982 */
              ({ /* cicili#Let13986 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let13990 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13991 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn13994 */
                      copy_List_List_char (taill );
                    }) : ({ /* cicili#Let13999 */
                      // ----------
                      
                      ({ /* cicili#Progn14003 */
                        Nil_List_char ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_List_char insert_List_List_char (List_List_char llist , List_char item , List_List_char rlist ) {
  return ({ /* cicili#Let14010 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14014 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14015 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14017 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14020 */
            Cons_List_char (head , insert_List_List_char (tail , item , rlist ));
          }) : ({ /* cicili#Let14026 */
            // ----------
            
            ({ /* cicili#Progn14030 */
              Cons_List_char (item , copy_List_List_char (rlist ));
            });
          }));
      });
    });
}
List_List_char reverse_List_List_char (List_List_char list ) {
  List_List_char _reverse (List_List_char list , List_List_char rlist ) {
    return ({ /* cicili#Let14039 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let14043 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14044 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14046 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn14049 */
              _reverse (tail , Cons_List_char (head , rlist ));
            }) : ({ /* cicili#Let14054 */
              // ----------
              
              ({ /* cicili#Progn14058 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let14062 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14066 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14067 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14069 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14072 */
            _reverse (tail , Cons_List_char (head , Nil_List_char ()));
          }) : ({ /* cicili#Let14078 */
            // ----------
            
            ({ /* cicili#Progn14082 */
              list ;
            });
          }));
      });
    });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let14088 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14092 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14093 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14095 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14098 */
            Cons_List_char (head , append_List_List_char (tail , rlist ));
          }) : ({ /* cicili#Let14104 */
            // ----------
            
            ({ /* cicili#Progn14108 */
              copy_List_List_char (rlist );
            });
          }));
      });
    });
}
List_List_char push_List_List_char (List_char item , List_List_char list ) {
  return Cons_List_char (item , copy_List_List_char (list ));
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return (((len  <=  0 )) ? Nil_List_char () : ({ /* cicili#Let14121 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let14125 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14126 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14128 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn14131 */
              Cons_List_char (head , take_List_List_char ((--len ), tail ));
            }) : ({ /* cicili#Let14137 */
              // ----------
              
              ({ /* cicili#Progn14141 */
                Nil_List_char ();
              });
            }));
        });
      }));
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let14148 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14152 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14153 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14156 */
            ({ /* cicili#Let14160 */
              // ----------
              
              ({ /* cicili#Let14164 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn14166 */
                    copy_List_List_char (list );
                  }) : ({ /* cicili#Let14171 */
                    // ----------
                    
                    ({ /* cicili#Progn14175 */
                      last_List_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let14180 */
            // ----------
            
            ({ /* cicili#Progn14184 */
              Nil_List_char ();
            });
          }));
      });
    });
}
List_List_char init_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let14192 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14196 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14197 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14199 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14202 */
            Cons_List_char (head , init_List_List_char (tail ));
          }) : ({ /* cicili#Let14208 */
            // ----------
            
            ({ /* cicili#Progn14212 */
              Nil_List_char ();
            });
          }));
      });
    });
}
int hasLen_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let14219 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14223 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14224 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14227 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_char (tail , (--desired )) ));
          }) : ({ /* cicili#Let14233 */
            // ----------
            
            ({ /* cicili#Progn14237 */
              0;
            });
          }));
      });
    });
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let14243 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14247 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14248 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14251 */
            (1 +  len_List_List_char (tail ) );
          }) : ({ /* cicili#Let14256 */
            // ----------
            
            ({ /* cicili#Progn14260 */
              0;
            });
          }));
      });
    });
}
List_List_char tail_List_List_char (List_List_char list ) {
  return drop_List_List_char (1, list );
}
List_List_char drop_List_List_char (int len , List_List_char list ) {
  return (((len  <=  0 )) ? copy_List_List_char (list ) : ({ /* cicili#Let14271 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let14275 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14276 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn14279 */
              drop_List_List_char ((--len ), tail );
            }) : ({ /* cicili#Let14284 */
              // ----------
              
              ({ /* cicili#Progn14288 */
                Nil_List_char ();
              });
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let14296 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let14300 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14301 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14304 */
            Just_List_char (head );
          }) : ({ /* cicili#Let14309 */
            // ----------
            
            ({ /* cicili#Progn14313 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
List_List_char nthcdr_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let14320 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14324 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14325 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14328 */
            nthcdr_List_List_char ((--index ), tail );
          }) : ({ /* cicili#Let14333 */
            // ----------
            
            ({ /* cicili#Progn14337 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let14344 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14348 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14349 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14351 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14354 */
            (((index  ==  0 )) ? Just_List_char (head ) : (((index  <  0 )) ? Nothing_List_char () : nth_List_List_char ((--index ), tail )));
          }) : ({ /* cicili#Let14363 */
            // ----------
            
            ({ /* cicili#Progn14367 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let14372 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let14376 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14380 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14381 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block14385 */
            { /* cicili#Block14387 */
              free (this );
              free_List_List_char ((&tail ));
            }
          }
        else
          { /* cicili#Let14395 */
            // ----------
            
            ({ /* cicili#Let14399 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block14402 */
                  { /* cicili#Block14404 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_List_char__H_Table * const get_List_List_char__H_Table () {
  static List_List_char__H_Table table  = { free_List_List_char , toArray_List_List_char , wrap_List_List_char , pure_List_List_char , show_List_List_char , copy_List_List_char , replaceAt_List_List_char , deleteAt_List_List_char , insertAt_List_List_char , replace_List_List_char , delete_List_List_char , insert_List_List_char , reverse_List_List_char , append_List_List_char , push_List_List_char , take_List_List_char , last_List_List_char , init_List_List_char , hasLen_List_List_char , len_List_List_char , tail_List_List_char , drop_List_List_char , head_List_List_char , nthcdr_List_List_char , nth_List_List_char };
  return (&table );
}
List_List_char Cons_List_char (List_char head , List_List_char tail ) {
  { /* cicili#Let14415 */
    List_List_char instance  = malloc (sizeof(class_List_List_char));
    // ----------
    (*instance ) = ((class_List_List_char){ get_List_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_char Nil_List_char () {
  { /* cicili#Let14421 */
    List_List_char instance  = malloc (sizeof(class_List_List_char));
    // ----------
    (*instance ) = ((class_List_List_char){ get_List_List_char__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_List_char__H_IMPL__ */ 
#ifndef __Maybe_List_List_char__H_IMPL__
#define __Maybe_List_List_char__H_IMPL__
void free_Maybe_List_List_char (Maybe_List_List_char * this ) {
}
const Maybe_List_List_char__H_Table * const get_Maybe_List_List_char__H_Table () {
  static const Maybe_List_List_char__H_Table table  = { free_Maybe_List_List_char };
  return (&table );
}
Maybe_List_List_char Just_List_List_char (List_List_char value ) {
  { /* cicili#Let14438 */
    Maybe_List_List_char instance  = ((Maybe_List_List_char){ get_Maybe_List_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_char Nothing_List_List_char () {
  { /* cicili#Let14443 */
    Maybe_List_List_char instance  = ((Maybe_List_List_char){ get_Maybe_List_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_List_char__H_IMPL__ */ 
#ifndef __Maybe_String__H_IMPL__
#define __Maybe_String__H_IMPL__
void free_Maybe_String (Maybe_String * this ) {
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table () {
  static const Maybe_String__H_Table table  = { free_Maybe_String };
  return (&table );
}
Maybe_String Just_String (String value ) {
  { /* cicili#Let14461 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String Nothing_String () {
  { /* cicili#Let14466 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String__H_IMPL__ */ 
#ifndef __List_String__H_IMPL__
#define __List_String__H_IMPL__
String * toArray_List_String (List_String list , String term ) {
  String * array (List_String list , int count ) {
    return ({ /* cicili#Let14476 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let14480 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14481 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14483 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn14486 */
              ({ /* cicili#Let14488 */
                String * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let14492 */
              // ----------
              
              ({ /* cicili#Progn14496 */
                ({ /* cicili#Let14498 */
                  String * arr  = calloc (count , sizeof(String));
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
List_String wrap_List_String (const String item ) {
  return Cons_String (item , Nil_String ());
}
List_String pure_List_String (const String * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_String () : ({ /* cicili#Let14509 */
        String item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_String () : Cons_String (item , pure_List_String ((++buf ), (--len ))));
      }));
}
int show_List_String (CFile file , List_String list ) {
  return ({ /* cicili#Let14519 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14523 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14524 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14526 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14529 */
            (({ /* cicili#Let14533 */
                // ----------
                
                ({ /* cicili#Let14537 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn14539 */
                      (show_String (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let14549 */
                      // ----------
                      
                      ({ /* cicili#Progn14553 */
                        show_String (file , head );
                      });
                    }));
                });
              }) +  show_List_String (file , tail ) );
          }) : ({ /* cicili#Let14564 */
            // ----------
            
            ({ /* cicili#Progn14568 */
              0;
            });
          }));
      });
    });
}
List_String copy_List_String (List_String list ) {
  return ({ /* cicili#Let14574 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14578 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14579 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14581 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14584 */
            Cons_String (head , copy_List_String (tail ));
          }) : ({ /* cicili#Let14590 */
            // ----------
            
            ({ /* cicili#Progn14594 */
              Nil_String ();
            });
          }));
      });
    });
}
List_String replaceAt_List_String (List_String list , String item , int index ) {
  return ({ /* cicili#Let14601 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14605 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14606 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14608 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14611 */
            Cons_String (head , replaceAt_List_String (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let14617 */
            // ----------
            
            ({ /* cicili#Progn14621 */
              ({ /* cicili#Let14625 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let14629 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14630 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn14633 */
                      Cons_String (item , copy_List_String (taill ));
                    }) : ({ /* cicili#Let14639 */
                      // ----------
                      
                      ({ /* cicili#Progn14643 */
                        Nil_String ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_String deleteAt_List_String (List_String list , int index ) {
  return ({ /* cicili#Let14650 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14654 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14655 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14657 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14660 */
            Cons_String (head , deleteAt_List_String (tail , (index  -  1 )));
          }) : ({ /* cicili#Let14666 */
            // ----------
            
            ({ /* cicili#Progn14670 */
              ({ /* cicili#Let14674 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let14678 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14679 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn14682 */
                      copy_List_String (taill );
                    }) : ({ /* cicili#Let14687 */
                      // ----------
                      
                      ({ /* cicili#Progn14691 */
                        Nil_String ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_String insertAt_List_String (List_String llist , String item , int index ) {
  return ({ /* cicili#Let14698 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14702 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14703 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14705 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14708 */
            Cons_String (head , insertAt_List_String (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let14714 */
            // ----------
            
            ({ /* cicili#Progn14718 */
              Cons_String (item , copy_List_String (llist ));
            });
          }));
      });
    });
}
List_String replace_List_String (List_String list , String item , List_String aimed ) {
  return ({ /* cicili#Let14726 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14730 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14731 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14733 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14736 */
            Cons_String (head , replace_List_String (tail , item , aimed ));
          }) : ({ /* cicili#Let14742 */
            // ----------
            
            ({ /* cicili#Progn14746 */
              ({ /* cicili#Let14750 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let14754 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14755 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn14758 */
                      Cons_String (item , copy_List_String (taill ));
                    }) : ({ /* cicili#Let14764 */
                      // ----------
                      
                      ({ /* cicili#Progn14768 */
                        Nil_String ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_String delete_List_String (List_String list , List_String aimed ) {
  return ({ /* cicili#Let14775 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14779 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14780 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14782 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14785 */
            Cons_String (head , delete_List_String (tail , aimed ));
          }) : ({ /* cicili#Let14791 */
            // ----------
            
            ({ /* cicili#Progn14795 */
              ({ /* cicili#Let14799 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let14803 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14804 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn14807 */
                      copy_List_String (taill );
                    }) : ({ /* cicili#Let14812 */
                      // ----------
                      
                      ({ /* cicili#Progn14816 */
                        Nil_String ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_String insert_List_String (List_String llist , String item , List_String rlist ) {
  return ({ /* cicili#Let14823 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14827 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn14828 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14830 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14833 */
            Cons_String (head , insert_List_String (tail , item , rlist ));
          }) : ({ /* cicili#Let14839 */
            // ----------
            
            ({ /* cicili#Progn14843 */
              Cons_String (item , copy_List_String (rlist ));
            });
          }));
      });
    });
}
List_String reverse_List_String (List_String list ) {
  List_String _reverse (List_String list , List_String rlist ) {
    return ({ /* cicili#Let14852 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let14856 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14857 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14859 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn14862 */
              _reverse (tail , Cons_String (head , rlist ));
            }) : ({ /* cicili#Let14867 */
              // ----------
              
              ({ /* cicili#Progn14871 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let14875 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14879 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14880 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14882 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14885 */
            _reverse (tail , Cons_String (head , Nil_String ()));
          }) : ({ /* cicili#Let14891 */
            // ----------
            
            ({ /* cicili#Progn14895 */
              list ;
            });
          }));
      });
    });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let14901 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14905 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14906 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14908 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14911 */
            Cons_String (head , append_List_String (tail , rlist ));
          }) : ({ /* cicili#Let14917 */
            // ----------
            
            ({ /* cicili#Progn14921 */
              copy_List_String (rlist );
            });
          }));
      });
    });
}
List_String push_List_String (String item , List_String list ) {
  return Cons_String (item , copy_List_String (list ));
}
List_String take_List_String (int len , List_String list ) {
  return (((len  <=  0 )) ? Nil_String () : ({ /* cicili#Let14934 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let14938 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14939 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14941 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn14944 */
              Cons_String (head , take_List_String ((--len ), tail ));
            }) : ({ /* cicili#Let14950 */
              // ----------
              
              ({ /* cicili#Progn14954 */
                Nil_String ();
              });
            }));
        });
      }));
}
List_String last_List_String (List_String list ) {
  return ({ /* cicili#Let14961 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let14965 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn14966 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn14969 */
            ({ /* cicili#Let14973 */
              // ----------
              
              ({ /* cicili#Let14977 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn14979 */
                    copy_List_String (list );
                  }) : ({ /* cicili#Let14984 */
                    // ----------
                    
                    ({ /* cicili#Progn14988 */
                      last_List_String (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let14993 */
            // ----------
            
            ({ /* cicili#Progn14997 */
              Nil_String ();
            });
          }));
      });
    });
}
List_String init_List_String (List_String list ) {
  return ({ /* cicili#Let15005 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15009 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15010 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15012 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15015 */
            Cons_String (head , init_List_String (tail ));
          }) : ({ /* cicili#Let15021 */
            // ----------
            
            ({ /* cicili#Progn15025 */
              Nil_String ();
            });
          }));
      });
    });
}
int hasLen_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let15032 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15036 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15037 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15040 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_String (tail , (--desired )) ));
          }) : ({ /* cicili#Let15046 */
            // ----------
            
            ({ /* cicili#Progn15050 */
              0;
            });
          }));
      });
    });
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let15056 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15060 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15061 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15064 */
            (1 +  len_List_String (tail ) );
          }) : ({ /* cicili#Let15069 */
            // ----------
            
            ({ /* cicili#Progn15073 */
              0;
            });
          }));
      });
    });
}
List_String tail_List_String (List_String list ) {
  return drop_List_String (1, list );
}
List_String drop_List_String (int len , List_String list ) {
  return (((len  <=  0 )) ? copy_List_String (list ) : ({ /* cicili#Let15084 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let15088 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15089 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn15092 */
              drop_List_String ((--len ), tail );
            }) : ({ /* cicili#Let15097 */
              // ----------
              
              ({ /* cicili#Progn15101 */
                Nil_String ();
              });
            }));
        });
      }));
}
Maybe_String head_List_String (List_String list ) {
  return ({ /* cicili#Let15109 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let15113 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15114 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15117 */
            Just_String (head );
          }) : ({ /* cicili#Let15122 */
            // ----------
            
            ({ /* cicili#Progn15126 */
              Nothing_String ();
            });
          }));
      });
    });
}
List_String nthcdr_List_String (int index , List_String list ) {
  return ({ /* cicili#Let15133 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15137 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15138 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15141 */
            nthcdr_List_String ((--index ), tail );
          }) : ({ /* cicili#Let15146 */
            // ----------
            
            ({ /* cicili#Progn15150 */
              list ;
            });
          }));
      });
    });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let15157 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15161 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15162 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15164 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15167 */
            (((index  ==  0 )) ? Just_String (head ) : (((index  <  0 )) ? Nothing_String () : nth_List_String ((--index ), tail )));
          }) : ({ /* cicili#Let15176 */
            // ----------
            
            ({ /* cicili#Progn15180 */
              Nothing_String ();
            });
          }));
      });
    });
}
void free_List_String (List_String * this_ptr ) {
  { /* cicili#Let15185 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let15189 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15193 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15194 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block15198 */
            { /* cicili#Block15200 */
              free (this );
              free_List_String ((&tail ));
            }
          }
        else
          { /* cicili#Let15208 */
            // ----------
            
            ({ /* cicili#Let15212 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block15215 */
                  { /* cicili#Block15217 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_String__H_Table * const get_List_String__H_Table () {
  static List_String__H_Table table  = { free_List_String , toArray_List_String , wrap_List_String , pure_List_String , show_List_String , copy_List_String , replaceAt_List_String , deleteAt_List_String , insertAt_List_String , replace_List_String , delete_List_String , insert_List_String , reverse_List_String , append_List_String , push_List_String , take_List_String , last_List_String , init_List_String , hasLen_List_String , len_List_String , tail_List_String , drop_List_String , head_List_String , nthcdr_List_String , nth_List_String };
  return (&table );
}
List_String Cons_String (String head , List_String tail ) {
  { /* cicili#Let15228 */
    List_String instance  = malloc (sizeof(class_List_String));
    // ----------
    (*instance ) = ((class_List_String){ get_List_String__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_String Nil_String () {
  { /* cicili#Let15234 */
    List_String instance  = malloc (sizeof(class_List_String));
    // ----------
    (*instance ) = ((class_List_String){ get_List_String__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_String__H_IMPL__ */ 
#ifndef __Maybe_List_String__H_IMPL__
#define __Maybe_List_String__H_IMPL__
void free_Maybe_List_String (Maybe_List_String * this ) {
}
const Maybe_List_String__H_Table * const get_Maybe_List_String__H_Table () {
  static const Maybe_List_String__H_Table table  = { free_Maybe_List_String };
  return (&table );
}
Maybe_List_String Just_List_String (List_String value ) {
  { /* cicili#Let15251 */
    Maybe_List_String instance  = ((Maybe_List_String){ get_Maybe_List_String__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_String Nothing_List_String () {
  { /* cicili#Let15256 */
    Maybe_List_String instance  = ((Maybe_List_String){ get_Maybe_List_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_String__H_IMPL__ */ 
#ifndef __Maybe_CStr__H_IMPL__
#define __Maybe_CStr__H_IMPL__
void free_Maybe_CStr (Maybe_CStr * this ) {
}
const Maybe_CStr__H_Table * const get_Maybe_CStr__H_Table () {
  static const Maybe_CStr__H_Table table  = { free_Maybe_CStr };
  return (&table );
}
Maybe_CStr Just_CStr (CStr value ) {
  { /* cicili#Let15274 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CStr Nothing_CStr () {
  { /* cicili#Let15279 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_CStr__H_IMPL__ */ 
#ifndef __List_CStr__H_IMPL__
#define __List_CStr__H_IMPL__
CStr * toArray_List_CStr (List_CStr list , CStr term ) {
  CStr * array (List_CStr list , int count ) {
    return ({ /* cicili#Let15289 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let15293 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15294 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15296 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn15299 */
              ({ /* cicili#Let15301 */
                CStr * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let15305 */
              // ----------
              
              ({ /* cicili#Progn15309 */
                ({ /* cicili#Let15311 */
                  CStr * arr  = calloc (count , sizeof(CStr));
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
List_CStr wrap_List_CStr (const CStr item ) {
  return Cons_CStr (item , Nil_CStr ());
}
List_CStr pure_List_CStr (const CStr * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_CStr () : ({ /* cicili#Let15322 */
        CStr item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_CStr () : Cons_CStr (item , pure_List_CStr ((++buf ), (--len ))));
      }));
}
int show_List_CStr (CFile file , List_CStr list ) {
  return ({ /* cicili#Let15332 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15336 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15337 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15339 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15342 */
            (({ /* cicili#Let15346 */
                // ----------
                
                ({ /* cicili#Let15350 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn15352 */
                      (fprintf (file , "%s", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let15361 */
                      // ----------
                      
                      ({ /* cicili#Progn15365 */
                        fprintf (file , "%s", head );
                      });
                    }));
                });
              }) +  show_List_CStr (file , tail ) );
          }) : ({ /* cicili#Let15375 */
            // ----------
            
            ({ /* cicili#Progn15379 */
              0;
            });
          }));
      });
    });
}
List_CStr copy_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let15385 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15389 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15390 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15392 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15395 */
            Cons_CStr (head , copy_List_CStr (tail ));
          }) : ({ /* cicili#Let15401 */
            // ----------
            
            ({ /* cicili#Progn15405 */
              Nil_CStr ();
            });
          }));
      });
    });
}
List_CStr replaceAt_List_CStr (List_CStr list , CStr item , int index ) {
  return ({ /* cicili#Let15412 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15416 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15417 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15419 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15422 */
            Cons_CStr (head , replaceAt_List_CStr (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let15428 */
            // ----------
            
            ({ /* cicili#Progn15432 */
              ({ /* cicili#Let15436 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let15440 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15441 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn15444 */
                      Cons_CStr (item , copy_List_CStr (taill ));
                    }) : ({ /* cicili#Let15450 */
                      // ----------
                      
                      ({ /* cicili#Progn15454 */
                        Nil_CStr ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_CStr deleteAt_List_CStr (List_CStr list , int index ) {
  return ({ /* cicili#Let15461 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15465 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15466 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15468 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15471 */
            Cons_CStr (head , deleteAt_List_CStr (tail , (index  -  1 )));
          }) : ({ /* cicili#Let15477 */
            // ----------
            
            ({ /* cicili#Progn15481 */
              ({ /* cicili#Let15485 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let15489 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15490 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn15493 */
                      copy_List_CStr (taill );
                    }) : ({ /* cicili#Let15498 */
                      // ----------
                      
                      ({ /* cicili#Progn15502 */
                        Nil_CStr ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_CStr insertAt_List_CStr (List_CStr llist , CStr item , int index ) {
  return ({ /* cicili#Let15509 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15513 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15514 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15516 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15519 */
            Cons_CStr (head , insertAt_List_CStr (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let15525 */
            // ----------
            
            ({ /* cicili#Progn15529 */
              Cons_CStr (item , copy_List_CStr (llist ));
            });
          }));
      });
    });
}
List_CStr replace_List_CStr (List_CStr list , CStr item , List_CStr aimed ) {
  return ({ /* cicili#Let15537 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15541 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15542 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15544 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15547 */
            Cons_CStr (head , replace_List_CStr (tail , item , aimed ));
          }) : ({ /* cicili#Let15553 */
            // ----------
            
            ({ /* cicili#Progn15557 */
              ({ /* cicili#Let15561 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let15565 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15566 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn15569 */
                      Cons_CStr (item , copy_List_CStr (taill ));
                    }) : ({ /* cicili#Let15575 */
                      // ----------
                      
                      ({ /* cicili#Progn15579 */
                        Nil_CStr ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_CStr delete_List_CStr (List_CStr list , List_CStr aimed ) {
  return ({ /* cicili#Let15586 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15590 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15591 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15593 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15596 */
            Cons_CStr (head , delete_List_CStr (tail , aimed ));
          }) : ({ /* cicili#Let15602 */
            // ----------
            
            ({ /* cicili#Progn15606 */
              ({ /* cicili#Let15610 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let15614 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15615 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn15618 */
                      copy_List_CStr (taill );
                    }) : ({ /* cicili#Let15623 */
                      // ----------
                      
                      ({ /* cicili#Progn15627 */
                        Nil_CStr ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_CStr insert_List_CStr (List_CStr llist , CStr item , List_CStr rlist ) {
  return ({ /* cicili#Let15634 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15638 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15639 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15641 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15644 */
            Cons_CStr (head , insert_List_CStr (tail , item , rlist ));
          }) : ({ /* cicili#Let15650 */
            // ----------
            
            ({ /* cicili#Progn15654 */
              Cons_CStr (item , copy_List_CStr (rlist ));
            });
          }));
      });
    });
}
List_CStr reverse_List_CStr (List_CStr list ) {
  List_CStr _reverse (List_CStr list , List_CStr rlist ) {
    return ({ /* cicili#Let15663 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let15667 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15668 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15670 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn15673 */
              _reverse (tail , Cons_CStr (head , rlist ));
            }) : ({ /* cicili#Let15678 */
              // ----------
              
              ({ /* cicili#Progn15682 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let15686 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15690 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15691 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15693 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15696 */
            _reverse (tail , Cons_CStr (head , Nil_CStr ()));
          }) : ({ /* cicili#Let15702 */
            // ----------
            
            ({ /* cicili#Progn15706 */
              list ;
            });
          }));
      });
    });
}
List_CStr append_List_CStr (List_CStr llist , List_CStr rlist ) {
  return ({ /* cicili#Let15712 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15716 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15717 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15719 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15722 */
            Cons_CStr (head , append_List_CStr (tail , rlist ));
          }) : ({ /* cicili#Let15728 */
            // ----------
            
            ({ /* cicili#Progn15732 */
              copy_List_CStr (rlist );
            });
          }));
      });
    });
}
List_CStr push_List_CStr (CStr item , List_CStr list ) {
  return Cons_CStr (item , copy_List_CStr (list ));
}
List_CStr take_List_CStr (int len , List_CStr list ) {
  return (((len  <=  0 )) ? Nil_CStr () : ({ /* cicili#Let15745 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let15749 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15750 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15752 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn15755 */
              Cons_CStr (head , take_List_CStr ((--len ), tail ));
            }) : ({ /* cicili#Let15761 */
              // ----------
              
              ({ /* cicili#Progn15765 */
                Nil_CStr ();
              });
            }));
        });
      }));
}
List_CStr last_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let15772 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15776 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15777 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15780 */
            ({ /* cicili#Let15784 */
              // ----------
              
              ({ /* cicili#Let15788 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn15790 */
                    copy_List_CStr (list );
                  }) : ({ /* cicili#Let15795 */
                    // ----------
                    
                    ({ /* cicili#Progn15799 */
                      last_List_CStr (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let15804 */
            // ----------
            
            ({ /* cicili#Progn15808 */
              Nil_CStr ();
            });
          }));
      });
    });
}
List_CStr init_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let15816 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15820 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn15821 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15823 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15826 */
            Cons_CStr (head , init_List_CStr (tail ));
          }) : ({ /* cicili#Let15832 */
            // ----------
            
            ({ /* cicili#Progn15836 */
              Nil_CStr ();
            });
          }));
      });
    });
}
int hasLen_List_CStr (List_CStr list , int desired ) {
  return ({ /* cicili#Let15843 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15847 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15848 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15851 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_CStr (tail , (--desired )) ));
          }) : ({ /* cicili#Let15857 */
            // ----------
            
            ({ /* cicili#Progn15861 */
              0;
            });
          }));
      });
    });
}
int len_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let15867 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15871 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15872 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15875 */
            (1 +  len_List_CStr (tail ) );
          }) : ({ /* cicili#Let15880 */
            // ----------
            
            ({ /* cicili#Progn15884 */
              0;
            });
          }));
      });
    });
}
List_CStr tail_List_CStr (List_CStr list ) {
  return drop_List_CStr (1, list );
}
List_CStr drop_List_CStr (int len , List_CStr list ) {
  return (((len  <=  0 )) ? copy_List_CStr (list ) : ({ /* cicili#Let15895 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let15899 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15900 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn15903 */
              drop_List_CStr ((--len ), tail );
            }) : ({ /* cicili#Let15908 */
              // ----------
              
              ({ /* cicili#Progn15912 */
                Nil_CStr ();
              });
            }));
        });
      }));
}
Maybe_CStr head_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let15920 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let15924 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15925 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15928 */
            Just_CStr (head );
          }) : ({ /* cicili#Let15933 */
            // ----------
            
            ({ /* cicili#Progn15937 */
              Nothing_CStr ();
            });
          }));
      });
    });
}
List_CStr nthcdr_List_CStr (int index , List_CStr list ) {
  return ({ /* cicili#Let15944 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15948 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15949 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15952 */
            nthcdr_List_CStr ((--index ), tail );
          }) : ({ /* cicili#Let15957 */
            // ----------
            
            ({ /* cicili#Progn15961 */
              list ;
            });
          }));
      });
    });
}
Maybe_CStr nth_List_CStr (int index , List_CStr list ) {
  return ({ /* cicili#Let15968 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let15972 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15973 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15975 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn15978 */
            (((index  ==  0 )) ? Just_CStr (head ) : (((index  <  0 )) ? Nothing_CStr () : nth_List_CStr ((--index ), tail )));
          }) : ({ /* cicili#Let15987 */
            // ----------
            
            ({ /* cicili#Progn15991 */
              Nothing_CStr ();
            });
          }));
      });
    });
}
void free_List_CStr (List_CStr * this_ptr ) {
  { /* cicili#Let15996 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let16000 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let16004 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16005 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block16009 */
            { /* cicili#Block16011 */
              free (this );
              free_List_CStr ((&tail ));
            }
          }
        else
          { /* cicili#Let16019 */
            // ----------
            
            ({ /* cicili#Let16023 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block16026 */
                  { /* cicili#Block16028 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_CStr__H_Table * const get_List_CStr__H_Table () {
  static List_CStr__H_Table table  = { free_List_CStr , toArray_List_CStr , wrap_List_CStr , pure_List_CStr , show_List_CStr , copy_List_CStr , replaceAt_List_CStr , deleteAt_List_CStr , insertAt_List_CStr , replace_List_CStr , delete_List_CStr , insert_List_CStr , reverse_List_CStr , append_List_CStr , push_List_CStr , take_List_CStr , last_List_CStr , init_List_CStr , hasLen_List_CStr , len_List_CStr , tail_List_CStr , drop_List_CStr , head_List_CStr , nthcdr_List_CStr , nth_List_CStr };
  return (&table );
}
List_CStr Cons_CStr (CStr head , List_CStr tail ) {
  { /* cicili#Let16039 */
    List_CStr instance  = malloc (sizeof(class_List_CStr));
    // ----------
    (*instance ) = ((class_List_CStr){ get_List_CStr__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_CStr Nil_CStr () {
  { /* cicili#Let16045 */
    List_CStr instance  = malloc (sizeof(class_List_CStr));
    // ----------
    (*instance ) = ((class_List_CStr){ get_List_CStr__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_CStr__H_IMPL__ */ 
#ifndef __Maybe_List_CStr__H_IMPL__
#define __Maybe_List_CStr__H_IMPL__
void free_Maybe_List_CStr (Maybe_List_CStr * this ) {
}
const Maybe_List_CStr__H_Table * const get_Maybe_List_CStr__H_Table () {
  static const Maybe_List_CStr__H_Table table  = { free_Maybe_List_CStr };
  return (&table );
}
Maybe_List_CStr Just_List_CStr (List_CStr value ) {
  { /* cicili#Let16062 */
    Maybe_List_CStr instance  = ((Maybe_List_CStr){ get_Maybe_List_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_CStr Nothing_List_CStr () {
  { /* cicili#Let16067 */
    Maybe_List_CStr instance  = ((Maybe_List_CStr){ get_Maybe_List_CStr__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_CStr__H_IMPL__ */ 
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  { /* cicili#Let16087 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let16092 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Cell_List_Bool__H_IMPL__
#define __Cell_List_Bool__H_IMPL__
Cell_List_Bool new_Cell_List_Bool (List_Bool pointer ) {
  return ({ /* cicili#Let16099 */
      __auto_type holder  = ((List_Bool *)malloc (sizeof(List_Bool *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_Bool (holder , ((size_t)pointer ));
    });
}
Maybe_List_Bool take_Cell_List_Bool (Cell_List_Bool * this ) {
  return ({ /* cicili#Let16107 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16111 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16112 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16114 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16117 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let16121 */
                __auto_type result  = Just_List_Bool ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_Bool ();
                result ;
              }) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let16130 */
            // ----------
            
            ({ /* cicili#Progn16134 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool get_Cell_List_Bool (Cell_List_Bool life ) {
  return ({ /* cicili#Let16142 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16146 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16147 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16149 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16152 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_Bool ((*pointer )) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let16159 */
            // ----------
            
            ({ /* cicili#Progn16163 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_Cell_List_Bool (Cell_List_Bool * this ) {
  { /* cicili#Let16172 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    
    ({ /* cicili#Let16176 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16177 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn16179 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block16183 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block16187 */
              free_List_Bool (pointer );
              (*pointer ) = NULL ;
              free (((void *)pointer ));
              (*this ) = Dead_List_Bool ();
            }
        }
      else
        { /* cicili#Let16196 */
          // ----------
          
          ({ /* cicili#Let16200 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block16203 */
              }
          });
        }
    });
  }
}
const Cell_List_Bool__H_Table * const get_Cell_List_Bool__H_Table () {
  static const Cell_List_Bool__H_Table table  = { free_Cell_List_Bool , new_Cell_List_Bool , take_Cell_List_Bool , get_Cell_List_Bool };
  return (&table );
}
Cell_List_Bool __h_Alive_List_Bool (List_Bool * pointer , size_t address ) {
  { /* cicili#Let16214 */
    Cell_List_Bool instance  = ((Cell_List_Bool){ get_Cell_List_Bool__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_Bool Dead_List_Bool () {
  { /* cicili#Let16219 */
    Cell_List_Bool instance  = ((Cell_List_Bool){ get_Cell_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Cell_List_Bool__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* cicili#Let16239 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let16244 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Cell_List_int__H_IMPL__
#define __Cell_List_int__H_IMPL__
Cell_List_int new_Cell_List_int (List_int pointer ) {
  return ({ /* cicili#Let16251 */
      __auto_type holder  = ((List_int *)malloc (sizeof(List_int *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_int (holder , ((size_t)pointer ));
    });
}
Maybe_List_int take_Cell_List_int (Cell_List_int * this ) {
  return ({ /* cicili#Let16259 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16263 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16264 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16266 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16269 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let16273 */
                __auto_type result  = Just_List_int ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_int ();
                result ;
              }) : Nothing_List_int ());
          }) : ({ /* cicili#Let16282 */
            // ----------
            
            ({ /* cicili#Progn16286 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int get_Cell_List_int (Cell_List_int life ) {
  return ({ /* cicili#Let16294 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16298 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16299 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16301 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16304 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_int ((*pointer )) : Nothing_List_int ());
          }) : ({ /* cicili#Let16311 */
            // ----------
            
            ({ /* cicili#Progn16315 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_Cell_List_int (Cell_List_int * this ) {
  { /* cicili#Let16324 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    
    ({ /* cicili#Let16328 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16329 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn16331 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block16335 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block16339 */
              free_List_int (pointer );
              (*pointer ) = NULL ;
              free (((void *)pointer ));
              (*this ) = Dead_List_int ();
            }
        }
      else
        { /* cicili#Let16348 */
          // ----------
          
          ({ /* cicili#Let16352 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block16355 */
              }
          });
        }
    });
  }
}
const Cell_List_int__H_Table * const get_Cell_List_int__H_Table () {
  static const Cell_List_int__H_Table table  = { free_Cell_List_int , new_Cell_List_int , take_Cell_List_int , get_Cell_List_int };
  return (&table );
}
Cell_List_int __h_Alive_List_int (List_int * pointer , size_t address ) {
  { /* cicili#Let16366 */
    Cell_List_int instance  = ((Cell_List_int){ get_Cell_List_int__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_int Dead_List_int () {
  { /* cicili#Let16371 */
    Cell_List_int instance  = ((Cell_List_int){ get_Cell_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Cell_List_int__H_IMPL__ */ 
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Just_List_char (List_char value ) {
  { /* cicili#Let16391 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let16396 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __Cell_List_char__H_IMPL__
#define __Cell_List_char__H_IMPL__
Cell_List_char new_Cell_List_char (List_char pointer ) {
  return ({ /* cicili#Let16403 */
      __auto_type holder  = ((List_char *)malloc (sizeof(List_char *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_char (holder , ((size_t)pointer ));
    });
}
Maybe_List_char take_Cell_List_char (Cell_List_char * this ) {
  return ({ /* cicili#Let16411 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16415 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16416 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16418 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16421 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let16425 */
                __auto_type result  = Just_List_char ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_char ();
                result ;
              }) : Nothing_List_char ());
          }) : ({ /* cicili#Let16434 */
            // ----------
            
            ({ /* cicili#Progn16438 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char get_Cell_List_char (Cell_List_char life ) {
  return ({ /* cicili#Let16446 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16450 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16451 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16453 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16456 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_char ((*pointer )) : Nothing_List_char ());
          }) : ({ /* cicili#Let16463 */
            // ----------
            
            ({ /* cicili#Progn16467 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_Cell_List_char (Cell_List_char * this ) {
  { /* cicili#Let16476 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    
    ({ /* cicili#Let16480 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16481 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn16483 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block16487 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block16491 */
              free_List_char (pointer );
              (*pointer ) = NULL ;
              free (((void *)pointer ));
              (*this ) = Dead_List_char ();
            }
        }
      else
        { /* cicili#Let16500 */
          // ----------
          
          ({ /* cicili#Let16504 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block16507 */
              }
          });
        }
    });
  }
}
const Cell_List_char__H_Table * const get_Cell_List_char__H_Table () {
  static const Cell_List_char__H_Table table  = { free_Cell_List_char , new_Cell_List_char , take_Cell_List_char , get_Cell_List_char };
  return (&table );
}
Cell_List_char __h_Alive_List_char (List_char * pointer , size_t address ) {
  { /* cicili#Let16518 */
    Cell_List_char instance  = ((Cell_List_char){ get_Cell_List_char__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_char Dead_List_char () {
  { /* cicili#Let16523 */
    Cell_List_char instance  = ((Cell_List_char){ get_Cell_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Cell_List_char__H_IMPL__ */ 
#ifndef __Maybe_String__H_IMPL__
#define __Maybe_String__H_IMPL__
void free_Maybe_String (Maybe_String * this ) {
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table () {
  static const Maybe_String__H_Table table  = { free_Maybe_String };
  return (&table );
}
Maybe_String Just_String (String value ) {
  { /* cicili#Let16543 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String Nothing_String () {
  { /* cicili#Let16548 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String__H_IMPL__ */ 
#ifndef __Cell_String__H_IMPL__
#define __Cell_String__H_IMPL__
Cell_String new_Cell_String (String pointer ) {
  return ({ /* cicili#Let16555 */
      __auto_type holder  = ((String *)malloc (sizeof(String *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_String (holder , ((size_t)pointer ));
    });
}
Maybe_String take_Cell_String (Cell_String * this ) {
  return ({ /* cicili#Let16563 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16567 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16568 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16570 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16573 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let16577 */
                __auto_type result  = Just_String ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_String ();
                result ;
              }) : Nothing_String ());
          }) : ({ /* cicili#Let16586 */
            // ----------
            
            ({ /* cicili#Progn16590 */
              Nothing_String ();
            });
          }));
      });
    });
}
Maybe_String get_Cell_String (Cell_String life ) {
  return ({ /* cicili#Let16598 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16602 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16603 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16605 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16608 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_String ((*pointer )) : Nothing_String ());
          }) : ({ /* cicili#Let16615 */
            // ----------
            
            ({ /* cicili#Progn16619 */
              Nothing_String ();
            });
          }));
      });
    });
}
void free_Cell_String (Cell_String * this ) {
  { /* cicili#Let16628 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    
    ({ /* cicili#Let16632 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn16633 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn16635 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block16639 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block16643 */
              free_String (pointer );
              (*pointer ) = NULL ;
              free (((void *)pointer ));
              (*this ) = Dead_String ();
            }
        }
      else
        { /* cicili#Let16652 */
          // ----------
          
          ({ /* cicili#Let16656 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block16659 */
              }
          });
        }
    });
  }
}
const Cell_String__H_Table * const get_Cell_String__H_Table () {
  static const Cell_String__H_Table table  = { free_Cell_String , new_Cell_String , take_Cell_String , get_Cell_String };
  return (&table );
}
Cell_String __h_Alive_String (String * pointer , size_t address ) {
  { /* cicili#Let16670 */
    Cell_String instance  = ((Cell_String){ get_Cell_String__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_String Dead_String () {
  { /* cicili#Let16675 */
    Cell_String instance  = ((Cell_String){ get_Cell_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Cell_String__H_IMPL__ */ 
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  { /* cicili#Let16695 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let16700 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Rc_List_Bool__H_IMPL__
#define __Rc_List_Bool__H_IMPL__
Rc_List_Bool new_Rc_List_Bool (List_Bool pointer ) {
  return ({ /* cicili#Let16707 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_Bool *)malloc (sizeof(List_Bool *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_Bool (holder , count , ((size_t)pointer ));
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let16716 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16720 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn16721 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16723 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn16725 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16728 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn16731 */
                (++(*count ));
                __h_Hold_List_Bool (pointer , count , address );
              }) : Gone_List_Bool ());
          }) : ({ /* cicili#Let16737 */
            // ----------
            
            ({ /* cicili#Progn16741 */
              Gone_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool take_Rc_List_Bool (Rc_List_Bool * this ) {
  return ({ /* cicili#Let16749 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16753 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn16754 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16756 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn16758 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16761 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let16765 */
                __auto_type result  = Just_List_Bool ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block16771 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_List_Bool ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let16778 */
            // ----------
            
            ({ /* cicili#Progn16782 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool get_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let16790 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16794 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn16795 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16797 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn16799 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16802 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_Bool ((*pointer )) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let16809 */
            // ----------
            
            ({ /* cicili#Progn16813 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_Rc_List_Bool (Rc_List_Bool * this ) {
  { /* cicili#Let16822 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let16826 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn16827 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16829 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn16831 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block16835 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block16839 */
              if ((*count ) ==  1 )
                { /* cicili#Block16842 */
                  free_List_Bool (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_List_Bool ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let16852 */
          // ----------
          
          ({ /* cicili#Let16856 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block16859 */
              }
          });
        }
    });
  }
}
const Rc_List_Bool__H_Table * const get_Rc_List_Bool__H_Table () {
  static const Rc_List_Bool__H_Table table  = { free_Rc_List_Bool , new_Rc_List_Bool , clone_Rc_List_Bool , take_Rc_List_Bool , get_Rc_List_Bool };
  return (&table );
}
Rc_List_Bool __h_Hold_List_Bool (List_Bool * pointer , int * count , size_t address ) {
  { /* cicili#Let16870 */
    Rc_List_Bool instance  = ((Rc_List_Bool){ get_Rc_List_Bool__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_Bool Gone_List_Bool () {
  { /* cicili#Let16875 */
    Rc_List_Bool instance  = ((Rc_List_Bool){ get_Rc_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_List_Bool__H_IMPL__ */ 
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
void free_Maybe_List_int (Maybe_List_int * this ) {
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Just_List_int (List_int value ) {
  { /* cicili#Let16895 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let16900 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Rc_List_int__H_IMPL__
#define __Rc_List_int__H_IMPL__
Rc_List_int new_Rc_List_int (List_int pointer ) {
  return ({ /* cicili#Let16907 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_int *)malloc (sizeof(List_int *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_int (holder , count , ((size_t)pointer ));
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let16916 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16920 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn16921 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16923 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn16925 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16928 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn16931 */
                (++(*count ));
                __h_Hold_List_int (pointer , count , address );
              }) : Gone_List_int ());
          }) : ({ /* cicili#Let16937 */
            // ----------
            
            ({ /* cicili#Progn16941 */
              Gone_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int take_Rc_List_int (Rc_List_int * this ) {
  return ({ /* cicili#Let16949 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16953 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn16954 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16956 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn16958 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn16961 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let16965 */
                __auto_type result  = Just_List_int ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block16971 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_List_int ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_List_int ());
          }) : ({ /* cicili#Let16978 */
            // ----------
            
            ({ /* cicili#Progn16982 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int get_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let16990 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let16994 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn16995 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16997 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn16999 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17002 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_int ((*pointer )) : Nothing_List_int ());
          }) : ({ /* cicili#Let17009 */
            // ----------
            
            ({ /* cicili#Progn17013 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_Rc_List_int (Rc_List_int * this ) {
  { /* cicili#Let17022 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let17026 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17027 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17029 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn17031 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block17035 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block17039 */
              if ((*count ) ==  1 )
                { /* cicili#Block17042 */
                  free_List_int (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_List_int ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let17052 */
          // ----------
          
          ({ /* cicili#Let17056 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block17059 */
              }
          });
        }
    });
  }
}
const Rc_List_int__H_Table * const get_Rc_List_int__H_Table () {
  static const Rc_List_int__H_Table table  = { free_Rc_List_int , new_Rc_List_int , clone_Rc_List_int , take_Rc_List_int , get_Rc_List_int };
  return (&table );
}
Rc_List_int __h_Hold_List_int (List_int * pointer , int * count , size_t address ) {
  { /* cicili#Let17070 */
    Rc_List_int instance  = ((Rc_List_int){ get_Rc_List_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_int Gone_List_int () {
  { /* cicili#Let17075 */
    Rc_List_int instance  = ((Rc_List_int){ get_Rc_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_List_int__H_IMPL__ */ 
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Just_List_char (List_char value ) {
  { /* cicili#Let17095 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let17100 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __Rc_List_char__H_IMPL__
#define __Rc_List_char__H_IMPL__
Rc_List_char new_Rc_List_char (List_char pointer ) {
  return ({ /* cicili#Let17107 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_char *)malloc (sizeof(List_char *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_char (holder , count , ((size_t)pointer ));
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let17116 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let17120 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17121 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17123 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn17125 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17128 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn17131 */
                (++(*count ));
                __h_Hold_List_char (pointer , count , address );
              }) : Gone_List_char ());
          }) : ({ /* cicili#Let17137 */
            // ----------
            
            ({ /* cicili#Progn17141 */
              Gone_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char take_Rc_List_char (Rc_List_char * this ) {
  return ({ /* cicili#Let17149 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let17153 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17154 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17156 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn17158 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17161 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let17165 */
                __auto_type result  = Just_List_char ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block17171 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_List_char ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_List_char ());
          }) : ({ /* cicili#Let17178 */
            // ----------
            
            ({ /* cicili#Progn17182 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char get_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let17190 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let17194 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17195 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17197 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn17199 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17202 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_char ((*pointer )) : Nothing_List_char ());
          }) : ({ /* cicili#Let17209 */
            // ----------
            
            ({ /* cicili#Progn17213 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_Rc_List_char (Rc_List_char * this ) {
  { /* cicili#Let17222 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let17226 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17227 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17229 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn17231 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block17235 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block17239 */
              if ((*count ) ==  1 )
                { /* cicili#Block17242 */
                  free_List_char (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_List_char ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let17252 */
          // ----------
          
          ({ /* cicili#Let17256 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block17259 */
              }
          });
        }
    });
  }
}
const Rc_List_char__H_Table * const get_Rc_List_char__H_Table () {
  static const Rc_List_char__H_Table table  = { free_Rc_List_char , new_Rc_List_char , clone_Rc_List_char , take_Rc_List_char , get_Rc_List_char };
  return (&table );
}
Rc_List_char __h_Hold_List_char (List_char * pointer , int * count , size_t address ) {
  { /* cicili#Let17270 */
    Rc_List_char instance  = ((Rc_List_char){ get_Rc_List_char__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_char Gone_List_char () {
  { /* cicili#Let17275 */
    Rc_List_char instance  = ((Rc_List_char){ get_Rc_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_List_char__H_IMPL__ */ 
#ifndef __Maybe_String__H_IMPL__
#define __Maybe_String__H_IMPL__
void free_Maybe_String (Maybe_String * this ) {
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table () {
  static const Maybe_String__H_Table table  = { free_Maybe_String };
  return (&table );
}
Maybe_String Just_String (String value ) {
  { /* cicili#Let17295 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String Nothing_String () {
  { /* cicili#Let17300 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String__H_IMPL__ */ 
#ifndef __Rc_String__H_IMPL__
#define __Rc_String__H_IMPL__
Rc_String new_Rc_String (String pointer ) {
  return ({ /* cicili#Let17307 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((String *)malloc (sizeof(String *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_String (holder , count , ((size_t)pointer ));
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let17316 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let17320 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17321 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17323 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn17325 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17328 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn17331 */
                (++(*count ));
                __h_Hold_String (pointer , count , address );
              }) : Gone_String ());
          }) : ({ /* cicili#Let17337 */
            // ----------
            
            ({ /* cicili#Progn17341 */
              Gone_String ();
            });
          }));
      });
    });
}
Maybe_String take_Rc_String (Rc_String * this ) {
  return ({ /* cicili#Let17349 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let17353 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17354 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17356 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn17358 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17361 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let17365 */
                __auto_type result  = Just_String ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block17371 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_String ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_String ());
          }) : ({ /* cicili#Let17378 */
            // ----------
            
            ({ /* cicili#Progn17382 */
              Nothing_String ();
            });
          }));
      });
    });
}
Maybe_String get_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let17390 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let17394 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17395 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17397 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn17399 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17402 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_String ((*pointer )) : Nothing_String ());
          }) : ({ /* cicili#Let17409 */
            // ----------
            
            ({ /* cicili#Progn17413 */
              Nothing_String ();
            });
          }));
      });
    });
}
void free_Rc_String (Rc_String * this ) {
  { /* cicili#Let17422 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let17426 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn17427 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17429 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn17431 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block17435 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block17439 */
              if ((*count ) ==  1 )
                { /* cicili#Block17442 */
                  free_String (pointer );
                  (*count ) = 0;
                  free (((void *)count ));
                  (*pointer ) = NULL ;
                  free (((void *)pointer ));
                  (*this ) = Gone_String ();
                }
              else
                (--(*count ));
            }
        }
      else
        { /* cicili#Let17452 */
          // ----------
          
          ({ /* cicili#Let17456 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block17459 */
              }
          });
        }
    });
  }
}
const Rc_String__H_Table * const get_Rc_String__H_Table () {
  static const Rc_String__H_Table table  = { free_Rc_String , new_Rc_String , clone_Rc_String , take_Rc_String , get_Rc_String };
  return (&table );
}
Rc_String __h_Hold_String (String * pointer , int * count , size_t address ) {
  { /* cicili#Let17470 */
    Rc_String instance  = ((Rc_String){ get_Rc_String__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_String Gone_String () {
  { /* cicili#Let17475 */
    Rc_String instance  = ((Rc_String){ get_Rc_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_String__H_IMPL__ */ 
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let17487 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let17491 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17492 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17494 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17497 */
            foldr_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let17502 */
            // ----------
            
            ({ /* cicili#Progn17506 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_Bool__H_IMPL__ */ 
#ifndef __Monoid_All_Bool__H_IMPL__
#define __Monoid_All_Bool__H_IMPL__
void free_Monoid_All_Bool (Monoid_All_Bool * this ) {
}
const Monoid_All_Bool__H_Table * const get_Monoid_All_Bool__H_Table () {
  static const Monoid_All_Bool__H_Table table  = { free_Monoid_All_Bool };
  return (&table );
}
Monoid_All_Bool Monoid_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat ) {
  { /* cicili#Let17523 */
    Monoid_All_Bool instance  = ((Monoid_All_Bool){ get_Monoid_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_All_Bool__H_IMPL__ */ 
#ifndef __Semigroup_All_Bool__H_IMPL__
#define __Semigroup_All_Bool__H_IMPL__
void free_Semigroup_All_Bool (Semigroup_All_Bool * this ) {
}
const Semigroup_All_Bool__H_Table * const get_Semigroup_All_Bool__H_Table () {
  static const Semigroup_All_Bool__H_Table table  = { free_Semigroup_All_Bool };
  return (&table );
}
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend ) {
  { /* cicili#Let17540 */
    Semigroup_All_Bool instance  = ((Semigroup_All_Bool){ get_Semigroup_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_All_Bool__H_IMPL__ */ 
Bool mempty_All_Bool () {
  return True ();
}
Bool mappend_All_Bool (Bool lhs , Bool rhs ) {
  return and_Bool (lhs , rhs );
}
Bool mconcat_All_Bool (List_Bool list ) {
  return foldr_Bool (mappend_All_Bool , True (), list );
}
Monoid_All_Bool get_Monoid_All_Bool () {
  return Monoid_All_Bool_ctor (mappend_All_Bool , True (), mconcat_All_Bool );
}
Semigroup_All_Bool get_Semigroup_All_Bool () {
  return Semigroup_All_Bool_ctor (mappend_All_Bool );
}
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let17573 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let17577 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17578 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17580 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17583 */
            foldr_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let17588 */
            // ----------
            
            ({ /* cicili#Progn17592 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_Bool__H_IMPL__ */ 
#ifndef __Monoid_Any_Bool__H_IMPL__
#define __Monoid_Any_Bool__H_IMPL__
void free_Monoid_Any_Bool (Monoid_Any_Bool * this ) {
}
const Monoid_Any_Bool__H_Table * const get_Monoid_Any_Bool__H_Table () {
  static const Monoid_Any_Bool__H_Table table  = { free_Monoid_Any_Bool };
  return (&table );
}
Monoid_Any_Bool Monoid_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat ) {
  { /* cicili#Let17609 */
    Monoid_Any_Bool instance  = ((Monoid_Any_Bool){ get_Monoid_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_Any_Bool__H_IMPL__ */ 
#ifndef __Semigroup_Any_Bool__H_IMPL__
#define __Semigroup_Any_Bool__H_IMPL__
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this ) {
}
const Semigroup_Any_Bool__H_Table * const get_Semigroup_Any_Bool__H_Table () {
  static const Semigroup_Any_Bool__H_Table table  = { free_Semigroup_Any_Bool };
  return (&table );
}
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend ) {
  { /* cicili#Let17626 */
    Semigroup_Any_Bool instance  = ((Semigroup_Any_Bool){ get_Semigroup_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_Any_Bool__H_IMPL__ */ 
Bool mempty_Any_Bool () {
  return False ();
}
Bool mappend_Any_Bool (Bool lhs , Bool rhs ) {
  return or_Bool (lhs , rhs );
}
Bool mconcat_Any_Bool (List_Bool list ) {
  return foldr_Bool (mappend_Any_Bool , False (), list );
}
Monoid_Any_Bool get_Monoid_Any_Bool () {
  return Monoid_Any_Bool_ctor (mappend_Any_Bool , False (), mconcat_Any_Bool );
}
Semigroup_Any_Bool get_Semigroup_Any_Bool () {
  return Semigroup_Any_Bool_ctor (mappend_Any_Bool );
}
#ifndef __folds_int__H_IMPL__
#define __folds_int__H_IMPL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let17659 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let17663 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17664 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17666 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17669 */
            foldr_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let17674 */
            // ----------
            
            ({ /* cicili#Progn17678 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_int__H_IMPL__ */ 
#ifndef __Monoid_Sum_int__H_IMPL__
#define __Monoid_Sum_int__H_IMPL__
void free_Monoid_Sum_int (Monoid_Sum_int * this ) {
}
const Monoid_Sum_int__H_Table * const get_Monoid_Sum_int__H_Table () {
  static const Monoid_Sum_int__H_Table table  = { free_Monoid_Sum_int };
  return (&table );
}
Monoid_Sum_int Monoid_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat ) {
  { /* cicili#Let17695 */
    Monoid_Sum_int instance  = ((Monoid_Sum_int){ get_Monoid_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_Sum_int__H_IMPL__ */ 
#ifndef __Semigroup_Sum_int__H_IMPL__
#define __Semigroup_Sum_int__H_IMPL__
void free_Semigroup_Sum_int (Semigroup_Sum_int * this ) {
}
const Semigroup_Sum_int__H_Table * const get_Semigroup_Sum_int__H_Table () {
  static const Semigroup_Sum_int__H_Table table  = { free_Semigroup_Sum_int };
  return (&table );
}
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend ) {
  { /* cicili#Let17712 */
    Semigroup_Sum_int instance  = ((Semigroup_Sum_int){ get_Semigroup_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_Sum_int__H_IMPL__ */ 
int mempty_Sum_int () {
  return 0;
}
int mappend_Sum_int (int lhs , int rhs ) {
  return (lhs  +  rhs  );
}
int mconcat_Sum_int (List_int list ) {
  return foldr_int (mappend_Sum_int , 0, list );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return Monoid_Sum_int_ctor (mappend_Sum_int , 0, mconcat_Sum_int );
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return Semigroup_Sum_int_ctor (mappend_Sum_int );
}
#ifndef __folds_int__H_IMPL__
#define __folds_int__H_IMPL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let17745 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let17749 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17750 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17752 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17755 */
            foldr_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let17760 */
            // ----------
            
            ({ /* cicili#Progn17764 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_int__H_IMPL__ */ 
#ifndef __Monoid_Product_int__H_IMPL__
#define __Monoid_Product_int__H_IMPL__
void free_Monoid_Product_int (Monoid_Product_int * this ) {
}
const Monoid_Product_int__H_Table * const get_Monoid_Product_int__H_Table () {
  static const Monoid_Product_int__H_Table table  = { free_Monoid_Product_int };
  return (&table );
}
Monoid_Product_int Monoid_Product_int_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat ) {
  { /* cicili#Let17781 */
    Monoid_Product_int instance  = ((Monoid_Product_int){ get_Monoid_Product_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_Product_int__H_IMPL__ */ 
#ifndef __Semigroup_Product_int__H_IMPL__
#define __Semigroup_Product_int__H_IMPL__
void free_Semigroup_Product_int (Semigroup_Product_int * this ) {
}
const Semigroup_Product_int__H_Table * const get_Semigroup_Product_int__H_Table () {
  static const Semigroup_Product_int__H_Table table  = { free_Semigroup_Product_int };
  return (&table );
}
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend ) {
  { /* cicili#Let17798 */
    Semigroup_Product_int instance  = ((Semigroup_Product_int){ get_Semigroup_Product_int__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_Product_int__H_IMPL__ */ 
int mempty_Product_int () {
  return 1;
}
int mappend_Product_int (int lhs , int rhs ) {
  return (lhs  *  rhs  );
}
int mconcat_Product_int (List_int list ) {
  return foldr_int (mappend_Product_int , 1, list );
}
Monoid_Product_int get_Monoid_Product_int () {
  return Monoid_Product_int_ctor (mappend_Product_int , 1, mconcat_Product_int );
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return Semigroup_Product_int_ctor (mappend_Product_int );
}
#ifndef __folds_List_Bool__H_IMPL__
#define __folds_List_Bool__H_IMPL__
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable ) {
  return ({ /* cicili#Let17831 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let17835 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17836 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17838 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17841 */
            foldr_List_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let17846 */
            // ----------
            
            ({ /* cicili#Progn17850 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_List_Bool__H_IMPL__ */ 
#ifndef __Monoid_List_Bool__H_IMPL__
#define __Monoid_List_Bool__H_IMPL__
void free_Monoid_List_Bool (Monoid_List_Bool * this ) {
}
const Monoid_List_Bool__H_Table * const get_Monoid_List_Bool__H_Table () {
  static const Monoid_List_Bool__H_Table table  = { free_Monoid_List_Bool };
  return (&table );
}
Monoid_List_Bool Monoid_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat ) {
  { /* cicili#Let17867 */
    Monoid_List_Bool instance  = ((Monoid_List_Bool){ get_Monoid_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_List_Bool__H_IMPL__ */ 
#ifndef __Semigroup_List_Bool__H_IMPL__
#define __Semigroup_List_Bool__H_IMPL__
void free_Semigroup_List_Bool (Semigroup_List_Bool * this ) {
}
const Semigroup_List_Bool__H_Table * const get_Semigroup_List_Bool__H_Table () {
  static const Semigroup_List_Bool__H_Table table  = { free_Semigroup_List_Bool };
  return (&table );
}
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend ) {
  { /* cicili#Let17884 */
    Semigroup_List_Bool instance  = ((Semigroup_List_Bool){ get_Semigroup_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_List_Bool__H_IMPL__ */ 
List_Bool mempty_List_Bool () {
  return Nil_Bool ();
}
List_Bool mappend_List_Bool (List_Bool lhs , List_Bool rhs ) {
  return append_List_Bool (lhs , rhs );
}
List_Bool mconcat_List_Bool (List_List_Bool list ) {
  return foldr_List_Bool (mappend_List_Bool , Nil_Bool (), list );
}
Monoid_List_Bool get_Monoid_List_Bool () {
  return Monoid_List_Bool_ctor (mappend_List_Bool , Nil_Bool (), mconcat_List_Bool );
}
Semigroup_List_Bool get_Semigroup_List_Bool () {
  return Semigroup_List_Bool_ctor (mappend_List_Bool );
}
#ifndef __folds_List_int__H_IMPL__
#define __folds_List_int__H_IMPL__
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let17920 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let17924 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17925 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17927 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn17930 */
            foldr_List_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let17935 */
            // ----------
            
            ({ /* cicili#Progn17939 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_List_int__H_IMPL__ */ 
#ifndef __Monoid_List_int__H_IMPL__
#define __Monoid_List_int__H_IMPL__
void free_Monoid_List_int (Monoid_List_int * this ) {
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table () {
  static const Monoid_List_int__H_Table table  = { free_Monoid_List_int };
  return (&table );
}
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  { /* cicili#Let17956 */
    Monoid_List_int instance  = ((Monoid_List_int){ get_Monoid_List_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_List_int__H_IMPL__ */ 
#ifndef __Semigroup_List_int__H_IMPL__
#define __Semigroup_List_int__H_IMPL__
void free_Semigroup_List_int (Semigroup_List_int * this ) {
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table () {
  static const Semigroup_List_int__H_Table table  = { free_Semigroup_List_int };
  return (&table );
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  { /* cicili#Let17973 */
    Semigroup_List_int instance  = ((Semigroup_List_int){ get_Semigroup_List_int__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_List_int__H_IMPL__ */ 
List_int mempty_List_int () {
  return Nil_int ();
}
List_int mappend_List_int (List_int lhs , List_int rhs ) {
  return append_List_int (lhs , rhs );
}
List_int mconcat_List_int (List_List_int list ) {
  return foldr_List_int (mappend_List_int , Nil_int (), list );
}
Monoid_List_int get_Monoid_List_int () {
  return Monoid_List_int_ctor (mappend_List_int , Nil_int (), mconcat_List_int );
}
Semigroup_List_int get_Semigroup_List_int () {
  return Semigroup_List_int_ctor (mappend_List_int );
}
#ifndef __folds_List_char__H_IMPL__
#define __folds_List_char__H_IMPL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let18009 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18013 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18014 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18016 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18019 */
            foldr_List_char (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let18024 */
            // ----------
            
            ({ /* cicili#Progn18028 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_List_char__H_IMPL__ */ 
#ifndef __Monoid_List_char__H_IMPL__
#define __Monoid_List_char__H_IMPL__
void free_Monoid_List_char (Monoid_List_char * this ) {
}
const Monoid_List_char__H_Table * const get_Monoid_List_char__H_Table () {
  static const Monoid_List_char__H_Table table  = { free_Monoid_List_char };
  return (&table );
}
Monoid_List_char Monoid_List_char_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat ) {
  { /* cicili#Let18045 */
    Monoid_List_char instance  = ((Monoid_List_char){ get_Monoid_List_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_List_char__H_IMPL__ */ 
#ifndef __Semigroup_List_char__H_IMPL__
#define __Semigroup_List_char__H_IMPL__
void free_Semigroup_List_char (Semigroup_List_char * this ) {
}
const Semigroup_List_char__H_Table * const get_Semigroup_List_char__H_Table () {
  static const Semigroup_List_char__H_Table table  = { free_Semigroup_List_char };
  return (&table );
}
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend ) {
  { /* cicili#Let18062 */
    Semigroup_List_char instance  = ((Semigroup_List_char){ get_Semigroup_List_char__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_List_char__H_IMPL__ */ 
List_char mempty_List_char () {
  return Nil_char ();
}
List_char mappend_List_char (List_char lhs , List_char rhs ) {
  return append_List_char (lhs , rhs );
}
List_char mconcat_List_char (List_List_char list ) {
  return foldr_List_char (mappend_List_char , Nil_char (), list );
}
Monoid_List_char get_Monoid_List_char () {
  return Monoid_List_char_ctor (mappend_List_char , Nil_char (), mconcat_List_char );
}
Semigroup_List_char get_Semigroup_List_char () {
  return Semigroup_List_char_ctor (mappend_List_char );
}
#ifndef __folds_List_char__H_IMPL__
#define __folds_List_char__H_IMPL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let18098 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18102 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18103 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18105 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18108 */
            foldr_List_char (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let18113 */
            // ----------
            
            ({ /* cicili#Progn18117 */
              neutral ;
            });
          }));
      });
    });
}
#endif /* __folds_List_char__H_IMPL__ */ 
#ifndef __Monoid_String_Char__H_IMPL__
#define __Monoid_String_Char__H_IMPL__
void free_Monoid_String_Char (Monoid_String_Char * this ) {
}
const Monoid_String_Char__H_Table * const get_Monoid_String_Char__H_Table () {
  static const Monoid_String_Char__H_Table table  = { free_Monoid_String_Char };
  return (&table );
}
Monoid_String_Char Monoid_String_Char_ctor (Monoid_String_Char_mappend_t mappend , List_char mempty , Monoid_String_Char_mconcat_t mconcat ) {
  { /* cicili#Let18134 */
    Monoid_String_Char instance  = ((Monoid_String_Char){ get_Monoid_String_Char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
    // ----------
    return instance ;
  }
}
#endif /* __Monoid_String_Char__H_IMPL__ */ 
#ifndef __Semigroup_String_Char__H_IMPL__
#define __Semigroup_String_Char__H_IMPL__
void free_Semigroup_String_Char (Semigroup_String_Char * this ) {
}
const Semigroup_String_Char__H_Table * const get_Semigroup_String_Char__H_Table () {
  static const Semigroup_String_Char__H_Table table  = { free_Semigroup_String_Char };
  return (&table );
}
Semigroup_String_Char Semigroup_String_Char_ctor (Monoid_String_Char_mappend_t mappend ) {
  { /* cicili#Let18151 */
    Semigroup_String_Char instance  = ((Semigroup_String_Char){ get_Semigroup_String_Char__H_Table (), __h___t , .__h_data._ = { mappend }});
    // ----------
    return instance ;
  }
}
#endif /* __Semigroup_String_Char__H_IMPL__ */ 
List_char mempty_String_Char () {
  return Nil_char ();
}
List_char mappend_String_Char (List_char lhs , List_char rhs ) {
  return append_List_char (lhs , rhs );
}
List_char mconcat_String_Char (List_List_char list ) {
  return foldr_List_char (mappend_String_Char , Nil_char (), list );
}
Monoid_String_Char get_Monoid_String_Char () {
  return Monoid_String_Char_ctor (mappend_String_Char , Nil_char (), mconcat_String_Char );
}
Semigroup_String_Char get_Semigroup_String_Char () {
  return Semigroup_String_Char_ctor (mappend_String_Char );
}
#ifndef __Functor_List_int_int__H_IMPL__
#define __Functor_List_int_int__H_IMPL__
List_int fmap_Functor_List_int_int (int_to_int_t a_b , List_int input ) {
  return ({ /* cicili#Let18189 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18193 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18194 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18196 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18199 */
            Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail ));
          }) : ({ /* cicili#Let18206 */
            // ----------
            
            ({ /* cicili#Progn18210 */
              Nil_int ();
            });
          }));
      });
    });
}
void free_Functor_List_int_int (Functor_List_int_int * this ) {
}
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table () {
  static const Functor_List_int_int__H_Table table  = { free_Functor_List_int_int , fmap_Functor_List_int_int };
  return (&table );
}
Functor_List_int_int Functor_List_int_int_ctor () {
  { /* cicili#Let18224 */
    Functor_List_int_int instance  = ((Functor_List_int_int){ get_Functor_List_int_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_int_int__H_IMPL__ */ 
Functor_List_int_int get_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
#ifndef __Functor_List_int_char__H_IMPL__
#define __Functor_List_int_char__H_IMPL__
List_char fmap_Functor_List_int_char (int_to_char_t a_b , List_int input ) {
  return ({ /* cicili#Let18242 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18246 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18247 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18249 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18252 */
            Cons_char (a_b (head ), fmap_Functor_List_int_char (a_b , tail ));
          }) : ({ /* cicili#Let18259 */
            // ----------
            
            ({ /* cicili#Progn18263 */
              Nil_char ();
            });
          }));
      });
    });
}
void free_Functor_List_int_char (Functor_List_int_char * this ) {
}
const Functor_List_int_char__H_Table * const get_Functor_List_int_char__H_Table () {
  static const Functor_List_int_char__H_Table table  = { free_Functor_List_int_char , fmap_Functor_List_int_char };
  return (&table );
}
Functor_List_int_char Functor_List_int_char_ctor () {
  { /* cicili#Let18277 */
    Functor_List_int_char instance  = ((Functor_List_int_char){ get_Functor_List_int_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_int_char__H_IMPL__ */ 
Functor_List_int_char get_Functor_List_int_char () {
  return Functor_List_int_char_ctor ();
}
#ifndef __Functor_List_int_Bool__H_IMPL__
#define __Functor_List_int_Bool__H_IMPL__
List_Bool fmap_Functor_List_int_Bool (int_to_Bool_t a_b , List_int input ) {
  return ({ /* cicili#Let18295 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18299 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18300 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18302 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18305 */
            Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail ));
          }) : ({ /* cicili#Let18312 */
            // ----------
            
            ({ /* cicili#Progn18316 */
              Nil_Bool ();
            });
          }));
      });
    });
}
void free_Functor_List_int_Bool (Functor_List_int_Bool * this ) {
}
const Functor_List_int_Bool__H_Table * const get_Functor_List_int_Bool__H_Table () {
  static const Functor_List_int_Bool__H_Table table  = { free_Functor_List_int_Bool , fmap_Functor_List_int_Bool };
  return (&table );
}
Functor_List_int_Bool Functor_List_int_Bool_ctor () {
  { /* cicili#Let18330 */
    Functor_List_int_Bool instance  = ((Functor_List_int_Bool){ get_Functor_List_int_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_int_Bool__H_IMPL__ */ 
Functor_List_int_Bool get_Functor_List_int_Bool () {
  return Functor_List_int_Bool_ctor ();
}
#ifndef __Functor_List_char_char__H_IMPL__
#define __Functor_List_char_char__H_IMPL__
List_char fmap_Functor_List_char_char (char_to_char_t a_b , List_char input ) {
  return ({ /* cicili#Let18348 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18352 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18353 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18355 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18358 */
            Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail ));
          }) : ({ /* cicili#Let18365 */
            // ----------
            
            ({ /* cicili#Progn18369 */
              Nil_char ();
            });
          }));
      });
    });
}
void free_Functor_List_char_char (Functor_List_char_char * this ) {
}
const Functor_List_char_char__H_Table * const get_Functor_List_char_char__H_Table () {
  static const Functor_List_char_char__H_Table table  = { free_Functor_List_char_char , fmap_Functor_List_char_char };
  return (&table );
}
Functor_List_char_char Functor_List_char_char_ctor () {
  { /* cicili#Let18383 */
    Functor_List_char_char instance  = ((Functor_List_char_char){ get_Functor_List_char_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_char_char__H_IMPL__ */ 
Functor_List_char_char get_Functor_List_char_char () {
  return Functor_List_char_char_ctor ();
}
#ifndef __Functor_List_char_int__H_IMPL__
#define __Functor_List_char_int__H_IMPL__
List_int fmap_Functor_List_char_int (char_to_int_t a_b , List_char input ) {
  return ({ /* cicili#Let18401 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18405 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18406 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18408 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18411 */
            Cons_int (a_b (head ), fmap_Functor_List_char_int (a_b , tail ));
          }) : ({ /* cicili#Let18418 */
            // ----------
            
            ({ /* cicili#Progn18422 */
              Nil_int ();
            });
          }));
      });
    });
}
void free_Functor_List_char_int (Functor_List_char_int * this ) {
}
const Functor_List_char_int__H_Table * const get_Functor_List_char_int__H_Table () {
  static const Functor_List_char_int__H_Table table  = { free_Functor_List_char_int , fmap_Functor_List_char_int };
  return (&table );
}
Functor_List_char_int Functor_List_char_int_ctor () {
  { /* cicili#Let18436 */
    Functor_List_char_int instance  = ((Functor_List_char_int){ get_Functor_List_char_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_char_int__H_IMPL__ */ 
Functor_List_char_int get_Functor_List_char_int () {
  return Functor_List_char_int_ctor ();
}
#ifndef __Functor_List_char_Bool__H_IMPL__
#define __Functor_List_char_Bool__H_IMPL__
List_Bool fmap_Functor_List_char_Bool (char_to_Bool_t a_b , List_char input ) {
  return ({ /* cicili#Let18454 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let18458 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18459 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18461 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18464 */
            Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail ));
          }) : ({ /* cicili#Let18471 */
            // ----------
            
            ({ /* cicili#Progn18475 */
              Nil_Bool ();
            });
          }));
      });
    });
}
void free_Functor_List_char_Bool (Functor_List_char_Bool * this ) {
}
const Functor_List_char_Bool__H_Table * const get_Functor_List_char_Bool__H_Table () {
  static const Functor_List_char_Bool__H_Table table  = { free_Functor_List_char_Bool , fmap_Functor_List_char_Bool };
  return (&table );
}
Functor_List_char_Bool Functor_List_char_Bool_ctor () {
  { /* cicili#Let18489 */
    Functor_List_char_Bool instance  = ((Functor_List_char_Bool){ get_Functor_List_char_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_char_Bool__H_IMPL__ */ 
Functor_List_char_Bool get_Functor_List_char_Bool () {
  return Functor_List_char_Bool_ctor ();
}
#ifndef __Functor_Maybe_int_int__H_IMPL__
#define __Functor_Maybe_int_int__H_IMPL__
Maybe_int fmap_Functor_Maybe_int_int (int_to_int_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let18507 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      
      ({ /* cicili#Let18511 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn18512 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18515 */
            Just_int (a_b (val ));
          }) : ({ /* cicili#Let18525 */
            // ----------
            
            ({ /* cicili#Progn18529 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this ) {
}
const Functor_Maybe_int_int__H_Table * const get_Functor_Maybe_int_int__H_Table () {
  static const Functor_Maybe_int_int__H_Table table  = { free_Functor_Maybe_int_int , fmap_Functor_Maybe_int_int };
  return (&table );
}
Functor_Maybe_int_int Functor_Maybe_int_int_ctor () {
  { /* cicili#Let18543 */
    Functor_Maybe_int_int instance  = ((Functor_Maybe_int_int){ get_Functor_Maybe_int_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Maybe_int_int__H_IMPL__ */ 
Functor_Maybe_int_int get_Functor_Maybe_int_int () {
  return Functor_Maybe_int_int_ctor ();
}
#ifndef __Functor_Maybe_int_char__H_IMPL__
#define __Functor_Maybe_int_char__H_IMPL__
Maybe_char fmap_Functor_Maybe_int_char (int_to_char_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let18561 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      
      ({ /* cicili#Let18565 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn18566 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18569 */
            Just_char (a_b (val ));
          }) : ({ /* cicili#Let18579 */
            // ----------
            
            ({ /* cicili#Progn18583 */
              Nothing_char ();
            });
          }));
      });
    });
}
void free_Functor_Maybe_int_char (Functor_Maybe_int_char * this ) {
}
const Functor_Maybe_int_char__H_Table * const get_Functor_Maybe_int_char__H_Table () {
  static const Functor_Maybe_int_char__H_Table table  = { free_Functor_Maybe_int_char , fmap_Functor_Maybe_int_char };
  return (&table );
}
Functor_Maybe_int_char Functor_Maybe_int_char_ctor () {
  { /* cicili#Let18597 */
    Functor_Maybe_int_char instance  = ((Functor_Maybe_int_char){ get_Functor_Maybe_int_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Maybe_int_char__H_IMPL__ */ 
Functor_Maybe_int_char get_Functor_Maybe_int_char () {
  return Functor_Maybe_int_char_ctor ();
}
#ifndef __Functor_Maybe_int_Bool__H_IMPL__
#define __Functor_Maybe_int_Bool__H_IMPL__
Maybe_Bool fmap_Functor_Maybe_int_Bool (int_to_Bool_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let18615 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      
      ({ /* cicili#Let18619 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn18620 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18623 */
            Just_Bool (a_b (val ));
          }) : ({ /* cicili#Let18633 */
            // ----------
            
            ({ /* cicili#Progn18637 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
void free_Functor_Maybe_int_Bool (Functor_Maybe_int_Bool * this ) {
}
const Functor_Maybe_int_Bool__H_Table * const get_Functor_Maybe_int_Bool__H_Table () {
  static const Functor_Maybe_int_Bool__H_Table table  = { free_Functor_Maybe_int_Bool , fmap_Functor_Maybe_int_Bool };
  return (&table );
}
Functor_Maybe_int_Bool Functor_Maybe_int_Bool_ctor () {
  { /* cicili#Let18651 */
    Functor_Maybe_int_Bool instance  = ((Functor_Maybe_int_Bool){ get_Functor_Maybe_int_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Maybe_int_Bool__H_IMPL__ */ 
Functor_Maybe_int_Bool get_Functor_Maybe_int_Bool () {
  return Functor_Maybe_int_Bool_ctor ();
}
#ifndef __Functor_Maybe_char_char__H_IMPL__
#define __Functor_Maybe_char_char__H_IMPL__
Maybe_char fmap_Functor_Maybe_char_char (char_to_char_t a_b , Maybe_char input ) {
  return ({ /* cicili#Let18669 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      
      ({ /* cicili#Let18673 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn18674 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18677 */
            Just_char (a_b (val ));
          }) : ({ /* cicili#Let18687 */
            // ----------
            
            ({ /* cicili#Progn18691 */
              Nothing_char ();
            });
          }));
      });
    });
}
void free_Functor_Maybe_char_char (Functor_Maybe_char_char * this ) {
}
const Functor_Maybe_char_char__H_Table * const get_Functor_Maybe_char_char__H_Table () {
  static const Functor_Maybe_char_char__H_Table table  = { free_Functor_Maybe_char_char , fmap_Functor_Maybe_char_char };
  return (&table );
}
Functor_Maybe_char_char Functor_Maybe_char_char_ctor () {
  { /* cicili#Let18705 */
    Functor_Maybe_char_char instance  = ((Functor_Maybe_char_char){ get_Functor_Maybe_char_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Maybe_char_char__H_IMPL__ */ 
Functor_Maybe_char_char get_Functor_Maybe_char_char () {
  return Functor_Maybe_char_char_ctor ();
}
#ifndef __Functor_Maybe_char_int__H_IMPL__
#define __Functor_Maybe_char_int__H_IMPL__
Maybe_int fmap_Functor_Maybe_char_int (char_to_int_t a_b , Maybe_char input ) {
  return ({ /* cicili#Let18723 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      
      ({ /* cicili#Let18727 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn18728 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18731 */
            Just_int (a_b (val ));
          }) : ({ /* cicili#Let18741 */
            // ----------
            
            ({ /* cicili#Progn18745 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_Functor_Maybe_char_int (Functor_Maybe_char_int * this ) {
}
const Functor_Maybe_char_int__H_Table * const get_Functor_Maybe_char_int__H_Table () {
  static const Functor_Maybe_char_int__H_Table table  = { free_Functor_Maybe_char_int , fmap_Functor_Maybe_char_int };
  return (&table );
}
Functor_Maybe_char_int Functor_Maybe_char_int_ctor () {
  { /* cicili#Let18759 */
    Functor_Maybe_char_int instance  = ((Functor_Maybe_char_int){ get_Functor_Maybe_char_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Maybe_char_int__H_IMPL__ */ 
Functor_Maybe_char_int get_Functor_Maybe_char_int () {
  return Functor_Maybe_char_int_ctor ();
}
#ifndef __Functor_Maybe_char_Bool__H_IMPL__
#define __Functor_Maybe_char_Bool__H_IMPL__
Maybe_Bool fmap_Functor_Maybe_char_Bool (char_to_Bool_t a_b , Maybe_char input ) {
  return ({ /* cicili#Let18777 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      
      ({ /* cicili#Let18781 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn18782 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn18785 */
            Just_Bool (a_b (val ));
          }) : ({ /* cicili#Let18795 */
            // ----------
            
            ({ /* cicili#Progn18799 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
void free_Functor_Maybe_char_Bool (Functor_Maybe_char_Bool * this ) {
}
const Functor_Maybe_char_Bool__H_Table * const get_Functor_Maybe_char_Bool__H_Table () {
  static const Functor_Maybe_char_Bool__H_Table table  = { free_Functor_Maybe_char_Bool , fmap_Functor_Maybe_char_Bool };
  return (&table );
}
Functor_Maybe_char_Bool Functor_Maybe_char_Bool_ctor () {
  { /* cicili#Let18813 */
    Functor_Maybe_char_Bool instance  = ((Functor_Maybe_char_Bool){ get_Functor_Maybe_char_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_Maybe_char_Bool__H_IMPL__ */ 
Functor_Maybe_char_Bool get_Functor_Maybe_char_Bool () {
  return Functor_Maybe_char_Bool_ctor ();
}
#endif /* __CICILI_HASKELL_H_IMPL__ */ 
