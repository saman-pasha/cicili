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
    { /* cicili#Block4443 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , pointer , (*((size_t *)pointer ))}), __h_stack_current );
    }
  return pointer ;
}
void __h_stack_push_func (CStr func_name ) {
  if (__h_stack_initialized )
    { /* cicili#Block4449 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ (++__h_stack_level ), ((CVoid)func_name ), 0}), __h_stack_current );
    }
}
void __h_stack_push_data (CStr buffer ) {
  if (__h_stack_initialized )
    { /* cicili#Block4455 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , ((CVoid)buffer ), 1}), __h_stack_current );
    }
}
void __h_stack_push_separator () {
  if (__h_stack_initialized )
    { /* cicili#Block4461 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , 0, 0}), __h_stack_current );
    }
}
void __h_stack_show_item (BoxedList___h_StackItem stack , int counter ) {
  ({ /* cicili#Let4466 */
    __auto_type __h_matchbox  = stack ;
    // ----------
    { /* cicili#Let4470 */
      __auto_type match4469  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
      typeof((((match4469 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      ;
      ({ /* cicili#Let4473 */
        bool __h_case_result  = (true  &&  (((match4469 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4474 */
              (unboxed  =  (((match4469 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block4480 */
            { /* cicili#Let4484 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              ;
              ({ /* cicili#Let4486 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4487 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn4489 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block4495 */
                    { /* cicili#Let4499 */
                      typeof((head . __h_0_mem )) level ;
                      typeof((head . __h_1_mem )) pointer ;
                      typeof((head . __h_2_mem )) address ;
                      // ----------
                      ;
                      ({ /* cicili#Let4501 */
                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4502 */
                                (level  =  (head . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4504 */
                                (pointer  =  (head . __h_1_mem ) );
                                true ;
                              }) ) &&  ({ /* cicili#Progn4506 */
                              (address  =  (head . __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block4512 */
                            if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                              ({ /* cicili#Let4516 */
                                __auto_type __h_matchbox  = tail ;
                                // ----------
                                { /* cicili#Let4520 */
                                  __auto_type match4519  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match4519 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let4523 */
                                    bool __h_case_result  = (true  &&  (((match4519 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4524 */
                                          (unboxed  =  (((match4519 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block4530 */
                                        { /* cicili#Let4534 */
                                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) fhead ;
                                          typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let4536 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4537 */
                                                    (fhead  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn4539 */
                                                    (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block4545 */
                                                { /* cicili#Let4549 */
                                                  typeof((fhead . __h_0_mem )) flevel ;
                                                  typeof((fhead . __h_1_mem )) fpointer ;
                                                  typeof((fhead . __h_2_mem )) faddress ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let4551 */
                                                    bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4552 */
                                                            (flevel  =  (fhead . __h_0_mem ) );
                                                            true ;
                                                          }) &&  ({ /* cicili#Progn4554 */
                                                            (fpointer  =  (fhead . __h_1_mem ) );
                                                            true ;
                                                          }) ) &&  ({ /* cicili#Progn4556 */
                                                          (faddress  =  (fhead . __h_2_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    if (__h_case_result )
                                                      { /* cicili#Block4562 */
                                                        if (faddress  ==  0 )
                                                          { /* cicili#Block4565 */
                                                            printf ("%*d,%*d%*cstack trace function: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                            __h_stack_show_item (ftail , counter );
                                                          }
                                                        else
                                                          { /* cicili#Block4568 */
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
                                { /* cicili#Block4572 */
                                  printf ("%*d,%*d%*c* alive pointer: %p points to address: %zx *\n", 4, counter , 4, level , level , ' ', pointer , address );
                                  __h_stack_show_item (tail , counter );
                                }
                              else
                                { /* cicili#Block4575 */
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
        ({ /* cicili#Let4581 */
          __auto_type __h_matchbox  = stack ;
          // ----------
          { /* cicili#Let4585 */
            __auto_type match4584  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4584 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4588 */
              bool __h_case_result  = (true  &&  (((match4584 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4589 */
                    (unboxed  =  (((match4584 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4595 */
                  { /* cicili#Let4599 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    ;
                    ({ /* cicili#Let4601 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4602 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn4604 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4610 */
                          { /* cicili#Block4612 */
                            __h_stack_show_item (head , (++counter ));
                            stack  = tail ;
                          }
                        }
                      else
                        { /* cicili#Let4617 */
                          // ----------
                          ;
                          { /* cicili#Block4619 */
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
    { /* cicili#Block4623 */
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
    ({ /* cicili#Let4629 */
      __auto_type __h_matchbox  = stack ;
      // ----------
      { /* cicili#Let4633 */
        __auto_type match4632  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4632 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4636 */
          bool __h_case_result  = (true  &&  (((match4632 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4637 */
                (unboxed  =  (((match4632 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block4643 */
              { /* cicili#Let4647 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4649 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4650 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4652 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4658 */
                      { /* cicili#Let4662 */
                        typeof((head . __h_1_mem )) pointer ;
                        typeof((head . __h_2_mem )) address ;
                        // ----------
                        ;
                        ({ /* cicili#Let4664 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn4665 */
                                (pointer  =  (head . __h_1_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn4667 */
                                (address  =  (head . __h_2_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block4673 */
                              if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                                ({ /* cicili#Let4677 */
                                  __auto_type __h_matchbox  = tail ;
                                  // ----------
                                  { /* cicili#Let4681 */
                                    __auto_type match4680  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match4680 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4684 */
                                      bool __h_case_result  = (true  &&  (((match4680 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4685 */
                                            (unboxed  =  (((match4680 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      if (__h_case_result )
                                        { /* cicili#Block4691 */
                                          { /* cicili#Let4695 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let4697 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4698 */
                                                    (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block4704 */
                                                  if (isAlive )
                                                    { /* cicili#Block4707 */
                                                      __h_stack_current  = clone_Box_BoxedList___h_StackItem (ftail );
                                                    }
                                                  else
                                                    { /* cicili#Block4711 */
                                                      ({ /* cicili#Let4714 */
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
                                  { /* cicili#Block4720 */
                                    __h_stack_private  = BoxedCons_BoxedList___h_StackItem (clone_Box_BoxedList___h_StackItem (stack ), __h_stack_private );
                                    free_Box_BoxedList___h_StackItem ((&__h_stack_current ));
                                    __h_stack_free_ (tail , true );
                                  }
                                else
                                  { /* cicili#Block4726 */
                                    ({ /* cicili#Let4729 */
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
    { /* cicili#Block4735 */
      __h_stack_free_ (__h_stack_current , false );
    }
}
void __h_stack_free_main (BoxedList_BoxedList___h_StackItem * pin ) {
  bool __h_stack_show_ (BoxedList___h_StackItem stack , int counter ) {
    ({ /* cicili#Let4740 */
      __auto_type __h_matchbox  = stack ;
      // ----------
      { /* cicili#Let4744 */
        __auto_type match4743  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4743 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4747 */
          bool __h_case_result  = (true  &&  (((match4743 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4748 */
                (unboxed  =  (((match4743 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block4754 */
              { /* cicili#Let4758 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
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
                    { /* cicili#Block4769 */
                      { /* cicili#Let4773 */
                        typeof((head . __h_0_mem )) level ;
                        typeof((head . __h_1_mem )) pointer ;
                        typeof((head . __h_2_mem )) address ;
                        // ----------
                        ;
                        ({ /* cicili#Let4775 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4776 */
                                  (level  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4778 */
                                  (pointer  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4780 */
                                (address  =  (head . __h_2_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block4786 */
                              if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                                ({ /* cicili#Let4790 */
                                  __auto_type __h_matchbox  = tail ;
                                  // ----------
                                  { /* cicili#Let4794 */
                                    __auto_type match4793  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match4793 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4797 */
                                      bool __h_case_result  = (true  &&  (((match4793 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4798 */
                                            (unboxed  =  (((match4793 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      if (__h_case_result )
                                        { /* cicili#Block4804 */
                                          { /* cicili#Let4808 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) fhead ;
                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let4810 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4811 */
                                                      (fhead  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) &&  ({ /* cicili#Progn4813 */
                                                      (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                      true ;
                                                    }) ) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block4819 */
                                                  { /* cicili#Let4823 */
                                                    typeof((fhead . __h_0_mem )) flevel ;
                                                    typeof((fhead . __h_1_mem )) fpointer ;
                                                    typeof((fhead . __h_2_mem )) faddress ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let4825 */
                                                      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4826 */
                                                              (flevel  =  (fhead . __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn4828 */
                                                              (fpointer  =  (fhead . __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  ({ /* cicili#Progn4830 */
                                                            (faddress  =  (fhead . __h_2_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      if (__h_case_result )
                                                        { /* cicili#Block4836 */
                                                          if (faddress  ==  0 )
                                                            { /* cicili#Block4839 */
                                                              printf ("%*d,%*d%*cstack trace function: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                              __h_stack_show_ (ftail , counter );
                                                            }
                                                          else
                                                            { /* cicili#Block4842 */
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
                                { /* cicili#Block4845 */
                                  if (pointer  &&  ((*((size_t *)pointer )) ==  address  ) )
                                    { /* cicili#Block4848 */
                                      printf ("%*d,%*d%*c* alive pointer: %p points to address: %zx *\n", 4, counter , 4, level , level , ' ', pointer , address );
                                      __h_stack_show_ (tail , counter );
                                    }
                                  else
                                    return false ;
                                }
                            }
                          else
                            { /* cicili#Let4854 */
                              // ----------
                              ;
                              { /* cicili#Block4856 */
                                return false ;
                              }
                            }
                        });
                      }
                    }
                  else
                    { /* cicili#Let4861 */
                      // ----------
                      ;
                      { /* cicili#Block4863 */
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
        ({ /* cicili#Let4868 */
          __auto_type __h_matchbox  = stack ;
          // ----------
          { /* cicili#Let4872 */
            __auto_type match4871  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4871 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4875 */
              bool __h_case_result  = (true  &&  (((match4871 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4876 */
                    (unboxed  =  (((match4871 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4882 */
                  { /* cicili#Let4886 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    ;
                    ({ /* cicili#Let4888 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4889 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn4891 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4897 */
                          { /* cicili#Block4899 */
                            stack  = tail ;
                            ((__h_stack_show_ (head , (++counter ))) ? counter  : (--counter ));
                            free_Box_BoxedList___h_StackItem ((&head ));
                          }
                        }
                      else
                        { /* cicili#Let4905 */
                          // ----------
                          ;
                          { /* cicili#Block4907 */
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
    { /* cicili#Block4911 */
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
  { /* cicili#Let4928 */
    Maybe___h_StackItem instance  = ((Maybe___h_StackItem){ get_Maybe___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe___h_StackItem Nothing___h_StackItem () {
  { /* cicili#Let4933 */
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
  { /* cicili#Let4953 */
    Maybe_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList___h_StackItem_x){ get_Maybe_BoxedList___h_StackItem_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem_x Nothing_BoxedList___h_StackItem_x () {
  { /* cicili#Let4958 */
    Maybe_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList___h_StackItem_x){ get_Maybe_BoxedList___h_StackItem_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList___h_StackItem_x__H_IMPL__ */ 
#ifndef __Box_BoxedList___h_StackItem__H_IMPL__
#define __Box_BoxedList___h_StackItem__H_IMPL__
Box_BoxedList___h_StackItem new_Box_BoxedList___h_StackItem (BoxedList___h_StackItem_x pointer ) {
  return ({ /* cicili#Let4965 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BoxedList___h_StackItem_x *)malloc (sizeof(BoxedList___h_StackItem_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BoxedList___h_StackItem_x (holder , count , ((size_t)pointer ));
    });
}
Box_BoxedList___h_StackItem clone_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let4974 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4976 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4977 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4979 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4981 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4986 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4989 */
                (++(*count ));
                __h_Hold_BoxedList___h_StackItem_x (pointer , count , address );
              }) : Gone_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let4995 */
            // ----------
            ;
            ({ /* cicili#Progn4997 */
              Gone_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList___h_StackItem_x take_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this ) {
  return ({ /* cicili#Let5005 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let5007 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5008 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5010 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5012 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5017 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let5021 */
                __auto_type result  = Just_BoxedList___h_StackItem_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let5029 */
            // ----------
            ;
            ({ /* cicili#Progn5031 */
              Nothing_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList___h_StackItem_x get_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let5039 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let5041 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5042 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5044 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5046 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5051 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BoxedList___h_StackItem_x ((*pointer )) : Nothing_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let5058 */
            // ----------
            ;
            ({ /* cicili#Progn5060 */
              Nothing_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this ) {
  { /* cicili#Let5069 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let5071 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5072 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5074 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn5076 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block5082 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block5085 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BoxedList___h_StackItem_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block5093 */
                if ((*count ) ==  1 )
                  { /* cicili#Block5096 */
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
              }        }
      else
        { /* cicili#Let5106 */
          // ----------
          ;
          ({ /* cicili#Let5108 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block5113 */
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
  { /* cicili#Let5124 */
    Box_BoxedList___h_StackItem instance  = ((Box_BoxedList___h_StackItem){ get_Box_BoxedList___h_StackItem__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_BoxedList___h_StackItem Gone_BoxedList___h_StackItem_x () {
  { /* cicili#Let5129 */
    Box_BoxedList___h_StackItem instance  = ((Box_BoxedList___h_StackItem){ get_Box_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_BoxedList___h_StackItem__H_IMPL__ */ 
__h_StackItem * toArray_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  __h_StackItem * array (BoxedList___h_StackItem list , size_t count ) {
    return ({ /* cicili#Let5136 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5140 */
          __auto_type match5139  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5139 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5143 */
            bool __h_case_result  = (true  &&  (((match5139 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5144 */
                  (unboxed  =  (((match5139 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5149 */
                ({ /* cicili#Let5153 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5155 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5156 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5158 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5163 */
                        ({ /* cicili#Let5165 */
                          __h_StackItem * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let5169 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5171 */
                          ((__h_StackItem *)calloc (count , sizeof(__h_StackItem)));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5175 */
                // ----------
                ;
                ({ /* cicili#Progn5177 */
                  ((__h_StackItem *)calloc (count , sizeof(__h_StackItem)));
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
BoxedList___h_StackItem pure_BoxedList___h_StackItem (const __h_StackItem * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? BoxedNil___h_StackItem () : ({ /* cicili#Let5188 */
        __h_StackItem item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil___h_StackItem () : BoxedCons___h_StackItem (item , pure_BoxedList___h_StackItem ((++buf ), (--len ))));
      }));
}
size_t show_BoxedList___h_StackItem (CFile file , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5197 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5201 */
        __auto_type match5200  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5200 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5204 */
          bool __h_case_result  = (true  &&  (((match5200 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5205 */
                (unboxed  =  (((match5200 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5210 */
              ({ /* cicili#Let5214 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5216 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5217 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5219 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5224 */
                      (({ /* cicili#Let5227 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let5231 */
                            __auto_type match5230  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match5230 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let5234 */
                              bool __h_case_result  = (true  &&  (((match5230 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5235 */
                                    (unboxed  =  (((match5230 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn5240 */
                                  ({ /* cicili#Let5244 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let5246 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn5250 */
                                          (({ /* cicili#Let5258 */
                                              typeof((head . __h_0_mem )) level ;
                                              typeof((head . __h_1_mem )) pointer ;
                                              typeof((head . __h_2_mem )) address ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5260 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn5261 */
                                                        (level  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5263 */
                                                        (pointer  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  ({ /* cicili#Progn5265 */
                                                      (address  =  (head . __h_2_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5270 */
                                                    fprintf (file , "%d, %p: %zu", level , pointer , address );
                                                  }) : ({ /* cicili#Let5274 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5276 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", "\n") );
                                        }) : ({ /* cicili#Let5280 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn5282 */
                                            ({ /* cicili#Let5290 */
                                              typeof((head . __h_0_mem )) level ;
                                              typeof((head . __h_1_mem )) pointer ;
                                              typeof((head . __h_2_mem )) address ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let5292 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn5293 */
                                                        (level  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn5295 */
                                                        (pointer  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  ({ /* cicili#Progn5297 */
                                                      (address  =  (head . __h_2_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn5302 */
                                                    fprintf (file , "%d, %p: %zu", level , pointer , address );
                                                  }) : ({ /* cicili#Let5306 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn5308 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let5312 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn5314 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_BoxedList___h_StackItem (file , tail ) );
                    }) : ({ /* cicili#Let5319 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5321 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5325 */
              // ----------
              ;
              ({ /* cicili#Progn5327 */
                0;
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem copy_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5332 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5336 */
        __auto_type match5335  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5335 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5339 */
          bool __h_case_result  = (true  &&  (((match5335 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5340 */
                (unboxed  =  (((match5335 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5345 */
              ({ /* cicili#Let5349 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5351 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5352 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5354 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5359 */
                      BoxedCons___h_StackItem (head , copy_BoxedList___h_StackItem (tail ));
                    }) : ({ /* cicili#Let5365 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5367 */
                        BoxedNil___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5372 */
              // ----------
              ;
              ({ /* cicili#Progn5374 */
                BoxedNil___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem replaceAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , size_t index ) {
  return ({ /* cicili#Let5380 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5384 */
        __auto_type match5383  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5383 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5387 */
          bool __h_case_result  = (true  &&  (((match5383 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5388 */
                (unboxed  =  (((match5383 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5393 */
              ({ /* cicili#Let5397 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5399 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5400 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5402 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5407 */
                      BoxedCons___h_StackItem (head , replaceAt_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let5413 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5415 */
                        ({ /* cicili#Let5418 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let5422 */
                            __auto_type match5421  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match5421 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let5425 */
                              bool __h_case_result  = (true  &&  (((match5421 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5426 */
                                    (unboxed  =  (((match5421 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn5431 */
                                  ({ /* cicili#Let5435 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let5437 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5438 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn5443 */
                                          BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (taill ));
                                        }) : ({ /* cicili#Let5449 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn5451 */
                                            clone_Box_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let5456 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn5458 */
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
            }) : ({ /* cicili#Let5463 */
              // ----------
              ;
              ({ /* cicili#Progn5465 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem deleteAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , size_t index ) {
  return ({ /* cicili#Let5471 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5475 */
        __auto_type match5474  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5474 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5478 */
          bool __h_case_result  = (true  &&  (((match5474 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5479 */
                (unboxed  =  (((match5474 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5484 */
              ({ /* cicili#Let5488 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5490 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5491 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5493 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5498 */
                      BoxedCons___h_StackItem (head , deleteAt_BoxedList___h_StackItem (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let5504 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5506 */
                        ({ /* cicili#Let5509 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let5513 */
                            __auto_type match5512  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match5512 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let5516 */
                              bool __h_case_result  = (true  &&  (((match5512 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5517 */
                                    (unboxed  =  (((match5512 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn5522 */
                                  ({ /* cicili#Let5526 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let5528 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5529 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn5534 */
                                          clone_Box_BoxedList___h_StackItem (taill );
                                        }) : ({ /* cicili#Let5539 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn5541 */
                                            clone_Box_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let5546 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn5548 */
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
            }) : ({ /* cicili#Let5553 */
              // ----------
              ;
              ({ /* cicili#Progn5555 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem insertAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , size_t index ) {
  return ({ /* cicili#Let5561 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5565 */
        __auto_type match5564  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5564 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5568 */
          bool __h_case_result  = (true  &&  (((match5564 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5569 */
                (unboxed  =  (((match5564 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5574 */
              ({ /* cicili#Let5578 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5580 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5581 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5583 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5588 */
                      BoxedCons___h_StackItem (head , insertAt_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let5594 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5596 */
                        BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5602 */
              // ----------
              ;
              ({ /* cicili#Progn5604 */
                BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (list ));
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem replace_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let5612 */
      __auto_type match5611  = get_Box_BoxedList___h_StackItem (list );
      typeof((((match5611 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let5615 */
        bool __h_case_result  = (true  &&  (((match5611 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5616 */
              (listp  =  (((match5611 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5621 */
            ({ /* cicili#Let5625 */
              __auto_type match5624  = get_Box_BoxedList___h_StackItem (aimed );
              typeof((((match5624 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let5628 */
                bool __h_case_result  = (true  &&  (((match5624 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5629 */
                      (aimedp  =  (((match5624 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5634 */
                    ({ /* cicili#Let5638 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let5640 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5641 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5643 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5648 */
                            BoxedCons___h_StackItem (head , replace_BoxedList___h_StackItem (tail , item , aimed ));
                          }) : ({ /* cicili#Let5654 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5656 */
                              ({ /* cicili#Let5660 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let5662 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5663 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5668 */
                                      BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (taill ));
                                    }) : ({ /* cicili#Let5674 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5676 */
                                        clone_Box_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5681 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5683 */
                      clone_Box_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5688 */
            // ----------
            ;
            ({ /* cicili#Progn5690 */
              clone_Box_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList___h_StackItem delete_BoxedList___h_StackItem (BoxedList___h_StackItem list , BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let5697 */
      __auto_type match5696  = get_Box_BoxedList___h_StackItem (list );
      typeof((((match5696 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let5700 */
        bool __h_case_result  = (true  &&  (((match5696 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5701 */
              (listp  =  (((match5696 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5706 */
            ({ /* cicili#Let5710 */
              __auto_type match5709  = get_Box_BoxedList___h_StackItem (aimed );
              typeof((((match5709 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let5713 */
                bool __h_case_result  = (true  &&  (((match5709 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5714 */
                      (aimedp  =  (((match5709 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5719 */
                    ({ /* cicili#Let5723 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let5725 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5726 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5728 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5733 */
                            BoxedCons___h_StackItem (head , delete_BoxedList___h_StackItem (tail , aimed ));
                          }) : ({ /* cicili#Let5739 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5741 */
                              ({ /* cicili#Let5745 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let5747 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5748 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5753 */
                                      clone_Box_BoxedList___h_StackItem (taill );
                                    }) : ({ /* cicili#Let5758 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5760 */
                                        clone_Box_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5765 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5767 */
                      clone_Box_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5772 */
            // ----------
            ;
            ({ /* cicili#Progn5774 */
              clone_Box_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList___h_StackItem insert_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let5781 */
      __auto_type match5780  = get_Box_BoxedList___h_StackItem (llist );
      typeof((((match5780 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let5784 */
        bool __h_case_result  = (true  &&  (((match5780 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5785 */
              (llistp  =  (((match5780 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5790 */
            ({ /* cicili#Let5794 */
              __auto_type match5793  = get_Box_BoxedList___h_StackItem (rlist );
              typeof((((match5793 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let5797 */
                bool __h_case_result  = (true  &&  (((match5793 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5798 */
                      (rlistp  =  (((match5793 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5803 */
                    ({ /* cicili#Let5807 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let5809 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5810 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5812 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5817 */
                            BoxedCons___h_StackItem (head , insert_BoxedList___h_StackItem (tail , item , rlist ));
                          }) : ({ /* cicili#Let5823 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5825 */
                              BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5831 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5833 */
                      ({ /* cicili#Let5836 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5838 */
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
          }) : ({ /* cicili#Let5845 */
            // ----------
            ;
            ({ /* cicili#Progn5847 */
              BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (rlist ));
            });
          }));
      });
    });
}
BoxedList___h_StackItem reverse_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  BoxedList___h_StackItem _reverse (BoxedList___h_StackItem list , BoxedList___h_StackItem rlist ) {
    return ({ /* cicili#Let5855 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5859 */
          __auto_type match5858  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5858 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5862 */
            bool __h_case_result  = (true  &&  (((match5858 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5863 */
                  (unboxed  =  (((match5858 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5868 */
                ({ /* cicili#Let5872 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5874 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5875 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5877 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5882 */
                        _reverse (tail , BoxedCons___h_StackItem (head , rlist ));
                      }) : ({ /* cicili#Let5887 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5889 */
                          clone_Box_BoxedList___h_StackItem (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5894 */
                // ----------
                ;
                ({ /* cicili#Progn5896 */
                  clone_Box_BoxedList___h_StackItem (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let5900 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5904 */
        __auto_type match5903  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5903 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5907 */
          bool __h_case_result  = (true  &&  (((match5903 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5908 */
                (unboxed  =  (((match5903 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5913 */
              ({ /* cicili#Let5917 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5919 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5920 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5922 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5927 */
                      _reverse (tail , BoxedCons___h_StackItem (head , BoxedNil___h_StackItem ()));
                    }) : ({ /* cicili#Let5933 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5935 */
                        clone_Box_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5940 */
              // ----------
              ;
              ({ /* cicili#Progn5942 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem append_BoxedList___h_StackItem (BoxedList___h_StackItem llist , BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let5948 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let5952 */
        __auto_type match5951  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5951 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5955 */
          bool __h_case_result  = (true  &&  (((match5951 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5956 */
                (unboxed  =  (((match5951 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5961 */
              ({ /* cicili#Let5965 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5967 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5968 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5970 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5975 */
                      BoxedCons___h_StackItem (head , append_BoxedList___h_StackItem (tail , rlist ));
                    }) : ({ /* cicili#Let5981 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5983 */
                        clone_Box_BoxedList___h_StackItem (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5988 */
              // ----------
              ;
              ({ /* cicili#Progn5990 */
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
BoxedList___h_StackItem take_BoxedList___h_StackItem (size_t len , BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? BoxedNil___h_StackItem () : ({ /* cicili#Let6002 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6006 */
          __auto_type match6005  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6005 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let6009 */
            bool __h_case_result  = (true  &&  (((match6005 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6010 */
                  (unboxed  =  (((match6005 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6015 */
                ({ /* cicili#Let6019 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let6021 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6022 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6024 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6029 */
                        BoxedCons___h_StackItem (head , take_BoxedList___h_StackItem ((--len ), tail ));
                      }) : ({ /* cicili#Let6035 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6037 */
                          BoxedNil___h_StackItem ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6042 */
                // ----------
                ;
                ({ /* cicili#Progn6044 */
                  BoxedNil___h_StackItem ();
                });
              }));
          });
        });
      }));
}
BoxedList___h_StackItem last_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6050 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6054 */
        __auto_type match6053  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6053 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6057 */
          bool __h_case_result  = (true  &&  (((match6053 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6058 */
                (unboxed  =  (((match6053 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6063 */
              ({ /* cicili#Let6067 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6069 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6070 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6075 */
                      ({ /* cicili#Let6078 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let6082 */
                          __auto_type match6081  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match6081 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let6085 */
                            bool __h_case_result  = (true  &&  (((match6081 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6086 */
                                  (unboxed  =  (((match6081 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6091 */
                                ({ /* cicili#Let6095 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6097 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6101 */
                                        clone_Box_BoxedList___h_StackItem (list );
                                      }) : ({ /* cicili#Let6106 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6108 */
                                          last_BoxedList___h_StackItem (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let6113 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6115 */
                                  clone_Box_BoxedList___h_StackItem (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6120 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6122 */
                        clone_Box_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6127 */
              // ----------
              ;
              ({ /* cicili#Progn6129 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem init_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6135 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6139 */
        __auto_type match6138  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6138 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6142 */
          bool __h_case_result  = (true  &&  (((match6138 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6143 */
                (unboxed  =  (((match6138 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6148 */
              ({ /* cicili#Let6152 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6154 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6155 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6157 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6162 */
                      ({ /* cicili#Let6165 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let6169 */
                          __auto_type match6168  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match6168 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let6172 */
                            bool __h_case_result  = (true  &&  (((match6168 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6173 */
                                  (unboxed  =  (((match6168 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6178 */
                                ({ /* cicili#Let6182 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6184 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6188 */
                                        BoxedCons___h_StackItem (head , init_BoxedList___h_StackItem (tail ));
                                      }) : ({ /* cicili#Let6194 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6196 */
                                          BoxedNil___h_StackItem ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let6201 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6203 */
                                  BoxedNil___h_StackItem ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6208 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6210 */
                        BoxedNil___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6215 */
              // ----------
              ;
              ({ /* cicili#Progn6217 */
                BoxedNil___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem tail_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return drop_BoxedList___h_StackItem (1, list );
}
BoxedList___h_StackItem drop_BoxedList___h_StackItem (size_t len , BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? clone_Box_BoxedList___h_StackItem (list ) : ({ /* cicili#Let6228 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6232 */
          __auto_type match6231  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6231 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let6235 */
            bool __h_case_result  = (true  &&  (((match6231 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6236 */
                  (unboxed  =  (((match6231 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6241 */
                ({ /* cicili#Let6245 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let6247 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6248 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6253 */
                        drop_BoxedList___h_StackItem ((--len ), tail );
                      }) : ({ /* cicili#Let6258 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6260 */
                          clone_Box_BoxedList___h_StackItem (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6265 */
                // ----------
                ;
                ({ /* cicili#Progn6267 */
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
BoxedList___h_StackItem nthcdr_BoxedList___h_StackItem (size_t index , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6277 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6281 */
        __auto_type match6280  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6280 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6284 */
          bool __h_case_result  = (true  &&  (((match6280 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6285 */
                (unboxed  =  (((match6280 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6290 */
              ({ /* cicili#Let6294 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6296 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6297 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6302 */
                      nthcdr_BoxedList___h_StackItem ((--index ), tail );
                    }) : ({ /* cicili#Let6307 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6309 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6313 */
              // ----------
              ;
              ({ /* cicili#Progn6315 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe___h_StackItem nth_BoxedList___h_StackItem (size_t index , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6321 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6325 */
        __auto_type match6324  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6324 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6328 */
          bool __h_case_result  = (true  &&  (((match6324 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6329 */
                (unboxed  =  (((match6324 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6334 */
              ({ /* cicili#Let6338 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6340 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6341 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6343 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6348 */
                      (((index  ==  0 )) ? Just___h_StackItem (head ) : (((index  <  0 )) ? Nothing___h_StackItem () : nth_BoxedList___h_StackItem ((--index ), tail )));
                    }) : ({ /* cicili#Let6357 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6359 */
                        Nothing___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6364 */
              // ----------
              ;
              ({ /* cicili#Progn6366 */
                Nothing___h_StackItem ();
              });
            }));
        });
      });
    });
}
size_t hasLen_BoxedList___h_StackItem (BoxedList___h_StackItem list , size_t desired ) {
  return ({ /* cicili#Let6372 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6376 */
        __auto_type match6375  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6375 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6379 */
          bool __h_case_result  = (true  &&  (((match6375 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6380 */
                (unboxed  =  (((match6375 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6385 */
              ({ /* cicili#Let6389 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6391 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6392 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6397 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_BoxedList___h_StackItem (tail , (--desired )) ));
                    }) : ({ /* cicili#Let6403 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6405 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6409 */
              // ----------
              ;
              ({ /* cicili#Progn6411 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6416 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6420 */
        __auto_type match6419  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6419 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6423 */
          bool __h_case_result  = (true  &&  (((match6419 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6424 */
                (unboxed  =  (((match6419 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6429 */
              ({ /* cicili#Let6433 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6435 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6436 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6441 */
                      (1 +  len_BoxedList___h_StackItem (tail ) );
                    }) : ({ /* cicili#Let6446 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6448 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6452 */
              // ----------
              ;
              ({ /* cicili#Progn6454 */
                0;
              });
            }));
        });
      });
    });
}
void free_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x * this_ptr ) {
  { /* cicili#Let6458 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let6464 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let6466 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6467 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block6473 */
            { /* cicili#Block6475 */
              free (this );
              free_Box_BoxedList___h_StackItem ((&tail ));
            }
          }
        else
          { /* cicili#Let6483 */
            // ----------
            ;
            ({ /* cicili#Let6485 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block6490 */
                  { /* cicili#Block6492 */
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
  { /* cicili#Let6503 */
    BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList___h_StackItem){ get_BoxedList___h_StackItem__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList___h_StackItem (instance );
  }
}
BoxedList___h_StackItem BoxedNil___h_StackItem () {
  { /* cicili#Let6510 */
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
  { /* cicili#Let6528 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem () {
  { /* cicili#Let6533 */
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
  { /* cicili#Let6551 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem () {
  { /* cicili#Let6556 */
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
  { /* cicili#Let6576 */
    Maybe_BoxedList_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList_BoxedList___h_StackItem_x){ get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_BoxedList___h_StackItem_x Nothing_BoxedList_BoxedList___h_StackItem_x () {
  { /* cicili#Let6581 */
    Maybe_BoxedList_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList_BoxedList___h_StackItem_x){ get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem_x__H_IMPL__ */ 
#ifndef __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__
#define __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__
Box_BoxedList_BoxedList___h_StackItem new_Box_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem_x pointer ) {
  return ({ /* cicili#Let6588 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BoxedList_BoxedList___h_StackItem_x *)malloc (sizeof(BoxedList_BoxedList___h_StackItem_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BoxedList_BoxedList___h_StackItem_x (holder , count , ((size_t)pointer ));
    });
}
Box_BoxedList_BoxedList___h_StackItem clone_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let6597 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let6599 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6600 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6602 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn6604 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6609 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn6612 */
                (++(*count ));
                __h_Hold_BoxedList_BoxedList___h_StackItem_x (pointer , count , address );
              }) : Gone_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let6618 */
            // ----------
            ;
            ({ /* cicili#Progn6620 */
              Gone_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_BoxedList___h_StackItem_x take_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this ) {
  return ({ /* cicili#Let6628 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let6630 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6631 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6633 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn6635 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6640 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let6644 */
                __auto_type result  = Just_BoxedList_BoxedList___h_StackItem_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let6652 */
            // ----------
            ;
            ({ /* cicili#Progn6654 */
              Nothing_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_BoxedList___h_StackItem_x get_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let6662 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let6664 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6665 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6667 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn6669 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6674 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BoxedList_BoxedList___h_StackItem_x ((*pointer )) : Nothing_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let6681 */
            // ----------
            ;
            ({ /* cicili#Progn6683 */
              Nothing_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this ) {
  { /* cicili#Let6692 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let6694 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn6695 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6697 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn6699 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block6705 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block6708 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BoxedList_BoxedList___h_StackItem_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block6716 */
                if ((*count ) ==  1 )
                  { /* cicili#Block6719 */
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
              }        }
      else
        { /* cicili#Let6729 */
          // ----------
          ;
          ({ /* cicili#Let6731 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block6736 */
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
  { /* cicili#Let6747 */
    Box_BoxedList_BoxedList___h_StackItem instance  = ((Box_BoxedList_BoxedList___h_StackItem){ get_Box_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_BoxedList_BoxedList___h_StackItem Gone_BoxedList_BoxedList___h_StackItem_x () {
  { /* cicili#Let6752 */
    Box_BoxedList_BoxedList___h_StackItem instance  = ((Box_BoxedList_BoxedList___h_StackItem){ get_Box_BoxedList_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__ */ 
BoxedList___h_StackItem * toArray_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  BoxedList___h_StackItem * array (BoxedList_BoxedList___h_StackItem list , size_t count ) {
    return ({ /* cicili#Let6759 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6763 */
          __auto_type match6762  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6762 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let6766 */
            bool __h_case_result  = (true  &&  (((match6762 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6767 */
                  (unboxed  =  (((match6762 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6772 */
                ({ /* cicili#Let6776 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let6778 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6779 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6781 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6786 */
                        ({ /* cicili#Let6788 */
                          BoxedList___h_StackItem * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let6792 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6794 */
                          ((BoxedList___h_StackItem *)calloc (count , sizeof(BoxedList___h_StackItem)));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6798 */
                // ----------
                ;
                ({ /* cicili#Progn6800 */
                  ((BoxedList___h_StackItem *)calloc (count , sizeof(BoxedList___h_StackItem)));
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
BoxedList_BoxedList___h_StackItem pure_BoxedList_BoxedList___h_StackItem (const BoxedList___h_StackItem * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? BoxedNil_BoxedList___h_StackItem () : ({ /* cicili#Let6811 */
        BoxedList___h_StackItem item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_BoxedList___h_StackItem () : BoxedCons_BoxedList___h_StackItem (item , pure_BoxedList_BoxedList___h_StackItem ((++buf ), (--len ))));
      }));
}
size_t show_BoxedList_BoxedList___h_StackItem (CFile file , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6820 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6824 */
        __auto_type match6823  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6823 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6827 */
          bool __h_case_result  = (true  &&  (((match6823 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6828 */
                (unboxed  =  (((match6823 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6833 */
              ({ /* cicili#Let6837 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6839 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6840 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6842 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6847 */
                      (({ /* cicili#Let6850 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let6854 */
                            __auto_type match6853  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match6853 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let6857 */
                              bool __h_case_result  = (true  &&  (((match6853 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6858 */
                                    (unboxed  =  (((match6853 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn6863 */
                                  ({ /* cicili#Let6867 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let6869 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn6873 */
                                          (show_BoxedList___h_StackItem (file , head ) +  fprintf (file , "%s", "\n") );
                                        }) : ({ /* cicili#Let6883 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn6885 */
                                            show_BoxedList___h_StackItem (file , head );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let6895 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn6897 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_BoxedList_BoxedList___h_StackItem (file , tail ) );
                    }) : ({ /* cicili#Let6902 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6904 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6908 */
              // ----------
              ;
              ({ /* cicili#Progn6910 */
                0;
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem copy_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6915 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6919 */
        __auto_type match6918  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6918 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6922 */
          bool __h_case_result  = (true  &&  (((match6918 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6923 */
                (unboxed  =  (((match6918 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6928 */
              ({ /* cicili#Let6932 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6934 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6935 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6937 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6942 */
                      BoxedCons_BoxedList___h_StackItem (head , copy_BoxedList_BoxedList___h_StackItem (tail ));
                    }) : ({ /* cicili#Let6948 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6950 */
                        BoxedNil_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6955 */
              // ----------
              ;
              ({ /* cicili#Progn6957 */
                BoxedNil_BoxedList___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem replaceAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , size_t index ) {
  return ({ /* cicili#Let6963 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6967 */
        __auto_type match6966  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6966 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6970 */
          bool __h_case_result  = (true  &&  (((match6966 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6971 */
                (unboxed  =  (((match6966 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6976 */
              ({ /* cicili#Let6980 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6982 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6983 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6985 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6990 */
                      BoxedCons_BoxedList___h_StackItem (head , replaceAt_BoxedList_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let6996 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6998 */
                        ({ /* cicili#Let7001 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let7005 */
                            __auto_type match7004  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match7004 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let7008 */
                              bool __h_case_result  = (true  &&  (((match7004 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7009 */
                                    (unboxed  =  (((match7004 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn7014 */
                                  ({ /* cicili#Let7018 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7020 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7021 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7026 */
                                          BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (taill ));
                                        }) : ({ /* cicili#Let7032 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn7034 */
                                            clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let7039 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn7041 */
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
            }) : ({ /* cicili#Let7046 */
              // ----------
              ;
              ({ /* cicili#Progn7048 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem deleteAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , size_t index ) {
  return ({ /* cicili#Let7054 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7058 */
        __auto_type match7057  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7057 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7061 */
          bool __h_case_result  = (true  &&  (((match7057 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7062 */
                (unboxed  =  (((match7057 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7067 */
              ({ /* cicili#Let7071 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7073 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7074 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7076 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7081 */
                      BoxedCons_BoxedList___h_StackItem (head , deleteAt_BoxedList_BoxedList___h_StackItem (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let7087 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7089 */
                        ({ /* cicili#Let7092 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let7096 */
                            __auto_type match7095  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match7095 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let7099 */
                              bool __h_case_result  = (true  &&  (((match7095 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7100 */
                                    (unboxed  =  (((match7095 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn7105 */
                                  ({ /* cicili#Let7109 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7111 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7112 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7117 */
                                          clone_Box_BoxedList_BoxedList___h_StackItem (taill );
                                        }) : ({ /* cicili#Let7122 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn7124 */
                                            clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let7129 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn7131 */
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
            }) : ({ /* cicili#Let7136 */
              // ----------
              ;
              ({ /* cicili#Progn7138 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem insertAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , size_t index ) {
  return ({ /* cicili#Let7144 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7148 */
        __auto_type match7147  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7147 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7151 */
          bool __h_case_result  = (true  &&  (((match7147 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7152 */
                (unboxed  =  (((match7147 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7157 */
              ({ /* cicili#Let7161 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7163 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7164 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7166 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7171 */
                      BoxedCons_BoxedList___h_StackItem (head , insertAt_BoxedList_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let7177 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7179 */
                        BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7185 */
              // ----------
              ;
              ({ /* cicili#Progn7187 */
                BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (list ));
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem replace_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let7195 */
      __auto_type match7194  = get_Box_BoxedList_BoxedList___h_StackItem (list );
      typeof((((match7194 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let7198 */
        bool __h_case_result  = (true  &&  (((match7194 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7199 */
              (listp  =  (((match7194 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7204 */
            ({ /* cicili#Let7208 */
              __auto_type match7207  = get_Box_BoxedList_BoxedList___h_StackItem (aimed );
              typeof((((match7207 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let7211 */
                bool __h_case_result  = (true  &&  (((match7207 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7212 */
                      (aimedp  =  (((match7207 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn7217 */
                    ({ /* cicili#Let7221 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let7223 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7224 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7226 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7231 */
                            BoxedCons_BoxedList___h_StackItem (head , replace_BoxedList_BoxedList___h_StackItem (tail , item , aimed ));
                          }) : ({ /* cicili#Let7237 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7239 */
                              ({ /* cicili#Let7243 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let7245 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7246 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7251 */
                                      BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (taill ));
                                    }) : ({ /* cicili#Let7257 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7259 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let7264 */
                    // ----------
                    ;
                    ({ /* cicili#Progn7266 */
                      clone_Box_BoxedList_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let7271 */
            // ----------
            ;
            ({ /* cicili#Progn7273 */
              clone_Box_BoxedList_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem delete_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let7280 */
      __auto_type match7279  = get_Box_BoxedList_BoxedList___h_StackItem (list );
      typeof((((match7279 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let7283 */
        bool __h_case_result  = (true  &&  (((match7279 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7284 */
              (listp  =  (((match7279 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7289 */
            ({ /* cicili#Let7293 */
              __auto_type match7292  = get_Box_BoxedList_BoxedList___h_StackItem (aimed );
              typeof((((match7292 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let7296 */
                bool __h_case_result  = (true  &&  (((match7292 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7297 */
                      (aimedp  =  (((match7292 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn7302 */
                    ({ /* cicili#Let7306 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let7308 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7309 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7311 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7316 */
                            BoxedCons_BoxedList___h_StackItem (head , delete_BoxedList_BoxedList___h_StackItem (tail , aimed ));
                          }) : ({ /* cicili#Let7322 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7324 */
                              ({ /* cicili#Let7328 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let7330 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7331 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7336 */
                                      clone_Box_BoxedList_BoxedList___h_StackItem (taill );
                                    }) : ({ /* cicili#Let7341 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn7343 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let7348 */
                    // ----------
                    ;
                    ({ /* cicili#Progn7350 */
                      clone_Box_BoxedList_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let7355 */
            // ----------
            ;
            ({ /* cicili#Progn7357 */
              clone_Box_BoxedList_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem insert_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let7364 */
      __auto_type match7363  = get_Box_BoxedList_BoxedList___h_StackItem (llist );
      typeof((((match7363 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let7367 */
        bool __h_case_result  = (true  &&  (((match7363 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7368 */
              (llistp  =  (((match7363 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7373 */
            ({ /* cicili#Let7377 */
              __auto_type match7376  = get_Box_BoxedList_BoxedList___h_StackItem (rlist );
              typeof((((match7376 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let7380 */
                bool __h_case_result  = (true  &&  (((match7376 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7381 */
                      (rlistp  =  (((match7376 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn7386 */
                    ({ /* cicili#Let7390 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let7392 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7393 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7395 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn7400 */
                            BoxedCons_BoxedList___h_StackItem (head , insert_BoxedList_BoxedList___h_StackItem (tail , item , rlist ));
                          }) : ({ /* cicili#Let7406 */
                            // ----------
                            ;
                            ({ /* cicili#Progn7408 */
                              BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let7414 */
                    // ----------
                    ;
                    ({ /* cicili#Progn7416 */
                      ({ /* cicili#Let7419 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7421 */
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
          }) : ({ /* cicili#Let7428 */
            // ----------
            ;
            ({ /* cicili#Progn7430 */
              BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (rlist ));
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem reverse_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  BoxedList_BoxedList___h_StackItem _reverse (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem rlist ) {
    return ({ /* cicili#Let7438 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let7442 */
          __auto_type match7441  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7441 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7445 */
            bool __h_case_result  = (true  &&  (((match7441 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7446 */
                  (unboxed  =  (((match7441 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn7451 */
                ({ /* cicili#Let7455 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let7457 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7458 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7460 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn7465 */
                        _reverse (tail , BoxedCons_BoxedList___h_StackItem (head , rlist ));
                      }) : ({ /* cicili#Let7470 */
                        // ----------
                        ;
                        ({ /* cicili#Progn7472 */
                          clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7477 */
                // ----------
                ;
                ({ /* cicili#Progn7479 */
                  clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let7483 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7487 */
        __auto_type match7486  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7486 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7490 */
          bool __h_case_result  = (true  &&  (((match7486 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7491 */
                (unboxed  =  (((match7486 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7496 */
              ({ /* cicili#Let7500 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7502 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7503 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7505 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7510 */
                      _reverse (tail , BoxedCons_BoxedList___h_StackItem (head , BoxedNil_BoxedList___h_StackItem ()));
                    }) : ({ /* cicili#Let7516 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7518 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7523 */
              // ----------
              ;
              ({ /* cicili#Progn7525 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem append_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList_BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let7531 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let7535 */
        __auto_type match7534  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7534 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7538 */
          bool __h_case_result  = (true  &&  (((match7534 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7539 */
                (unboxed  =  (((match7534 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7544 */
              ({ /* cicili#Let7548 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7550 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7551 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7553 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7558 */
                      BoxedCons_BoxedList___h_StackItem (head , append_BoxedList_BoxedList___h_StackItem (tail , rlist ));
                    }) : ({ /* cicili#Let7564 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7566 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7571 */
              // ----------
              ;
              ({ /* cicili#Progn7573 */
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
BoxedList_BoxedList___h_StackItem take_BoxedList_BoxedList___h_StackItem (size_t len , BoxedList_BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? BoxedNil_BoxedList___h_StackItem () : ({ /* cicili#Let7585 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let7589 */
          __auto_type match7588  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7588 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7592 */
            bool __h_case_result  = (true  &&  (((match7588 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7593 */
                  (unboxed  =  (((match7588 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn7598 */
                ({ /* cicili#Let7602 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let7604 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7605 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn7607 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn7612 */
                        BoxedCons_BoxedList___h_StackItem (head , take_BoxedList_BoxedList___h_StackItem ((--len ), tail ));
                      }) : ({ /* cicili#Let7618 */
                        // ----------
                        ;
                        ({ /* cicili#Progn7620 */
                          BoxedNil_BoxedList___h_StackItem ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7625 */
                // ----------
                ;
                ({ /* cicili#Progn7627 */
                  BoxedNil_BoxedList___h_StackItem ();
                });
              }));
          });
        });
      }));
}
BoxedList_BoxedList___h_StackItem last_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7633 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7637 */
        __auto_type match7636  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7636 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7640 */
          bool __h_case_result  = (true  &&  (((match7636 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7641 */
                (unboxed  =  (((match7636 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7646 */
              ({ /* cicili#Let7650 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7652 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7653 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7658 */
                      ({ /* cicili#Let7661 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let7665 */
                          __auto_type match7664  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match7664 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let7668 */
                            bool __h_case_result  = (true  &&  (((match7664 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7669 */
                                  (unboxed  =  (((match7664 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn7674 */
                                ({ /* cicili#Let7678 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7680 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn7684 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                      }) : ({ /* cicili#Let7689 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7691 */
                                          last_BoxedList_BoxedList___h_StackItem (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7696 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7698 */
                                  clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7703 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7705 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7710 */
              // ----------
              ;
              ({ /* cicili#Progn7712 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem init_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7718 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7722 */
        __auto_type match7721  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7721 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7725 */
          bool __h_case_result  = (true  &&  (((match7721 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7726 */
                (unboxed  =  (((match7721 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7731 */
              ({ /* cicili#Let7735 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7737 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7738 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7740 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7745 */
                      ({ /* cicili#Let7748 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let7752 */
                          __auto_type match7751  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match7751 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let7755 */
                            bool __h_case_result  = (true  &&  (((match7751 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7756 */
                                  (unboxed  =  (((match7751 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn7761 */
                                ({ /* cicili#Let7765 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7767 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn7771 */
                                        BoxedCons_BoxedList___h_StackItem (head , init_BoxedList_BoxedList___h_StackItem (tail ));
                                      }) : ({ /* cicili#Let7777 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7779 */
                                          BoxedNil_BoxedList___h_StackItem ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7784 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7786 */
                                  BoxedNil_BoxedList___h_StackItem ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7791 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7793 */
                        BoxedNil_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7798 */
              // ----------
              ;
              ({ /* cicili#Progn7800 */
                BoxedNil_BoxedList___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem tail_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return drop_BoxedList_BoxedList___h_StackItem (1, list );
}
BoxedList_BoxedList___h_StackItem drop_BoxedList_BoxedList___h_StackItem (size_t len , BoxedList_BoxedList___h_StackItem list ) {
  return (((len  <=  0 )) ? clone_Box_BoxedList_BoxedList___h_StackItem (list ) : ({ /* cicili#Let7811 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let7815 */
          __auto_type match7814  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7814 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7818 */
            bool __h_case_result  = (true  &&  (((match7814 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7819 */
                  (unboxed  =  (((match7814 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn7824 */
                ({ /* cicili#Let7828 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let7830 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7831 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn7836 */
                        drop_BoxedList_BoxedList___h_StackItem ((--len ), tail );
                      }) : ({ /* cicili#Let7841 */
                        // ----------
                        ;
                        ({ /* cicili#Progn7843 */
                          clone_Box_BoxedList_BoxedList___h_StackItem (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7848 */
                // ----------
                ;
                ({ /* cicili#Progn7850 */
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
BoxedList_BoxedList___h_StackItem nthcdr_BoxedList_BoxedList___h_StackItem (size_t index , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7860 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7864 */
        __auto_type match7863  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7863 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7867 */
          bool __h_case_result  = (true  &&  (((match7863 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7868 */
                (unboxed  =  (((match7863 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7873 */
              ({ /* cicili#Let7877 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7879 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7880 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7885 */
                      nthcdr_BoxedList_BoxedList___h_StackItem ((--index ), tail );
                    }) : ({ /* cicili#Let7890 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7892 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7896 */
              // ----------
              ;
              ({ /* cicili#Progn7898 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_BoxedList___h_StackItem nth_BoxedList_BoxedList___h_StackItem (size_t index , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7904 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7908 */
        __auto_type match7907  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7907 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7911 */
          bool __h_case_result  = (true  &&  (((match7907 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7912 */
                (unboxed  =  (((match7907 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7917 */
              ({ /* cicili#Let7921 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7923 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7924 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7926 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7931 */
                      (((index  ==  0 )) ? Just_BoxedList___h_StackItem (head ) : (((index  <  0 )) ? Nothing_BoxedList___h_StackItem () : nth_BoxedList_BoxedList___h_StackItem ((--index ), tail )));
                    }) : ({ /* cicili#Let7940 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7942 */
                        Nothing_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7947 */
              // ----------
              ;
              ({ /* cicili#Progn7949 */
                Nothing_BoxedList___h_StackItem ();
              });
            }));
        });
      });
    });
}
size_t hasLen_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , size_t desired ) {
  return ({ /* cicili#Let7955 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7959 */
        __auto_type match7958  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7958 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7962 */
          bool __h_case_result  = (true  &&  (((match7958 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7963 */
                (unboxed  =  (((match7958 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7968 */
              ({ /* cicili#Let7972 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7974 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7975 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7980 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_BoxedList_BoxedList___h_StackItem (tail , (--desired )) ));
                    }) : ({ /* cicili#Let7986 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7988 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7992 */
              // ----------
              ;
              ({ /* cicili#Progn7994 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7999 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let8003 */
        __auto_type match8002  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match8002 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let8006 */
          bool __h_case_result  = (true  &&  (((match8002 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8007 */
                (unboxed  =  (((match8002 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8012 */
              ({ /* cicili#Let8016 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let8018 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8019 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8024 */
                      (1 +  len_BoxedList_BoxedList___h_StackItem (tail ) );
                    }) : ({ /* cicili#Let8029 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8031 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8035 */
              // ----------
              ;
              ({ /* cicili#Progn8037 */
                0;
              });
            }));
        });
      });
    });
}
void free_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x * this_ptr ) {
  { /* cicili#Let8041 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let8047 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8049 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8050 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8056 */
            { /* cicili#Block8058 */
              free (this );
              free_Box_BoxedList_BoxedList___h_StackItem ((&tail ));
            }
          }
        else
          { /* cicili#Let8066 */
            // ----------
            ;
            ({ /* cicili#Let8068 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8073 */
                  { /* cicili#Block8075 */
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
  { /* cicili#Let8086 */
    BoxedList_BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList_BoxedList___h_StackItem){ get_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList_BoxedList___h_StackItem (instance );
  }
}
BoxedList_BoxedList___h_StackItem BoxedNil_BoxedList___h_StackItem () {
  { /* cicili#Let8093 */
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
  { /* cicili#Let8111 */
    Maybe_BoxedList_BoxedList___h_StackItem instance  = ((Maybe_BoxedList_BoxedList___h_StackItem){ get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_BoxedList___h_StackItem Nothing_BoxedList_BoxedList___h_StackItem () {
  { /* cicili#Let8116 */
    Maybe_BoxedList_BoxedList___h_StackItem instance  = ((Maybe_BoxedList_BoxedList___h_StackItem){ get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem__H_IMPL__ */ 
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
int show_Bool (CFile file , Bool value ) {
  return ({ /* cicili#Let8125 */
      // ----------
      ;
      ({ /* cicili#Let8127 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor ) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8131 */
            fprintf (file , "%s", "False");
          }) : ({ /* cicili#Let8135 */
            // ----------
            ;
            ({ /* cicili#Progn8137 */
              fprintf (file , "%s", "True");
            });
          }));
      });
    });
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let8143 */
      // ----------
      ;
      ({ /* cicili#Let8145 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor ) ==  __h_True_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8149 */
            True ();
          }) : ({ /* cicili#Let8153 */
            // ----------
            ;
            ({ /* cicili#Progn8155 */
              ({ /* cicili#Let8159 */
                // ----------
                ;
                ({ /* cicili#Let8161 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor ) ==  __h_True_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8165 */
                      True ();
                    }) : ({ /* cicili#Let8169 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8171 */
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
  return ({ /* cicili#Let8177 */
      // ----------
      ;
      ({ /* cicili#Let8179 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor ) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8183 */
            False ();
          }) : ({ /* cicili#Let8187 */
            // ----------
            ;
            ({ /* cicili#Progn8189 */
              ({ /* cicili#Let8193 */
                // ----------
                ;
                ({ /* cicili#Let8195 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor ) ==  __h_False_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8199 */
                      False ();
                    }) : ({ /* cicili#Let8203 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8205 */
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
  { /* cicili#Let8215 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_True_t });
    // ----------
    return instance ;
  }
}
Bool False () {
  { /* cicili#Let8219 */
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
  { /* cicili#Let8232 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
    // ----------
    return instance ;
  }
}
Ordering EQ () {
  { /* cicili#Let8236 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
    // ----------
    return instance ;
  }
}
Ordering GT () {
  { /* cicili#Let8240 */
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
  { /* cicili#Let8256 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CStr Nothing_CStr () {
  { /* cicili#Let8261 */
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
  { /* cicili#Let8277 */
    Maybe_CFile instance  = ((Maybe_CFile){ get_Maybe_CFile__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CFile Nothing_CFile () {
  { /* cicili#Let8282 */
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
  { /* cicili#Let8300 */
    Maybe_Bool instance  = ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Bool Nothing_Bool () {
  { /* cicili#Let8305 */
    Maybe_Bool instance  = ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Bool__H_IMPL__ */ 
#ifndef __List_Bool__H_IMPL__
#define __List_Bool__H_IMPL__
Bool * toArray_List_Bool (List_Bool list ) {
  Bool * array (List_Bool list , size_t count ) {
    return ({ /* cicili#Let8315 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8317 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8318 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8320 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8325 */
              ({ /* cicili#Let8327 */
                Bool * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let8331 */
              // ----------
              ;
              ({ /* cicili#Progn8333 */
                ((Bool *)calloc (count , sizeof(Bool)));
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
List_Bool pure_List_Bool (const Bool * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_Bool () : ({ /* cicili#Let8344 */
        Bool item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Bool () : Cons_Bool (item , pure_List_Bool ((++buf ), (--len ))));
      }));
}
size_t show_List_Bool (CFile file , List_Bool list ) {
  return ({ /* cicili#Let8354 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8356 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8357 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8359 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8364 */
            (({ /* cicili#Let8368 */
                // ----------
                ;
                ({ /* cicili#Let8370 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8374 */
                      (show_Bool (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let8384 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8386 */
                        show_Bool (file , head );
                      });
                    }));
                });
              }) +  show_List_Bool (file , tail ) );
          }) : ({ /* cicili#Let8397 */
            // ----------
            ;
            ({ /* cicili#Progn8399 */
              0;
            });
          }));
      });
    });
}
List_Bool copy_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8405 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8407 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8408 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8410 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8415 */
            Cons_Bool (head , copy_List_Bool (tail ));
          }) : ({ /* cicili#Let8421 */
            // ----------
            ;
            ({ /* cicili#Progn8423 */
              Nil_Bool ();
            });
          }));
      });
    });
}
List_Bool replaceAt_List_Bool (List_Bool list , Bool item , size_t index ) {
  return ({ /* cicili#Let8430 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8432 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8433 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8435 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8440 */
            Cons_Bool (head , replaceAt_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let8446 */
            // ----------
            ;
            ({ /* cicili#Progn8448 */
              ({ /* cicili#Let8452 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8454 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8455 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8460 */
                      Cons_Bool (item , copy_List_Bool (taill ));
                    }) : ({ /* cicili#Let8466 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8468 */
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
List_Bool deleteAt_List_Bool (List_Bool list , size_t index ) {
  return ({ /* cicili#Let8475 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8477 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8478 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8480 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8485 */
            Cons_Bool (head , deleteAt_List_Bool (tail , (index  -  1 )));
          }) : ({ /* cicili#Let8491 */
            // ----------
            ;
            ({ /* cicili#Progn8493 */
              ({ /* cicili#Let8497 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8499 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8500 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8505 */
                      copy_List_Bool (taill );
                    }) : ({ /* cicili#Let8510 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8512 */
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
List_Bool insertAt_List_Bool (List_Bool list , Bool item , size_t index ) {
  return ({ /* cicili#Let8519 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8521 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8522 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8524 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8529 */
            Cons_Bool (head , insertAt_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let8535 */
            // ----------
            ;
            ({ /* cicili#Progn8537 */
              Cons_Bool (item , copy_List_Bool (list ));
            });
          }));
      });
    });
}
List_Bool replace_List_Bool (List_Bool list , Bool item , List_Bool aimed ) {
  return ({ /* cicili#Let8545 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8547 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8548 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8550 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8555 */
            Cons_Bool (head , replace_List_Bool (tail , item , aimed ));
          }) : ({ /* cicili#Let8561 */
            // ----------
            ;
            ({ /* cicili#Progn8563 */
              ({ /* cicili#Let8567 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8569 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8570 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8575 */
                      Cons_Bool (item , copy_List_Bool (taill ));
                    }) : ({ /* cicili#Let8581 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8583 */
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
  return ({ /* cicili#Let8590 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8592 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8593 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8595 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8600 */
            Cons_Bool (head , delete_List_Bool (tail , aimed ));
          }) : ({ /* cicili#Let8606 */
            // ----------
            ;
            ({ /* cicili#Progn8608 */
              ({ /* cicili#Let8612 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8614 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8615 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8620 */
                      copy_List_Bool (taill );
                    }) : ({ /* cicili#Let8625 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8627 */
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
  return ({ /* cicili#Let8634 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8636 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8637 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8639 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8644 */
            Cons_Bool (head , insert_List_Bool (tail , item , rlist ));
          }) : ({ /* cicili#Let8650 */
            // ----------
            ;
            ({ /* cicili#Progn8652 */
              Cons_Bool (item , copy_List_Bool (rlist ));
            });
          }));
      });
    });
}
List_Bool reverse_List_Bool (List_Bool list ) {
  List_Bool _reverse (List_Bool list , List_Bool rlist ) {
    return ({ /* cicili#Let8661 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8663 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8664 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8666 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8671 */
              _reverse (tail , Cons_Bool (head , rlist ));
            }) : ({ /* cicili#Let8676 */
              // ----------
              ;
              ({ /* cicili#Progn8678 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8682 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8684 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8685 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8687 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8692 */
            _reverse (tail , Cons_Bool (head , Nil_Bool ()));
          }) : ({ /* cicili#Let8698 */
            // ----------
            ;
            ({ /* cicili#Progn8700 */
              list ;
            });
          }));
      });
    });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let8706 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8708 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8709 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8711 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8716 */
            Cons_Bool (head , append_List_Bool (tail , rlist ));
          }) : ({ /* cicili#Let8722 */
            // ----------
            ;
            ({ /* cicili#Progn8724 */
              copy_List_Bool (rlist );
            });
          }));
      });
    });
}
List_Bool push_List_Bool (Bool item , List_Bool list ) {
  return Cons_Bool (item , copy_List_Bool (list ));
}
List_Bool take_List_Bool (size_t len , List_Bool list ) {
  return (((len  <=  0 )) ? Nil_Bool () : ({ /* cicili#Let8737 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8739 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8740 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8742 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8747 */
              Cons_Bool (head , take_List_Bool ((--len ), tail ));
            }) : ({ /* cicili#Let8753 */
              // ----------
              ;
              ({ /* cicili#Progn8755 */
                Nil_Bool ();
              });
            }));
        });
      }));
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8762 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8764 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8765 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8770 */
            ({ /* cicili#Let8774 */
              // ----------
              ;
              ({ /* cicili#Let8776 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8780 */
                    copy_List_Bool (list );
                  }) : ({ /* cicili#Let8785 */
                    // ----------
                    ;
                    ({ /* cicili#Progn8787 */
                      last_List_Bool (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8792 */
            // ----------
            ;
            ({ /* cicili#Progn8794 */
              Nil_Bool ();
            });
          }));
      });
    });
}
List_Bool init_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8802 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8804 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8805 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8807 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8812 */
            Cons_Bool (head , init_List_Bool (tail ));
          }) : ({ /* cicili#Let8818 */
            // ----------
            ;
            ({ /* cicili#Progn8820 */
              Nil_Bool ();
            });
          }));
      });
    });
}
size_t hasLen_List_Bool (List_Bool list , size_t desired ) {
  return ({ /* cicili#Let8827 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8829 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8830 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8835 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Bool (tail , (--desired )) ));
          }) : ({ /* cicili#Let8841 */
            // ----------
            ;
            ({ /* cicili#Progn8843 */
              0;
            });
          }));
      });
    });
}
size_t len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8849 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8851 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8852 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8857 */
            (1 +  len_List_Bool (tail ) );
          }) : ({ /* cicili#Let8862 */
            // ----------
            ;
            ({ /* cicili#Progn8864 */
              0;
            });
          }));
      });
    });
}
List_Bool tail_List_Bool (List_Bool list ) {
  return drop_List_Bool (1, list );
}
List_Bool drop_List_Bool (size_t len , List_Bool list ) {
  return (((len  <=  0 )) ? copy_List_Bool (list ) : ({ /* cicili#Let8875 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8877 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8878 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8883 */
              drop_List_Bool ((--len ), tail );
            }) : ({ /* cicili#Let8888 */
              // ----------
              ;
              ({ /* cicili#Progn8890 */
                Nil_Bool ();
              });
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8898 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let8900 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8901 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8906 */
            Just_Bool (head );
          }) : ({ /* cicili#Let8911 */
            // ----------
            ;
            ({ /* cicili#Progn8913 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
List_Bool nthcdr_List_Bool (size_t index , List_Bool list ) {
  return ({ /* cicili#Let8920 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8922 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8923 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8928 */
            nthcdr_List_Bool ((--index ), tail );
          }) : ({ /* cicili#Let8933 */
            // ----------
            ;
            ({ /* cicili#Progn8935 */
              list ;
            });
          }));
      });
    });
}
Maybe_Bool nth_List_Bool (size_t index , List_Bool list ) {
  return ({ /* cicili#Let8942 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8944 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8945 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8947 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8952 */
            (((index  ==  0 )) ? Just_Bool (head ) : (((index  <  0 )) ? Nothing_Bool () : nth_List_Bool ((--index ), tail )));
          }) : ({ /* cicili#Let8961 */
            // ----------
            ;
            ({ /* cicili#Progn8963 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let8968 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let8972 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8974 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8975 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8981 */
            { /* cicili#Block8983 */
              free (this );
              free_List_Bool ((&tail ));
            }
          }
        else
          { /* cicili#Let8991 */
            // ----------
            ;
            ({ /* cicili#Let8993 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8998 */
                  { /* cicili#Block9000 */
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
  { /* cicili#Let9011 */
    List_Bool instance  = malloc (sizeof(class_List_Bool));
    // ----------
    (*instance ) = ((class_List_Bool){ get_List_Bool__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Bool Nil_Bool () {
  { /* cicili#Let9017 */
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
  { /* cicili#Let9034 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let9039 */
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
  { /* cicili#Let9057 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* cicili#Let9062 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
int * toArray_List_int (List_int list ) {
  int * array (List_int list , size_t count ) {
    return ({ /* cicili#Let9072 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9074 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9075 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9077 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9082 */
              ({ /* cicili#Let9084 */
                int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let9088 */
              // ----------
              ;
              ({ /* cicili#Progn9090 */
                ((int *)calloc (count , sizeof(int)));
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
List_int pure_List_int (const int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_int () : ({ /* cicili#Let9101 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int () : Cons_int (item , pure_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_int (CFile file , List_int list ) {
  return ({ /* cicili#Let9111 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9113 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9114 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9116 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9121 */
            (({ /* cicili#Let9125 */
                // ----------
                ;
                ({ /* cicili#Let9127 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9131 */
                      (fprintf (file , "%d", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let9140 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9142 */
                        fprintf (file , "%d", head );
                      });
                    }));
                });
              }) +  show_List_int (file , tail ) );
          }) : ({ /* cicili#Let9152 */
            // ----------
            ;
            ({ /* cicili#Progn9154 */
              0;
            });
          }));
      });
    });
}
List_int copy_List_int (List_int list ) {
  return ({ /* cicili#Let9160 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9162 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9163 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9165 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9170 */
            Cons_int (head , copy_List_int (tail ));
          }) : ({ /* cicili#Let9176 */
            // ----------
            ;
            ({ /* cicili#Progn9178 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int replaceAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* cicili#Let9185 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9187 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9188 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9190 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9195 */
            Cons_int (head , replaceAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let9201 */
            // ----------
            ;
            ({ /* cicili#Progn9203 */
              ({ /* cicili#Let9207 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9209 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9210 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9215 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* cicili#Let9221 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9223 */
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
List_int deleteAt_List_int (List_int list , size_t index ) {
  return ({ /* cicili#Let9230 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9232 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9233 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9235 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9240 */
            Cons_int (head , deleteAt_List_int (tail , (index  -  1 )));
          }) : ({ /* cicili#Let9246 */
            // ----------
            ;
            ({ /* cicili#Progn9248 */
              ({ /* cicili#Let9252 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9254 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9255 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9260 */
                      copy_List_int (taill );
                    }) : ({ /* cicili#Let9265 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9267 */
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
List_int insertAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* cicili#Let9274 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9276 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9277 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9279 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9284 */
            Cons_int (head , insertAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let9290 */
            // ----------
            ;
            ({ /* cicili#Progn9292 */
              Cons_int (item , copy_List_int (list ));
            });
          }));
      });
    });
}
List_int replace_List_int (List_int list , int item , List_int aimed ) {
  return ({ /* cicili#Let9300 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9302 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9303 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9305 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9310 */
            Cons_int (head , replace_List_int (tail , item , aimed ));
          }) : ({ /* cicili#Let9316 */
            // ----------
            ;
            ({ /* cicili#Progn9318 */
              ({ /* cicili#Let9322 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9324 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9325 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9330 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* cicili#Let9336 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9338 */
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
  return ({ /* cicili#Let9345 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9347 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9348 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9350 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9355 */
            Cons_int (head , delete_List_int (tail , aimed ));
          }) : ({ /* cicili#Let9361 */
            // ----------
            ;
            ({ /* cicili#Progn9363 */
              ({ /* cicili#Let9367 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9369 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9370 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9375 */
                      copy_List_int (taill );
                    }) : ({ /* cicili#Let9380 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9382 */
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
  return ({ /* cicili#Let9389 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9391 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9392 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9394 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9399 */
            Cons_int (head , insert_List_int (tail , item , rlist ));
          }) : ({ /* cicili#Let9405 */
            // ----------
            ;
            ({ /* cicili#Progn9407 */
              Cons_int (item , copy_List_int (rlist ));
            });
          }));
      });
    });
}
List_int reverse_List_int (List_int list ) {
  List_int _reverse (List_int list , List_int rlist ) {
    return ({ /* cicili#Let9416 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9418 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9419 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9421 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9426 */
              _reverse (tail , Cons_int (head , rlist ));
            }) : ({ /* cicili#Let9431 */
              // ----------
              ;
              ({ /* cicili#Progn9433 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9437 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9439 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9440 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9442 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9447 */
            _reverse (tail , Cons_int (head , Nil_int ()));
          }) : ({ /* cicili#Let9453 */
            // ----------
            ;
            ({ /* cicili#Progn9455 */
              list ;
            });
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let9461 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9463 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9464 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9466 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9471 */
            Cons_int (head , append_List_int (tail , rlist ));
          }) : ({ /* cicili#Let9477 */
            // ----------
            ;
            ({ /* cicili#Progn9479 */
              copy_List_int (rlist );
            });
          }));
      });
    });
}
List_int push_List_int (int item , List_int list ) {
  return Cons_int (item , copy_List_int (list ));
}
List_int take_List_int (size_t len , List_int list ) {
  return (((len  <=  0 )) ? Nil_int () : ({ /* cicili#Let9492 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9494 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9495 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9497 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9502 */
              Cons_int (head , take_List_int ((--len ), tail ));
            }) : ({ /* cicili#Let9508 */
              // ----------
              ;
              ({ /* cicili#Progn9510 */
                Nil_int ();
              });
            }));
        });
      }));
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let9517 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9519 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9520 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9525 */
            ({ /* cicili#Let9529 */
              // ----------
              ;
              ({ /* cicili#Let9531 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn9535 */
                    copy_List_int (list );
                  }) : ({ /* cicili#Let9540 */
                    // ----------
                    ;
                    ({ /* cicili#Progn9542 */
                      last_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let9547 */
            // ----------
            ;
            ({ /* cicili#Progn9549 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int init_List_int (List_int list ) {
  return ({ /* cicili#Let9557 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9559 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9560 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9562 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9567 */
            Cons_int (head , init_List_int (tail ));
          }) : ({ /* cicili#Let9573 */
            // ----------
            ;
            ({ /* cicili#Progn9575 */
              Nil_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_int (List_int list , size_t desired ) {
  return ({ /* cicili#Let9582 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9584 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9585 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9590 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int (tail , (--desired )) ));
          }) : ({ /* cicili#Let9596 */
            // ----------
            ;
            ({ /* cicili#Progn9598 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int (List_int list ) {
  return ({ /* cicili#Let9604 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9606 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9607 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9612 */
            (1 +  len_List_int (tail ) );
          }) : ({ /* cicili#Let9617 */
            // ----------
            ;
            ({ /* cicili#Progn9619 */
              0;
            });
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return drop_List_int (1, list );
}
List_int drop_List_int (size_t len , List_int list ) {
  return (((len  <=  0 )) ? copy_List_int (list ) : ({ /* cicili#Let9630 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9632 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9633 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9638 */
              drop_List_int ((--len ), tail );
            }) : ({ /* cicili#Let9643 */
              // ----------
              ;
              ({ /* cicili#Progn9645 */
                Nil_int ();
              });
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return ({ /* cicili#Let9653 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let9655 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9656 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9661 */
            Just_int (head );
          }) : ({ /* cicili#Let9666 */
            // ----------
            ;
            ({ /* cicili#Progn9668 */
              Nothing_int ();
            });
          }));
      });
    });
}
List_int nthcdr_List_int (size_t index , List_int list ) {
  return ({ /* cicili#Let9675 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9677 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9678 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9683 */
            nthcdr_List_int ((--index ), tail );
          }) : ({ /* cicili#Let9688 */
            // ----------
            ;
            ({ /* cicili#Progn9690 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_List_int (size_t index , List_int list ) {
  return ({ /* cicili#Let9697 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9699 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9700 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9702 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9707 */
            (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_List_int ((--index ), tail )));
          }) : ({ /* cicili#Let9716 */
            // ----------
            ;
            ({ /* cicili#Progn9718 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let9723 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let9727 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9729 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9730 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block9736 */
            { /* cicili#Block9738 */
              free (this );
              free_List_int ((&tail ));
            }
          }
        else
          { /* cicili#Let9746 */
            // ----------
            ;
            ({ /* cicili#Let9748 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9753 */
                  { /* cicili#Block9755 */
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
  { /* cicili#Let9766 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int Nil_int () {
  { /* cicili#Let9772 */
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
  { /* cicili#Let9789 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let9794 */
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
  { /* cicili#Let9814 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let9819 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __List_char__H_IMPL__
#define __List_char__H_IMPL__
char * toArray_List_char (List_char list ) {
  char * array (List_char list , size_t count ) {
    return ({ /* cicili#Let9829 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9831 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9832 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9834 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9839 */
              ({ /* cicili#Let9841 */
                char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let9845 */
              // ----------
              ;
              ({ /* cicili#Progn9847 */
                ((char *)calloc (count , sizeof(char)));
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
List_char pure_List_char (const char * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_char () : ({ /* cicili#Let9858 */
        char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_char () : Cons_char (item , pure_List_char ((++buf ), (--len ))));
      }));
}
size_t show_List_char (CFile file , List_char list ) {
  return ({ /* cicili#Let9868 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9870 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9871 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9873 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9878 */
            (({ /* cicili#Let9882 */
                // ----------
                ;
                ({ /* cicili#Let9884 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9888 */
                      (fprintf (file , "%c", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let9897 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9899 */
                        fprintf (file , "%c", head );
                      });
                    }));
                });
              }) +  show_List_char (file , tail ) );
          }) : ({ /* cicili#Let9909 */
            // ----------
            ;
            ({ /* cicili#Progn9911 */
              0;
            });
          }));
      });
    });
}
List_char copy_List_char (List_char list ) {
  return ({ /* cicili#Let9917 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9919 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9920 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9922 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9927 */
            Cons_char (head , copy_List_char (tail ));
          }) : ({ /* cicili#Let9933 */
            // ----------
            ;
            ({ /* cicili#Progn9935 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char replaceAt_List_char (List_char list , char item , size_t index ) {
  return ({ /* cicili#Let9942 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9944 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9945 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9947 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9952 */
            Cons_char (head , replaceAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let9958 */
            // ----------
            ;
            ({ /* cicili#Progn9960 */
              ({ /* cicili#Let9964 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9966 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9967 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9972 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* cicili#Let9978 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9980 */
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
List_char deleteAt_List_char (List_char list , size_t index ) {
  return ({ /* cicili#Let9987 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9989 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9990 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9992 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9997 */
            Cons_char (head , deleteAt_List_char (tail , (index  -  1 )));
          }) : ({ /* cicili#Let10003 */
            // ----------
            ;
            ({ /* cicili#Progn10005 */
              ({ /* cicili#Let10009 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let10011 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10012 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10017 */
                      copy_List_char (taill );
                    }) : ({ /* cicili#Let10022 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10024 */
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
List_char insertAt_List_char (List_char list , char item , size_t index ) {
  return ({ /* cicili#Let10031 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10033 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10034 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10036 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10041 */
            Cons_char (head , insertAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let10047 */
            // ----------
            ;
            ({ /* cicili#Progn10049 */
              Cons_char (item , copy_List_char (list ));
            });
          }));
      });
    });
}
List_char replace_List_char (List_char list , char item , List_char aimed ) {
  return ({ /* cicili#Let10057 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10059 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10060 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10062 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10067 */
            Cons_char (head , replace_List_char (tail , item , aimed ));
          }) : ({ /* cicili#Let10073 */
            // ----------
            ;
            ({ /* cicili#Progn10075 */
              ({ /* cicili#Let10079 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let10081 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10082 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10087 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* cicili#Let10093 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10095 */
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
  return ({ /* cicili#Let10102 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10104 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10105 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10107 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10112 */
            Cons_char (head , delete_List_char (tail , aimed ));
          }) : ({ /* cicili#Let10118 */
            // ----------
            ;
            ({ /* cicili#Progn10120 */
              ({ /* cicili#Let10124 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let10126 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10127 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10132 */
                      copy_List_char (taill );
                    }) : ({ /* cicili#Let10137 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10139 */
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
  return ({ /* cicili#Let10146 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10148 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10149 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10151 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10156 */
            Cons_char (head , insert_List_char (tail , item , rlist ));
          }) : ({ /* cicili#Let10162 */
            // ----------
            ;
            ({ /* cicili#Progn10164 */
              Cons_char (item , copy_List_char (rlist ));
            });
          }));
      });
    });
}
List_char reverse_List_char (List_char list ) {
  List_char _reverse (List_char list , List_char rlist ) {
    return ({ /* cicili#Let10173 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10175 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10176 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10178 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10183 */
              _reverse (tail , Cons_char (head , rlist ));
            }) : ({ /* cicili#Let10188 */
              // ----------
              ;
              ({ /* cicili#Progn10190 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10194 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10196 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10197 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10199 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10204 */
            _reverse (tail , Cons_char (head , Nil_char ()));
          }) : ({ /* cicili#Let10210 */
            // ----------
            ;
            ({ /* cicili#Progn10212 */
              list ;
            });
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let10218 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10220 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10221 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10223 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10228 */
            Cons_char (head , append_List_char (tail , rlist ));
          }) : ({ /* cicili#Let10234 */
            // ----------
            ;
            ({ /* cicili#Progn10236 */
              copy_List_char (rlist );
            });
          }));
      });
    });
}
List_char push_List_char (char item , List_char list ) {
  return Cons_char (item , copy_List_char (list ));
}
List_char take_List_char (size_t len , List_char list ) {
  return (((len  <=  0 )) ? Nil_char () : ({ /* cicili#Let10249 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10251 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10252 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10254 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10259 */
              Cons_char (head , take_List_char ((--len ), tail ));
            }) : ({ /* cicili#Let10265 */
              // ----------
              ;
              ({ /* cicili#Progn10267 */
                Nil_char ();
              });
            }));
        });
      }));
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let10274 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10276 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10277 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10282 */
            ({ /* cicili#Let10286 */
              // ----------
              ;
              ({ /* cicili#Let10288 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10292 */
                    copy_List_char (list );
                  }) : ({ /* cicili#Let10297 */
                    // ----------
                    ;
                    ({ /* cicili#Progn10299 */
                      last_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10304 */
            // ----------
            ;
            ({ /* cicili#Progn10306 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char init_List_char (List_char list ) {
  return ({ /* cicili#Let10314 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10316 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10317 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10319 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10324 */
            Cons_char (head , init_List_char (tail ));
          }) : ({ /* cicili#Let10330 */
            // ----------
            ;
            ({ /* cicili#Progn10332 */
              Nil_char ();
            });
          }));
      });
    });
}
size_t hasLen_List_char (List_char list , size_t desired ) {
  return ({ /* cicili#Let10339 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10341 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10342 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10347 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_char (tail , (--desired )) ));
          }) : ({ /* cicili#Let10353 */
            // ----------
            ;
            ({ /* cicili#Progn10355 */
              0;
            });
          }));
      });
    });
}
size_t len_List_char (List_char list ) {
  return ({ /* cicili#Let10361 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10363 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10364 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10369 */
            (1 +  len_List_char (tail ) );
          }) : ({ /* cicili#Let10374 */
            // ----------
            ;
            ({ /* cicili#Progn10376 */
              0;
            });
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return drop_List_char (1, list );
}
List_char drop_List_char (size_t len , List_char list ) {
  return (((len  <=  0 )) ? copy_List_char (list ) : ({ /* cicili#Let10387 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10389 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10390 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10395 */
              drop_List_char ((--len ), tail );
            }) : ({ /* cicili#Let10400 */
              // ----------
              ;
              ({ /* cicili#Progn10402 */
                Nil_char ();
              });
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return ({ /* cicili#Let10410 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let10412 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10413 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10418 */
            Just_char (head );
          }) : ({ /* cicili#Let10423 */
            // ----------
            ;
            ({ /* cicili#Progn10425 */
              Nothing_char ();
            });
          }));
      });
    });
}
List_char nthcdr_List_char (size_t index , List_char list ) {
  return ({ /* cicili#Let10432 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10434 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10435 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10440 */
            nthcdr_List_char ((--index ), tail );
          }) : ({ /* cicili#Let10445 */
            // ----------
            ;
            ({ /* cicili#Progn10447 */
              list ;
            });
          }));
      });
    });
}
Maybe_char nth_List_char (size_t index , List_char list ) {
  return ({ /* cicili#Let10454 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10456 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10457 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10459 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10464 */
            (((index  ==  0 )) ? Just_char (head ) : (((index  <  0 )) ? Nothing_char () : nth_List_char ((--index ), tail )));
          }) : ({ /* cicili#Let10473 */
            // ----------
            ;
            ({ /* cicili#Progn10475 */
              Nothing_char ();
            });
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let10480 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let10484 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10486 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10487 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block10493 */
            { /* cicili#Block10495 */
              free (this );
              free_List_char ((&tail ));
            }
          }
        else
          { /* cicili#Let10503 */
            // ----------
            ;
            ({ /* cicili#Let10505 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10510 */
                  { /* cicili#Block10512 */
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
  { /* cicili#Let10523 */
    List_char instance  = malloc (sizeof(class_List_char));
    // ----------
    (*instance ) = ((class_List_char){ get_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_char Nil_char () {
  { /* cicili#Let10529 */
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
  { /* cicili#Let10546 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let10551 */
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
    { /* cicili#Let10560 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nil_char ();
      else
        return Cons_char (item , new_List_char_Const ((++buf )));
    }
}
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
void free_Maybe_char (Maybe_char * this ) {
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Just_char (char value ) {
  { /* cicili#Let10582 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let10587 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_char__H_IMPL__ */ 
bool null_terminated_StringBuffer_char  = true ;
bool is_constant_StringBuffer_char  = true ;
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char clear_StringBuffer_char (StringBuffer_char sb ) {
  return FreedStringBuffer_char ();
}
StringBuffer_char resize_StringBuffer_char (StringBuffer_char sb , size_t len ) {
  return FreedStringBuffer_char ();
}
StringBuffer_char new_StringBuffer_char (size_t step ) {
  return newCapacity_StringBuffer_char (step , step );
}
StringBuffer_char newCapacity_StringBuffer_char (size_t capacity , size_t step ) {
  return FreedStringBuffer_char ();
}
StringBuffer_char copySlice_StringBuffer_char (StringBuffer_char sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let10619 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      // ----------
      ;
      ({ /* cicili#Let10621 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn10622 */
                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10624 */
                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10629 */
            MakeStringBuffer_char (((((pos  +  len  ) <=  cursor  )) ? (buffer  +  pos  ) : (((pos  <=  cursor  )) ? (buffer  +  pos  ) : (buffer  +  cursor  ))), ((((pos  +  len  ) <=  cursor  )) ? len  : (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)), ((((pos  +  len  ) <=  cursor  )) ? len  : (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)), 0);
          }) : ({ /* cicili#Let10640 */
            // ----------
            ;
            ({ /* cicili#Progn10642 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
StringBuffer_char copy_StringBuffer_char (StringBuffer_char sb ) {
  return ({ /* cicili#Let10651 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      // ----------
      ;
      ({ /* cicili#Let10653 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn10654 */
                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10656 */
                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10661 */
            MakeStringBuffer_char (buffer , cursor , cursor , 0);
          }) : ({ /* cicili#Let10666 */
            // ----------
            ;
            ({ /* cicili#Progn10668 */
              FreedStringBuffer_char ();
            });
          }));
      });
    });
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , const char data ) {
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , const char * data , size_t len ) {
  return FreedStringBuffer_char ();
}
void free_StringBuffer_char (StringBuffer_char * this ) {
}
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table () {
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , clear_StringBuffer_char , resize_StringBuffer_char , new_StringBuffer_char , newCapacity_StringBuffer_char , copySlice_StringBuffer_char , copy_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (const char * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let10691 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let10696 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_char__H_IMPL__ */ 
bool null_terminated_Str  = true ;
bool is_constant_Str  = true ;
#ifndef __Str__H_IMPL__
#define __Str__H_IMPL__
#ifndef __Maybe_Str_x__H_IMPL__
#define __Maybe_Str_x__H_IMPL__
void free_Maybe_Str_x (Maybe_Str_x * this ) {
}
const Maybe_Str_x__H_Table * const get_Maybe_Str_x__H_Table () {
  static const Maybe_Str_x__H_Table table  = { free_Maybe_Str_x };
  return (&table );
}
Maybe_Str_x Just_Str_x (Str_x value ) {
  { /* cicili#Let10719 */
    Maybe_Str_x instance  = ((Maybe_Str_x){ get_Maybe_Str_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Str_x Nothing_Str_x () {
  { /* cicili#Let10724 */
    Maybe_Str_x instance  = ((Maybe_Str_x){ get_Maybe_Str_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Str_x__H_IMPL__ */ 
#ifndef __Box_Str__H_IMPL__
#define __Box_Str__H_IMPL__
Box_Str new_Box_Str (Str_x pointer ) {
  return ({ /* cicili#Let10731 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((Str_x *)malloc (sizeof(Str_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_Str_x (holder , count , ((size_t)pointer ));
    });
}
Box_Str clone_Box_Str (Box_Str rc ) {
  return ({ /* cicili#Let10740 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let10742 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn10743 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10745 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10747 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10752 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn10755 */
                (++(*count ));
                __h_Hold_Str_x (pointer , count , address );
              }) : Gone_Str_x ());
          }) : ({ /* cicili#Let10761 */
            // ----------
            ;
            ({ /* cicili#Progn10763 */
              Gone_Str_x ();
            });
          }));
      });
    });
}
Maybe_Str_x take_Box_Str (Box_Str * this ) {
  return ({ /* cicili#Let10771 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let10773 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn10774 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10776 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10778 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10783 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let10787 */
                __auto_type result  = Just_Str_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_Str_x ());
          }) : ({ /* cicili#Let10795 */
            // ----------
            ;
            ({ /* cicili#Progn10797 */
              Nothing_Str_x ();
            });
          }));
      });
    });
}
Maybe_Str_x get_Box_Str (Box_Str rc ) {
  return ({ /* cicili#Let10805 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let10807 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn10808 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10810 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10812 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10817 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_Str_x ((*pointer )) : Nothing_Str_x ());
          }) : ({ /* cicili#Let10824 */
            // ----------
            ;
            ({ /* cicili#Progn10826 */
              Nothing_Str_x ();
            });
          }));
      });
    });
}
void free_Box_Str (Box_Str * this ) {
  { /* cicili#Let10835 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let10837 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn10838 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10840 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn10842 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block10848 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block10851 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_Str_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block10859 */
                if ((*count ) ==  1 )
                  { /* cicili#Block10862 */
                    free_Str_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_Str_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let10872 */
          // ----------
          ;
          ({ /* cicili#Let10874 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10879 */
              }
          });
        }
    });
  }
}
const Box_Str__H_Table * const get_Box_Str__H_Table () {
  static const Box_Str__H_Table table  = { free_Box_Str , new_Box_Str , clone_Box_Str , take_Box_Str , get_Box_Str };
  return (&table );
}
Box_Str __h_Hold_Str_x (Str_x * pointer , int * count , size_t address ) {
  { /* cicili#Let10890 */
    Box_Str instance  = ((Box_Str){ get_Box_Str__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_Str Gone_Str_x () {
  { /* cicili#Let10895 */
    Box_Str instance  = ((Box_Str){ get_Box_Str__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_Str__H_IMPL__ */ 
Str_iter_t iterator_Str (Str vector ) {
  return ({ /* cicili#Let10902 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let10906 */
        __auto_type match10905  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match10905 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let10909 */
          bool __h_case_result  = (true  &&  (((match10905 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10910 */
                (unboxed  =  (((match10905 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10915 */
              ({ /* cicili#Let10919 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let10921 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn10922 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10927 */
                      ({ /* cicili#Let10931 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let10933 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn10934 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn10936 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn10941 */
                              ((Str_iter_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let10946 */
                              // ----------
                              ;
                              ({ /* cicili#Progn10948 */
                                ((Str_iter_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10953 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let10955 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn10956 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn10958 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn10960 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn10965 */
                            ({ /* cicili#Let10967 */
                              Str_iter_t iter  = iterator_Str (vec );
                              // ----------
                              ({ /* cicili#Let10973 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let10975 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn10976 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn10981 */
                                      ((Str_iter_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let10986 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10988 */
                                        ((Str_iter_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let10993 */
                            // ----------
                            ;
                            ({ /* cicili#Progn10995 */
                              ((Str_iter_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11000 */
              // ----------
              ;
              ({ /* cicili#Progn11002 */
                ((Str_iter_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
Str clear_Str (Str vector ) {
  return None_char ();
}
Str resize_Str (Str vector , size_t len ) {
  return None_char ();
}
Str pure_Str (size_t step ) {
  return pureCapacity_Str (step , step );
}
Str pureCapacity_Str (size_t capacity , size_t step ) {
  return Buffer_char (newCapacity_StringBuffer_char (capacity , step ));
}
Str_ptr_t toArray_Str (Str vector ) {
  return ({ /* cicili#Let11022 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let11026 */
        __auto_type match11025  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11025 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11029 */
          bool __h_case_result  = (true  &&  (((match11025 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11030 */
                (unboxed  =  (((match11025 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11035 */
              ({ /* cicili#Let11039 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let11041 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11042 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11047 */
                      ({ /* cicili#Let11051 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let11053 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn11054 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11059 */
                              buffer ;
                            }) : ({ /* cicili#Let11063 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11065 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11069 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let11071 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn11072 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn11074 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11079 */
                            ({ /* cicili#Let11082 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let11086 */
                                __auto_type match11085  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match11085 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let11089 */
                                  bool __h_case_result  = (true  &&  (((match11085 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11090 */
                                        (unboxed  =  (((match11085 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn11095 */
                                      ({ /* cicili#Let11099 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11101 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11102 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11107 */
                                              ({ /* cicili#Let11111 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11113 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn11114 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11119 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let11123 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11125 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let11129 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let11131 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn11132 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn11134 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn11139 */
                                                    (toArray_Str (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let11144 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn11146 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let11150 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn11152 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let11156 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11158 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11162 */
              // ----------
              ;
              ({ /* cicili#Progn11164 */
                NULL ;
              });
            }));
        });
      });
    });
}
Str wrap_Str (const char item ) {
  return ({ /* cicili#Let11169 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11171 */
        __auto_type new_vec  = pureCapacity_Str (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_Str (item , new_vec );
    });
}
size_t show_Str (CFile file , Str vector ) {
  auto size_t show_ (size_t index , Str vector );
  size_t showWithSize (size_t index , size_t size , Str vector ) {
    return ({ /* cicili#Let11181 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let11185 */
          __auto_type match11184  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11184 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11188 */
            bool __h_case_result  = (true  &&  (((match11184 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11189 */
                  (unboxed  =  (((match11184 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11194 */
                ({ /* cicili#Let11198 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let11200 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11201 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11206 */
                        ({ /* cicili#Let11210 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let11212 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn11213 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn11218 */
                                ({ /* cicili#Let11220 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let11231 */
                                // ----------
                                ;
                                ({ /* cicili#Progn11233 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let11237 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let11239 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn11240 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11242 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn11244 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11249 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let11253 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11255 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11259 */
                // ----------
                ;
                ({ /* cicili#Progn11261 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , Str vector ) {
    return ({ /* cicili#Let11265 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let11269 */
          __auto_type match11268  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11268 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11272 */
            bool __h_case_result  = (true  &&  (((match11268 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11273 */
                  (unboxed  =  (((match11268 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11278 */
                ({ /* cicili#Let11282 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let11284 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11285 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11290 */
                        ({ /* cicili#Let11294 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let11296 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn11297 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11299 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn11304 */
                                ({ /* cicili#Let11306 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let11317 */
                                // ----------
                                ;
                                ({ /* cicili#Progn11319 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let11323 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let11325 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn11326 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn11328 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn11330 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11335 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let11339 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11341 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11345 */
                // ----------
                ;
                ({ /* cicili#Progn11347 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
Str copy_Str (Str vector ) {
  return ({ /* cicili#Let11352 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let11356 */
        __auto_type match11355  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11355 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11359 */
          bool __h_case_result  = (true  &&  (((match11355 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11360 */
                (unboxed  =  (((match11355 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11365 */
              ({ /* cicili#Let11369 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let11371 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11372 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11377 */
                      ({ /* cicili#Let11381 */
                        // ----------
                        ;
                        ({ /* cicili#Let11383 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11387 */
                              Buffer_char (copy_StringBuffer_char (sb ));
                            }) : ({ /* cicili#Let11393 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11395 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11400 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let11402 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn11403 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11405 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn11407 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11412 */
                            ({ /* cicili#Let11415 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let11419 */
                                __auto_type match11418  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match11418 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let11422 */
                                  bool __h_case_result  = (true  &&  (((match11418 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11423 */
                                        (unboxed  =  (((match11418 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn11428 */
                                      ({ /* cicili#Let11432 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11434 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11435 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11440 */
                                              ({ /* cicili#Let11444 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11446 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11450 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let11456 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11458 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let11463 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let11465 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn11466 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn11471 */
                                                    copySlice_Str (veci , cur , size );
                                                  }) : ({ /* cicili#Let11476 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn11478 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let11483 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn11485 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let11490 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11492 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11497 */
              // ----------
              ;
              ({ /* cicili#Progn11499 */
                None_char ();
              });
            }));
        });
      });
    });
}
Str copySlice_Str (Str vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let11505 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let11509 */
        __auto_type match11508  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11508 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11512 */
          bool __h_case_result  = (true  &&  (((match11508 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11513 */
                (unboxed  =  (((match11508 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11518 */
              ({ /* cicili#Let11522 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let11524 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11525 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11530 */
                      ({ /* cicili#Let11534 */
                        // ----------
                        ;
                        ({ /* cicili#Let11536 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11540 */
                              Buffer_char (copySlice_StringBuffer_char (sb , pos , len ));
                            }) : ({ /* cicili#Let11546 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11548 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11553 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let11555 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn11556 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn11558 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11563 */
                            ({ /* cicili#Let11566 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let11570 */
                                __auto_type match11569  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match11569 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let11573 */
                                  bool __h_case_result  = (true  &&  (((match11569 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11574 */
                                        (unboxed  =  (((match11569 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn11579 */
                                      ({ /* cicili#Let11583 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11585 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11586 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11591 */
                                              ({ /* cicili#Let11595 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11597 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11601 */
                                                      Buffer_char (copySlice_StringBuffer_char (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let11607 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11609 */
                                                        None_char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let11614 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let11616 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn11617 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn11622 */
                                                    copySlice_Str (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let11627 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn11629 */
                                                      None_char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let11634 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn11636 */
                                        None_char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let11641 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11643 */
                              None_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11648 */
              // ----------
              ;
              ({ /* cicili#Progn11650 */
                None_char ();
              });
            }));
        });
      });
    });
}
Str replaceAt_Str (Str vector , char item , size_t index ) {
  return None_char ();
}
Str deleteAt_Str (Str vector , size_t index ) {
  return None_char ();
}
Str insertAt_Str (Str vector , char item , size_t index ) {
  return None_char ();
}
Str reverse_Str (Str vector ) {
  return None_char ();
}
Str append_Str (Str lvector , Str rvector ) {
  return None_char ();
}
Str push_Str (char item , Str vector ) {
  return None_char ();
}
Str take_Str (size_t len , Str vector ) {
  return ({ /* cicili#Let11674 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let11678 */
        __auto_type match11677  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11677 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11681 */
          bool __h_case_result  = (true  &&  (((match11677 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11682 */
                (unboxed  =  (((match11677 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11687 */
              ({ /* cicili#Let11691 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let11693 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11694 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11699 */
                      ({ /* cicili#Let11703 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let11705 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn11706 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11711 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Str (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_char (clone_Box_Str (vector ), 0, len ) : Slice_char (clone_Box_Str (vector ), 0, 0)));
                            }) : ({ /* cicili#Let11723 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11725 */
                                Slice_char (clone_Box_Str (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11731 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let11733 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn11734 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11736 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn11738 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11743 */
                            (((len  <=  0 )) ? Slice_char (clone_Box_Str (vec ), cursor , 0) : (((len  <  size  )) ? Slice_char (clone_Box_Str (vec ), cursor , len ) : Slice_char (clone_Box_Str (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let11755 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11757 */
                              clone_Box_Str (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11762 */
              // ----------
              ;
              ({ /* cicili#Progn11764 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char last_Str (Str vector ) {
  return ({ /* cicili#Let11771 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let11775 */
        __auto_type match11774  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11774 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11778 */
          bool __h_case_result  = (true  &&  (((match11774 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11779 */
                (unboxed  =  (((match11774 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11784 */
              ({ /* cicili#Let11788 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let11790 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11791 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11796 */
                      ({ /* cicili#Let11800 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let11802 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn11803 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11805 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11810 */
                              Just_char ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let11815 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11817 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11822 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let11824 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn11825 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11827 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn11829 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11834 */
                            nth_Str ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let11839 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11841 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11846 */
              // ----------
              ;
              ({ /* cicili#Progn11848 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Str init_Str (Str vector ) {
  return ({ /* cicili#Let11854 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let11858 */
        __auto_type match11857  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11857 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11861 */
          bool __h_case_result  = (true  &&  (((match11857 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11862 */
                (unboxed  =  (((match11857 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11867 */
              ({ /* cicili#Let11871 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let11873 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11874 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11879 */
                      ({ /* cicili#Let11883 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let11885 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn11886 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11891 */
                              Slice_char (clone_Box_Str (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let11897 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11899 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11904 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let11906 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn11907 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn11909 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn11911 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11916 */
                            Slice_char (clone_Box_Str (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let11922 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11924 */
                              clone_Box_Str (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let11929 */
              // ----------
              ;
              ({ /* cicili#Progn11931 */
                None_char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_Str (Str vector , size_t desired ) {
  return ({ /* cicili#Let11936 */
      size_t len  = len_Str (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_Str (Str vector ) {
  return ({ /* cicili#Let11943 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let11947 */
        __auto_type match11946  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11946 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11950 */
          bool __h_case_result  = (true  &&  (((match11946 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11951 */
                (unboxed  =  (((match11946 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11956 */
              ({ /* cicili#Let11960 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let11962 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn11963 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11968 */
                      ({ /* cicili#Let11972 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let11974 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn11975 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11980 */
                              cursor ;
                            }) : ({ /* cicili#Let11984 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11986 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let11990 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let11992 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn11993 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11998 */
                            size ;
                          }) : ({ /* cicili#Let12002 */
                            // ----------
                            ;
                            ({ /* cicili#Progn12004 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12008 */
              // ----------
              ;
              ({ /* cicili#Progn12010 */
                0;
              });
            }));
        });
      });
    });
}
Str tail_Str (Str vector ) {
  return drop_Str (1, vector );
}
Str drop_Str (size_t len , Str vector ) {
  return ({ /* cicili#Let12018 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let12022 */
        __auto_type match12021  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match12021 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let12025 */
          bool __h_case_result  = (true  &&  (((match12021 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12026 */
                (unboxed  =  (((match12021 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12031 */
              ({ /* cicili#Let12035 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let12037 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn12038 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12043 */
                      ({ /* cicili#Let12047 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let12049 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn12050 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn12055 */
                              (((len  <=  0 )) ? Slice_char (clone_Box_Str (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_char (clone_Box_Str (vector ), len , (cursor  -  len  )) : Slice_char (clone_Box_Str (vector ), 0, 0)));
                            }) : ({ /* cicili#Let12067 */
                              // ----------
                              ;
                              ({ /* cicili#Progn12069 */
                                None_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12074 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let12076 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn12077 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn12079 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn12084 */
                            drop_Str ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let12089 */
                            // ----------
                            ;
                            ({ /* cicili#Progn12091 */
                              clone_Box_Str (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12096 */
              // ----------
              ;
              ({ /* cicili#Progn12098 */
                None_char ();
              });
            }));
        });
      });
    });
}
Maybe_char head_Str (Str vector ) {
  return ({ /* cicili#Let12105 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let12109 */
        __auto_type match12108  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match12108 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let12112 */
          bool __h_case_result  = (true  &&  (((match12108 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12113 */
                (unboxed  =  (((match12108 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12118 */
              ({ /* cicili#Let12122 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let12124 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn12125 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12130 */
                      ({ /* cicili#Let12134 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let12136 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn12137 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn12139 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn12144 */
                              (((cursor  >  0 )) ? Just_char ((*buffer )) : Nothing_char ());
                            }) : ({ /* cicili#Let12151 */
                              // ----------
                              ;
                              ({ /* cicili#Progn12153 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12158 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let12160 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn12161 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn12163 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn12168 */
                            nth_Str (cursor , vector );
                          }) : ({ /* cicili#Let12173 */
                            // ----------
                            ;
                            ({ /* cicili#Progn12175 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12180 */
              // ----------
              ;
              ({ /* cicili#Progn12182 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
Maybe_char nth_Str (size_t index , Str vector ) {
  return ({ /* cicili#Let12189 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let12193 */
        __auto_type match12192  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match12192 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let12196 */
          bool __h_case_result  = (true  &&  (((match12192 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12197 */
                (unboxed  =  (((match12192 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12202 */
              ({ /* cicili#Let12206 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let12208 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn12209 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12214 */
                      ({ /* cicili#Let12218 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let12220 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn12221 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn12223 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn12228 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_char ((*(buffer  +  index  ))) : Nothing_char ());
                            }) : ({ /* cicili#Let12235 */
                              // ----------
                              ;
                              ({ /* cicili#Progn12237 */
                                Nothing_char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12242 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let12244 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn12245 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn12247 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn12249 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn12254 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_Str ((cursor  +  index  ), vector ) : Nothing_char ());
                          }) : ({ /* cicili#Let12261 */
                            // ----------
                            ;
                            ({ /* cicili#Progn12263 */
                              Nothing_char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12268 */
              // ----------
              ;
              ({ /* cicili#Progn12270 */
                Nothing_char ();
              });
            }));
        });
      });
    });
}
void free_Str_x (Str_x * this_ptr ) {
  { /* cicili#Let12275 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let12279 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let12281 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn12282 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block12288 */
            free_StringBuffer_char ((&sb ));
          }
        else
          { /* cicili#Let12294 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let12296 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn12297 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block12303 */
                  free_Box_Str ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
Str__H_Table * const get_Str__H_Table () {
  static Str__H_Table table  = { free_Str_x , iterator_Str , clear_Str , resize_Str , pure_Str , pureCapacity_Str , toArray_Str , wrap_Str , show_Str , copy_Str , copySlice_Str , replaceAt_Str , deleteAt_Str , insertAt_Str , reverse_Str , append_Str , push_Str , take_Str , last_Str , init_Str , hasLen_Str , len_Str , tail_Str , drop_Str , head_Str , nth_Str };
  return (&table );
}
Str Buffer_char (StringBuffer_char buffer ) {
  { /* cicili#Let12313 */
    Str_x instance  = malloc (sizeof(class_Str));
    // ----------
    (*instance ) = ((class_Str){ get_Str__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_Str (instance );
  }
}
Str Slice_char (Str vector , size_t cursor , size_t size ) {
  { /* cicili#Let12321 */
    Str_x instance  = malloc (sizeof(class_Str));
    // ----------
    (*instance ) = ((class_Str){ get_Str__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_Str (instance );
  }
}
Str None_char () {
  { /* cicili#Let12328 */
    Str_x instance  = malloc (sizeof(class_Str));
    // ----------
    (*instance ) = ((class_Str){ get_Str__H_Table (), __h___t });
    return new_Box_Str (instance );
  }
}
#endif /* __Str__H_IMPL__ */ 
#ifndef __Maybe_Str__H_IMPL__
#define __Maybe_Str__H_IMPL__
void free_Maybe_Str (Maybe_Str * this ) {
}
const Maybe_Str__H_Table * const get_Maybe_Str__H_Table () {
  static const Maybe_Str__H_Table table  = { free_Maybe_Str };
  return (&table );
}
Maybe_Str Just_Str (Str value ) {
  { /* cicili#Let12346 */
    Maybe_Str instance  = ((Maybe_Str){ get_Maybe_Str__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Str Nothing_Str () {
  { /* cicili#Let12351 */
    Maybe_Str instance  = ((Maybe_Str){ get_Maybe_Str__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Str__H_IMPL__ */ 
#ifndef __Maybe_Char__H_IMPL__
#define __Maybe_Char__H_IMPL__
void free_Maybe_Char (Maybe_Char * this ) {
}
const Maybe_Char__H_Table * const get_Maybe_Char__H_Table () {
  static const Maybe_Char__H_Table table  = { free_Maybe_Char };
  return (&table );
}
Maybe_Char Just_Char (Char value ) {
  { /* cicili#Let12369 */
    Maybe_Char instance  = ((Maybe_Char){ get_Maybe_Char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Char Nothing_Char () {
  { /* cicili#Let12374 */
    Maybe_Char instance  = ((Maybe_Char){ get_Maybe_Char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Char__H_IMPL__ */ 
bool null_terminated_StringBuffer_Char  = true ;
bool is_constant_StringBuffer_Char  = false ;
#ifndef __StringBuffer_Char__H_IMPL__
#define __StringBuffer_Char__H_IMPL__
StringBuffer_Char clear_StringBuffer_Char (StringBuffer_Char sb ) {
  return ({ /* cicili#Let12388 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let12390 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn12391 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12393 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12395 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12400 */
            MakeStringBuffer_Char (buffer , 0, size , step );
          }) : ({ /* cicili#Let12405 */
            // ----------
            ;
            ({ /* cicili#Progn12407 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
StringBuffer_Char resize_StringBuffer_Char (StringBuffer_Char sb , size_t len ) {
  return ({ /* cicili#Let12416 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let12418 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn12419 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12421 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12423 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12428 */
            ({ /* cicili#Let12430 */
              Char * new_buffer  = realloc (buffer , ((len  +  1 ) *  sizeof(Char) ));
              size_t new_cursor  = (((cursor  <  len  )) ? cursor  : len );
              // ----------
              (*(new_buffer  +  new_cursor  )) = ((Char)(*((Char *)"\0")));
              MakeStringBuffer_Char (new_buffer , new_cursor , len , step );
            });
          }) : ({ /* cicili#Let12435 */
            // ----------
            ;
            ({ /* cicili#Progn12437 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
StringBuffer_Char new_StringBuffer_Char (size_t step ) {
  return newCapacity_StringBuffer_Char (step , step );
}
StringBuffer_Char newCapacity_StringBuffer_Char (size_t capacity , size_t step ) {
  return ({ /* cicili#Let12448 */
      Char * buffer  = malloc (((capacity  +  1 ) *  sizeof(Char) ));
      StringBuffer_Char sb  = MakeStringBuffer_Char (buffer , 0, capacity , step );
      // ----------
      (*buffer ) = ((Char)(*((Char *)"\0")));
      sb ;
    });
}
StringBuffer_Char copySlice_StringBuffer_Char (StringBuffer_Char sb , size_t pos , size_t len ) {
  return ({ /* cicili#Let12457 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let12459 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn12460 */
                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12462 */
                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12464 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12469 */
            ({ /* cicili#Let12471 */
              StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (len , step );
              // ----------
              ((((pos  +  len  ) <=  cursor  )) ? print_StringBuffer_Char (new_sb , (buffer  +  pos  ), len ) : print_StringBuffer_Char (new_sb , (buffer  +  pos  ), (((pos  <=  cursor  )) ? (cursor  -  pos  ) : 0)));
            });
          }) : ({ /* cicili#Let12481 */
            // ----------
            ;
            ({ /* cicili#Progn12483 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
StringBuffer_Char copy_StringBuffer_Char (StringBuffer_Char sb ) {
  return ({ /* cicili#Let12492 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let12494 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn12495 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn12497 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn12499 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12501 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12506 */
            ({ /* cicili#Let12508 */
              StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (size , step );
              // ----------
              print_StringBuffer_Char (new_sb , buffer , cursor );
            });
          }) : ({ /* cicili#Let12515 */
            // ----------
            ;
            ({ /* cicili#Progn12517 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
StringBuffer_Char put_StringBuffer_Char (StringBuffer_Char sb , const Char data ) {
  return print_StringBuffer_Char (sb , (&data ), 1);
}
StringBuffer_Char print_StringBuffer_Char (StringBuffer_Char sb , const Char * data , size_t len ) {
  return ({ /* cicili#Let12531 */
      typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let12533 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn12534 */
                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn12536 */
                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn12538 */
                  (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12540 */
                (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12545 */
            ({ /* cicili#Let12547 */
              size_t blen  = (len  *  sizeof(Char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block12551 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let12553 */
                    Char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(Char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              (*(buffer  +  cursor  +  len  )) = ((Char)(*((Char *)"\0")));
              MakeStringBuffer_Char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let12558 */
            // ----------
            ;
            ({ /* cicili#Progn12560 */
              FreedStringBuffer_Char ();
            });
          }));
      });
    });
}
void free_StringBuffer_Char (StringBuffer_Char * this ) {
  { /* cicili#Let12568 */
    typeof((((this -> __h_data ). Buffered ). __h_0_mem )) buffer ;
    // ----------
    ;
    ({ /* cicili#Let12570 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn12571 */
            (buffer  =  (((this -> __h_data ). Buffered ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block12577 */
          { /* cicili#Block12579 */
            free (buffer );
            (*this ) = FreedStringBuffer_Char ();
          }
        }
    });
  }
}
const StringBuffer_Char__H_Table * const get_StringBuffer_Char__H_Table () {
  static const StringBuffer_Char__H_Table table  = { free_StringBuffer_Char , clear_StringBuffer_Char , resize_StringBuffer_Char , new_StringBuffer_Char , newCapacity_StringBuffer_Char , copySlice_StringBuffer_Char , copy_StringBuffer_Char , put_StringBuffer_Char , print_StringBuffer_Char };
  return (&table );
}
StringBuffer_Char MakeStringBuffer_Char (Char * buffer , size_t cursor , size_t size , size_t step ) {
  { /* cicili#Let12589 */
    StringBuffer_Char instance  = ((StringBuffer_Char){ get_StringBuffer_Char__H_Table (), __h_Buffered_t , .__h_data.Buffered = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_Char FreedStringBuffer_Char () {
  { /* cicili#Let12594 */
    StringBuffer_Char instance  = ((StringBuffer_Char){ get_StringBuffer_Char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_Char__H_IMPL__ */ 
bool null_terminated_String  = true ;
bool is_constant_String  = false ;
#ifndef __String__H_IMPL__
#define __String__H_IMPL__
#ifndef __Maybe_String_x__H_IMPL__
#define __Maybe_String_x__H_IMPL__
void free_Maybe_String_x (Maybe_String_x * this ) {
}
const Maybe_String_x__H_Table * const get_Maybe_String_x__H_Table () {
  static const Maybe_String_x__H_Table table  = { free_Maybe_String_x };
  return (&table );
}
Maybe_String_x Just_String_x (String_x value ) {
  { /* cicili#Let12617 */
    Maybe_String_x instance  = ((Maybe_String_x){ get_Maybe_String_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String_x Nothing_String_x () {
  { /* cicili#Let12622 */
    Maybe_String_x instance  = ((Maybe_String_x){ get_Maybe_String_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String_x__H_IMPL__ */ 
#ifndef __Box_String__H_IMPL__
#define __Box_String__H_IMPL__
Box_String new_Box_String (String_x pointer ) {
  return ({ /* cicili#Let12629 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((String_x *)malloc (sizeof(String_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_String_x (holder , count , ((size_t)pointer ));
    });
}
Box_String clone_Box_String (Box_String rc ) {
  return ({ /* cicili#Let12638 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let12640 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn12641 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12643 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12645 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12650 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn12653 */
                (++(*count ));
                __h_Hold_String_x (pointer , count , address );
              }) : Gone_String_x ());
          }) : ({ /* cicili#Let12659 */
            // ----------
            ;
            ({ /* cicili#Progn12661 */
              Gone_String_x ();
            });
          }));
      });
    });
}
Maybe_String_x take_Box_String (Box_String * this ) {
  return ({ /* cicili#Let12669 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let12671 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn12672 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12674 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12676 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12681 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let12685 */
                __auto_type result  = Just_String_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_String_x ());
          }) : ({ /* cicili#Let12693 */
            // ----------
            ;
            ({ /* cicili#Progn12695 */
              Nothing_String_x ();
            });
          }));
      });
    });
}
Maybe_String_x get_Box_String (Box_String rc ) {
  return ({ /* cicili#Let12703 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let12705 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn12706 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12708 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn12710 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12715 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_String_x ((*pointer )) : Nothing_String_x ());
          }) : ({ /* cicili#Let12722 */
            // ----------
            ;
            ({ /* cicili#Progn12724 */
              Nothing_String_x ();
            });
          }));
      });
    });
}
void free_Box_String (Box_String * this ) {
  { /* cicili#Let12733 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let12735 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn12736 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12738 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn12740 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block12746 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block12749 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_String_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block12757 */
                if ((*count ) ==  1 )
                  { /* cicili#Block12760 */
                    free_String_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_String_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let12770 */
          // ----------
          ;
          ({ /* cicili#Let12772 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block12777 */
              }
          });
        }
    });
  }
}
const Box_String__H_Table * const get_Box_String__H_Table () {
  static const Box_String__H_Table table  = { free_Box_String , new_Box_String , clone_Box_String , take_Box_String , get_Box_String };
  return (&table );
}
Box_String __h_Hold_String_x (String_x * pointer , int * count , size_t address ) {
  { /* cicili#Let12788 */
    Box_String instance  = ((Box_String){ get_Box_String__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_String Gone_String_x () {
  { /* cicili#Let12793 */
    Box_String instance  = ((Box_String){ get_Box_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_String__H_IMPL__ */ 
String_iter_t iterator_String (String vector ) {
  return ({ /* cicili#Let12800 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let12804 */
        __auto_type match12803  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match12803 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let12807 */
          bool __h_case_result  = (true  &&  (((match12803 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12808 */
                (unboxed  =  (((match12803 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12813 */
              ({ /* cicili#Let12817 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let12819 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn12820 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12825 */
                      ({ /* cicili#Let12829 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let12831 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn12832 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn12834 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn12839 */
                              ((String_iter_t){ buffer , (buffer  +  cursor  )});
                            }) : ({ /* cicili#Let12844 */
                              // ----------
                              ;
                              ({ /* cicili#Progn12846 */
                                ((String_iter_t){ NULL , NULL });
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12851 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let12853 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn12854 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn12856 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn12858 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn12863 */
                            ({ /* cicili#Let12865 */
                              String_iter_t iter  = iterator_String (vec );
                              // ----------
                              ({ /* cicili#Let12871 */
                                typeof((iter . __h_0_mem )) begin ;
                                // ----------
                                ;
                                ({ /* cicili#Let12873 */
                                  bool __h_case_result  = (true  &&  ({ /* cicili#Progn12874 */
                                      (begin  =  (iter . __h_0_mem ) );
                                      true ;
                                    }) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn12879 */
                                      ((String_iter_t){ (begin  +  cur  ), (begin  +  size  )});
                                    }) : ({ /* cicili#Let12884 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn12886 */
                                        ((String_iter_t){ NULL , NULL });
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let12891 */
                            // ----------
                            ;
                            ({ /* cicili#Progn12893 */
                              ((String_iter_t){ NULL , NULL });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let12898 */
              // ----------
              ;
              ({ /* cicili#Progn12900 */
                ((String_iter_t){ NULL , NULL });
              });
            }));
        });
      });
    });
}
String clear_String (String vector ) {
  return ({ /* cicili#Let12906 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let12910 */
        __auto_type match12909  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match12909 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let12913 */
          bool __h_case_result  = (true  &&  (((match12909 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12914 */
                (unboxed  =  (((match12909 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12919 */
              ({ /* cicili#Let12923 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let12925 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn12926 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12931 */
                      ({ /* cicili#Let12935 */
                        __auto_type match12934  = take_Box_String ((&vector ));
                        typeof((((match12934 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let12938 */
                          bool __h_case_result  = (true  &&  (((match12934 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12939 */
                                (ptr  =  (((match12934 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn12944 */
                              ({ /* cicili#Progn12946 */
                                free (((void *)ptr ));
                                Buffer_Char (clear_StringBuffer_Char (sb ));
                              });
                            }) : ({ /* cicili#Let12952 */
                              // ----------
                              ;
                              ({ /* cicili#Progn12954 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let12959 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let12961 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn12962 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn12964 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn12969 */
                            ({ /* cicili#Let12972 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let12976 */
                                __auto_type match12975  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match12975 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let12979 */
                                  bool __h_case_result  = (true  &&  (((match12975 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12980 */
                                        (unboxed  =  (((match12975 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn12985 */
                                      ({ /* cicili#Let12989 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let12991 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn12992 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn12997 */
                                              ({ /* cicili#Let13001 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_2_mem )) size ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let13003 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ((({ /* cicili#Progn13004 */
                                                            (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                            true ;
                                                          }) &&  ({ /* cicili#Progn13006 */
                                                            (size  =  (((sbs . __h_data ). Buffered ). __h_2_mem ) );
                                                            true ;
                                                          }) ) &&  ({ /* cicili#Progn13008 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn13013 */
                                                      ({ /* cicili#Let13015 */
                                                        StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (size , step );
                                                        // ----------
                                                        Buffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), size ));
                                                      });
                                                    }) : ({ /* cicili#Let13023 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn13025 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let13030 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let13032 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn13033 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn13038 */
                                                    clear_String (veci );
                                                  }) : ({ /* cicili#Let13043 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn13045 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let13050 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13052 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let13057 */
                            // ----------
                            ;
                            ({ /* cicili#Progn13059 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let13064 */
              // ----------
              ;
              ({ /* cicili#Progn13066 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String resize_String (String vector , size_t len ) {
  return ({ /* cicili#Let13072 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let13076 */
        __auto_type match13075  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match13075 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let13079 */
          bool __h_case_result  = (true  &&  (((match13075 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13080 */
                (unboxed  =  (((match13075 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn13085 */
              ({ /* cicili#Let13089 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let13091 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13092 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn13097 */
                      ({ /* cicili#Let13101 */
                        __auto_type match13100  = take_Box_String ((&vector ));
                        typeof((((match13100 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let13104 */
                          bool __h_case_result  = (true  &&  (((match13100 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13105 */
                                (ptr  =  (((match13100 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn13110 */
                              ({ /* cicili#Progn13112 */
                                free (((void *)ptr ));
                                Buffer_Char (resize_StringBuffer_Char (sb , len ));
                              });
                            }) : ({ /* cicili#Let13118 */
                              // ----------
                              ;
                              ({ /* cicili#Progn13120 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let13125 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let13127 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn13128 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn13130 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn13135 */
                            ({ /* cicili#Let13138 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let13142 */
                                __auto_type match13141  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match13141 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let13145 */
                                  bool __h_case_result  = (true  &&  (((match13141 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13146 */
                                        (unboxed  =  (((match13141 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13151 */
                                      ({ /* cicili#Let13155 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let13157 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13158 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn13163 */
                                              ({ /* cicili#Let13167 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let13169 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn13170 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn13172 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn13177 */
                                                      ({ /* cicili#Let13179 */
                                                        StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (len , step );
                                                        // ----------
                                                        Buffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), len ));
                                                      });
                                                    }) : ({ /* cicili#Let13187 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn13189 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let13194 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let13196 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn13197 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn13202 */
                                                    resize_String (veci , len );
                                                  }) : ({ /* cicili#Let13207 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn13209 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let13214 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13216 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let13221 */
                            // ----------
                            ;
                            ({ /* cicili#Progn13223 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let13228 */
              // ----------
              ;
              ({ /* cicili#Progn13230 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String pure_String (size_t step ) {
  return pureCapacity_String (step , step );
}
String pureCapacity_String (size_t capacity , size_t step ) {
  return Buffer_Char (newCapacity_StringBuffer_Char (capacity , step ));
}
String_ptr_t toArray_String (String vector ) {
  return ({ /* cicili#Let13244 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let13248 */
        __auto_type match13247  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match13247 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let13251 */
          bool __h_case_result  = (true  &&  (((match13247 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13252 */
                (unboxed  =  (((match13247 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn13257 */
              ({ /* cicili#Let13261 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let13263 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13264 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn13269 */
                      ({ /* cicili#Let13273 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        // ----------
                        ;
                        ({ /* cicili#Let13275 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn13276 */
                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn13281 */
                              buffer ;
                            }) : ({ /* cicili#Let13285 */
                              // ----------
                              ;
                              ({ /* cicili#Progn13287 */
                                NULL ;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let13291 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let13293 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn13294 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn13296 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn13301 */
                            ({ /* cicili#Let13304 */
                              __auto_type __h_matchbox  = vector ;
                              // ----------
                              ({ /* cicili#Let13308 */
                                __auto_type match13307  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match13307 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let13311 */
                                  bool __h_case_result  = (true  &&  (((match13307 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13312 */
                                        (unboxed  =  (((match13307 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13317 */
                                      ({ /* cicili#Let13321 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let13323 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13324 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn13329 */
                                              ({ /* cicili#Let13333 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let13335 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn13336 */
                                                        (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn13341 */
                                                      (buffer  +  cursor  );
                                                    }) : ({ /* cicili#Let13345 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn13347 */
                                                        NULL ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let13351 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                                              typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let13353 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn13354 */
                                                        (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn13356 */
                                                        (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn13361 */
                                                    (toArray_String (vec ) +  cur  );
                                                  }) : ({ /* cicili#Let13366 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn13368 */
                                                      NULL ;
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let13372 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13374 */
                                        NULL ;
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let13378 */
                            // ----------
                            ;
                            ({ /* cicili#Progn13380 */
                              NULL ;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let13384 */
              // ----------
              ;
              ({ /* cicili#Progn13386 */
                NULL ;
              });
            }));
        });
      });
    });
}
String wrap_String (const Char item ) {
  return ({ /* cicili#Let13391 */
      __auto_type new_vec  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13393 */
        __auto_type new_vec  = pureCapacity_String (16, 16);
        // ----------
        ((void)((new_vec . __h_table )-> freeData ));
        new_vec ;
      });
      // ----------
      push_String (item , new_vec );
    });
}
size_t show_String (CFile file , String vector ) {
  auto size_t show_ (size_t index , String vector );
  size_t showWithSize (size_t index , size_t size , String vector ) {
    return ({ /* cicili#Let13403 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let13407 */
          __auto_type match13406  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match13406 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let13410 */
            bool __h_case_result  = (true  &&  (((match13406 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13411 */
                  (unboxed  =  (((match13406 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn13416 */
                ({ /* cicili#Let13420 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let13422 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13423 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn13428 */
                        ({ /* cicili#Let13432 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          // ----------
                          ;
                          ({ /* cicili#Let13434 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn13435 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn13440 */
                                ({ /* cicili#Let13442 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  (size  +  index  ) ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  ((size  +  index  ) -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let13453 */
                                // ----------
                                ;
                                ({ /* cicili#Progn13455 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13459 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let13461 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn13462 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn13464 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn13466 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn13471 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let13475 */
                              // ----------
                              ;
                              ({ /* cicili#Progn13477 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let13481 */
                // ----------
                ;
                ({ /* cicili#Progn13483 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t show_ (size_t index , String vector ) {
    return ({ /* cicili#Let13487 */
        __auto_type __h_matchbox  = vector ;
        // ----------
        ({ /* cicili#Let13491 */
          __auto_type match13490  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match13490 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let13494 */
            bool __h_case_result  = (true  &&  (((match13490 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13495 */
                  (unboxed  =  (((match13490 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn13500 */
                ({ /* cicili#Let13504 */
                  typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                  // ----------
                  ;
                  ({ /* cicili#Let13506 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13507 */
                          (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn13512 */
                        ({ /* cicili#Let13516 */
                          typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                          typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                          // ----------
                          ;
                          ({ /* cicili#Let13518 */
                            bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn13519 */
                                    (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn13521 */
                                    (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn13526 */
                                ({ /* cicili#Let13528 */
                                  size_t sum  = 0;
                                  // ----------
                                  for (size_t counter  = index ; (counter  <  cursor  ); (++counter )) {
                                      sum  = (sum  +  fprintf (file , "%c", (*(buffer  +  counter  ))) +  (((counter  <  (cursor  -  1 ) )) ? printf ("%s", "") : 0) );
                                  }
                                  sum ;
                                });
                              }) : ({ /* cicili#Let13539 */
                                // ----------
                                ;
                                ({ /* cicili#Progn13541 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13545 */
                        typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                        typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                        // ----------
                        ;
                        ({ /* cicili#Let13547 */
                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn13548 */
                                    (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn13550 */
                                    (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn13552 */
                                  (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn13557 */
                              showWithSize ((cursor  +  index  ), size , vector );
                            }) : ({ /* cicili#Let13561 */
                              // ----------
                              ;
                              ({ /* cicili#Progn13563 */
                                0;
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let13567 */
                // ----------
                ;
                ({ /* cicili#Progn13569 */
                  0;
                });
              }));
          });
        });
      });
  }
  return show_ (0, vector );
}
String copy_String (String vector ) {
  return ({ /* cicili#Let13574 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let13578 */
        __auto_type match13577  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match13577 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let13581 */
          bool __h_case_result  = (true  &&  (((match13577 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13582 */
                (unboxed  =  (((match13577 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn13587 */
              ({ /* cicili#Let13591 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let13593 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13594 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn13599 */
                      ({ /* cicili#Let13603 */
                        // ----------
                        ;
                        ({ /* cicili#Let13605 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn13609 */
                              Buffer_Char (copy_StringBuffer_Char (sb ));
                            }) : ({ /* cicili#Let13615 */
                              // ----------
                              ;
                              ({ /* cicili#Progn13617 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let13622 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let13624 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn13625 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn13627 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn13629 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn13634 */
                            ({ /* cicili#Let13637 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let13641 */
                                __auto_type match13640  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match13640 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let13644 */
                                  bool __h_case_result  = (true  &&  (((match13640 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13645 */
                                        (unboxed  =  (((match13640 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13650 */
                                      ({ /* cicili#Let13654 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let13656 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13657 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn13662 */
                                              ({ /* cicili#Let13666 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let13668 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn13672 */
                                                      Buffer_Char (copySlice_StringBuffer_Char (sbs , cur , size ));
                                                    }) : ({ /* cicili#Let13678 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn13680 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let13685 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let13687 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn13688 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn13693 */
                                                    copySlice_String (veci , cur , size );
                                                  }) : ({ /* cicili#Let13698 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn13700 */
                                                      None_Char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let13705 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13707 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let13712 */
                            // ----------
                            ;
                            ({ /* cicili#Progn13714 */
                              None_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let13719 */
              // ----------
              ;
              ({ /* cicili#Progn13721 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String copySlice_String (String vector , size_t pos , size_t len ) {
  return ({ /* cicili#Let13727 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let13731 */
        __auto_type match13730  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match13730 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let13734 */
          bool __h_case_result  = (true  &&  (((match13730 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13735 */
                (unboxed  =  (((match13730 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn13740 */
              ({ /* cicili#Let13744 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let13746 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13747 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn13752 */
                      ({ /* cicili#Let13756 */
                        // ----------
                        ;
                        ({ /* cicili#Let13758 */
                          bool __h_case_result  = (true  &&  ((sb . __h_ctor ) ==  __h_Buffered_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn13762 */
                              Buffer_Char (copySlice_StringBuffer_Char (sb , pos , len ));
                            }) : ({ /* cicili#Let13768 */
                              // ----------
                              ;
                              ({ /* cicili#Progn13770 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let13775 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      // ----------
                      ;
                      ({ /* cicili#Let13777 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn13778 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn13780 */
                                (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn13785 */
                            ({ /* cicili#Let13788 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let13792 */
                                __auto_type match13791  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match13791 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let13795 */
                                  bool __h_case_result  = (true  &&  (((match13791 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13796 */
                                        (unboxed  =  (((match13791 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13801 */
                                      ({ /* cicili#Let13805 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let13807 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13808 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn13813 */
                                              ({ /* cicili#Let13817 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let13819 */
                                                  bool __h_case_result  = (true  &&  ((sbs . __h_ctor ) ==  __h_Buffered_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn13823 */
                                                      Buffer_Char (copySlice_StringBuffer_Char (sbs , (cur  +  pos  ), len ));
                                                    }) : ({ /* cicili#Let13829 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn13831 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let13836 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let13838 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn13839 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn13844 */
                                                    copySlice_String (veci , (cur  +  pos  ), len );
                                                  }) : ({ /* cicili#Let13849 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn13851 */
                                                      None_Char ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let13856 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13858 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let13863 */
                            // ----------
                            ;
                            ({ /* cicili#Progn13865 */
                              None_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let13870 */
              // ----------
              ;
              ({ /* cicili#Progn13872 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String replaceAt_String (String vector , Char item , size_t index ) {
  return ({ /* cicili#Let13878 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let13882 */
        __auto_type match13881  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match13881 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let13885 */
          bool __h_case_result  = (true  &&  (((match13881 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13886 */
                (unboxed  =  (((match13881 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn13891 */
              ({ /* cicili#Let13895 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let13897 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13898 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn13903 */
                      ({ /* cicili#Let13907 */
                        __auto_type match13906  = take_Box_String ((&vector ));
                        typeof((((match13906 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let13910 */
                          bool __h_case_result  = (true  &&  (((match13906 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13911 */
                                (ptr  =  (((match13906 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn13916 */
                              ({ /* cicili#Progn13918 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let13922 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let13924 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn13925 */
                                            (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn13927 */
                                            (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn13932 */
                                        (((index  <  cursor  )) ? ({ /* cicili#Progn13935 */
                                            (*(buffer  +  index  )) = item ;
                                            Buffer_Char (sb );
                                          }) : Buffer_Char (sb ));
                                      }) : ({ /* cicili#Let13941 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn13943 */
                                          clone_Box_String (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let13948 */
                              // ----------
                              ;
                              ({ /* cicili#Progn13950 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let13955 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let13957 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn13958 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn13960 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn13962 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn13967 */
                            ({ /* cicili#Let13970 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let13974 */
                                __auto_type match13973  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match13973 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let13977 */
                                  bool __h_case_result  = (true  &&  (((match13973 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13978 */
                                        (unboxed  =  (((match13973 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13983 */
                                      ({ /* cicili#Let13987 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let13989 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn13990 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn13995 */
                                              ({ /* cicili#Let13999 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let14001 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn14002 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn14004 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn14009 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let14012 */
                                                          StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char (size , step );
                                                          // ----------
                                                          Buffer_Char (print_StringBuffer_Char (put_StringBuffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let14022 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn14024 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let14029 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let14031 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn14032 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn14037 */
                                                    replaceAt_String (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let14042 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn14044 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let14049 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn14051 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let14056 */
                            // ----------
                            ;
                            ({ /* cicili#Progn14058 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let14063 */
              // ----------
              ;
              ({ /* cicili#Progn14065 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String deleteAt_String (String vector , size_t index ) {
  return ({ /* cicili#Let14071 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let14075 */
        __auto_type match14074  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match14074 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let14078 */
          bool __h_case_result  = (true  &&  (((match14074 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14079 */
                (unboxed  =  (((match14074 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn14084 */
              ({ /* cicili#Let14088 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let14090 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14091 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn14096 */
                      ({ /* cicili#Let14100 */
                        __auto_type match14099  = take_Box_String ((&vector ));
                        typeof((((match14099 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let14103 */
                          bool __h_case_result  = (true  &&  (((match14099 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14104 */
                                (ptr  =  (((match14099 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14109 */
                              ({ /* cicili#Progn14111 */
                                free (((void *)ptr ));
                                ({ /* cicili#Let14115 */
                                  typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                                  typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let14117 */
                                    bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn14118 */
                                                (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn14120 */
                                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                                true ;
                                              }) ) &&  ({ /* cicili#Progn14122 */
                                              (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                              true ;
                                            }) ) &&  ({ /* cicili#Progn14124 */
                                            (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn14129 */
                                        ({ /* cicili#Progn14131 */
                                          for (size_t i  = index ; (i  <  cursor  ); (++i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  +  1 ) ));
                                          }
                                          Buffer_Char (MakeStringBuffer_Char (buffer , (cursor  -  1 ), size , step ));
                                        });
                                      }) : ({ /* cicili#Let14139 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn14141 */
                                          clone_Box_String (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let14146 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14148 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let14153 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let14155 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn14156 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14158 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn14160 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn14165 */
                            ({ /* cicili#Let14168 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let14172 */
                                __auto_type match14171  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match14171 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let14175 */
                                  bool __h_case_result  = (true  &&  (((match14171 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14176 */
                                        (unboxed  =  (((match14171 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn14181 */
                                      ({ /* cicili#Let14185 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let14187 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14188 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn14193 */
                                              ({ /* cicili#Let14197 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let14199 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn14200 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn14202 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn14207 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let14210 */
                                                          StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char ((size  -  1 ), step );
                                                          // ----------
                                                          Buffer_Char (print_StringBuffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), index ), (buffer  +  cur  +  index  +  1 ), (size  -  index  -  1 )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let14219 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn14221 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let14226 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let14228 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn14229 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn14234 */
                                                    deleteAt_String (veci , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let14239 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn14241 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let14246 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn14248 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let14253 */
                            // ----------
                            ;
                            ({ /* cicili#Progn14255 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let14260 */
              // ----------
              ;
              ({ /* cicili#Progn14262 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String insertAt_String (String vector , Char item , size_t index ) {
  return ({ /* cicili#Let14268 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let14272 */
        __auto_type match14271  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match14271 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let14275 */
          bool __h_case_result  = (true  &&  (((match14271 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14276 */
                (unboxed  =  (((match14271 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn14281 */
              ({ /* cicili#Let14285 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let14287 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14288 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn14293 */
                      ({ /* cicili#Let14297 */
                        __auto_type match14296  = take_Box_String ((&vector ));
                        typeof((((match14296 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let14300 */
                          bool __h_case_result  = (true  &&  (((match14296 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14301 */
                                (ptr  =  (((match14296 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14306 */
                              ({ /* cicili#Let14308 */
                                StringBuffer_Char new_sb  = put_StringBuffer_Char (sb , item );
                                // ----------
                                free (((void *)ptr ));
                                ({ /* cicili#Let14314 */
                                  typeof((((new_sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                  typeof((((new_sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let14316 */
                                    bool __h_case_result  = (true  &&  (((new_sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn14317 */
                                            (buffer  =  (((new_sb . __h_data ). Buffered ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn14319 */
                                            (cursor  =  (((new_sb . __h_data ). Buffered ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn14324 */
                                        ({ /* cicili#Progn14326 */
                                          for (size_t i  = (cursor  -  1 ); (i  >  index  ); (--i )) {
                                              (*(buffer  +  i  )) = (*(buffer  +  (i  -  1 ) ));
                                          }
                                          (*(buffer  +  index  )) = item ;
                                          Buffer_Char (new_sb );
                                        });
                                      }) : ({ /* cicili#Let14333 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn14335 */
                                          clone_Box_String (vector );
                                        });
                                      }));
                                  });
                                });
                              });
                            }) : ({ /* cicili#Let14340 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14342 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let14347 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let14349 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn14350 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14352 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn14354 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn14359 */
                            ({ /* cicili#Let14362 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let14366 */
                                __auto_type match14365  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match14365 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let14369 */
                                  bool __h_case_result  = (true  &&  (((match14365 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14370 */
                                        (unboxed  =  (((match14365 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn14375 */
                                      ({ /* cicili#Let14379 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let14381 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14382 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn14387 */
                                              ({ /* cicili#Let14391 */
                                                typeof((((sbs . __h_data ). Buffered ). __h_0_mem )) buffer ;
                                                typeof((((sbs . __h_data ). Buffered ). __h_3_mem )) step ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let14393 */
                                                  bool __h_case_result  = (true  &&  (((sbs . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn14394 */
                                                          (buffer  =  (((sbs . __h_data ). Buffered ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn14396 */
                                                          (step  =  (((sbs . __h_data ). Buffered ). __h_3_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn14401 */
                                                      (((index  <  size  )) ? ({ /* cicili#Let14404 */
                                                          StringBuffer_Char new_sb  = newCapacity_StringBuffer_Char ((size  +  1 ), step );
                                                          // ----------
                                                          Buffer_Char (print_StringBuffer_Char (put_StringBuffer_Char (print_StringBuffer_Char (new_sb , (buffer  +  cur  ), index ), item ), (buffer  +  cur  +  index  ), (size  -  index  )));
                                                        }) : vec );
                                                    }) : ({ /* cicili#Let14414 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn14416 */
                                                        None_Char ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let14421 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let14423 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn14424 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn14429 */
                                                    insertAt_String (veci , item , (cur  +  index  ));
                                                  }) : ({ /* cicili#Let14434 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn14436 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let14441 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn14443 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let14448 */
                            // ----------
                            ;
                            ({ /* cicili#Progn14450 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let14455 */
              // ----------
              ;
              ({ /* cicili#Progn14457 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String reverse_String (String vector ) {
  return ({ /* cicili#Let14463 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let14467 */
        __auto_type match14466  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match14466 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let14470 */
          bool __h_case_result  = (true  &&  (((match14466 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14471 */
                (unboxed  =  (((match14466 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn14476 */
              ({ /* cicili#Let14480 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let14482 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14483 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn14488 */
                      ({ /* cicili#Let14492 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        typeof((((sb . __h_data ). Buffered ). __h_2_mem )) size ;
                        typeof((((sb . __h_data ). Buffered ). __h_3_mem )) step ;
                        // ----------
                        ;
                        ({ /* cicili#Let14494 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (((({ /* cicili#Progn14495 */
                                      (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn14497 */
                                      (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                      true ;
                                    }) ) &&  ({ /* cicili#Progn14499 */
                                    (size  =  (((sb . __h_data ). Buffered ). __h_2_mem ) );
                                    true ;
                                  }) ) &&  ({ /* cicili#Progn14501 */
                                  (step  =  (((sb . __h_data ). Buffered ). __h_3_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14506 */
                              ({ /* cicili#Let14510 */
                                __auto_type match14509  = take_Box_String ((&vector ));
                                typeof((((match14509 . __h_data ). Just ). __h_0_mem )) ptr ;
                                // ----------
                                ;
                                ({ /* cicili#Let14513 */
                                  bool __h_case_result  = (true  &&  (((match14509 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14514 */
                                        (ptr  =  (((match14509 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn14519 */
                                      ({ /* cicili#Let14521 */
                                        Char tmp ;
                                        // ----------
                                        free (((void *)ptr ));
                                        for (size_t i  = 0,  j  = cursor ; (i  <  (cursor  /  2 ) ); (++i ), (--j )) {
                                            tmp  = (*(buffer  +  i  ));
                                            (*(buffer  +  i  )) = (*(buffer  +  (j  -  1 ) ));
                                            (*(buffer  +  (j  -  1 ) )) = tmp ;
                                        }
                                        Buffer_Char (MakeStringBuffer_Char (buffer , cursor , size , step ));
                                      });
                                    }) : ({ /* cicili#Let14529 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn14531 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let14536 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14538 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let14543 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let14545 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn14546 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14548 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn14550 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn14555 */
                            ({ /* cicili#Let14558 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let14562 */
                                __auto_type match14561  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match14561 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let14565 */
                                  bool __h_case_result  = (true  &&  (((match14561 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14566 */
                                        (unboxed  =  (((match14561 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn14571 */
                                      ({ /* cicili#Let14575 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let14577 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14578 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn14583 */
                                              reverse_String (Buffer_Char (copySlice_StringBuffer_Char (sbs , cur , size )));
                                            }) : ({ /* cicili#Let14590 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let14592 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn14593 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn14598 */
                                                    reverse_String (copySlice_String (veci , cur , size ));
                                                  }) : ({ /* cicili#Let14604 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn14606 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let14611 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn14613 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let14618 */
                            // ----------
                            ;
                            ({ /* cicili#Progn14620 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let14625 */
              // ----------
              ;
              ({ /* cicili#Progn14627 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String append_String (String lvector , String rvector ) {
  return ({ /* cicili#Let14633 */
      __auto_type __h_matchbox  = lvector ;
      // ----------
      ({ /* cicili#Let14637 */
        __auto_type match14636  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match14636 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let14640 */
          bool __h_case_result  = (true  &&  (((match14636 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14641 */
                (unboxed  =  (((match14636 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn14646 */
              ({ /* cicili#Let14650 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let14652 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14653 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn14658 */
                      ({ /* cicili#Let14662 */
                        __auto_type match14661  = take_Box_String ((&lvector ));
                        typeof((((match14661 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let14665 */
                          bool __h_case_result  = (true  &&  (((match14661 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14666 */
                                (ptr  =  (((match14661 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14671 */
                              ({ /* cicili#Progn14673 */
                                free (((void *)ptr ));
                                Buffer_Char (print_StringBuffer_Char (sb , toArray_String (rvector ), len_String (rvector )));
                              });
                            }) : ({ /* cicili#Let14681 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14683 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let14688 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let14690 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn14691 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14693 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn14695 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn14700 */
                            ({ /* cicili#Let14703 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let14707 */
                                __auto_type match14706  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match14706 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let14710 */
                                  bool __h_case_result  = (true  &&  (((match14706 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14711 */
                                        (unboxed  =  (((match14706 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn14716 */
                                      ({ /* cicili#Let14720 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let14722 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14723 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn14728 */
                                              Buffer_Char (print_StringBuffer_Char (copySlice_StringBuffer_Char (sbs , cur , size ), toArray_String (rvector ), len_String (rvector )));
                                            }) : ({ /* cicili#Let14737 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let14739 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn14740 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn14745 */
                                                    append_String (copySlice_String (veci , cur , size ), rvector );
                                                  }) : ({ /* cicili#Let14751 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn14753 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let14758 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn14760 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let14765 */
                            // ----------
                            ;
                            ({ /* cicili#Progn14767 */
                              clone_Box_String (lvector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let14772 */
              // ----------
              ;
              ({ /* cicili#Progn14774 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String push_String (Char item , String vector ) {
  return ({ /* cicili#Let14780 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let14784 */
        __auto_type match14783  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match14783 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let14787 */
          bool __h_case_result  = (true  &&  (((match14783 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14788 */
                (unboxed  =  (((match14783 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn14793 */
              ({ /* cicili#Let14797 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let14799 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14800 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn14805 */
                      ({ /* cicili#Let14809 */
                        __auto_type match14808  = take_Box_String ((&vector ));
                        typeof((((match14808 . __h_data ). Just ). __h_0_mem )) ptr ;
                        // ----------
                        ;
                        ({ /* cicili#Let14812 */
                          bool __h_case_result  = (true  &&  (((match14808 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14813 */
                                (ptr  =  (((match14808 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14818 */
                              ({ /* cicili#Progn14820 */
                                free (((void *)ptr ));
                                Buffer_Char (put_StringBuffer_Char (sb , item ));
                              });
                            }) : ({ /* cicili#Let14826 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14828 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let14833 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cur ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let14835 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn14836 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14838 */
                                  (cur  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn14840 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn14845 */
                            ({ /* cicili#Let14848 */
                              __auto_type __h_matchbox  = vec ;
                              // ----------
                              ({ /* cicili#Let14852 */
                                __auto_type match14851  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                typeof((((match14851 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                // ----------
                                ;
                                ({ /* cicili#Let14855 */
                                  bool __h_case_result  = (true  &&  (((match14851 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14856 */
                                        (unboxed  =  (((match14851 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn14861 */
                                      ({ /* cicili#Let14865 */
                                        typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sbs ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let14867 */
                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14868 */
                                                (sbs  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn14873 */
                                              Buffer_Char (put_StringBuffer_Char (copySlice_StringBuffer_Char (sbs , cur , size ), item ));
                                            }) : ({ /* cicili#Let14880 */
                                              typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) veci ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let14882 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn14883 */
                                                      (veci  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn14888 */
                                                    push_String (item , copySlice_String (veci , cur , size ));
                                                  }) : ({ /* cicili#Let14894 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn14896 */
                                                      clone_Box_String (vec );
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let14901 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn14903 */
                                        None_Char ();
                                      });
                                    }));
                                });
                              });
                            });
                          }) : ({ /* cicili#Let14908 */
                            // ----------
                            ;
                            ({ /* cicili#Progn14910 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let14915 */
              // ----------
              ;
              ({ /* cicili#Progn14917 */
                None_Char ();
              });
            }));
        });
      });
    });
}
String take_String (size_t len , String vector ) {
  return ({ /* cicili#Let14923 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let14927 */
        __auto_type match14926  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match14926 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let14930 */
          bool __h_case_result  = (true  &&  (((match14926 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn14931 */
                (unboxed  =  (((match14926 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn14936 */
              ({ /* cicili#Let14940 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let14942 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn14943 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn14948 */
                      ({ /* cicili#Let14952 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let14954 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn14955 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn14960 */
                              (((len  <=  0 )) ? Slice_Char (clone_Box_String (vector ), 0, 0) : (((len  <  cursor  )) ? Slice_Char (clone_Box_String (vector ), 0, len ) : Slice_Char (clone_Box_String (vector ), 0, 0)));
                            }) : ({ /* cicili#Let14972 */
                              // ----------
                              ;
                              ({ /* cicili#Progn14974 */
                                Slice_Char (clone_Box_String (vector ), 0, 0);
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let14980 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let14982 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn14983 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn14985 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn14987 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn14992 */
                            (((len  <=  0 )) ? Slice_Char (clone_Box_String (vec ), cursor , 0) : (((len  <  size  )) ? Slice_Char (clone_Box_String (vec ), cursor , len ) : Slice_Char (clone_Box_String (vec ), cursor , 0)));
                          }) : ({ /* cicili#Let15004 */
                            // ----------
                            ;
                            ({ /* cicili#Progn15006 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let15011 */
              // ----------
              ;
              ({ /* cicili#Progn15013 */
                None_Char ();
              });
            }));
        });
      });
    });
}
Maybe_Char last_String (String vector ) {
  return ({ /* cicili#Let15020 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let15024 */
        __auto_type match15023  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match15023 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let15027 */
          bool __h_case_result  = (true  &&  (((match15023 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15028 */
                (unboxed  =  (((match15023 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn15033 */
              ({ /* cicili#Let15037 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let15039 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn15040 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15045 */
                      ({ /* cicili#Let15049 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let15051 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn15052 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn15054 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn15059 */
                              Just_Char ((*(buffer  +  (cursor  -  1 ) )));
                            }) : ({ /* cicili#Let15064 */
                              // ----------
                              ;
                              ({ /* cicili#Progn15066 */
                                Nothing_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let15071 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let15073 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn15074 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn15076 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn15078 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn15083 */
                            nth_String ((cursor  +  (size  -  1 ) ), vec );
                          }) : ({ /* cicili#Let15088 */
                            // ----------
                            ;
                            ({ /* cicili#Progn15090 */
                              Nothing_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let15095 */
              // ----------
              ;
              ({ /* cicili#Progn15097 */
                Nothing_Char ();
              });
            }));
        });
      });
    });
}
String init_String (String vector ) {
  return ({ /* cicili#Let15103 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let15107 */
        __auto_type match15106  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match15106 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let15110 */
          bool __h_case_result  = (true  &&  (((match15106 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15111 */
                (unboxed  =  (((match15106 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn15116 */
              ({ /* cicili#Let15120 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let15122 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn15123 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15128 */
                      ({ /* cicili#Let15132 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let15134 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn15135 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn15140 */
                              Slice_Char (clone_Box_String (vector ), 0, (cursor  -  1 ));
                            }) : ({ /* cicili#Let15146 */
                              // ----------
                              ;
                              ({ /* cicili#Progn15148 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let15153 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let15155 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn15156 */
                                  (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn15158 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn15160 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn15165 */
                            Slice_Char (clone_Box_String (vec ), cursor , (size  -  1 ));
                          }) : ({ /* cicili#Let15171 */
                            // ----------
                            ;
                            ({ /* cicili#Progn15173 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let15178 */
              // ----------
              ;
              ({ /* cicili#Progn15180 */
                None_Char ();
              });
            }));
        });
      });
    });
}
size_t hasLen_String (String vector , size_t desired ) {
  return ({ /* cicili#Let15185 */
      size_t len  = len_String (vector );
      // ----------
      (((len  <=  desired  )) ? len  : desired );
    });
}
size_t len_String (String vector ) {
  return ({ /* cicili#Let15192 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let15196 */
        __auto_type match15195  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match15195 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let15199 */
          bool __h_case_result  = (true  &&  (((match15195 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15200 */
                (unboxed  =  (((match15195 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn15205 */
              ({ /* cicili#Let15209 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let15211 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn15212 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15217 */
                      ({ /* cicili#Let15221 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let15223 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn15224 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn15229 */
                              cursor ;
                            }) : ({ /* cicili#Let15233 */
                              // ----------
                              ;
                              ({ /* cicili#Progn15235 */
                                0;
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let15239 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let15241 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn15242 */
                              (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn15247 */
                            size ;
                          }) : ({ /* cicili#Let15251 */
                            // ----------
                            ;
                            ({ /* cicili#Progn15253 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let15257 */
              // ----------
              ;
              ({ /* cicili#Progn15259 */
                0;
              });
            }));
        });
      });
    });
}
String tail_String (String vector ) {
  return drop_String (1, vector );
}
String drop_String (size_t len , String vector ) {
  return ({ /* cicili#Let15267 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let15271 */
        __auto_type match15270  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match15270 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let15274 */
          bool __h_case_result  = (true  &&  (((match15270 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15275 */
                (unboxed  =  (((match15270 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn15280 */
              ({ /* cicili#Let15284 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let15286 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn15287 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15292 */
                      ({ /* cicili#Let15296 */
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let15298 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  ({ /* cicili#Progn15299 */
                                (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn15304 */
                              (((len  <=  0 )) ? Slice_Char (clone_Box_String (vector ), 0, cursor ) : (((len  <  cursor  )) ? Slice_Char (clone_Box_String (vector ), len , (cursor  -  len  )) : Slice_Char (clone_Box_String (vector ), 0, 0)));
                            }) : ({ /* cicili#Let15316 */
                              // ----------
                              ;
                              ({ /* cicili#Progn15318 */
                                None_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let15323 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vec ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let15325 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn15326 */
                                (vec  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn15328 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn15333 */
                            drop_String ((cursor  +  len  ), vec );
                          }) : ({ /* cicili#Let15338 */
                            // ----------
                            ;
                            ({ /* cicili#Progn15340 */
                              clone_Box_String (vector );
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let15345 */
              // ----------
              ;
              ({ /* cicili#Progn15347 */
                None_Char ();
              });
            }));
        });
      });
    });
}
Maybe_Char head_String (String vector ) {
  return ({ /* cicili#Let15354 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let15358 */
        __auto_type match15357  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match15357 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let15361 */
          bool __h_case_result  = (true  &&  (((match15357 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15362 */
                (unboxed  =  (((match15357 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn15367 */
              ({ /* cicili#Let15371 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let15373 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn15374 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15379 */
                      ({ /* cicili#Let15383 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let15385 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn15386 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn15388 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn15393 */
                              (((cursor  >  0 )) ? Just_Char ((*buffer )) : Nothing_Char ());
                            }) : ({ /* cicili#Let15400 */
                              // ----------
                              ;
                              ({ /* cicili#Progn15402 */
                                Nothing_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let15407 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      // ----------
                      ;
                      ({ /* cicili#Let15409 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  (({ /* cicili#Progn15410 */
                                (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn15412 */
                                (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn15417 */
                            nth_String (cursor , vector );
                          }) : ({ /* cicili#Let15422 */
                            // ----------
                            ;
                            ({ /* cicili#Progn15424 */
                              Nothing_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let15429 */
              // ----------
              ;
              ({ /* cicili#Progn15431 */
                Nothing_Char ();
              });
            }));
        });
      });
    });
}
Maybe_Char nth_String (size_t index , String vector ) {
  return ({ /* cicili#Let15438 */
      __auto_type __h_matchbox  = vector ;
      // ----------
      ({ /* cicili#Let15442 */
        __auto_type match15441  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match15441 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let15445 */
          bool __h_case_result  = (true  &&  (((match15441 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15446 */
                (unboxed  =  (((match15441 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn15451 */
              ({ /* cicili#Let15455 */
                typeof((((unboxed -> __h_data ). Buffer ). __h_0_mem )) sb ;
                // ----------
                ;
                ({ /* cicili#Let15457 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn15458 */
                        (sb  =  (((unboxed -> __h_data ). Buffer ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15463 */
                      ({ /* cicili#Let15467 */
                        typeof((((sb . __h_data ). Buffered ). __h_0_mem )) buffer ;
                        typeof((((sb . __h_data ). Buffered ). __h_1_mem )) cursor ;
                        // ----------
                        ;
                        ({ /* cicili#Let15469 */
                          bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Buffered_t  ) &&  (({ /* cicili#Progn15470 */
                                  (buffer  =  (((sb . __h_data ). Buffered ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn15472 */
                                  (cursor  =  (((sb . __h_data ). Buffered ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn15477 */
                              ((((index  >=  0 ) &&  (index  <  cursor  ) )) ? Just_Char ((*(buffer  +  index  ))) : Nothing_Char ());
                            }) : ({ /* cicili#Let15484 */
                              // ----------
                              ;
                              ({ /* cicili#Progn15486 */
                                Nothing_Char ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let15491 */
                      typeof((((unboxed -> __h_data ). Slice ). __h_0_mem )) vector ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_1_mem )) cursor ;
                      typeof((((unboxed -> __h_data ). Slice ). __h_2_mem )) size ;
                      // ----------
                      ;
                      ({ /* cicili#Let15493 */
                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Slice_t  ) &&  ((({ /* cicili#Progn15494 */
                                  (vector  =  (((unboxed -> __h_data ). Slice ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn15496 */
                                  (cursor  =  (((unboxed -> __h_data ). Slice ). __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn15498 */
                                (size  =  (((unboxed -> __h_data ). Slice ). __h_2_mem ) );
                                true ;
                              }) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn15503 */
                            ((((index  >=  0 ) &&  (index  <  size  ) )) ? nth_String ((cursor  +  index  ), vector ) : Nothing_Char ());
                          }) : ({ /* cicili#Let15510 */
                            // ----------
                            ;
                            ({ /* cicili#Progn15512 */
                              Nothing_Char ();
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let15517 */
              // ----------
              ;
              ({ /* cicili#Progn15519 */
                Nothing_Char ();
              });
            }));
        });
      });
    });
}
void free_String_x (String_x * this_ptr ) {
  { /* cicili#Let15524 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let15528 */
      typeof((((this -> __h_data ). Buffer ). __h_0_mem )) sb ;
      // ----------
      ;
      ({ /* cicili#Let15530 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Buffer_t  ) &&  ({ /* cicili#Progn15531 */
              (sb  =  (((this -> __h_data ). Buffer ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block15537 */
            free_StringBuffer_Char ((&sb ));
          }
        else
          { /* cicili#Let15543 */
            typeof((((this -> __h_data ). Slice ). __h_0_mem )) vector ;
            // ----------
            ;
            ({ /* cicili#Let15545 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Slice_t  ) &&  ({ /* cicili#Progn15546 */
                    (vector  =  (((this -> __h_data ). Slice ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block15552 */
                  free_Box_String ((&vector ));
                }
            });
          }
      });
    }
    free (this );
  }
}
String__H_Table * const get_String__H_Table () {
  static String__H_Table table  = { free_String_x , iterator_String , clear_String , resize_String , pure_String , pureCapacity_String , toArray_String , wrap_String , show_String , copy_String , copySlice_String , replaceAt_String , deleteAt_String , insertAt_String , reverse_String , append_String , push_String , take_String , last_String , init_String , hasLen_String , len_String , tail_String , drop_String , head_String , nth_String };
  return (&table );
}
String Buffer_Char (StringBuffer_Char buffer ) {
  { /* cicili#Let15562 */
    String_x instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h_Buffer_t , .__h_data.Buffer = { buffer }});
    return new_Box_String (instance );
  }
}
String Slice_Char (String vector , size_t cursor , size_t size ) {
  { /* cicili#Let15570 */
    String_x instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h_Slice_t , .__h_data.Slice = { vector , cursor , size }});
    return new_Box_String (instance );
  }
}
String None_Char () {
  { /* cicili#Let15577 */
    String_x instance  = malloc (sizeof(class_String));
    // ----------
    (*instance ) = ((class_String){ get_String__H_Table (), __h___t });
    return new_Box_String (instance );
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
  { /* cicili#Let15595 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_String Nothing_String () {
  { /* cicili#Let15600 */
    Maybe_String instance  = ((Maybe_String){ get_Maybe_String__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_String__H_IMPL__ */ 
#ifndef __Range_int__H_IMPL__
#define __Range_int__H_IMPL__
int show_Range_int (CFile file , Range_int list ) {
  return ({ /* cicili#Let15611 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let15613 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15614 */
              (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15619 */
            (fprintf (file , "%d", from ) +  fprintf (file , "%s", " ") );
          }) : ({ /* cicili#Let15628 */
            // ----------
            ;
            ({ /* cicili#Progn15630 */
              0;
            });
          }));
      });
    });
}
Range_int drop_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let15636 */
      // ----------
      ;
      ({ /* cicili#Let15638 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15642 */
            ({ /* cicili#Let15644 */
              __auto_type ne  = next_Range_int (list );
              // ----------
              ({ /* cicili#Let15649 */
                // ----------
                ;
                ({ /* cicili#Let15651 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15655 */
                      drop_Range_int ((--len ), ne );
                    }) : ({ /* cicili#Let15660 */
                      // ----------
                      ;
                      ({ /* cicili#Progn15662 */
                        list ;
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let15666 */
            // ----------
            ;
            ({ /* cicili#Progn15668 */
              list ;
            });
          }));
      });
    });
}
List_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let15674 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let15676 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15677 */
                (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  (len  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15682 */
            ({ /* cicili#Let15684 */
              __auto_type ne  = next_Range_int (list );
              // ----------
              ({ /* cicili#Let15689 */
                // ----------
                ;
                ({ /* cicili#Let15691 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15695 */
                      Cons_int (from , take_Range_int ((--len ), ne ));
                    }) : ({ /* cicili#Let15701 */
                      // ----------
                      ;
                      ({ /* cicili#Progn15703 */
                        Cons_int (from , Nil_int ());
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let15709 */
            // ----------
            ;
            ({ /* cicili#Progn15711 */
              Nil_int ();
            });
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let15718 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) to ;
      typeof((((list -> __h_data ). Cons ). __h_2_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let15720 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((({ /* cicili#Progn15721 */
                    (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn15723 */
                    (to  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn15725 */
                  (step  =  (((list -> __h_data ). Cons ). __h_2_mem ) );
                  true ;
                }) ) &&  ((from  +  step  ) <=  to  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15730 */
            Cons_Range_int ((from  +  step  ), to , step );
          }) : ({ /* cicili#Let15735 */
            // ----------
            ;
            ({ /* cicili#Progn15737 */
              Nil_Range_int ();
            });
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let15742 */
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
  { /* cicili#Let15751 */
    Range_int instance  = malloc (sizeof(class_Range_int));
    // ----------
    (*instance ) = ((class_Range_int){ get_Range_int__H_Table (), __h_Cons_t , .__h_data.Cons = { from , to , step }});
    return instance ;
  }
}
Range_int Nil_Range_int () {
  { /* cicili#Let15757 */
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
  return ({ /* cicili#Let15774 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let15776 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn15777 */
              (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15782 */
            (fprintf (file , "%c", from ) +  fprintf (file , "%s", " ") );
          }) : ({ /* cicili#Let15791 */
            // ----------
            ;
            ({ /* cicili#Progn15793 */
              0;
            });
          }));
      });
    });
}
Range_char drop_Range_char (int len , Range_char list ) {
  return ({ /* cicili#Let15799 */
      // ----------
      ;
      ({ /* cicili#Let15801 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15805 */
            ({ /* cicili#Let15807 */
              __auto_type ne  = next_Range_char (list );
              // ----------
              ({ /* cicili#Let15812 */
                // ----------
                ;
                ({ /* cicili#Let15814 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15818 */
                      drop_Range_char ((--len ), ne );
                    }) : ({ /* cicili#Let15823 */
                      // ----------
                      ;
                      ({ /* cicili#Progn15825 */
                        list ;
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let15829 */
            // ----------
            ;
            ({ /* cicili#Progn15831 */
              list ;
            });
          }));
      });
    });
}
List_char take_Range_char (int len , Range_char list ) {
  return ({ /* cicili#Let15837 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let15839 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15840 */
                (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  (len  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15845 */
            ({ /* cicili#Let15847 */
              __auto_type ne  = next_Range_char (list );
              // ----------
              ({ /* cicili#Let15852 */
                // ----------
                ;
                ({ /* cicili#Let15854 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn15858 */
                      Cons_char (from , take_Range_char ((--len ), ne ));
                    }) : ({ /* cicili#Let15864 */
                      // ----------
                      ;
                      ({ /* cicili#Progn15866 */
                        Cons_char (from , Nil_char ());
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let15872 */
            // ----------
            ;
            ({ /* cicili#Progn15874 */
              Nil_char ();
            });
          }));
      });
    });
}
Range_char next_Range_char (Range_char list ) {
  return ({ /* cicili#Let15881 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) to ;
      typeof((((list -> __h_data ). Cons ). __h_2_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let15883 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((({ /* cicili#Progn15884 */
                    (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn15886 */
                    (to  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn15888 */
                  (step  =  (((list -> __h_data ). Cons ). __h_2_mem ) );
                  true ;
                }) ) &&  ((from  +  step  ) <=  to  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15893 */
            Cons_Range_char ((from  +  step  ), to , step );
          }) : ({ /* cicili#Let15898 */
            // ----------
            ;
            ({ /* cicili#Progn15900 */
              Nil_Range_char ();
            });
          }));
      });
    });
}
void free_Range_char (Range_char * this_ptr ) {
  { /* cicili#Let15905 */
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
  { /* cicili#Let15914 */
    Range_char instance  = malloc (sizeof(class_Range_char));
    // ----------
    (*instance ) = ((class_Range_char){ get_Range_char__H_Table (), __h_Cons_t , .__h_data.Cons = { from , to , step }});
    return instance ;
  }
}
Range_char Nil_Range_char () {
  { /* cicili#Let15920 */
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
  { /* cicili#Let15944 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let15949 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __List_List_Bool__H_IMPL__
#define __List_List_Bool__H_IMPL__
List_Bool * toArray_List_List_Bool (List_List_Bool list ) {
  List_Bool * array (List_List_Bool list , size_t count ) {
    return ({ /* cicili#Let15959 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let15961 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15962 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn15964 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn15969 */
              ({ /* cicili#Let15971 */
                List_Bool * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let15975 */
              // ----------
              ;
              ({ /* cicili#Progn15977 */
                ((List_Bool *)calloc (count , sizeof(List_Bool)));
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
List_List_Bool pure_List_List_Bool (const List_Bool * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_List_Bool () : ({ /* cicili#Let15988 */
        List_Bool item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_Bool () : Cons_List_Bool (item , pure_List_List_Bool ((++buf ), (--len ))));
      }));
}
size_t show_List_List_Bool (CFile file , List_List_Bool list ) {
  return ({ /* cicili#Let15998 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16000 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16001 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16003 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16008 */
            (({ /* cicili#Let16012 */
                // ----------
                ;
                ({ /* cicili#Let16014 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16018 */
                      (show_List_Bool (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let16028 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16030 */
                        show_List_Bool (file , head );
                      });
                    }));
                });
              }) +  show_List_List_Bool (file , tail ) );
          }) : ({ /* cicili#Let16041 */
            // ----------
            ;
            ({ /* cicili#Progn16043 */
              0;
            });
          }));
      });
    });
}
List_List_Bool copy_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let16049 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16051 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16052 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16054 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16059 */
            Cons_List_Bool (head , copy_List_List_Bool (tail ));
          }) : ({ /* cicili#Let16065 */
            // ----------
            ;
            ({ /* cicili#Progn16067 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool replaceAt_List_List_Bool (List_List_Bool list , List_Bool item , size_t index ) {
  return ({ /* cicili#Let16074 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16076 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16077 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16079 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16084 */
            Cons_List_Bool (head , replaceAt_List_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let16090 */
            // ----------
            ;
            ({ /* cicili#Progn16092 */
              ({ /* cicili#Let16096 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let16098 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16099 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16104 */
                      Cons_List_Bool (item , copy_List_List_Bool (taill ));
                    }) : ({ /* cicili#Let16110 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16112 */
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
List_List_Bool deleteAt_List_List_Bool (List_List_Bool list , size_t index ) {
  return ({ /* cicili#Let16119 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16121 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16122 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16124 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16129 */
            Cons_List_Bool (head , deleteAt_List_List_Bool (tail , (index  -  1 )));
          }) : ({ /* cicili#Let16135 */
            // ----------
            ;
            ({ /* cicili#Progn16137 */
              ({ /* cicili#Let16141 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let16143 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16144 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16149 */
                      copy_List_List_Bool (taill );
                    }) : ({ /* cicili#Let16154 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16156 */
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
List_List_Bool insertAt_List_List_Bool (List_List_Bool list , List_Bool item , size_t index ) {
  return ({ /* cicili#Let16163 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16165 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16166 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16168 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16173 */
            Cons_List_Bool (head , insertAt_List_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let16179 */
            // ----------
            ;
            ({ /* cicili#Progn16181 */
              Cons_List_Bool (item , copy_List_List_Bool (list ));
            });
          }));
      });
    });
}
List_List_Bool replace_List_List_Bool (List_List_Bool list , List_Bool item , List_List_Bool aimed ) {
  return ({ /* cicili#Let16189 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16191 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16192 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16194 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16199 */
            Cons_List_Bool (head , replace_List_List_Bool (tail , item , aimed ));
          }) : ({ /* cicili#Let16205 */
            // ----------
            ;
            ({ /* cicili#Progn16207 */
              ({ /* cicili#Let16211 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let16213 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16214 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16219 */
                      Cons_List_Bool (item , copy_List_List_Bool (taill ));
                    }) : ({ /* cicili#Let16225 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16227 */
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
  return ({ /* cicili#Let16234 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16236 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16237 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16239 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16244 */
            Cons_List_Bool (head , delete_List_List_Bool (tail , aimed ));
          }) : ({ /* cicili#Let16250 */
            // ----------
            ;
            ({ /* cicili#Progn16252 */
              ({ /* cicili#Let16256 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let16258 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16259 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16264 */
                      copy_List_List_Bool (taill );
                    }) : ({ /* cicili#Let16269 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16271 */
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
  return ({ /* cicili#Let16278 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16280 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16281 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16283 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16288 */
            Cons_List_Bool (head , insert_List_List_Bool (tail , item , rlist ));
          }) : ({ /* cicili#Let16294 */
            // ----------
            ;
            ({ /* cicili#Progn16296 */
              Cons_List_Bool (item , copy_List_List_Bool (rlist ));
            });
          }));
      });
    });
}
List_List_Bool reverse_List_List_Bool (List_List_Bool list ) {
  List_List_Bool _reverse (List_List_Bool list , List_List_Bool rlist ) {
    return ({ /* cicili#Let16305 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let16307 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16308 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16310 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn16315 */
              _reverse (tail , Cons_List_Bool (head , rlist ));
            }) : ({ /* cicili#Let16320 */
              // ----------
              ;
              ({ /* cicili#Progn16322 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let16326 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16328 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16329 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16331 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16336 */
            _reverse (tail , Cons_List_Bool (head , Nil_List_Bool ()));
          }) : ({ /* cicili#Let16342 */
            // ----------
            ;
            ({ /* cicili#Progn16344 */
              list ;
            });
          }));
      });
    });
}
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist ) {
  return ({ /* cicili#Let16350 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16352 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16353 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16355 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16360 */
            Cons_List_Bool (head , append_List_List_Bool (tail , rlist ));
          }) : ({ /* cicili#Let16366 */
            // ----------
            ;
            ({ /* cicili#Progn16368 */
              copy_List_List_Bool (rlist );
            });
          }));
      });
    });
}
List_List_Bool push_List_List_Bool (List_Bool item , List_List_Bool list ) {
  return Cons_List_Bool (item , copy_List_List_Bool (list ));
}
List_List_Bool take_List_List_Bool (size_t len , List_List_Bool list ) {
  return (((len  <=  0 )) ? Nil_List_Bool () : ({ /* cicili#Let16381 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let16383 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16384 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16386 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn16391 */
              Cons_List_Bool (head , take_List_List_Bool ((--len ), tail ));
            }) : ({ /* cicili#Let16397 */
              // ----------
              ;
              ({ /* cicili#Progn16399 */
                Nil_List_Bool ();
              });
            }));
        });
      }));
}
List_List_Bool last_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let16406 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16408 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16409 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16414 */
            ({ /* cicili#Let16418 */
              // ----------
              ;
              ({ /* cicili#Let16420 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn16424 */
                    copy_List_List_Bool (list );
                  }) : ({ /* cicili#Let16429 */
                    // ----------
                    ;
                    ({ /* cicili#Progn16431 */
                      last_List_List_Bool (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let16436 */
            // ----------
            ;
            ({ /* cicili#Progn16438 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool init_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let16446 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16448 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16449 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16451 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16456 */
            Cons_List_Bool (head , init_List_List_Bool (tail ));
          }) : ({ /* cicili#Let16462 */
            // ----------
            ;
            ({ /* cicili#Progn16464 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_Bool (List_List_Bool list , size_t desired ) {
  return ({ /* cicili#Let16471 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16473 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16474 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16479 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_Bool (tail , (--desired )) ));
          }) : ({ /* cicili#Let16485 */
            // ----------
            ;
            ({ /* cicili#Progn16487 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let16493 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16495 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16496 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16501 */
            (1 +  len_List_List_Bool (tail ) );
          }) : ({ /* cicili#Let16506 */
            // ----------
            ;
            ({ /* cicili#Progn16508 */
              0;
            });
          }));
      });
    });
}
List_List_Bool tail_List_List_Bool (List_List_Bool list ) {
  return drop_List_List_Bool (1, list );
}
List_List_Bool drop_List_List_Bool (size_t len , List_List_Bool list ) {
  return (((len  <=  0 )) ? copy_List_List_Bool (list ) : ({ /* cicili#Let16519 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let16521 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16522 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn16527 */
              drop_List_List_Bool ((--len ), tail );
            }) : ({ /* cicili#Let16532 */
              // ----------
              ;
              ({ /* cicili#Progn16534 */
                Nil_List_Bool ();
              });
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let16542 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let16544 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16545 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16550 */
            Just_List_Bool (head );
          }) : ({ /* cicili#Let16555 */
            // ----------
            ;
            ({ /* cicili#Progn16557 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool nthcdr_List_List_Bool (size_t index , List_List_Bool list ) {
  return ({ /* cicili#Let16564 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16566 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16567 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16572 */
            nthcdr_List_List_Bool ((--index ), tail );
          }) : ({ /* cicili#Let16577 */
            // ----------
            ;
            ({ /* cicili#Progn16579 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_Bool nth_List_List_Bool (size_t index , List_List_Bool list ) {
  return ({ /* cicili#Let16586 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16588 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16589 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16591 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16596 */
            (((index  ==  0 )) ? Just_List_Bool (head ) : (((index  <  0 )) ? Nothing_List_Bool () : nth_List_List_Bool ((--index ), tail )));
          }) : ({ /* cicili#Let16605 */
            // ----------
            ;
            ({ /* cicili#Progn16607 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let16612 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let16616 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16618 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16619 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block16625 */
            { /* cicili#Block16627 */
              free (this );
              free_List_List_Bool ((&tail ));
            }
          }
        else
          { /* cicili#Let16635 */
            // ----------
            ;
            ({ /* cicili#Let16637 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block16642 */
                  { /* cicili#Block16644 */
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
  { /* cicili#Let16655 */
    List_List_Bool instance  = malloc (sizeof(class_List_List_Bool));
    // ----------
    (*instance ) = ((class_List_List_Bool){ get_List_List_Bool__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_Bool Nil_List_Bool () {
  { /* cicili#Let16661 */
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
  { /* cicili#Let16678 */
    Maybe_List_List_Bool instance  = ((Maybe_List_List_Bool){ get_Maybe_List_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_Bool Nothing_List_List_Bool () {
  { /* cicili#Let16683 */
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
  { /* cicili#Let16701 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let16706 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __List_List_int__H_IMPL__
#define __List_List_int__H_IMPL__
List_int * toArray_List_List_int (List_List_int list ) {
  List_int * array (List_List_int list , size_t count ) {
    return ({ /* cicili#Let16716 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let16718 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16719 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16721 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn16726 */
              ({ /* cicili#Let16728 */
                List_int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let16732 */
              // ----------
              ;
              ({ /* cicili#Progn16734 */
                ((List_int *)calloc (count , sizeof(List_int)));
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
List_List_int pure_List_List_int (const List_int * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_List_int () : ({ /* cicili#Let16745 */
        List_int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_int () : Cons_List_int (item , pure_List_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_List_int (CFile file , List_List_int list ) {
  return ({ /* cicili#Let16755 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16757 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16758 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16760 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16765 */
            (({ /* cicili#Let16769 */
                // ----------
                ;
                ({ /* cicili#Let16771 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16775 */
                      (show_List_int (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let16785 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16787 */
                        show_List_int (file , head );
                      });
                    }));
                });
              }) +  show_List_List_int (file , tail ) );
          }) : ({ /* cicili#Let16798 */
            // ----------
            ;
            ({ /* cicili#Progn16800 */
              0;
            });
          }));
      });
    });
}
List_List_int copy_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let16806 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16808 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn16809 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn16811 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16816 */
            Cons_List_int (head , copy_List_List_int (tail ));
          }) : ({ /* cicili#Let16822 */
            // ----------
            ;
            ({ /* cicili#Progn16824 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , size_t index ) {
  return ({ /* cicili#Let16831 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16833 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16834 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16836 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16841 */
            Cons_List_int (head , replaceAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let16847 */
            // ----------
            ;
            ({ /* cicili#Progn16849 */
              ({ /* cicili#Let16853 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let16855 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16856 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16861 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* cicili#Let16867 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16869 */
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
List_List_int deleteAt_List_List_int (List_List_int list , size_t index ) {
  return ({ /* cicili#Let16876 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16878 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16879 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16881 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16886 */
            Cons_List_int (head , deleteAt_List_List_int (tail , (index  -  1 )));
          }) : ({ /* cicili#Let16892 */
            // ----------
            ;
            ({ /* cicili#Progn16894 */
              ({ /* cicili#Let16898 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let16900 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16901 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16906 */
                      copy_List_List_int (taill );
                    }) : ({ /* cicili#Let16911 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16913 */
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
List_List_int insertAt_List_List_int (List_List_int list , List_int item , size_t index ) {
  return ({ /* cicili#Let16920 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16922 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16923 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16925 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16930 */
            Cons_List_int (head , insertAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let16936 */
            // ----------
            ;
            ({ /* cicili#Progn16938 */
              Cons_List_int (item , copy_List_List_int (list ));
            });
          }));
      });
    });
}
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed ) {
  return ({ /* cicili#Let16946 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16948 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16949 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16951 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn16956 */
            Cons_List_int (head , replace_List_List_int (tail , item , aimed ));
          }) : ({ /* cicili#Let16962 */
            // ----------
            ;
            ({ /* cicili#Progn16964 */
              ({ /* cicili#Let16968 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let16970 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn16971 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn16976 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* cicili#Let16982 */
                      // ----------
                      ;
                      ({ /* cicili#Progn16984 */
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
  return ({ /* cicili#Let16991 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let16993 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn16994 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn16996 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17001 */
            Cons_List_int (head , delete_List_List_int (tail , aimed ));
          }) : ({ /* cicili#Let17007 */
            // ----------
            ;
            ({ /* cicili#Progn17009 */
              ({ /* cicili#Let17013 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let17015 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17016 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn17021 */
                      copy_List_List_int (taill );
                    }) : ({ /* cicili#Let17026 */
                      // ----------
                      ;
                      ({ /* cicili#Progn17028 */
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
  return ({ /* cicili#Let17035 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17037 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17038 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17040 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17045 */
            Cons_List_int (head , insert_List_List_int (tail , item , rlist ));
          }) : ({ /* cicili#Let17051 */
            // ----------
            ;
            ({ /* cicili#Progn17053 */
              Cons_List_int (item , copy_List_List_int (rlist ));
            });
          }));
      });
    });
}
List_List_int reverse_List_List_int (List_List_int list ) {
  List_List_int _reverse (List_List_int list , List_List_int rlist ) {
    return ({ /* cicili#Let17062 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let17064 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17065 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17067 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn17072 */
              _reverse (tail , Cons_List_int (head , rlist ));
            }) : ({ /* cicili#Let17077 */
              // ----------
              ;
              ({ /* cicili#Progn17079 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let17083 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17085 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17086 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17088 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17093 */
            _reverse (tail , Cons_List_int (head , Nil_List_int ()));
          }) : ({ /* cicili#Let17099 */
            // ----------
            ;
            ({ /* cicili#Progn17101 */
              list ;
            });
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let17107 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17109 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17110 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17112 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17117 */
            Cons_List_int (head , append_List_List_int (tail , rlist ));
          }) : ({ /* cicili#Let17123 */
            // ----------
            ;
            ({ /* cicili#Progn17125 */
              copy_List_List_int (rlist );
            });
          }));
      });
    });
}
List_List_int push_List_List_int (List_int item , List_List_int list ) {
  return Cons_List_int (item , copy_List_List_int (list ));
}
List_List_int take_List_List_int (size_t len , List_List_int list ) {
  return (((len  <=  0 )) ? Nil_List_int () : ({ /* cicili#Let17138 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let17140 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17141 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17143 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn17148 */
              Cons_List_int (head , take_List_List_int ((--len ), tail ));
            }) : ({ /* cicili#Let17154 */
              // ----------
              ;
              ({ /* cicili#Progn17156 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let17163 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17165 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17166 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17171 */
            ({ /* cicili#Let17175 */
              // ----------
              ;
              ({ /* cicili#Let17177 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn17181 */
                    copy_List_List_int (list );
                  }) : ({ /* cicili#Let17186 */
                    // ----------
                    ;
                    ({ /* cicili#Progn17188 */
                      last_List_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let17193 */
            // ----------
            ;
            ({ /* cicili#Progn17195 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int init_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let17203 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17205 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17206 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17208 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17213 */
            Cons_List_int (head , init_List_List_int (tail ));
          }) : ({ /* cicili#Let17219 */
            // ----------
            ;
            ({ /* cicili#Progn17221 */
              Nil_List_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_int (List_List_int list , size_t desired ) {
  return ({ /* cicili#Let17228 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17230 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17231 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17236 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_int (tail , (--desired )) ));
          }) : ({ /* cicili#Let17242 */
            // ----------
            ;
            ({ /* cicili#Progn17244 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let17250 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17252 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17253 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17258 */
            (1 +  len_List_List_int (tail ) );
          }) : ({ /* cicili#Let17263 */
            // ----------
            ;
            ({ /* cicili#Progn17265 */
              0;
            });
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return drop_List_List_int (1, list );
}
List_List_int drop_List_List_int (size_t len , List_List_int list ) {
  return (((len  <=  0 )) ? copy_List_List_int (list ) : ({ /* cicili#Let17276 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let17278 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17279 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn17284 */
              drop_List_List_int ((--len ), tail );
            }) : ({ /* cicili#Let17289 */
              // ----------
              ;
              ({ /* cicili#Progn17291 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let17299 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let17301 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17302 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17307 */
            Just_List_int (head );
          }) : ({ /* cicili#Let17312 */
            // ----------
            ;
            ({ /* cicili#Progn17314 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
List_List_int nthcdr_List_List_int (size_t index , List_List_int list ) {
  return ({ /* cicili#Let17321 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17323 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17324 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17329 */
            nthcdr_List_List_int ((--index ), tail );
          }) : ({ /* cicili#Let17334 */
            // ----------
            ;
            ({ /* cicili#Progn17336 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (size_t index , List_List_int list ) {
  return ({ /* cicili#Let17343 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17345 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17346 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17348 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17353 */
            (((index  ==  0 )) ? Just_List_int (head ) : (((index  <  0 )) ? Nothing_List_int () : nth_List_List_int ((--index ), tail )));
          }) : ({ /* cicili#Let17362 */
            // ----------
            ;
            ({ /* cicili#Progn17364 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let17369 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let17373 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17375 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17376 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block17382 */
            { /* cicili#Block17384 */
              free (this );
              free_List_List_int ((&tail ));
            }
          }
        else
          { /* cicili#Let17392 */
            // ----------
            ;
            ({ /* cicili#Let17394 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block17399 */
                  { /* cicili#Block17401 */
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
  { /* cicili#Let17412 */
    List_List_int instance  = malloc (sizeof(class_List_List_int));
    // ----------
    (*instance ) = ((class_List_List_int){ get_List_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_int Nil_List_int () {
  { /* cicili#Let17418 */
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
  { /* cicili#Let17435 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_int Nothing_List_List_int () {
  { /* cicili#Let17440 */
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
  { /* cicili#Let17458 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let17463 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __List_List_char__H_IMPL__
#define __List_List_char__H_IMPL__
List_char * toArray_List_List_char (List_List_char list ) {
  List_char * array (List_List_char list , size_t count ) {
    return ({ /* cicili#Let17473 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let17475 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17476 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17478 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn17483 */
              ({ /* cicili#Let17485 */
                List_char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let17489 */
              // ----------
              ;
              ({ /* cicili#Progn17491 */
                ((List_char *)calloc (count , sizeof(List_char)));
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
List_List_char pure_List_List_char (const List_char * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_List_char () : ({ /* cicili#Let17502 */
        List_char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_char () : Cons_List_char (item , pure_List_List_char ((++buf ), (--len ))));
      }));
}
size_t show_List_List_char (CFile file , List_List_char list ) {
  return ({ /* cicili#Let17512 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17514 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17515 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17517 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17522 */
            (({ /* cicili#Let17526 */
                // ----------
                ;
                ({ /* cicili#Let17528 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn17532 */
                      (show_List_char (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let17542 */
                      // ----------
                      ;
                      ({ /* cicili#Progn17544 */
                        show_List_char (file , head );
                      });
                    }));
                });
              }) +  show_List_List_char (file , tail ) );
          }) : ({ /* cicili#Let17555 */
            // ----------
            ;
            ({ /* cicili#Progn17557 */
              0;
            });
          }));
      });
    });
}
List_List_char copy_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let17563 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17565 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17566 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17568 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17573 */
            Cons_List_char (head , copy_List_List_char (tail ));
          }) : ({ /* cicili#Let17579 */
            // ----------
            ;
            ({ /* cicili#Progn17581 */
              Nil_List_char ();
            });
          }));
      });
    });
}
List_List_char replaceAt_List_List_char (List_List_char list , List_char item , size_t index ) {
  return ({ /* cicili#Let17588 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17590 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17591 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17593 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17598 */
            Cons_List_char (head , replaceAt_List_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let17604 */
            // ----------
            ;
            ({ /* cicili#Progn17606 */
              ({ /* cicili#Let17610 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let17612 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17613 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn17618 */
                      Cons_List_char (item , copy_List_List_char (taill ));
                    }) : ({ /* cicili#Let17624 */
                      // ----------
                      ;
                      ({ /* cicili#Progn17626 */
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
List_List_char deleteAt_List_List_char (List_List_char list , size_t index ) {
  return ({ /* cicili#Let17633 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17635 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17636 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17638 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17643 */
            Cons_List_char (head , deleteAt_List_List_char (tail , (index  -  1 )));
          }) : ({ /* cicili#Let17649 */
            // ----------
            ;
            ({ /* cicili#Progn17651 */
              ({ /* cicili#Let17655 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let17657 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17658 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn17663 */
                      copy_List_List_char (taill );
                    }) : ({ /* cicili#Let17668 */
                      // ----------
                      ;
                      ({ /* cicili#Progn17670 */
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
List_List_char insertAt_List_List_char (List_List_char list , List_char item , size_t index ) {
  return ({ /* cicili#Let17677 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17679 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17680 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17682 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17687 */
            Cons_List_char (head , insertAt_List_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let17693 */
            // ----------
            ;
            ({ /* cicili#Progn17695 */
              Cons_List_char (item , copy_List_List_char (list ));
            });
          }));
      });
    });
}
List_List_char replace_List_List_char (List_List_char list , List_char item , List_List_char aimed ) {
  return ({ /* cicili#Let17703 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17705 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17706 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17708 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17713 */
            Cons_List_char (head , replace_List_List_char (tail , item , aimed ));
          }) : ({ /* cicili#Let17719 */
            // ----------
            ;
            ({ /* cicili#Progn17721 */
              ({ /* cicili#Let17725 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let17727 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17728 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn17733 */
                      Cons_List_char (item , copy_List_List_char (taill ));
                    }) : ({ /* cicili#Let17739 */
                      // ----------
                      ;
                      ({ /* cicili#Progn17741 */
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
  return ({ /* cicili#Let17748 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17750 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17751 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17753 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17758 */
            Cons_List_char (head , delete_List_List_char (tail , aimed ));
          }) : ({ /* cicili#Let17764 */
            // ----------
            ;
            ({ /* cicili#Progn17766 */
              ({ /* cicili#Let17770 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let17772 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17773 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn17778 */
                      copy_List_List_char (taill );
                    }) : ({ /* cicili#Let17783 */
                      // ----------
                      ;
                      ({ /* cicili#Progn17785 */
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
  return ({ /* cicili#Let17792 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17794 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17795 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17797 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17802 */
            Cons_List_char (head , insert_List_List_char (tail , item , rlist ));
          }) : ({ /* cicili#Let17808 */
            // ----------
            ;
            ({ /* cicili#Progn17810 */
              Cons_List_char (item , copy_List_List_char (rlist ));
            });
          }));
      });
    });
}
List_List_char reverse_List_List_char (List_List_char list ) {
  List_List_char _reverse (List_List_char list , List_List_char rlist ) {
    return ({ /* cicili#Let17819 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let17821 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17822 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17824 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn17829 */
              _reverse (tail , Cons_List_char (head , rlist ));
            }) : ({ /* cicili#Let17834 */
              // ----------
              ;
              ({ /* cicili#Progn17836 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let17840 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17842 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17843 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17845 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17850 */
            _reverse (tail , Cons_List_char (head , Nil_List_char ()));
          }) : ({ /* cicili#Let17856 */
            // ----------
            ;
            ({ /* cicili#Progn17858 */
              list ;
            });
          }));
      });
    });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let17864 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17866 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17867 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn17869 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17874 */
            Cons_List_char (head , append_List_List_char (tail , rlist ));
          }) : ({ /* cicili#Let17880 */
            // ----------
            ;
            ({ /* cicili#Progn17882 */
              copy_List_List_char (rlist );
            });
          }));
      });
    });
}
List_List_char push_List_List_char (List_char item , List_List_char list ) {
  return Cons_List_char (item , copy_List_List_char (list ));
}
List_List_char take_List_List_char (size_t len , List_List_char list ) {
  return (((len  <=  0 )) ? Nil_List_char () : ({ /* cicili#Let17895 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let17897 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn17898 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17900 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn17905 */
              Cons_List_char (head , take_List_List_char ((--len ), tail ));
            }) : ({ /* cicili#Let17911 */
              // ----------
              ;
              ({ /* cicili#Progn17913 */
                Nil_List_char ();
              });
            }));
        });
      }));
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let17920 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17922 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17923 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17928 */
            ({ /* cicili#Let17932 */
              // ----------
              ;
              ({ /* cicili#Let17934 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn17938 */
                    copy_List_List_char (list );
                  }) : ({ /* cicili#Let17943 */
                    // ----------
                    ;
                    ({ /* cicili#Progn17945 */
                      last_List_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let17950 */
            // ----------
            ;
            ({ /* cicili#Progn17952 */
              Nil_List_char ();
            });
          }));
      });
    });
}
List_List_char init_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let17960 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17962 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn17963 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn17965 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17970 */
            Cons_List_char (head , init_List_List_char (tail ));
          }) : ({ /* cicili#Let17976 */
            // ----------
            ;
            ({ /* cicili#Progn17978 */
              Nil_List_char ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_char (List_List_char list , size_t desired ) {
  return ({ /* cicili#Let17985 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let17987 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn17988 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn17993 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_char (tail , (--desired )) ));
          }) : ({ /* cicili#Let17999 */
            // ----------
            ;
            ({ /* cicili#Progn18001 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let18007 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18009 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18010 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18015 */
            (1 +  len_List_List_char (tail ) );
          }) : ({ /* cicili#Let18020 */
            // ----------
            ;
            ({ /* cicili#Progn18022 */
              0;
            });
          }));
      });
    });
}
List_List_char tail_List_List_char (List_List_char list ) {
  return drop_List_List_char (1, list );
}
List_List_char drop_List_List_char (size_t len , List_List_char list ) {
  return (((len  <=  0 )) ? copy_List_List_char (list ) : ({ /* cicili#Let18033 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let18035 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18036 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn18041 */
              drop_List_List_char ((--len ), tail );
            }) : ({ /* cicili#Let18046 */
              // ----------
              ;
              ({ /* cicili#Progn18048 */
                Nil_List_char ();
              });
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let18056 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let18058 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18059 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18064 */
            Just_List_char (head );
          }) : ({ /* cicili#Let18069 */
            // ----------
            ;
            ({ /* cicili#Progn18071 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
List_List_char nthcdr_List_List_char (size_t index , List_List_char list ) {
  return ({ /* cicili#Let18078 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18080 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18081 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18086 */
            nthcdr_List_List_char ((--index ), tail );
          }) : ({ /* cicili#Let18091 */
            // ----------
            ;
            ({ /* cicili#Progn18093 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_char nth_List_List_char (size_t index , List_List_char list ) {
  return ({ /* cicili#Let18100 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18102 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18103 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18105 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18110 */
            (((index  ==  0 )) ? Just_List_char (head ) : (((index  <  0 )) ? Nothing_List_char () : nth_List_List_char ((--index ), tail )));
          }) : ({ /* cicili#Let18119 */
            // ----------
            ;
            ({ /* cicili#Progn18121 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let18126 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let18130 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18132 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18133 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block18139 */
            { /* cicili#Block18141 */
              free (this );
              free_List_List_char ((&tail ));
            }
          }
        else
          { /* cicili#Let18149 */
            // ----------
            ;
            ({ /* cicili#Let18151 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block18156 */
                  { /* cicili#Block18158 */
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
  { /* cicili#Let18169 */
    List_List_char instance  = malloc (sizeof(class_List_List_char));
    // ----------
    (*instance ) = ((class_List_List_char){ get_List_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_char Nil_List_char () {
  { /* cicili#Let18175 */
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
  { /* cicili#Let18192 */
    Maybe_List_List_char instance  = ((Maybe_List_List_char){ get_Maybe_List_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_char Nothing_List_List_char () {
  { /* cicili#Let18197 */
    Maybe_List_List_char instance  = ((Maybe_List_List_char){ get_Maybe_List_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_List_char__H_IMPL__ */ 
#ifndef __Maybe_CStr__H_IMPL__
#define __Maybe_CStr__H_IMPL__
void free_Maybe_CStr (Maybe_CStr * this ) {
}
const Maybe_CStr__H_Table * const get_Maybe_CStr__H_Table () {
  static const Maybe_CStr__H_Table table  = { free_Maybe_CStr };
  return (&table );
}
Maybe_CStr Just_CStr (CStr value ) {
  { /* cicili#Let18215 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CStr Nothing_CStr () {
  { /* cicili#Let18220 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_CStr__H_IMPL__ */ 
#ifndef __List_CStr__H_IMPL__
#define __List_CStr__H_IMPL__
CStr * toArray_List_CStr (List_CStr list ) {
  CStr * array (List_CStr list , size_t count ) {
    return ({ /* cicili#Let18230 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let18232 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18233 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18235 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn18240 */
              ({ /* cicili#Let18242 */
                CStr * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let18246 */
              // ----------
              ;
              ({ /* cicili#Progn18248 */
                ((CStr *)calloc (count , sizeof(CStr)));
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
List_CStr pure_List_CStr (const CStr * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_CStr () : ({ /* cicili#Let18259 */
        CStr item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_CStr () : Cons_CStr (item , pure_List_CStr ((++buf ), (--len ))));
      }));
}
size_t show_List_CStr (CFile file , List_CStr list ) {
  return ({ /* cicili#Let18269 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18271 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18272 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18274 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18279 */
            (({ /* cicili#Let18283 */
                // ----------
                ;
                ({ /* cicili#Let18285 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn18289 */
                      (fprintf (file , "%s", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let18298 */
                      // ----------
                      ;
                      ({ /* cicili#Progn18300 */
                        fprintf (file , "%s", head );
                      });
                    }));
                });
              }) +  show_List_CStr (file , tail ) );
          }) : ({ /* cicili#Let18310 */
            // ----------
            ;
            ({ /* cicili#Progn18312 */
              0;
            });
          }));
      });
    });
}
List_CStr copy_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let18318 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18320 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18321 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18323 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18328 */
            Cons_CStr (head , copy_List_CStr (tail ));
          }) : ({ /* cicili#Let18334 */
            // ----------
            ;
            ({ /* cicili#Progn18336 */
              Nil_CStr ();
            });
          }));
      });
    });
}
List_CStr replaceAt_List_CStr (List_CStr list , CStr item , size_t index ) {
  return ({ /* cicili#Let18343 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18345 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn18346 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18348 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18353 */
            Cons_CStr (head , replaceAt_List_CStr (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let18359 */
            // ----------
            ;
            ({ /* cicili#Progn18361 */
              ({ /* cicili#Let18365 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let18367 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18368 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn18373 */
                      Cons_CStr (item , copy_List_CStr (taill ));
                    }) : ({ /* cicili#Let18379 */
                      // ----------
                      ;
                      ({ /* cicili#Progn18381 */
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
List_CStr deleteAt_List_CStr (List_CStr list , size_t index ) {
  return ({ /* cicili#Let18388 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18390 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn18391 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18393 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18398 */
            Cons_CStr (head , deleteAt_List_CStr (tail , (index  -  1 )));
          }) : ({ /* cicili#Let18404 */
            // ----------
            ;
            ({ /* cicili#Progn18406 */
              ({ /* cicili#Let18410 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let18412 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18413 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn18418 */
                      copy_List_CStr (taill );
                    }) : ({ /* cicili#Let18423 */
                      // ----------
                      ;
                      ({ /* cicili#Progn18425 */
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
List_CStr insertAt_List_CStr (List_CStr list , CStr item , size_t index ) {
  return ({ /* cicili#Let18432 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18434 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn18435 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18437 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18442 */
            Cons_CStr (head , insertAt_List_CStr (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let18448 */
            // ----------
            ;
            ({ /* cicili#Progn18450 */
              Cons_CStr (item , copy_List_CStr (list ));
            });
          }));
      });
    });
}
List_CStr replace_List_CStr (List_CStr list , CStr item , List_CStr aimed ) {
  return ({ /* cicili#Let18458 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18460 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn18461 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18463 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18468 */
            Cons_CStr (head , replace_List_CStr (tail , item , aimed ));
          }) : ({ /* cicili#Let18474 */
            // ----------
            ;
            ({ /* cicili#Progn18476 */
              ({ /* cicili#Let18480 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let18482 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18483 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn18488 */
                      Cons_CStr (item , copy_List_CStr (taill ));
                    }) : ({ /* cicili#Let18494 */
                      // ----------
                      ;
                      ({ /* cicili#Progn18496 */
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
  return ({ /* cicili#Let18503 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18505 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn18506 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18508 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18513 */
            Cons_CStr (head , delete_List_CStr (tail , aimed ));
          }) : ({ /* cicili#Let18519 */
            // ----------
            ;
            ({ /* cicili#Progn18521 */
              ({ /* cicili#Let18525 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let18527 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18528 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn18533 */
                      copy_List_CStr (taill );
                    }) : ({ /* cicili#Let18538 */
                      // ----------
                      ;
                      ({ /* cicili#Progn18540 */
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
  return ({ /* cicili#Let18547 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18549 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn18550 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18552 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18557 */
            Cons_CStr (head , insert_List_CStr (tail , item , rlist ));
          }) : ({ /* cicili#Let18563 */
            // ----------
            ;
            ({ /* cicili#Progn18565 */
              Cons_CStr (item , copy_List_CStr (rlist ));
            });
          }));
      });
    });
}
List_CStr reverse_List_CStr (List_CStr list ) {
  List_CStr _reverse (List_CStr list , List_CStr rlist ) {
    return ({ /* cicili#Let18574 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let18576 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18577 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18579 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn18584 */
              _reverse (tail , Cons_CStr (head , rlist ));
            }) : ({ /* cicili#Let18589 */
              // ----------
              ;
              ({ /* cicili#Progn18591 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let18595 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18597 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18598 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18600 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18605 */
            _reverse (tail , Cons_CStr (head , Nil_CStr ()));
          }) : ({ /* cicili#Let18611 */
            // ----------
            ;
            ({ /* cicili#Progn18613 */
              list ;
            });
          }));
      });
    });
}
List_CStr append_List_CStr (List_CStr llist , List_CStr rlist ) {
  return ({ /* cicili#Let18619 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18621 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18622 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18624 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18629 */
            Cons_CStr (head , append_List_CStr (tail , rlist ));
          }) : ({ /* cicili#Let18635 */
            // ----------
            ;
            ({ /* cicili#Progn18637 */
              copy_List_CStr (rlist );
            });
          }));
      });
    });
}
List_CStr push_List_CStr (CStr item , List_CStr list ) {
  return Cons_CStr (item , copy_List_CStr (list ));
}
List_CStr take_List_CStr (size_t len , List_CStr list ) {
  return (((len  <=  0 )) ? Nil_CStr () : ({ /* cicili#Let18650 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let18652 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18653 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18655 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn18660 */
              Cons_CStr (head , take_List_CStr ((--len ), tail ));
            }) : ({ /* cicili#Let18666 */
              // ----------
              ;
              ({ /* cicili#Progn18668 */
                Nil_CStr ();
              });
            }));
        });
      }));
}
List_CStr last_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let18675 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18677 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18678 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18683 */
            ({ /* cicili#Let18687 */
              // ----------
              ;
              ({ /* cicili#Let18689 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn18693 */
                    copy_List_CStr (list );
                  }) : ({ /* cicili#Let18698 */
                    // ----------
                    ;
                    ({ /* cicili#Progn18700 */
                      last_List_CStr (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let18705 */
            // ----------
            ;
            ({ /* cicili#Progn18707 */
              Nil_CStr ();
            });
          }));
      });
    });
}
List_CStr init_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let18715 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18717 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn18718 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn18720 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18725 */
            Cons_CStr (head , init_List_CStr (tail ));
          }) : ({ /* cicili#Let18731 */
            // ----------
            ;
            ({ /* cicili#Progn18733 */
              Nil_CStr ();
            });
          }));
      });
    });
}
size_t hasLen_List_CStr (List_CStr list , size_t desired ) {
  return ({ /* cicili#Let18740 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18742 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18743 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18748 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_CStr (tail , (--desired )) ));
          }) : ({ /* cicili#Let18754 */
            // ----------
            ;
            ({ /* cicili#Progn18756 */
              0;
            });
          }));
      });
    });
}
size_t len_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let18762 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18764 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18765 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18770 */
            (1 +  len_List_CStr (tail ) );
          }) : ({ /* cicili#Let18775 */
            // ----------
            ;
            ({ /* cicili#Progn18777 */
              0;
            });
          }));
      });
    });
}
List_CStr tail_List_CStr (List_CStr list ) {
  return drop_List_CStr (1, list );
}
List_CStr drop_List_CStr (size_t len , List_CStr list ) {
  return (((len  <=  0 )) ? copy_List_CStr (list ) : ({ /* cicili#Let18788 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let18790 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18791 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn18796 */
              drop_List_CStr ((--len ), tail );
            }) : ({ /* cicili#Let18801 */
              // ----------
              ;
              ({ /* cicili#Progn18803 */
                Nil_CStr ();
              });
            }));
        });
      }));
}
Maybe_CStr head_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let18811 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let18813 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18814 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18819 */
            Just_CStr (head );
          }) : ({ /* cicili#Let18824 */
            // ----------
            ;
            ({ /* cicili#Progn18826 */
              Nothing_CStr ();
            });
          }));
      });
    });
}
List_CStr nthcdr_List_CStr (size_t index , List_CStr list ) {
  return ({ /* cicili#Let18833 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18835 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18836 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18841 */
            nthcdr_List_CStr ((--index ), tail );
          }) : ({ /* cicili#Let18846 */
            // ----------
            ;
            ({ /* cicili#Progn18848 */
              list ;
            });
          }));
      });
    });
}
Maybe_CStr nth_List_CStr (size_t index , List_CStr list ) {
  return ({ /* cicili#Let18855 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18857 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn18858 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18860 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn18865 */
            (((index  ==  0 )) ? Just_CStr (head ) : (((index  <  0 )) ? Nothing_CStr () : nth_List_CStr ((--index ), tail )));
          }) : ({ /* cicili#Let18874 */
            // ----------
            ;
            ({ /* cicili#Progn18876 */
              Nothing_CStr ();
            });
          }));
      });
    });
}
void free_List_CStr (List_CStr * this_ptr ) {
  { /* cicili#Let18881 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let18885 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let18887 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn18888 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block18894 */
            { /* cicili#Block18896 */
              free (this );
              free_List_CStr ((&tail ));
            }
          }
        else
          { /* cicili#Let18904 */
            // ----------
            ;
            ({ /* cicili#Let18906 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block18911 */
                  { /* cicili#Block18913 */
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
  { /* cicili#Let18924 */
    List_CStr instance  = malloc (sizeof(class_List_CStr));
    // ----------
    (*instance ) = ((class_List_CStr){ get_List_CStr__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_CStr Nil_CStr () {
  { /* cicili#Let18930 */
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
  { /* cicili#Let18947 */
    Maybe_List_CStr instance  = ((Maybe_List_CStr){ get_Maybe_List_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_CStr Nothing_List_CStr () {
  { /* cicili#Let18952 */
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
  { /* cicili#Let18972 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let18977 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Cell_List_Bool__H_IMPL__
#define __Cell_List_Bool__H_IMPL__
Cell_List_Bool new_Cell_List_Bool (List_Bool pointer ) {
  return ({ /* cicili#Let18984 */
      __auto_type holder  = ((List_Bool *)malloc (sizeof(List_Bool *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_Bool (holder , ((size_t)pointer ));
    });
}
Maybe_List_Bool take_Cell_List_Bool (Cell_List_Bool * this ) {
  return ({ /* cicili#Let18992 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let18994 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn18995 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn18997 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19002 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let19006 */
                __auto_type result  = Just_List_Bool ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let19014 */
            // ----------
            ;
            ({ /* cicili#Progn19016 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool get_Cell_List_Bool (Cell_List_Bool life ) {
  return ({ /* cicili#Let19024 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19026 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19027 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19029 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19034 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_Bool ((*pointer )) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let19041 */
            // ----------
            ;
            ({ /* cicili#Progn19043 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_Cell_List_Bool (Cell_List_Bool * this ) {
  { /* cicili#Let19052 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let19054 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19055 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn19057 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block19063 */
          if ((*pointer ) ==  NULL  )
            { /* cicili#Block19066 */
              free (((void *)pointer ));
              (*this ) = Dead_List_Bool ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block19072 */
                free_List_Bool (pointer );
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_Bool ();
              }
              }        }
      else
        { /* cicili#Let19081 */
          // ----------
          ;
          ({ /* cicili#Let19083 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block19088 */
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
  { /* cicili#Let19099 */
    Cell_List_Bool instance  = ((Cell_List_Bool){ get_Cell_List_Bool__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_Bool Dead_List_Bool () {
  { /* cicili#Let19104 */
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
  { /* cicili#Let19124 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let19129 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Cell_List_int__H_IMPL__
#define __Cell_List_int__H_IMPL__
Cell_List_int new_Cell_List_int (List_int pointer ) {
  return ({ /* cicili#Let19136 */
      __auto_type holder  = ((List_int *)malloc (sizeof(List_int *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_int (holder , ((size_t)pointer ));
    });
}
Maybe_List_int take_Cell_List_int (Cell_List_int * this ) {
  return ({ /* cicili#Let19144 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19146 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19147 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19149 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19154 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let19158 */
                __auto_type result  = Just_List_int ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_int ());
          }) : ({ /* cicili#Let19166 */
            // ----------
            ;
            ({ /* cicili#Progn19168 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int get_Cell_List_int (Cell_List_int life ) {
  return ({ /* cicili#Let19176 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19178 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19179 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19181 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19186 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_int ((*pointer )) : Nothing_List_int ());
          }) : ({ /* cicili#Let19193 */
            // ----------
            ;
            ({ /* cicili#Progn19195 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_Cell_List_int (Cell_List_int * this ) {
  { /* cicili#Let19204 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let19206 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19207 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn19209 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block19215 */
          if ((*pointer ) ==  NULL  )
            { /* cicili#Block19218 */
              free (((void *)pointer ));
              (*this ) = Dead_List_int ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block19224 */
                free_List_int (pointer );
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_int ();
              }
              }        }
      else
        { /* cicili#Let19233 */
          // ----------
          ;
          ({ /* cicili#Let19235 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block19240 */
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
  { /* cicili#Let19251 */
    Cell_List_int instance  = ((Cell_List_int){ get_Cell_List_int__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_int Dead_List_int () {
  { /* cicili#Let19256 */
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
  { /* cicili#Let19276 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let19281 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __Cell_List_char__H_IMPL__
#define __Cell_List_char__H_IMPL__
Cell_List_char new_Cell_List_char (List_char pointer ) {
  return ({ /* cicili#Let19288 */
      __auto_type holder  = ((List_char *)malloc (sizeof(List_char *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_char (holder , ((size_t)pointer ));
    });
}
Maybe_List_char take_Cell_List_char (Cell_List_char * this ) {
  return ({ /* cicili#Let19296 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19298 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19299 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19301 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19306 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let19310 */
                __auto_type result  = Just_List_char ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_char ());
          }) : ({ /* cicili#Let19318 */
            // ----------
            ;
            ({ /* cicili#Progn19320 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char get_Cell_List_char (Cell_List_char life ) {
  return ({ /* cicili#Let19328 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19330 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19331 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19333 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19338 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_char ((*pointer )) : Nothing_List_char ());
          }) : ({ /* cicili#Let19345 */
            // ----------
            ;
            ({ /* cicili#Progn19347 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_Cell_List_char (Cell_List_char * this ) {
  { /* cicili#Let19356 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let19358 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn19359 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn19361 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block19367 */
          if ((*pointer ) ==  NULL  )
            { /* cicili#Block19370 */
              free (((void *)pointer ));
              (*this ) = Dead_List_char ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block19376 */
                free_List_char (pointer );
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_char ();
              }
              }        }
      else
        { /* cicili#Let19385 */
          // ----------
          ;
          ({ /* cicili#Let19387 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block19392 */
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
  { /* cicili#Let19403 */
    Cell_List_char instance  = ((Cell_List_char){ get_Cell_List_char__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_char Dead_List_char () {
  { /* cicili#Let19408 */
    Cell_List_char instance  = ((Cell_List_char){ get_Cell_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Cell_List_char__H_IMPL__ */ 
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  { /* cicili#Let19428 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let19433 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Rc_List_Bool__H_IMPL__
#define __Rc_List_Bool__H_IMPL__
Rc_List_Bool new_Rc_List_Bool (List_Bool pointer ) {
  return ({ /* cicili#Let19440 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_Bool *)malloc (sizeof(List_Bool *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_Bool (holder , count , ((size_t)pointer ));
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let19449 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19451 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19452 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19454 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19456 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19461 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn19464 */
                (++(*count ));
                __h_Hold_List_Bool (pointer , count , address );
              }) : Gone_List_Bool ());
          }) : ({ /* cicili#Let19470 */
            // ----------
            ;
            ({ /* cicili#Progn19472 */
              Gone_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool take_Rc_List_Bool (Rc_List_Bool * this ) {
  return ({ /* cicili#Let19480 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19482 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19483 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19485 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19487 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19492 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let19496 */
                __auto_type result  = Just_List_Bool ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let19504 */
            // ----------
            ;
            ({ /* cicili#Progn19506 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool get_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let19514 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19516 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19517 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19519 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19521 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19526 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_Bool ((*pointer )) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let19533 */
            // ----------
            ;
            ({ /* cicili#Progn19535 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_Rc_List_Bool (Rc_List_Bool * this ) {
  { /* cicili#Let19544 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let19546 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19547 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19549 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn19551 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block19557 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block19560 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_Bool ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block19568 */
                if ((*count ) ==  1 )
                  { /* cicili#Block19571 */
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
              }        }
      else
        { /* cicili#Let19581 */
          // ----------
          ;
          ({ /* cicili#Let19583 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block19588 */
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
  { /* cicili#Let19599 */
    Rc_List_Bool instance  = ((Rc_List_Bool){ get_Rc_List_Bool__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_Bool Gone_List_Bool () {
  { /* cicili#Let19604 */
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
  { /* cicili#Let19624 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let19629 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Rc_List_int__H_IMPL__
#define __Rc_List_int__H_IMPL__
Rc_List_int new_Rc_List_int (List_int pointer ) {
  return ({ /* cicili#Let19636 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_int *)malloc (sizeof(List_int *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_int (holder , count , ((size_t)pointer ));
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let19645 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19647 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19648 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19650 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19652 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19657 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn19660 */
                (++(*count ));
                __h_Hold_List_int (pointer , count , address );
              }) : Gone_List_int ());
          }) : ({ /* cicili#Let19666 */
            // ----------
            ;
            ({ /* cicili#Progn19668 */
              Gone_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int take_Rc_List_int (Rc_List_int * this ) {
  return ({ /* cicili#Let19676 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19678 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19679 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19681 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19683 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19688 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let19692 */
                __auto_type result  = Just_List_int ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_int ());
          }) : ({ /* cicili#Let19700 */
            // ----------
            ;
            ({ /* cicili#Progn19702 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int get_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let19710 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19712 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19713 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19715 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19717 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19722 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_int ((*pointer )) : Nothing_List_int ());
          }) : ({ /* cicili#Let19729 */
            // ----------
            ;
            ({ /* cicili#Progn19731 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_Rc_List_int (Rc_List_int * this ) {
  { /* cicili#Let19740 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let19742 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19743 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19745 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn19747 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block19753 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block19756 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_int ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block19764 */
                if ((*count ) ==  1 )
                  { /* cicili#Block19767 */
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
              }        }
      else
        { /* cicili#Let19777 */
          // ----------
          ;
          ({ /* cicili#Let19779 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block19784 */
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
  { /* cicili#Let19795 */
    Rc_List_int instance  = ((Rc_List_int){ get_Rc_List_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_int Gone_List_int () {
  { /* cicili#Let19800 */
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
  { /* cicili#Let19820 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let19825 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __Rc_List_char__H_IMPL__
#define __Rc_List_char__H_IMPL__
Rc_List_char new_Rc_List_char (List_char pointer ) {
  return ({ /* cicili#Let19832 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_char *)malloc (sizeof(List_char *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_char (holder , count , ((size_t)pointer ));
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let19841 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19843 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19844 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19846 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19848 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19853 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn19856 */
                (++(*count ));
                __h_Hold_List_char (pointer , count , address );
              }) : Gone_List_char ());
          }) : ({ /* cicili#Let19862 */
            // ----------
            ;
            ({ /* cicili#Progn19864 */
              Gone_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char take_Rc_List_char (Rc_List_char * this ) {
  return ({ /* cicili#Let19872 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19874 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19875 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19877 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19879 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19884 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let19888 */
                __auto_type result  = Just_List_char ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_char ());
          }) : ({ /* cicili#Let19896 */
            // ----------
            ;
            ({ /* cicili#Progn19898 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char get_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let19906 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let19908 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19909 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn19911 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn19913 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn19918 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_char ((*pointer )) : Nothing_List_char ());
          }) : ({ /* cicili#Let19925 */
            // ----------
            ;
            ({ /* cicili#Progn19927 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_Rc_List_char (Rc_List_char * this ) {
  { /* cicili#Let19936 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let19938 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn19939 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn19941 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn19943 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block19949 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block19952 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_char ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block19960 */
                if ((*count ) ==  1 )
                  { /* cicili#Block19963 */
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
              }        }
      else
        { /* cicili#Let19973 */
          // ----------
          ;
          ({ /* cicili#Let19975 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block19980 */
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
  { /* cicili#Let19991 */
    Rc_List_char instance  = ((Rc_List_char){ get_Rc_List_char__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_char Gone_List_char () {
  { /* cicili#Let19996 */
    Rc_List_char instance  = ((Rc_List_char){ get_Rc_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_List_char__H_IMPL__ */ 
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let20008 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20010 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20011 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20013 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20018 */
            foldr_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let20023 */
            // ----------
            ;
            ({ /* cicili#Progn20025 */
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
  { /* cicili#Let20042 */
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
  { /* cicili#Let20059 */
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
  return ({ /* cicili#Let20092 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20094 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20095 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20097 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20102 */
            foldr_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let20107 */
            // ----------
            ;
            ({ /* cicili#Progn20109 */
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
  { /* cicili#Let20126 */
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
  { /* cicili#Let20143 */
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
  return ({ /* cicili#Let20176 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20178 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20179 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20181 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20186 */
            foldr_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let20191 */
            // ----------
            ;
            ({ /* cicili#Progn20193 */
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
  { /* cicili#Let20210 */
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
  { /* cicili#Let20227 */
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
  return ({ /* cicili#Let20260 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20262 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20263 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20265 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20270 */
            foldr_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let20275 */
            // ----------
            ;
            ({ /* cicili#Progn20277 */
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
  { /* cicili#Let20294 */
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
  { /* cicili#Let20311 */
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
  return ({ /* cicili#Let20344 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20346 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20347 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20349 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20354 */
            foldr_List_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let20359 */
            // ----------
            ;
            ({ /* cicili#Progn20361 */
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
  { /* cicili#Let20378 */
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
  { /* cicili#Let20395 */
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
  return ({ /* cicili#Let20431 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20433 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20434 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20436 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20441 */
            foldr_List_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let20446 */
            // ----------
            ;
            ({ /* cicili#Progn20448 */
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
  { /* cicili#Let20465 */
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
  { /* cicili#Let20482 */
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
  return ({ /* cicili#Let20518 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20520 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20521 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20523 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20528 */
            foldr_List_char (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let20533 */
            // ----------
            ;
            ({ /* cicili#Progn20535 */
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
  { /* cicili#Let20552 */
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
  { /* cicili#Let20569 */
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
#ifndef __Functor_List_int_int__H_IMPL__
#define __Functor_List_int_int__H_IMPL__
List_int fmap_Functor_List_int_int (int_to_int_t a_b , List_int input ) {
  return ({ /* cicili#Let20607 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20609 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20610 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20612 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20617 */
            Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail ));
          }) : ({ /* cicili#Let20624 */
            // ----------
            ;
            ({ /* cicili#Progn20626 */
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
  { /* cicili#Let20640 */
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
  return ({ /* cicili#Let20658 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20660 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20661 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20663 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20668 */
            Cons_char (a_b (head ), fmap_Functor_List_int_char (a_b , tail ));
          }) : ({ /* cicili#Let20675 */
            // ----------
            ;
            ({ /* cicili#Progn20677 */
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
  { /* cicili#Let20691 */
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
  return ({ /* cicili#Let20709 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20711 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20712 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20714 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20719 */
            Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail ));
          }) : ({ /* cicili#Let20726 */
            // ----------
            ;
            ({ /* cicili#Progn20728 */
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
  { /* cicili#Let20742 */
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
  return ({ /* cicili#Let20760 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20762 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20763 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20765 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20770 */
            Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail ));
          }) : ({ /* cicili#Let20777 */
            // ----------
            ;
            ({ /* cicili#Progn20779 */
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
  { /* cicili#Let20793 */
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
  return ({ /* cicili#Let20811 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20813 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20814 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20816 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20821 */
            Cons_int (a_b (head ), fmap_Functor_List_char_int (a_b , tail ));
          }) : ({ /* cicili#Let20828 */
            // ----------
            ;
            ({ /* cicili#Progn20830 */
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
  { /* cicili#Let20844 */
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
  return ({ /* cicili#Let20862 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let20864 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn20865 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn20867 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20872 */
            Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail ));
          }) : ({ /* cicili#Let20879 */
            // ----------
            ;
            ({ /* cicili#Progn20881 */
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
  { /* cicili#Let20895 */
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
  return ({ /* cicili#Let20913 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let20915 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn20916 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20921 */
            Just_int (a_b (val ));
          }) : ({ /* cicili#Let20931 */
            // ----------
            ;
            ({ /* cicili#Progn20933 */
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
  { /* cicili#Let20947 */
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
  return ({ /* cicili#Let20965 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let20967 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn20968 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn20973 */
            Just_char (a_b (val ));
          }) : ({ /* cicili#Let20983 */
            // ----------
            ;
            ({ /* cicili#Progn20985 */
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
  { /* cicili#Let20999 */
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
  return ({ /* cicili#Let21017 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let21019 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn21020 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn21025 */
            Just_Bool (a_b (val ));
          }) : ({ /* cicili#Let21035 */
            // ----------
            ;
            ({ /* cicili#Progn21037 */
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
  { /* cicili#Let21051 */
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
  return ({ /* cicili#Let21069 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let21071 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn21072 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn21077 */
            Just_char (a_b (val ));
          }) : ({ /* cicili#Let21087 */
            // ----------
            ;
            ({ /* cicili#Progn21089 */
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
  { /* cicili#Let21103 */
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
  return ({ /* cicili#Let21121 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let21123 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn21124 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn21129 */
            Just_int (a_b (val ));
          }) : ({ /* cicili#Let21139 */
            // ----------
            ;
            ({ /* cicili#Progn21141 */
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
  { /* cicili#Let21155 */
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
  return ({ /* cicili#Let21173 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let21175 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn21176 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn21181 */
            Just_Bool (a_b (val ));
          }) : ({ /* cicili#Let21191 */
            // ----------
            ;
            ({ /* cicili#Progn21193 */
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
  { /* cicili#Let21207 */
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
