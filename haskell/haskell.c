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
    { /* cicili#Block3701 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , pointer , (*((size_t *)pointer ))}), __h_stack_current );
    }
  return pointer ;
}
void __h_stack_push_func (CStr func_name ) {
  if (__h_stack_initialized )
    { /* cicili#Block3707 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ (++__h_stack_level ), ((CVoid)func_name ), 0}), __h_stack_current );
    }
}
void __h_stack_push_data (CStr buffer ) {
  if (__h_stack_initialized )
    { /* cicili#Block3713 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , ((CVoid)buffer ), 1}), __h_stack_current );
    }
}
void __h_stack_push_separator () {
  if (__h_stack_initialized )
    { /* cicili#Block3719 */
      __h_stack_current  = BoxedCons___h_StackItem (((__h_StackItem){ __h_stack_level , 0, 0}), __h_stack_current );
    }
}
void __h_stack_show_item (BoxedList___h_StackItem stack , int counter ) {
  ({ /* cicili#Let3724 */
    __auto_type __h_matchbox  = stack ;
    // ----------
    { /* cicili#Let3728 */
      __auto_type match3727  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
      typeof((((match3727 . __h_data ). Just ). __h_0_mem )) unboxed ;
      // ----------
      ;
      ({ /* cicili#Let3731 */
        bool __h_case_result  = (true  &&  (((match3727 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3732 */
              (unboxed  =  (((match3727 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3738 */
            { /* cicili#Let3742 */
              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
              // ----------
              ;
              ({ /* cicili#Let3744 */
                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3745 */
                        (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn3747 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block3753 */
                    { /* cicili#Let3757 */
                      typeof((head . __h_0_mem )) level ;
                      typeof((head . __h_1_mem )) pointer ;
                      typeof((head . __h_2_mem )) address ;
                      // ----------
                      ;
                      ({ /* cicili#Let3759 */
                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn3760 */
                                (level  =  (head . __h_0_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3762 */
                                (pointer  =  (head . __h_1_mem ) );
                                true ;
                              }) ) &&  ({ /* cicili#Progn3764 */
                              (address  =  (head . __h_2_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block3770 */
                            if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                              ({ /* cicili#Let3774 */
                                __auto_type __h_matchbox  = tail ;
                                // ----------
                                { /* cicili#Let3778 */
                                  __auto_type match3777  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match3777 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3781 */
                                    bool __h_case_result  = (true  &&  (((match3777 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3782 */
                                          (unboxed  =  (((match3777 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block3788 */
                                        { /* cicili#Let3792 */
                                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) fhead ;
                                          typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let3794 */
                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3795 */
                                                    (fhead  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn3797 */
                                                    (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block3803 */
                                                { /* cicili#Let3807 */
                                                  typeof((fhead . __h_0_mem )) flevel ;
                                                  typeof((fhead . __h_1_mem )) fpointer ;
                                                  typeof((fhead . __h_2_mem )) faddress ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let3809 */
                                                    bool __h_case_result  = (true  &&  ((({ /* cicili#Progn3810 */
                                                            (flevel  =  (fhead . __h_0_mem ) );
                                                            true ;
                                                          }) &&  ({ /* cicili#Progn3812 */
                                                            (fpointer  =  (fhead . __h_1_mem ) );
                                                            true ;
                                                          }) ) &&  ({ /* cicili#Progn3814 */
                                                          (faddress  =  (fhead . __h_2_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    if (__h_case_result )
                                                      { /* cicili#Block3820 */
                                                        if (faddress  ==  0 )
                                                          { /* cicili#Block3823 */
                                                            printf ("%*d,%*d%*cstack trace function: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                            __h_stack_show_item (ftail , counter );
                                                          }
                                                        else
                                                          { /* cicili#Block3826 */
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
                                { /* cicili#Block3830 */
                                  printf ("%*d,%*d%*c* alive pointer: %p points to address: %zx *\n", 4, counter , 4, level , level , ' ', pointer , address );
                                  __h_stack_show_item (tail , counter );
                                }
                              else
                                { /* cicili#Block3833 */
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
        ({ /* cicili#Let3839 */
          __auto_type __h_matchbox  = stack ;
          // ----------
          { /* cicili#Let3843 */
            __auto_type match3842  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match3842 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let3846 */
              bool __h_case_result  = (true  &&  (((match3842 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3847 */
                    (unboxed  =  (((match3842 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3853 */
                  { /* cicili#Let3857 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    ;
                    ({ /* cicili#Let3859 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3860 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn3862 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block3868 */
                          { /* cicili#Block3870 */
                            __h_stack_show_item (head , (++counter ));
                            stack  = tail ;
                          }
                        }
                      else
                        { /* cicili#Let3875 */
                          // ----------
                          ;
                          { /* cicili#Block3877 */
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
    { /* cicili#Block3881 */
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
    ({ /* cicili#Let3887 */
      __auto_type __h_matchbox  = stack ;
      // ----------
      { /* cicili#Let3891 */
        __auto_type match3890  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3890 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3894 */
          bool __h_case_result  = (true  &&  (((match3890 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3895 */
                (unboxed  =  (((match3890 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block3901 */
              { /* cicili#Let3905 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3907 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3908 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3910 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block3916 */
                      { /* cicili#Let3920 */
                        typeof((head . __h_1_mem )) pointer ;
                        typeof((head . __h_2_mem )) address ;
                        // ----------
                        ;
                        ({ /* cicili#Let3922 */
                          bool __h_case_result  = (true  &&  (({ /* cicili#Progn3923 */
                                (pointer  =  (head . __h_1_mem ) );
                                true ;
                              }) &&  ({ /* cicili#Progn3925 */
                                (address  =  (head . __h_2_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block3931 */
                              if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                                ({ /* cicili#Let3935 */
                                  __auto_type __h_matchbox  = tail ;
                                  // ----------
                                  { /* cicili#Let3939 */
                                    __auto_type match3938  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match3938 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let3942 */
                                      bool __h_case_result  = (true  &&  (((match3938 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3943 */
                                            (unboxed  =  (((match3938 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      if (__h_case_result )
                                        { /* cicili#Block3949 */
                                          { /* cicili#Let3953 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let3955 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3956 */
                                                    (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block3962 */
                                                  if (isAlive )
                                                    { /* cicili#Block3965 */
                                                      __h_stack_current  = clone_Box_BoxedList___h_StackItem (ftail );
                                                    }
                                                  else
                                                    { /* cicili#Block3969 */
                                                      ({ /* cicili#Let3972 */
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
                                  { /* cicili#Block3978 */
                                    __h_stack_private  = BoxedCons_BoxedList___h_StackItem (clone_Box_BoxedList___h_StackItem (stack ), __h_stack_private );
                                    free_Box_BoxedList___h_StackItem ((&__h_stack_current ));
                                    __h_stack_free_ (tail , true );
                                  }
                                else
                                  { /* cicili#Block3984 */
                                    ({ /* cicili#Let3987 */
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
    { /* cicili#Block3993 */
      __h_stack_free_ (__h_stack_current , false );
    }
}
void __h_stack_free_main (BoxedList_BoxedList___h_StackItem * pin ) {
  bool __h_stack_show_ (BoxedList___h_StackItem stack , int counter ) {
    ({ /* cicili#Let3998 */
      __auto_type __h_matchbox  = stack ;
      // ----------
      { /* cicili#Let4002 */
        __auto_type match4001  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4001 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4005 */
          bool __h_case_result  = (true  &&  (((match4001 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4006 */
                (unboxed  =  (((match4001 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block4012 */
              { /* cicili#Let4016 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4018 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4019 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4021 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block4027 */
                      { /* cicili#Let4031 */
                        typeof((head . __h_0_mem )) level ;
                        typeof((head . __h_1_mem )) pointer ;
                        typeof((head . __h_2_mem )) address ;
                        // ----------
                        ;
                        ({ /* cicili#Let4033 */
                          bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4034 */
                                  (level  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4036 */
                                  (pointer  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) &&  ({ /* cicili#Progn4038 */
                                (address  =  (head . __h_2_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block4044 */
                              if ((pointer  ==  0 ) &&  (address  ==  0 ) )
                                ({ /* cicili#Let4048 */
                                  __auto_type __h_matchbox  = tail ;
                                  // ----------
                                  { /* cicili#Let4052 */
                                    __auto_type match4051  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match4051 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4055 */
                                      bool __h_case_result  = (true  &&  (((match4051 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4056 */
                                            (unboxed  =  (((match4051 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      if (__h_case_result )
                                        { /* cicili#Block4062 */
                                          { /* cicili#Let4066 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) fhead ;
                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) ftail ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let4068 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4069 */
                                                      (fhead  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) &&  ({ /* cicili#Progn4071 */
                                                      (ftail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                      true ;
                                                    }) ) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block4077 */
                                                  { /* cicili#Let4081 */
                                                    typeof((fhead . __h_0_mem )) flevel ;
                                                    typeof((fhead . __h_1_mem )) fpointer ;
                                                    typeof((fhead . __h_2_mem )) faddress ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let4083 */
                                                      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4084 */
                                                              (flevel  =  (fhead . __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn4086 */
                                                              (fpointer  =  (fhead . __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  ({ /* cicili#Progn4088 */
                                                            (faddress  =  (fhead . __h_2_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      if (__h_case_result )
                                                        { /* cicili#Block4094 */
                                                          if (faddress  ==  0 )
                                                            { /* cicili#Block4097 */
                                                              printf ("%*d,%*d%*cstack trace function: %s\n", 4, counter , 4, flevel , flevel , ((((flevel  %  2 ) ==  0 )) ? '-' : ' '), ((CStr)fpointer ));
                                                              __h_stack_show_ (ftail , counter );
                                                            }
                                                          else
                                                            { /* cicili#Block4100 */
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
                                { /* cicili#Block4103 */
                                  if (pointer  &&  ((*((size_t *)pointer )) ==  address  ) )
                                    { /* cicili#Block4106 */
                                      printf ("%*d,%*d%*c* alive pointer: %p points to address: %zx *\n", 4, counter , 4, level , level , ' ', pointer , address );
                                      __h_stack_show_ (tail , counter );
                                    }
                                  else
                                    return false ;
                                }
                            }
                          else
                            { /* cicili#Let4112 */
                              // ----------
                              ;
                              { /* cicili#Block4114 */
                                return false ;
                              }
                            }
                        });
                      }
                    }
                  else
                    { /* cicili#Let4119 */
                      // ----------
                      ;
                      { /* cicili#Block4121 */
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
        ({ /* cicili#Let4126 */
          __auto_type __h_matchbox  = stack ;
          // ----------
          { /* cicili#Let4130 */
            __auto_type match4129  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match4129 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let4133 */
              bool __h_case_result  = (true  &&  (((match4129 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4134 */
                    (unboxed  =  (((match4129 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block4140 */
                  { /* cicili#Let4144 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    ;
                    ({ /* cicili#Let4146 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4147 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn4149 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      if (__h_case_result )
                        { /* cicili#Block4155 */
                          { /* cicili#Block4157 */
                            stack  = tail ;
                            ((__h_stack_show_ (head , (++counter ))) ? counter  : (--counter ));
                            free_Box_BoxedList___h_StackItem ((&head ));
                          }
                        }
                      else
                        { /* cicili#Let4163 */
                          // ----------
                          ;
                          { /* cicili#Block4165 */
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
    { /* cicili#Block4169 */
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
  { /* cicili#Let4186 */
    Maybe___h_StackItem instance  = ((Maybe___h_StackItem){ get_Maybe___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe___h_StackItem Nothing___h_StackItem () {
  { /* cicili#Let4191 */
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
  { /* cicili#Let4211 */
    Maybe_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList___h_StackItem_x){ get_Maybe_BoxedList___h_StackItem_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem_x Nothing_BoxedList___h_StackItem_x () {
  { /* cicili#Let4216 */
    Maybe_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList___h_StackItem_x){ get_Maybe_BoxedList___h_StackItem_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList___h_StackItem_x__H_IMPL__ */ 
#ifndef __Box_BoxedList___h_StackItem__H_IMPL__
#define __Box_BoxedList___h_StackItem__H_IMPL__
Box_BoxedList___h_StackItem new_Box_BoxedList___h_StackItem (BoxedList___h_StackItem_x pointer ) {
  return ({ /* cicili#Let4223 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BoxedList___h_StackItem_x *)malloc (sizeof(BoxedList___h_StackItem_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BoxedList___h_StackItem_x (holder , count , ((size_t)pointer ));
    });
}
Box_BoxedList___h_StackItem clone_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let4232 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4234 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4235 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4237 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4239 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4244 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4247 */
                (++(*count ));
                __h_Hold_BoxedList___h_StackItem_x (pointer , count , address );
              }) : Gone_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let4253 */
            // ----------
            ;
            ({ /* cicili#Progn4255 */
              Gone_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList___h_StackItem_x take_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this ) {
  return ({ /* cicili#Let4263 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4265 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4266 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4268 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4270 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4275 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let4279 */
                __auto_type result  = Just_BoxedList___h_StackItem_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let4287 */
            // ----------
            ;
            ({ /* cicili#Progn4289 */
              Nothing_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList___h_StackItem_x get_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let4297 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4299 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4300 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4302 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4304 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4309 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BoxedList___h_StackItem_x ((*pointer )) : Nothing_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let4316 */
            // ----------
            ;
            ({ /* cicili#Progn4318 */
              Nothing_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList___h_StackItem (Box_BoxedList___h_StackItem * this ) {
  { /* cicili#Let4327 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4329 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4330 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4332 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4334 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4340 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4343 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BoxedList___h_StackItem_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4351 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4354 */
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
        { /* cicili#Let4364 */
          // ----------
          ;
          ({ /* cicili#Let4366 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4371 */
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
  { /* cicili#Let4382 */
    Box_BoxedList___h_StackItem instance  = ((Box_BoxedList___h_StackItem){ get_Box_BoxedList___h_StackItem__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_BoxedList___h_StackItem Gone_BoxedList___h_StackItem_x () {
  { /* cicili#Let4387 */
    Box_BoxedList___h_StackItem instance  = ((Box_BoxedList___h_StackItem){ get_Box_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_BoxedList___h_StackItem__H_IMPL__ */ 
__h_StackItem * toArray_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  __h_StackItem * array (BoxedList___h_StackItem list , size_t count ) {
    return ({ /* cicili#Let4394 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let4398 */
          __auto_type match4397  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4397 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4401 */
            bool __h_case_result  = (true  &&  (((match4397 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4402 */
                  (unboxed  =  (((match4397 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4407 */
                ({ /* cicili#Let4411 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let4413 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4414 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4416 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4421 */
                        ({ /* cicili#Let4423 */
                          __h_StackItem * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let4427 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4429 */
                          ((__h_StackItem *)calloc (count , sizeof(__h_StackItem)));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4433 */
                // ----------
                ;
                ({ /* cicili#Progn4435 */
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
  return (((buf  ==  NULL  )) ? BoxedNil___h_StackItem () : ({ /* cicili#Let4446 */
        __h_StackItem item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil___h_StackItem () : BoxedCons___h_StackItem (item , pure_BoxedList___h_StackItem ((++buf ), (--len ))));
      }));
}
size_t show_BoxedList___h_StackItem (CFile file , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let4455 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4459 */
        __auto_type match4458  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4458 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4462 */
          bool __h_case_result  = (true  &&  (((match4458 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4463 */
                (unboxed  =  (((match4458 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4468 */
              ({ /* cicili#Let4472 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4474 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4475 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4477 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4482 */
                      (({ /* cicili#Let4485 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let4489 */
                            __auto_type match4488  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4488 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4492 */
                              bool __h_case_result  = (true  &&  (((match4488 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4493 */
                                    (unboxed  =  (((match4488 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4498 */
                                  ({ /* cicili#Let4502 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4504 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4508 */
                                          (({ /* cicili#Let4516 */
                                              typeof((head . __h_0_mem )) level ;
                                              typeof((head . __h_1_mem )) pointer ;
                                              typeof((head . __h_2_mem )) address ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4518 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4519 */
                                                        (level  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4521 */
                                                        (pointer  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  ({ /* cicili#Progn4523 */
                                                      (address  =  (head . __h_2_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4528 */
                                                    fprintf (file , "%d, %p: %zu", level , pointer , address );
                                                  }) : ({ /* cicili#Let4532 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4534 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", "\n") );
                                        }) : ({ /* cicili#Let4538 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4540 */
                                            ({ /* cicili#Let4548 */
                                              typeof((head . __h_0_mem )) level ;
                                              typeof((head . __h_1_mem )) pointer ;
                                              typeof((head . __h_2_mem )) address ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4550 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn4551 */
                                                        (level  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn4553 */
                                                        (pointer  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  ({ /* cicili#Progn4555 */
                                                      (address  =  (head . __h_2_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4560 */
                                                    fprintf (file , "%d, %p: %zu", level , pointer , address );
                                                  }) : ({ /* cicili#Let4564 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4566 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4570 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4572 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_BoxedList___h_StackItem (file , tail ) );
                    }) : ({ /* cicili#Let4577 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4579 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4583 */
              // ----------
              ;
              ({ /* cicili#Progn4585 */
                0;
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem copy_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let4590 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4594 */
        __auto_type match4593  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4593 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4597 */
          bool __h_case_result  = (true  &&  (((match4593 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4598 */
                (unboxed  =  (((match4593 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4603 */
              ({ /* cicili#Let4607 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4609 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4610 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4612 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4617 */
                      BoxedCons___h_StackItem (head , copy_BoxedList___h_StackItem (tail ));
                    }) : ({ /* cicili#Let4623 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4625 */
                        BoxedNil___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4630 */
              // ----------
              ;
              ({ /* cicili#Progn4632 */
                BoxedNil___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem replaceAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , size_t index ) {
  return ({ /* cicili#Let4638 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4642 */
        __auto_type match4641  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4641 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4645 */
          bool __h_case_result  = (true  &&  (((match4641 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4646 */
                (unboxed  =  (((match4641 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4651 */
              ({ /* cicili#Let4655 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4657 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4658 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4660 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4665 */
                      BoxedCons___h_StackItem (head , replaceAt_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4671 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4673 */
                        ({ /* cicili#Let4676 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let4680 */
                            __auto_type match4679  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4679 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4683 */
                              bool __h_case_result  = (true  &&  (((match4679 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4684 */
                                    (unboxed  =  (((match4679 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4689 */
                                  ({ /* cicili#Let4693 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4695 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4696 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4701 */
                                          BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (taill ));
                                        }) : ({ /* cicili#Let4707 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4709 */
                                            clone_Box_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4714 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4716 */
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
            }) : ({ /* cicili#Let4721 */
              // ----------
              ;
              ({ /* cicili#Progn4723 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem deleteAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , size_t index ) {
  return ({ /* cicili#Let4729 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4733 */
        __auto_type match4732  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4732 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4736 */
          bool __h_case_result  = (true  &&  (((match4732 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4737 */
                (unboxed  =  (((match4732 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4742 */
              ({ /* cicili#Let4746 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4748 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4749 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4751 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4756 */
                      BoxedCons___h_StackItem (head , deleteAt_BoxedList___h_StackItem (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let4762 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4764 */
                        ({ /* cicili#Let4767 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let4771 */
                            __auto_type match4770  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4770 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4774 */
                              bool __h_case_result  = (true  &&  (((match4770 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4775 */
                                    (unboxed  =  (((match4770 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4780 */
                                  ({ /* cicili#Let4784 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4786 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4787 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4792 */
                                          clone_Box_BoxedList___h_StackItem (taill );
                                        }) : ({ /* cicili#Let4797 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4799 */
                                            clone_Box_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4804 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4806 */
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
            }) : ({ /* cicili#Let4811 */
              // ----------
              ;
              ({ /* cicili#Progn4813 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem insertAt_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , size_t index ) {
  return ({ /* cicili#Let4819 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4823 */
        __auto_type match4822  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4822 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4826 */
          bool __h_case_result  = (true  &&  (((match4822 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4827 */
                (unboxed  =  (((match4822 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4832 */
              ({ /* cicili#Let4836 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4838 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4839 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4841 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4846 */
                      BoxedCons___h_StackItem (head , insertAt_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4852 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4854 */
                        BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4860 */
              // ----------
              ;
              ({ /* cicili#Progn4862 */
                BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (list ));
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem replace_BoxedList___h_StackItem (BoxedList___h_StackItem list , __h_StackItem item , BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let4870 */
      __auto_type match4869  = get_Box_BoxedList___h_StackItem (list );
      typeof((((match4869 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4873 */
        bool __h_case_result  = (true  &&  (((match4869 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4874 */
              (listp  =  (((match4869 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4879 */
            ({ /* cicili#Let4883 */
              __auto_type match4882  = get_Box_BoxedList___h_StackItem (aimed );
              typeof((((match4882 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4886 */
                bool __h_case_result  = (true  &&  (((match4882 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4887 */
                      (aimedp  =  (((match4882 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4892 */
                    ({ /* cicili#Let4896 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4898 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4899 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4901 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4906 */
                            BoxedCons___h_StackItem (head , replace_BoxedList___h_StackItem (tail , item , aimed ));
                          }) : ({ /* cicili#Let4912 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4914 */
                              ({ /* cicili#Let4918 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let4920 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4921 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4926 */
                                      BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (taill ));
                                    }) : ({ /* cicili#Let4932 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4934 */
                                        clone_Box_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let4939 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4941 */
                      clone_Box_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let4946 */
            // ----------
            ;
            ({ /* cicili#Progn4948 */
              clone_Box_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList___h_StackItem delete_BoxedList___h_StackItem (BoxedList___h_StackItem list , BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let4955 */
      __auto_type match4954  = get_Box_BoxedList___h_StackItem (list );
      typeof((((match4954 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4958 */
        bool __h_case_result  = (true  &&  (((match4954 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4959 */
              (listp  =  (((match4954 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4964 */
            ({ /* cicili#Let4968 */
              __auto_type match4967  = get_Box_BoxedList___h_StackItem (aimed );
              typeof((((match4967 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4971 */
                bool __h_case_result  = (true  &&  (((match4967 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4972 */
                      (aimedp  =  (((match4967 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4977 */
                    ({ /* cicili#Let4981 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4983 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4984 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4986 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4991 */
                            BoxedCons___h_StackItem (head , delete_BoxedList___h_StackItem (tail , aimed ));
                          }) : ({ /* cicili#Let4997 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4999 */
                              ({ /* cicili#Let5003 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let5005 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5006 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5011 */
                                      clone_Box_BoxedList___h_StackItem (taill );
                                    }) : ({ /* cicili#Let5016 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5018 */
                                        clone_Box_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5023 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5025 */
                      clone_Box_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5030 */
            // ----------
            ;
            ({ /* cicili#Progn5032 */
              clone_Box_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList___h_StackItem insert_BoxedList___h_StackItem (BoxedList___h_StackItem llist , __h_StackItem item , BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let5039 */
      __auto_type match5038  = get_Box_BoxedList___h_StackItem (llist );
      typeof((((match5038 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let5042 */
        bool __h_case_result  = (true  &&  (((match5038 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5043 */
              (llistp  =  (((match5038 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5048 */
            ({ /* cicili#Let5052 */
              __auto_type match5051  = get_Box_BoxedList___h_StackItem (rlist );
              typeof((((match5051 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let5055 */
                bool __h_case_result  = (true  &&  (((match5051 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5056 */
                      (rlistp  =  (((match5051 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5061 */
                    ({ /* cicili#Let5065 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let5067 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5068 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5070 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5075 */
                            BoxedCons___h_StackItem (head , insert_BoxedList___h_StackItem (tail , item , rlist ));
                          }) : ({ /* cicili#Let5081 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5083 */
                              BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5089 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5091 */
                      ({ /* cicili#Let5094 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5096 */
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
          }) : ({ /* cicili#Let5103 */
            // ----------
            ;
            ({ /* cicili#Progn5105 */
              BoxedCons___h_StackItem (item , clone_Box_BoxedList___h_StackItem (rlist ));
            });
          }));
      });
    });
}
BoxedList___h_StackItem reverse_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  BoxedList___h_StackItem _reverse (BoxedList___h_StackItem list , BoxedList___h_StackItem rlist ) {
    return ({ /* cicili#Let5113 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5117 */
          __auto_type match5116  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5116 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5120 */
            bool __h_case_result  = (true  &&  (((match5116 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5121 */
                  (unboxed  =  (((match5116 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5126 */
                ({ /* cicili#Let5130 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5132 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5133 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5135 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5140 */
                        _reverse (tail , BoxedCons___h_StackItem (head , rlist ));
                      }) : ({ /* cicili#Let5145 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5147 */
                          clone_Box_BoxedList___h_StackItem (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5152 */
                // ----------
                ;
                ({ /* cicili#Progn5154 */
                  clone_Box_BoxedList___h_StackItem (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let5158 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5162 */
        __auto_type match5161  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5161 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5165 */
          bool __h_case_result  = (true  &&  (((match5161 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5166 */
                (unboxed  =  (((match5161 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5171 */
              ({ /* cicili#Let5175 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5177 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5178 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5180 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5185 */
                      _reverse (tail , BoxedCons___h_StackItem (head , BoxedNil___h_StackItem ()));
                    }) : ({ /* cicili#Let5191 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5193 */
                        clone_Box_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5198 */
              // ----------
              ;
              ({ /* cicili#Progn5200 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem append_BoxedList___h_StackItem (BoxedList___h_StackItem llist , BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let5206 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let5210 */
        __auto_type match5209  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5209 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5213 */
          bool __h_case_result  = (true  &&  (((match5209 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5214 */
                (unboxed  =  (((match5209 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5219 */
              ({ /* cicili#Let5223 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5225 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5226 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5228 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5233 */
                      BoxedCons___h_StackItem (head , append_BoxedList___h_StackItem (tail , rlist ));
                    }) : ({ /* cicili#Let5239 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5241 */
                        clone_Box_BoxedList___h_StackItem (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5246 */
              // ----------
              ;
              ({ /* cicili#Progn5248 */
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
  return (((len  <=  0 )) ? BoxedNil___h_StackItem () : ({ /* cicili#Let5260 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5264 */
          __auto_type match5263  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5263 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5267 */
            bool __h_case_result  = (true  &&  (((match5263 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5268 */
                  (unboxed  =  (((match5263 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5273 */
                ({ /* cicili#Let5277 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5279 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5280 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5282 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5287 */
                        BoxedCons___h_StackItem (head , take_BoxedList___h_StackItem ((--len ), tail ));
                      }) : ({ /* cicili#Let5293 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5295 */
                          BoxedNil___h_StackItem ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5300 */
                // ----------
                ;
                ({ /* cicili#Progn5302 */
                  BoxedNil___h_StackItem ();
                });
              }));
          });
        });
      }));
}
BoxedList___h_StackItem last_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5308 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5312 */
        __auto_type match5311  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5311 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5315 */
          bool __h_case_result  = (true  &&  (((match5311 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5316 */
                (unboxed  =  (((match5311 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5321 */
              ({ /* cicili#Let5325 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5327 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5328 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5333 */
                      ({ /* cicili#Let5336 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5340 */
                          __auto_type match5339  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5339 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5343 */
                            bool __h_case_result  = (true  &&  (((match5339 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5344 */
                                  (unboxed  =  (((match5339 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5349 */
                                ({ /* cicili#Let5353 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5355 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5359 */
                                        clone_Box_BoxedList___h_StackItem (list );
                                      }) : ({ /* cicili#Let5364 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5366 */
                                          last_BoxedList___h_StackItem (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5371 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5373 */
                                  clone_Box_BoxedList___h_StackItem (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5378 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5380 */
                        clone_Box_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5385 */
              // ----------
              ;
              ({ /* cicili#Progn5387 */
                clone_Box_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList___h_StackItem init_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5393 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5397 */
        __auto_type match5396  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5396 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5400 */
          bool __h_case_result  = (true  &&  (((match5396 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5401 */
                (unboxed  =  (((match5396 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5406 */
              ({ /* cicili#Let5410 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5412 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5413 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5415 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5420 */
                      ({ /* cicili#Let5423 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5427 */
                          __auto_type match5426  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5426 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5430 */
                            bool __h_case_result  = (true  &&  (((match5426 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5431 */
                                  (unboxed  =  (((match5426 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5436 */
                                ({ /* cicili#Let5440 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5442 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5446 */
                                        BoxedCons___h_StackItem (head , init_BoxedList___h_StackItem (tail ));
                                      }) : ({ /* cicili#Let5452 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5454 */
                                          BoxedNil___h_StackItem ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5459 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5461 */
                                  BoxedNil___h_StackItem ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5466 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5468 */
                        BoxedNil___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5473 */
              // ----------
              ;
              ({ /* cicili#Progn5475 */
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
  return (((len  <=  0 )) ? clone_Box_BoxedList___h_StackItem (list ) : ({ /* cicili#Let5486 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5490 */
          __auto_type match5489  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5489 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5493 */
            bool __h_case_result  = (true  &&  (((match5489 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5494 */
                  (unboxed  =  (((match5489 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5499 */
                ({ /* cicili#Let5503 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5505 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5506 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5511 */
                        drop_BoxedList___h_StackItem ((--len ), tail );
                      }) : ({ /* cicili#Let5516 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5518 */
                          clone_Box_BoxedList___h_StackItem (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5523 */
                // ----------
                ;
                ({ /* cicili#Progn5525 */
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
  return ({ /* cicili#Let5535 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5539 */
        __auto_type match5538  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5538 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5542 */
          bool __h_case_result  = (true  &&  (((match5538 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5543 */
                (unboxed  =  (((match5538 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5548 */
              ({ /* cicili#Let5552 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5554 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5555 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5560 */
                      nthcdr_BoxedList___h_StackItem ((--index ), tail );
                    }) : ({ /* cicili#Let5565 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5567 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5571 */
              // ----------
              ;
              ({ /* cicili#Progn5573 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe___h_StackItem nth_BoxedList___h_StackItem (size_t index , BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5579 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5583 */
        __auto_type match5582  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5582 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5586 */
          bool __h_case_result  = (true  &&  (((match5582 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5587 */
                (unboxed  =  (((match5582 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5592 */
              ({ /* cicili#Let5596 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5598 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5599 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5601 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5606 */
                      (((index  ==  0 )) ? Just___h_StackItem (head ) : (((index  <  0 )) ? Nothing___h_StackItem () : nth_BoxedList___h_StackItem ((--index ), tail )));
                    }) : ({ /* cicili#Let5615 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5617 */
                        Nothing___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5622 */
              // ----------
              ;
              ({ /* cicili#Progn5624 */
                Nothing___h_StackItem ();
              });
            }));
        });
      });
    });
}
size_t hasLen_BoxedList___h_StackItem (BoxedList___h_StackItem list , size_t desired ) {
  return ({ /* cicili#Let5630 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5634 */
        __auto_type match5633  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5633 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5637 */
          bool __h_case_result  = (true  &&  (((match5633 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5638 */
                (unboxed  =  (((match5633 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5643 */
              ({ /* cicili#Let5647 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5649 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5650 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5655 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_BoxedList___h_StackItem (tail , (--desired )) ));
                    }) : ({ /* cicili#Let5661 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5663 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5667 */
              // ----------
              ;
              ({ /* cicili#Progn5669 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_BoxedList___h_StackItem (BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let5674 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5678 */
        __auto_type match5677  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5677 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5681 */
          bool __h_case_result  = (true  &&  (((match5677 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5682 */
                (unboxed  =  (((match5677 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5687 */
              ({ /* cicili#Let5691 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5693 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5694 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5699 */
                      (1 +  len_BoxedList___h_StackItem (tail ) );
                    }) : ({ /* cicili#Let5704 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5706 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5710 */
              // ----------
              ;
              ({ /* cicili#Progn5712 */
                0;
              });
            }));
        });
      });
    });
}
void free_BoxedList___h_StackItem_x (BoxedList___h_StackItem_x * this_ptr ) {
  { /* cicili#Let5716 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let5722 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let5724 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5725 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block5731 */
            { /* cicili#Block5733 */
              free (this );
              free_Box_BoxedList___h_StackItem ((&tail ));
            }
          }
        else
          { /* cicili#Let5741 */
            // ----------
            ;
            ({ /* cicili#Let5743 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5748 */
                  { /* cicili#Block5750 */
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
  { /* cicili#Let5761 */
    BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList___h_StackItem){ get_BoxedList___h_StackItem__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList___h_StackItem (instance );
  }
}
BoxedList___h_StackItem BoxedNil___h_StackItem () {
  { /* cicili#Let5768 */
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
  { /* cicili#Let5786 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem () {
  { /* cicili#Let5791 */
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
  { /* cicili#Let5809 */
    Maybe_BoxedList___h_StackItem instance  = ((Maybe_BoxedList___h_StackItem){ get_Maybe_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList___h_StackItem Nothing_BoxedList___h_StackItem () {
  { /* cicili#Let5814 */
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
  { /* cicili#Let5834 */
    Maybe_BoxedList_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList_BoxedList___h_StackItem_x){ get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_BoxedList___h_StackItem_x Nothing_BoxedList_BoxedList___h_StackItem_x () {
  { /* cicili#Let5839 */
    Maybe_BoxedList_BoxedList___h_StackItem_x instance  = ((Maybe_BoxedList_BoxedList___h_StackItem_x){ get_Maybe_BoxedList_BoxedList___h_StackItem_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem_x__H_IMPL__ */ 
#ifndef __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__
#define __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__
Box_BoxedList_BoxedList___h_StackItem new_Box_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem_x pointer ) {
  return ({ /* cicili#Let5846 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BoxedList_BoxedList___h_StackItem_x *)malloc (sizeof(BoxedList_BoxedList___h_StackItem_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BoxedList_BoxedList___h_StackItem_x (holder , count , ((size_t)pointer ));
    });
}
Box_BoxedList_BoxedList___h_StackItem clone_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let5855 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let5857 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5858 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5860 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5862 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5867 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn5870 */
                (++(*count ));
                __h_Hold_BoxedList_BoxedList___h_StackItem_x (pointer , count , address );
              }) : Gone_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let5876 */
            // ----------
            ;
            ({ /* cicili#Progn5878 */
              Gone_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_BoxedList___h_StackItem_x take_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this ) {
  return ({ /* cicili#Let5886 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let5888 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5889 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5891 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5893 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5898 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let5902 */
                __auto_type result  = Just_BoxedList_BoxedList___h_StackItem_x ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let5910 */
            // ----------
            ;
            ({ /* cicili#Progn5912 */
              Nothing_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_BoxedList___h_StackItem_x get_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem rc ) {
  return ({ /* cicili#Let5920 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let5922 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5923 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn5925 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn5927 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5932 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BoxedList_BoxedList___h_StackItem_x ((*pointer )) : Nothing_BoxedList_BoxedList___h_StackItem_x ());
          }) : ({ /* cicili#Let5939 */
            // ----------
            ;
            ({ /* cicili#Progn5941 */
              Nothing_BoxedList_BoxedList___h_StackItem_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList_BoxedList___h_StackItem (Box_BoxedList_BoxedList___h_StackItem * this ) {
  { /* cicili#Let5950 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let5952 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn5953 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5955 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn5957 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block5963 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block5966 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BoxedList_BoxedList___h_StackItem_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block5974 */
                if ((*count ) ==  1 )
                  { /* cicili#Block5977 */
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
        { /* cicili#Let5987 */
          // ----------
          ;
          ({ /* cicili#Let5989 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block5994 */
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
  { /* cicili#Let6005 */
    Box_BoxedList_BoxedList___h_StackItem instance  = ((Box_BoxedList_BoxedList___h_StackItem){ get_Box_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_BoxedList_BoxedList___h_StackItem Gone_BoxedList_BoxedList___h_StackItem_x () {
  { /* cicili#Let6010 */
    Box_BoxedList_BoxedList___h_StackItem instance  = ((Box_BoxedList_BoxedList___h_StackItem){ get_Box_BoxedList_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_BoxedList_BoxedList___h_StackItem__H_IMPL__ */ 
BoxedList___h_StackItem * toArray_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  BoxedList___h_StackItem * array (BoxedList_BoxedList___h_StackItem list , size_t count ) {
    return ({ /* cicili#Let6017 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6021 */
          __auto_type match6020  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6020 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let6024 */
            bool __h_case_result  = (true  &&  (((match6020 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6025 */
                  (unboxed  =  (((match6020 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6030 */
                ({ /* cicili#Let6034 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let6036 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6037 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6039 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6044 */
                        ({ /* cicili#Let6046 */
                          BoxedList___h_StackItem * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let6050 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6052 */
                          ((BoxedList___h_StackItem *)calloc (count , sizeof(BoxedList___h_StackItem)));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6056 */
                // ----------
                ;
                ({ /* cicili#Progn6058 */
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
  return (((buf  ==  NULL  )) ? BoxedNil_BoxedList___h_StackItem () : ({ /* cicili#Let6069 */
        BoxedList___h_StackItem item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_BoxedList___h_StackItem () : BoxedCons_BoxedList___h_StackItem (item , pure_BoxedList_BoxedList___h_StackItem ((++buf ), (--len ))));
      }));
}
size_t show_BoxedList_BoxedList___h_StackItem (CFile file , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6078 */
      __auto_type __h_matchbox  = list ;
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
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6097 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6098 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6100 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6105 */
                      (({ /* cicili#Let6108 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let6112 */
                            __auto_type match6111  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match6111 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let6115 */
                              bool __h_case_result  = (true  &&  (((match6111 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6116 */
                                    (unboxed  =  (((match6111 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn6121 */
                                  ({ /* cicili#Let6125 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let6127 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn6131 */
                                          (show_BoxedList___h_StackItem (file , head ) +  fprintf (file , "%s", "\n") );
                                        }) : ({ /* cicili#Let6141 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn6143 */
                                            show_BoxedList___h_StackItem (file , head );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let6153 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn6155 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_BoxedList_BoxedList___h_StackItem (file , tail ) );
                    }) : ({ /* cicili#Let6160 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6162 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6166 */
              // ----------
              ;
              ({ /* cicili#Progn6168 */
                0;
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem copy_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6173 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6177 */
        __auto_type match6176  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6176 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6180 */
          bool __h_case_result  = (true  &&  (((match6176 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6181 */
                (unboxed  =  (((match6176 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6186 */
              ({ /* cicili#Let6190 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6192 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6193 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6195 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6200 */
                      BoxedCons_BoxedList___h_StackItem (head , copy_BoxedList_BoxedList___h_StackItem (tail ));
                    }) : ({ /* cicili#Let6206 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6208 */
                        BoxedNil_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6213 */
              // ----------
              ;
              ({ /* cicili#Progn6215 */
                BoxedNil_BoxedList___h_StackItem ();
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem replaceAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , size_t index ) {
  return ({ /* cicili#Let6221 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6225 */
        __auto_type match6224  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6224 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6228 */
          bool __h_case_result  = (true  &&  (((match6224 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6229 */
                (unboxed  =  (((match6224 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6234 */
              ({ /* cicili#Let6238 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6240 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6241 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6243 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6248 */
                      BoxedCons_BoxedList___h_StackItem (head , replaceAt_BoxedList_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let6254 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6256 */
                        ({ /* cicili#Let6259 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let6263 */
                            __auto_type match6262  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match6262 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let6266 */
                              bool __h_case_result  = (true  &&  (((match6262 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6267 */
                                    (unboxed  =  (((match6262 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn6272 */
                                  ({ /* cicili#Let6276 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let6278 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6279 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn6284 */
                                          BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (taill ));
                                        }) : ({ /* cicili#Let6290 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn6292 */
                                            clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let6297 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn6299 */
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
            }) : ({ /* cicili#Let6304 */
              // ----------
              ;
              ({ /* cicili#Progn6306 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem deleteAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , size_t index ) {
  return ({ /* cicili#Let6312 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6316 */
        __auto_type match6315  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6315 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6319 */
          bool __h_case_result  = (true  &&  (((match6315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6320 */
                (unboxed  =  (((match6315 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6325 */
              ({ /* cicili#Let6329 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6331 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6332 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6334 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6339 */
                      BoxedCons_BoxedList___h_StackItem (head , deleteAt_BoxedList_BoxedList___h_StackItem (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let6345 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6347 */
                        ({ /* cicili#Let6350 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let6354 */
                            __auto_type match6353  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match6353 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let6357 */
                              bool __h_case_result  = (true  &&  (((match6353 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6358 */
                                    (unboxed  =  (((match6353 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn6363 */
                                  ({ /* cicili#Let6367 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let6369 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6370 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn6375 */
                                          clone_Box_BoxedList_BoxedList___h_StackItem (taill );
                                        }) : ({ /* cicili#Let6380 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn6382 */
                                            clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let6387 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn6389 */
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
            }) : ({ /* cicili#Let6394 */
              // ----------
              ;
              ({ /* cicili#Progn6396 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem insertAt_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , size_t index ) {
  return ({ /* cicili#Let6402 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6406 */
        __auto_type match6405  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6405 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6409 */
          bool __h_case_result  = (true  &&  (((match6405 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6410 */
                (unboxed  =  (((match6405 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6415 */
              ({ /* cicili#Let6419 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6421 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6422 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6424 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6429 */
                      BoxedCons_BoxedList___h_StackItem (head , insertAt_BoxedList_BoxedList___h_StackItem (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let6435 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6437 */
                        BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6443 */
              // ----------
              ;
              ({ /* cicili#Progn6445 */
                BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (list ));
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem replace_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let6453 */
      __auto_type match6452  = get_Box_BoxedList_BoxedList___h_StackItem (list );
      typeof((((match6452 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let6456 */
        bool __h_case_result  = (true  &&  (((match6452 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6457 */
              (listp  =  (((match6452 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6462 */
            ({ /* cicili#Let6466 */
              __auto_type match6465  = get_Box_BoxedList_BoxedList___h_StackItem (aimed );
              typeof((((match6465 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let6469 */
                bool __h_case_result  = (true  &&  (((match6465 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6470 */
                      (aimedp  =  (((match6465 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn6475 */
                    ({ /* cicili#Let6479 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let6481 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6482 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6484 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6489 */
                            BoxedCons_BoxedList___h_StackItem (head , replace_BoxedList_BoxedList___h_StackItem (tail , item , aimed ));
                          }) : ({ /* cicili#Let6495 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6497 */
                              ({ /* cicili#Let6501 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let6503 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6504 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6509 */
                                      BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (taill ));
                                    }) : ({ /* cicili#Let6515 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6517 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let6522 */
                    // ----------
                    ;
                    ({ /* cicili#Progn6524 */
                      clone_Box_BoxedList_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let6529 */
            // ----------
            ;
            ({ /* cicili#Progn6531 */
              clone_Box_BoxedList_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem delete_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem aimed ) {
  return ({ /* cicili#Let6538 */
      __auto_type match6537  = get_Box_BoxedList_BoxedList___h_StackItem (list );
      typeof((((match6537 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let6541 */
        bool __h_case_result  = (true  &&  (((match6537 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6542 */
              (listp  =  (((match6537 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6547 */
            ({ /* cicili#Let6551 */
              __auto_type match6550  = get_Box_BoxedList_BoxedList___h_StackItem (aimed );
              typeof((((match6550 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let6554 */
                bool __h_case_result  = (true  &&  (((match6550 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6555 */
                      (aimedp  =  (((match6550 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn6560 */
                    ({ /* cicili#Let6564 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let6566 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6567 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6569 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6574 */
                            BoxedCons_BoxedList___h_StackItem (head , delete_BoxedList_BoxedList___h_StackItem (tail , aimed ));
                          }) : ({ /* cicili#Let6580 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6582 */
                              ({ /* cicili#Let6586 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let6588 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6589 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6594 */
                                      clone_Box_BoxedList_BoxedList___h_StackItem (taill );
                                    }) : ({ /* cicili#Let6599 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6601 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let6606 */
                    // ----------
                    ;
                    ({ /* cicili#Progn6608 */
                      clone_Box_BoxedList_BoxedList___h_StackItem (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let6613 */
            // ----------
            ;
            ({ /* cicili#Progn6615 */
              clone_Box_BoxedList_BoxedList___h_StackItem (list );
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem insert_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList___h_StackItem item , BoxedList_BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let6622 */
      __auto_type match6621  = get_Box_BoxedList_BoxedList___h_StackItem (llist );
      typeof((((match6621 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let6625 */
        bool __h_case_result  = (true  &&  (((match6621 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6626 */
              (llistp  =  (((match6621 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6631 */
            ({ /* cicili#Let6635 */
              __auto_type match6634  = get_Box_BoxedList_BoxedList___h_StackItem (rlist );
              typeof((((match6634 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let6638 */
                bool __h_case_result  = (true  &&  (((match6634 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6639 */
                      (rlistp  =  (((match6634 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn6644 */
                    ({ /* cicili#Let6648 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let6650 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6651 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6653 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6658 */
                            BoxedCons_BoxedList___h_StackItem (head , insert_BoxedList_BoxedList___h_StackItem (tail , item , rlist ));
                          }) : ({ /* cicili#Let6664 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6666 */
                              BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let6672 */
                    // ----------
                    ;
                    ({ /* cicili#Progn6674 */
                      ({ /* cicili#Let6677 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6679 */
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
          }) : ({ /* cicili#Let6686 */
            // ----------
            ;
            ({ /* cicili#Progn6688 */
              BoxedCons_BoxedList___h_StackItem (item , clone_Box_BoxedList_BoxedList___h_StackItem (rlist ));
            });
          }));
      });
    });
}
BoxedList_BoxedList___h_StackItem reverse_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  BoxedList_BoxedList___h_StackItem _reverse (BoxedList_BoxedList___h_StackItem list , BoxedList_BoxedList___h_StackItem rlist ) {
    return ({ /* cicili#Let6696 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6700 */
          __auto_type match6699  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6699 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let6703 */
            bool __h_case_result  = (true  &&  (((match6699 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6704 */
                  (unboxed  =  (((match6699 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6709 */
                ({ /* cicili#Let6713 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let6715 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6716 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6718 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6723 */
                        _reverse (tail , BoxedCons_BoxedList___h_StackItem (head , rlist ));
                      }) : ({ /* cicili#Let6728 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6730 */
                          clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6735 */
                // ----------
                ;
                ({ /* cicili#Progn6737 */
                  clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let6741 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6745 */
        __auto_type match6744  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6744 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6748 */
          bool __h_case_result  = (true  &&  (((match6744 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6749 */
                (unboxed  =  (((match6744 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6754 */
              ({ /* cicili#Let6758 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6760 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6761 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6763 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6768 */
                      _reverse (tail , BoxedCons_BoxedList___h_StackItem (head , BoxedNil_BoxedList___h_StackItem ()));
                    }) : ({ /* cicili#Let6774 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6776 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6781 */
              // ----------
              ;
              ({ /* cicili#Progn6783 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem append_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem llist , BoxedList_BoxedList___h_StackItem rlist ) {
  return ({ /* cicili#Let6789 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let6793 */
        __auto_type match6792  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6792 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6796 */
          bool __h_case_result  = (true  &&  (((match6792 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6797 */
                (unboxed  =  (((match6792 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6802 */
              ({ /* cicili#Let6806 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6808 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6809 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6811 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6816 */
                      BoxedCons_BoxedList___h_StackItem (head , append_BoxedList_BoxedList___h_StackItem (tail , rlist ));
                    }) : ({ /* cicili#Let6822 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6824 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6829 */
              // ----------
              ;
              ({ /* cicili#Progn6831 */
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
  return (((len  <=  0 )) ? BoxedNil_BoxedList___h_StackItem () : ({ /* cicili#Let6843 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let6847 */
          __auto_type match6846  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match6846 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let6850 */
            bool __h_case_result  = (true  &&  (((match6846 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6851 */
                  (unboxed  =  (((match6846 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6856 */
                ({ /* cicili#Let6860 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let6862 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6863 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn6865 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6870 */
                        BoxedCons_BoxedList___h_StackItem (head , take_BoxedList_BoxedList___h_StackItem ((--len ), tail ));
                      }) : ({ /* cicili#Let6876 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6878 */
                          BoxedNil_BoxedList___h_StackItem ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let6883 */
                // ----------
                ;
                ({ /* cicili#Progn6885 */
                  BoxedNil_BoxedList___h_StackItem ();
                });
              }));
          });
        });
      }));
}
BoxedList_BoxedList___h_StackItem last_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6891 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6895 */
        __auto_type match6894  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6894 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6898 */
          bool __h_case_result  = (true  &&  (((match6894 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6899 */
                (unboxed  =  (((match6894 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6904 */
              ({ /* cicili#Let6908 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6910 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6911 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6916 */
                      ({ /* cicili#Let6919 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let6923 */
                          __auto_type match6922  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match6922 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let6926 */
                            bool __h_case_result  = (true  &&  (((match6922 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6927 */
                                  (unboxed  =  (((match6922 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6932 */
                                ({ /* cicili#Let6936 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6938 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6942 */
                                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                      }) : ({ /* cicili#Let6947 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6949 */
                                          last_BoxedList_BoxedList___h_StackItem (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let6954 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6956 */
                                  clone_Box_BoxedList_BoxedList___h_StackItem (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let6961 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6963 */
                        clone_Box_BoxedList_BoxedList___h_StackItem (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6968 */
              // ----------
              ;
              ({ /* cicili#Progn6970 */
                clone_Box_BoxedList_BoxedList___h_StackItem (list );
              });
            }));
        });
      });
    });
}
BoxedList_BoxedList___h_StackItem init_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let6976 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let6980 */
        __auto_type match6979  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match6979 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let6983 */
          bool __h_case_result  = (true  &&  (((match6979 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6984 */
                (unboxed  =  (((match6979 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6989 */
              ({ /* cicili#Let6993 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let6995 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6996 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn6998 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7003 */
                      ({ /* cicili#Let7006 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let7010 */
                          __auto_type match7009  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match7009 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let7013 */
                            bool __h_case_result  = (true  &&  (((match7009 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7014 */
                                  (unboxed  =  (((match7009 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn7019 */
                                ({ /* cicili#Let7023 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7025 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn7029 */
                                        BoxedCons_BoxedList___h_StackItem (head , init_BoxedList_BoxedList___h_StackItem (tail ));
                                      }) : ({ /* cicili#Let7035 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7037 */
                                          BoxedNil_BoxedList___h_StackItem ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7042 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7044 */
                                  BoxedNil_BoxedList___h_StackItem ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let7049 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7051 */
                        BoxedNil_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7056 */
              // ----------
              ;
              ({ /* cicili#Progn7058 */
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
  return (((len  <=  0 )) ? clone_Box_BoxedList_BoxedList___h_StackItem (list ) : ({ /* cicili#Let7069 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let7073 */
          __auto_type match7072  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match7072 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let7076 */
            bool __h_case_result  = (true  &&  (((match7072 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7077 */
                  (unboxed  =  (((match7072 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn7082 */
                ({ /* cicili#Let7086 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let7088 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7089 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn7094 */
                        drop_BoxedList_BoxedList___h_StackItem ((--len ), tail );
                      }) : ({ /* cicili#Let7099 */
                        // ----------
                        ;
                        ({ /* cicili#Progn7101 */
                          clone_Box_BoxedList_BoxedList___h_StackItem (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7106 */
                // ----------
                ;
                ({ /* cicili#Progn7108 */
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
  return ({ /* cicili#Let7118 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7122 */
        __auto_type match7121  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7121 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7125 */
          bool __h_case_result  = (true  &&  (((match7121 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7126 */
                (unboxed  =  (((match7121 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7131 */
              ({ /* cicili#Let7135 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7137 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7138 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7143 */
                      nthcdr_BoxedList_BoxedList___h_StackItem ((--index ), tail );
                    }) : ({ /* cicili#Let7148 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7150 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7154 */
              // ----------
              ;
              ({ /* cicili#Progn7156 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_BoxedList___h_StackItem nth_BoxedList_BoxedList___h_StackItem (size_t index , BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7162 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7166 */
        __auto_type match7165  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7165 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7169 */
          bool __h_case_result  = (true  &&  (((match7165 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7170 */
                (unboxed  =  (((match7165 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7175 */
              ({ /* cicili#Let7179 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7181 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7182 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn7184 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7189 */
                      (((index  ==  0 )) ? Just_BoxedList___h_StackItem (head ) : (((index  <  0 )) ? Nothing_BoxedList___h_StackItem () : nth_BoxedList_BoxedList___h_StackItem ((--index ), tail )));
                    }) : ({ /* cicili#Let7198 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7200 */
                        Nothing_BoxedList___h_StackItem ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7205 */
              // ----------
              ;
              ({ /* cicili#Progn7207 */
                Nothing_BoxedList___h_StackItem ();
              });
            }));
        });
      });
    });
}
size_t hasLen_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list , size_t desired ) {
  return ({ /* cicili#Let7213 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7217 */
        __auto_type match7216  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7216 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7220 */
          bool __h_case_result  = (true  &&  (((match7216 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7221 */
                (unboxed  =  (((match7216 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7226 */
              ({ /* cicili#Let7230 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7232 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7233 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7238 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_BoxedList_BoxedList___h_StackItem (tail , (--desired )) ));
                    }) : ({ /* cicili#Let7244 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7246 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7250 */
              // ----------
              ;
              ({ /* cicili#Progn7252 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_BoxedList_BoxedList___h_StackItem (BoxedList_BoxedList___h_StackItem list ) {
  return ({ /* cicili#Let7257 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let7261 */
        __auto_type match7260  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match7260 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let7264 */
          bool __h_case_result  = (true  &&  (((match7260 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7265 */
                (unboxed  =  (((match7260 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7270 */
              ({ /* cicili#Let7274 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let7276 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7277 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7282 */
                      (1 +  len_BoxedList_BoxedList___h_StackItem (tail ) );
                    }) : ({ /* cicili#Let7287 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7289 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let7293 */
              // ----------
              ;
              ({ /* cicili#Progn7295 */
                0;
              });
            }));
        });
      });
    });
}
void free_BoxedList_BoxedList___h_StackItem_x (BoxedList_BoxedList___h_StackItem_x * this_ptr ) {
  { /* cicili#Let7299 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let7305 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7307 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7308 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block7314 */
            { /* cicili#Block7316 */
              free (this );
              free_Box_BoxedList_BoxedList___h_StackItem ((&tail ));
            }
          }
        else
          { /* cicili#Let7324 */
            // ----------
            ;
            ({ /* cicili#Let7326 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block7331 */
                  { /* cicili#Block7333 */
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
  { /* cicili#Let7344 */
    BoxedList_BoxedList___h_StackItem_x instance  = malloc (sizeof(class_BoxedList_BoxedList___h_StackItem));
    // ----------
    (*instance ) = ((class_BoxedList_BoxedList___h_StackItem){ get_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList_BoxedList___h_StackItem (instance );
  }
}
BoxedList_BoxedList___h_StackItem BoxedNil_BoxedList___h_StackItem () {
  { /* cicili#Let7351 */
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
  { /* cicili#Let7369 */
    Maybe_BoxedList_BoxedList___h_StackItem instance  = ((Maybe_BoxedList_BoxedList___h_StackItem){ get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BoxedList_BoxedList___h_StackItem Nothing_BoxedList_BoxedList___h_StackItem () {
  { /* cicili#Let7374 */
    Maybe_BoxedList_BoxedList___h_StackItem instance  = ((Maybe_BoxedList_BoxedList___h_StackItem){ get_Maybe_BoxedList_BoxedList___h_StackItem__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BoxedList_BoxedList___h_StackItem__H_IMPL__ */ 
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
int show_Bool (CFile file , Bool value ) {
  return ({ /* cicili#Let7383 */
      // ----------
      ;
      ({ /* cicili#Let7385 */
        bool __h_case_result  = (true  &&  ((value . __h_ctor ) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7389 */
            fprintf (file , "%s", "False");
          }) : ({ /* cicili#Let7393 */
            // ----------
            ;
            ({ /* cicili#Progn7395 */
              fprintf (file , "%s", "True");
            });
          }));
      });
    });
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let7401 */
      // ----------
      ;
      ({ /* cicili#Let7403 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor ) ==  __h_True_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7407 */
            True ();
          }) : ({ /* cicili#Let7411 */
            // ----------
            ;
            ({ /* cicili#Progn7413 */
              ({ /* cicili#Let7417 */
                // ----------
                ;
                ({ /* cicili#Let7419 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor ) ==  __h_True_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7423 */
                      True ();
                    }) : ({ /* cicili#Let7427 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7429 */
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
  return ({ /* cicili#Let7435 */
      // ----------
      ;
      ({ /* cicili#Let7437 */
        bool __h_case_result  = (true  &&  ((lhs . __h_ctor ) ==  __h_False_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7441 */
            False ();
          }) : ({ /* cicili#Let7445 */
            // ----------
            ;
            ({ /* cicili#Progn7447 */
              ({ /* cicili#Let7451 */
                // ----------
                ;
                ({ /* cicili#Let7453 */
                  bool __h_case_result  = (true  &&  ((rhs . __h_ctor ) ==  __h_False_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7457 */
                      False ();
                    }) : ({ /* cicili#Let7461 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7463 */
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
  { /* cicili#Let7473 */
    Bool instance  = ((Bool){ get_Bool__H_Table (), __h_True_t });
    // ----------
    return instance ;
  }
}
Bool False () {
  { /* cicili#Let7477 */
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
  { /* cicili#Let7490 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
    // ----------
    return instance ;
  }
}
Ordering EQ () {
  { /* cicili#Let7494 */
    Ordering instance  = ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
    // ----------
    return instance ;
  }
}
Ordering GT () {
  { /* cicili#Let7498 */
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
  { /* cicili#Let7514 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CStr Nothing_CStr () {
  { /* cicili#Let7519 */
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
  { /* cicili#Let7535 */
    Maybe_CFile instance  = ((Maybe_CFile){ get_Maybe_CFile__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CFile Nothing_CFile () {
  { /* cicili#Let7540 */
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
  { /* cicili#Let7558 */
    Maybe_Bool instance  = ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Bool Nothing_Bool () {
  { /* cicili#Let7563 */
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
    return ({ /* cicili#Let7573 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let7575 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7576 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7578 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7583 */
              ({ /* cicili#Let7585 */
                Bool * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let7589 */
              // ----------
              ;
              ({ /* cicili#Progn7591 */
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
  return (((buf  ==  NULL  )) ? Nil_Bool () : ({ /* cicili#Let7602 */
        Bool item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Bool () : Cons_Bool (item , pure_List_Bool ((++buf ), (--len ))));
      }));
}
size_t show_List_Bool (CFile file , List_Bool list ) {
  return ({ /* cicili#Let7612 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7614 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7615 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn7617 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7622 */
            (({ /* cicili#Let7626 */
                // ----------
                ;
                ({ /* cicili#Let7628 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7632 */
                      (show_Bool (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let7642 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7644 */
                        show_Bool (file , head );
                      });
                    }));
                });
              }) +  show_List_Bool (file , tail ) );
          }) : ({ /* cicili#Let7655 */
            // ----------
            ;
            ({ /* cicili#Progn7657 */
              0;
            });
          }));
      });
    });
}
List_Bool copy_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let7663 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7665 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7666 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn7668 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7673 */
            Cons_Bool (head , copy_List_Bool (tail ));
          }) : ({ /* cicili#Let7679 */
            // ----------
            ;
            ({ /* cicili#Progn7681 */
              Nil_Bool ();
            });
          }));
      });
    });
}
List_Bool replaceAt_List_Bool (List_Bool list , Bool item , size_t index ) {
  return ({ /* cicili#Let7688 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7690 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7691 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7693 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7698 */
            Cons_Bool (head , replaceAt_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let7704 */
            // ----------
            ;
            ({ /* cicili#Progn7706 */
              ({ /* cicili#Let7710 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let7712 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7713 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7718 */
                      Cons_Bool (item , copy_List_Bool (taill ));
                    }) : ({ /* cicili#Let7724 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7726 */
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
  return ({ /* cicili#Let7733 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7735 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7736 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7738 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7743 */
            Cons_Bool (head , deleteAt_List_Bool (tail , (index  -  1 )));
          }) : ({ /* cicili#Let7749 */
            // ----------
            ;
            ({ /* cicili#Progn7751 */
              ({ /* cicili#Let7755 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let7757 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7758 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7763 */
                      copy_List_Bool (taill );
                    }) : ({ /* cicili#Let7768 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7770 */
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
  return ({ /* cicili#Let7777 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7779 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7780 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7782 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7787 */
            Cons_Bool (head , insertAt_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let7793 */
            // ----------
            ;
            ({ /* cicili#Progn7795 */
              Cons_Bool (item , copy_List_Bool (list ));
            });
          }));
      });
    });
}
List_Bool replace_List_Bool (List_Bool list , Bool item , List_Bool aimed ) {
  return ({ /* cicili#Let7803 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7805 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7806 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7808 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7813 */
            Cons_Bool (head , replace_List_Bool (tail , item , aimed ));
          }) : ({ /* cicili#Let7819 */
            // ----------
            ;
            ({ /* cicili#Progn7821 */
              ({ /* cicili#Let7825 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let7827 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7828 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7833 */
                      Cons_Bool (item , copy_List_Bool (taill ));
                    }) : ({ /* cicili#Let7839 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7841 */
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
  return ({ /* cicili#Let7848 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7850 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7851 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7853 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7858 */
            Cons_Bool (head , delete_List_Bool (tail , aimed ));
          }) : ({ /* cicili#Let7864 */
            // ----------
            ;
            ({ /* cicili#Progn7866 */
              ({ /* cicili#Let7870 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let7872 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7873 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7878 */
                      copy_List_Bool (taill );
                    }) : ({ /* cicili#Let7883 */
                      // ----------
                      ;
                      ({ /* cicili#Progn7885 */
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
  return ({ /* cicili#Let7892 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7894 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn7895 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7897 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7902 */
            Cons_Bool (head , insert_List_Bool (tail , item , rlist ));
          }) : ({ /* cicili#Let7908 */
            // ----------
            ;
            ({ /* cicili#Progn7910 */
              Cons_Bool (item , copy_List_Bool (rlist ));
            });
          }));
      });
    });
}
List_Bool reverse_List_Bool (List_Bool list ) {
  List_Bool _reverse (List_Bool list , List_Bool rlist ) {
    return ({ /* cicili#Let7919 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let7921 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7922 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn7924 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7929 */
              _reverse (tail , Cons_Bool (head , rlist ));
            }) : ({ /* cicili#Let7934 */
              // ----------
              ;
              ({ /* cicili#Progn7936 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let7940 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7942 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7943 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn7945 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7950 */
            _reverse (tail , Cons_Bool (head , Nil_Bool ()));
          }) : ({ /* cicili#Let7956 */
            // ----------
            ;
            ({ /* cicili#Progn7958 */
              list ;
            });
          }));
      });
    });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let7964 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let7966 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7967 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn7969 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn7974 */
            Cons_Bool (head , append_List_Bool (tail , rlist ));
          }) : ({ /* cicili#Let7980 */
            // ----------
            ;
            ({ /* cicili#Progn7982 */
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
  return (((len  <=  0 )) ? Nil_Bool () : ({ /* cicili#Let7995 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let7997 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7998 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8000 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8005 */
              Cons_Bool (head , take_List_Bool ((--len ), tail ));
            }) : ({ /* cicili#Let8011 */
              // ----------
              ;
              ({ /* cicili#Progn8013 */
                Nil_Bool ();
              });
            }));
        });
      }));
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8020 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8022 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8023 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8028 */
            ({ /* cicili#Let8032 */
              // ----------
              ;
              ({ /* cicili#Let8034 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8038 */
                    copy_List_Bool (list );
                  }) : ({ /* cicili#Let8043 */
                    // ----------
                    ;
                    ({ /* cicili#Progn8045 */
                      last_List_Bool (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8050 */
            // ----------
            ;
            ({ /* cicili#Progn8052 */
              Nil_Bool ();
            });
          }));
      });
    });
}
List_Bool init_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8060 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8062 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8063 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8065 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8070 */
            Cons_Bool (head , init_List_Bool (tail ));
          }) : ({ /* cicili#Let8076 */
            // ----------
            ;
            ({ /* cicili#Progn8078 */
              Nil_Bool ();
            });
          }));
      });
    });
}
size_t hasLen_List_Bool (List_Bool list , size_t desired ) {
  return ({ /* cicili#Let8085 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8087 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8088 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8093 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Bool (tail , (--desired )) ));
          }) : ({ /* cicili#Let8099 */
            // ----------
            ;
            ({ /* cicili#Progn8101 */
              0;
            });
          }));
      });
    });
}
size_t len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8107 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8109 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8110 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8115 */
            (1 +  len_List_Bool (tail ) );
          }) : ({ /* cicili#Let8120 */
            // ----------
            ;
            ({ /* cicili#Progn8122 */
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
  return (((len  <=  0 )) ? copy_List_Bool (list ) : ({ /* cicili#Let8133 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8135 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8136 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8141 */
              drop_List_Bool ((--len ), tail );
            }) : ({ /* cicili#Let8146 */
              // ----------
              ;
              ({ /* cicili#Progn8148 */
                Nil_Bool ();
              });
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let8156 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let8158 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8159 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8164 */
            Just_Bool (head );
          }) : ({ /* cicili#Let8169 */
            // ----------
            ;
            ({ /* cicili#Progn8171 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
List_Bool nthcdr_List_Bool (size_t index , List_Bool list ) {
  return ({ /* cicili#Let8178 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8180 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8181 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8186 */
            nthcdr_List_Bool ((--index ), tail );
          }) : ({ /* cicili#Let8191 */
            // ----------
            ;
            ({ /* cicili#Progn8193 */
              list ;
            });
          }));
      });
    });
}
Maybe_Bool nth_List_Bool (size_t index , List_Bool list ) {
  return ({ /* cicili#Let8200 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8202 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8203 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8205 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8210 */
            (((index  ==  0 )) ? Just_Bool (head ) : (((index  <  0 )) ? Nothing_Bool () : nth_List_Bool ((--index ), tail )));
          }) : ({ /* cicili#Let8219 */
            // ----------
            ;
            ({ /* cicili#Progn8221 */
              Nothing_Bool ();
            });
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let8226 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let8230 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8232 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8233 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8239 */
            { /* cicili#Block8241 */
              free (this );
              free_List_Bool ((&tail ));
            }
          }
        else
          { /* cicili#Let8249 */
            // ----------
            ;
            ({ /* cicili#Let8251 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8256 */
                  { /* cicili#Block8258 */
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
  { /* cicili#Let8269 */
    List_Bool instance  = malloc (sizeof(class_List_Bool));
    // ----------
    (*instance ) = ((class_List_Bool){ get_List_Bool__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Bool Nil_Bool () {
  { /* cicili#Let8275 */
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
  { /* cicili#Let8292 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let8297 */
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
  { /* cicili#Let8315 */
    Maybe_int instance  = ((Maybe_int){ get_Maybe_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_int Nothing_int () {
  { /* cicili#Let8320 */
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
    return ({ /* cicili#Let8330 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8332 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8333 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8335 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8340 */
              ({ /* cicili#Let8342 */
                int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let8346 */
              // ----------
              ;
              ({ /* cicili#Progn8348 */
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
  return (((buf  ==  NULL  )) ? Nil_int () : ({ /* cicili#Let8359 */
        int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_int () : Cons_int (item , pure_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_int (CFile file , List_int list ) {
  return ({ /* cicili#Let8369 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8371 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8372 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8374 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8379 */
            (({ /* cicili#Let8383 */
                // ----------
                ;
                ({ /* cicili#Let8385 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8389 */
                      (fprintf (file , "%d", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let8398 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8400 */
                        fprintf (file , "%d", head );
                      });
                    }));
                });
              }) +  show_List_int (file , tail ) );
          }) : ({ /* cicili#Let8410 */
            // ----------
            ;
            ({ /* cicili#Progn8412 */
              0;
            });
          }));
      });
    });
}
List_int copy_List_int (List_int list ) {
  return ({ /* cicili#Let8418 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8420 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8421 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8423 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8428 */
            Cons_int (head , copy_List_int (tail ));
          }) : ({ /* cicili#Let8434 */
            // ----------
            ;
            ({ /* cicili#Progn8436 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int replaceAt_List_int (List_int list , int item , size_t index ) {
  return ({ /* cicili#Let8443 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8445 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8446 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8448 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8453 */
            Cons_int (head , replaceAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let8459 */
            // ----------
            ;
            ({ /* cicili#Progn8461 */
              ({ /* cicili#Let8465 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8467 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8468 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8473 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* cicili#Let8479 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8481 */
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
  return ({ /* cicili#Let8488 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8490 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8491 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8493 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8498 */
            Cons_int (head , deleteAt_List_int (tail , (index  -  1 )));
          }) : ({ /* cicili#Let8504 */
            // ----------
            ;
            ({ /* cicili#Progn8506 */
              ({ /* cicili#Let8510 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8512 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8513 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8518 */
                      copy_List_int (taill );
                    }) : ({ /* cicili#Let8523 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8525 */
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
  return ({ /* cicili#Let8532 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8534 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8535 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8537 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8542 */
            Cons_int (head , insertAt_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let8548 */
            // ----------
            ;
            ({ /* cicili#Progn8550 */
              Cons_int (item , copy_List_int (list ));
            });
          }));
      });
    });
}
List_int replace_List_int (List_int list , int item , List_int aimed ) {
  return ({ /* cicili#Let8558 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8560 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8561 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8563 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8568 */
            Cons_int (head , replace_List_int (tail , item , aimed ));
          }) : ({ /* cicili#Let8574 */
            // ----------
            ;
            ({ /* cicili#Progn8576 */
              ({ /* cicili#Let8580 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8582 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8583 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8588 */
                      Cons_int (item , copy_List_int (taill ));
                    }) : ({ /* cicili#Let8594 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8596 */
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
  return ({ /* cicili#Let8603 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8605 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8606 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8608 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8613 */
            Cons_int (head , delete_List_int (tail , aimed ));
          }) : ({ /* cicili#Let8619 */
            // ----------
            ;
            ({ /* cicili#Progn8621 */
              ({ /* cicili#Let8625 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let8627 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8628 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8633 */
                      copy_List_int (taill );
                    }) : ({ /* cicili#Let8638 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8640 */
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
  return ({ /* cicili#Let8647 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8649 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8650 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8652 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8657 */
            Cons_int (head , insert_List_int (tail , item , rlist ));
          }) : ({ /* cicili#Let8663 */
            // ----------
            ;
            ({ /* cicili#Progn8665 */
              Cons_int (item , copy_List_int (rlist ));
            });
          }));
      });
    });
}
List_int reverse_List_int (List_int list ) {
  List_int _reverse (List_int list , List_int rlist ) {
    return ({ /* cicili#Let8674 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8676 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8677 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8679 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8684 */
              _reverse (tail , Cons_int (head , rlist ));
            }) : ({ /* cicili#Let8689 */
              // ----------
              ;
              ({ /* cicili#Progn8691 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8695 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8697 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8698 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8700 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8705 */
            _reverse (tail , Cons_int (head , Nil_int ()));
          }) : ({ /* cicili#Let8711 */
            // ----------
            ;
            ({ /* cicili#Progn8713 */
              list ;
            });
          }));
      });
    });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let8719 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8721 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8722 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8724 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8729 */
            Cons_int (head , append_List_int (tail , rlist ));
          }) : ({ /* cicili#Let8735 */
            // ----------
            ;
            ({ /* cicili#Progn8737 */
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
  return (((len  <=  0 )) ? Nil_int () : ({ /* cicili#Let8750 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8752 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8753 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8755 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8760 */
              Cons_int (head , take_List_int ((--len ), tail ));
            }) : ({ /* cicili#Let8766 */
              // ----------
              ;
              ({ /* cicili#Progn8768 */
                Nil_int ();
              });
            }));
        });
      }));
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let8775 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8777 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8778 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8783 */
            ({ /* cicili#Let8787 */
              // ----------
              ;
              ({ /* cicili#Let8789 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8793 */
                    copy_List_int (list );
                  }) : ({ /* cicili#Let8798 */
                    // ----------
                    ;
                    ({ /* cicili#Progn8800 */
                      last_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8805 */
            // ----------
            ;
            ({ /* cicili#Progn8807 */
              Nil_int ();
            });
          }));
      });
    });
}
List_int init_List_int (List_int list ) {
  return ({ /* cicili#Let8815 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8817 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8818 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8820 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8825 */
            Cons_int (head , init_List_int (tail ));
          }) : ({ /* cicili#Let8831 */
            // ----------
            ;
            ({ /* cicili#Progn8833 */
              Nil_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_int (List_int list , size_t desired ) {
  return ({ /* cicili#Let8840 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8842 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8843 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8848 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_int (tail , (--desired )) ));
          }) : ({ /* cicili#Let8854 */
            // ----------
            ;
            ({ /* cicili#Progn8856 */
              0;
            });
          }));
      });
    });
}
size_t len_List_int (List_int list ) {
  return ({ /* cicili#Let8862 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8864 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8865 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8870 */
            (1 +  len_List_int (tail ) );
          }) : ({ /* cicili#Let8875 */
            // ----------
            ;
            ({ /* cicili#Progn8877 */
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
  return (((len  <=  0 )) ? copy_List_int (list ) : ({ /* cicili#Let8888 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8890 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8891 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8896 */
              drop_List_int ((--len ), tail );
            }) : ({ /* cicili#Let8901 */
              // ----------
              ;
              ({ /* cicili#Progn8903 */
                Nil_int ();
              });
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return ({ /* cicili#Let8911 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let8913 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8914 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8919 */
            Just_int (head );
          }) : ({ /* cicili#Let8924 */
            // ----------
            ;
            ({ /* cicili#Progn8926 */
              Nothing_int ();
            });
          }));
      });
    });
}
List_int nthcdr_List_int (size_t index , List_int list ) {
  return ({ /* cicili#Let8933 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8935 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8936 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8941 */
            nthcdr_List_int ((--index ), tail );
          }) : ({ /* cicili#Let8946 */
            // ----------
            ;
            ({ /* cicili#Progn8948 */
              list ;
            });
          }));
      });
    });
}
Maybe_int nth_List_int (size_t index , List_int list ) {
  return ({ /* cicili#Let8955 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8957 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8958 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8960 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8965 */
            (((index  ==  0 )) ? Just_int (head ) : (((index  <  0 )) ? Nothing_int () : nth_List_int ((--index ), tail )));
          }) : ({ /* cicili#Let8974 */
            // ----------
            ;
            ({ /* cicili#Progn8976 */
              Nothing_int ();
            });
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let8981 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let8985 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8987 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8988 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8994 */
            { /* cicili#Block8996 */
              free (this );
              free_List_int ((&tail ));
            }
          }
        else
          { /* cicili#Let9004 */
            // ----------
            ;
            ({ /* cicili#Let9006 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9011 */
                  { /* cicili#Block9013 */
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
  { /* cicili#Let9024 */
    List_int instance  = malloc (sizeof(class_List_int));
    // ----------
    (*instance ) = ((class_List_int){ get_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int Nil_int () {
  { /* cicili#Let9030 */
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
  { /* cicili#Let9047 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let9052 */
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
  { /* cicili#Let9072 */
    Maybe_char instance  = ((Maybe_char){ get_Maybe_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_char Nothing_char () {
  { /* cicili#Let9077 */
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
    return ({ /* cicili#Let9087 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9089 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9090 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9092 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9097 */
              ({ /* cicili#Let9099 */
                char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let9103 */
              // ----------
              ;
              ({ /* cicili#Progn9105 */
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
  return (((buf  ==  NULL  )) ? Nil_char () : ({ /* cicili#Let9116 */
        char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_char () : Cons_char (item , pure_List_char ((++buf ), (--len ))));
      }));
}
size_t show_List_char (CFile file , List_char list ) {
  return ({ /* cicili#Let9126 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9128 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9129 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9131 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9136 */
            (({ /* cicili#Let9140 */
                // ----------
                ;
                ({ /* cicili#Let9142 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9146 */
                      (fprintf (file , "%c", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let9155 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9157 */
                        fprintf (file , "%c", head );
                      });
                    }));
                });
              }) +  show_List_char (file , tail ) );
          }) : ({ /* cicili#Let9167 */
            // ----------
            ;
            ({ /* cicili#Progn9169 */
              0;
            });
          }));
      });
    });
}
List_char copy_List_char (List_char list ) {
  return ({ /* cicili#Let9175 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9177 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9178 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9180 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9185 */
            Cons_char (head , copy_List_char (tail ));
          }) : ({ /* cicili#Let9191 */
            // ----------
            ;
            ({ /* cicili#Progn9193 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char replaceAt_List_char (List_char list , char item , size_t index ) {
  return ({ /* cicili#Let9200 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9202 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9203 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9205 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9210 */
            Cons_char (head , replaceAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let9216 */
            // ----------
            ;
            ({ /* cicili#Progn9218 */
              ({ /* cicili#Let9222 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9224 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9225 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9230 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* cicili#Let9236 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9238 */
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
  return ({ /* cicili#Let9245 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9247 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9248 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9250 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9255 */
            Cons_char (head , deleteAt_List_char (tail , (index  -  1 )));
          }) : ({ /* cicili#Let9261 */
            // ----------
            ;
            ({ /* cicili#Progn9263 */
              ({ /* cicili#Let9267 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9269 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9270 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9275 */
                      copy_List_char (taill );
                    }) : ({ /* cicili#Let9280 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9282 */
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
  return ({ /* cicili#Let9289 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9291 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9292 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9294 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9299 */
            Cons_char (head , insertAt_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let9305 */
            // ----------
            ;
            ({ /* cicili#Progn9307 */
              Cons_char (item , copy_List_char (list ));
            });
          }));
      });
    });
}
List_char replace_List_char (List_char list , char item , List_char aimed ) {
  return ({ /* cicili#Let9315 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9317 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9318 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9320 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9325 */
            Cons_char (head , replace_List_char (tail , item , aimed ));
          }) : ({ /* cicili#Let9331 */
            // ----------
            ;
            ({ /* cicili#Progn9333 */
              ({ /* cicili#Let9337 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9339 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9340 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9345 */
                      Cons_char (item , copy_List_char (taill ));
                    }) : ({ /* cicili#Let9351 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9353 */
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
  return ({ /* cicili#Let9360 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9362 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9363 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9365 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9370 */
            Cons_char (head , delete_List_char (tail , aimed ));
          }) : ({ /* cicili#Let9376 */
            // ----------
            ;
            ({ /* cicili#Progn9378 */
              ({ /* cicili#Let9382 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let9384 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9385 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9390 */
                      copy_List_char (taill );
                    }) : ({ /* cicili#Let9395 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9397 */
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
  return ({ /* cicili#Let9404 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9406 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9407 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9409 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9414 */
            Cons_char (head , insert_List_char (tail , item , rlist ));
          }) : ({ /* cicili#Let9420 */
            // ----------
            ;
            ({ /* cicili#Progn9422 */
              Cons_char (item , copy_List_char (rlist ));
            });
          }));
      });
    });
}
List_char reverse_List_char (List_char list ) {
  List_char _reverse (List_char list , List_char rlist ) {
    return ({ /* cicili#Let9431 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9433 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9434 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9436 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9441 */
              _reverse (tail , Cons_char (head , rlist ));
            }) : ({ /* cicili#Let9446 */
              // ----------
              ;
              ({ /* cicili#Progn9448 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9452 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9454 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9455 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9457 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9462 */
            _reverse (tail , Cons_char (head , Nil_char ()));
          }) : ({ /* cicili#Let9468 */
            // ----------
            ;
            ({ /* cicili#Progn9470 */
              list ;
            });
          }));
      });
    });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let9476 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9478 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9479 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9481 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9486 */
            Cons_char (head , append_List_char (tail , rlist ));
          }) : ({ /* cicili#Let9492 */
            // ----------
            ;
            ({ /* cicili#Progn9494 */
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
  return (((len  <=  0 )) ? Nil_char () : ({ /* cicili#Let9507 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9509 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9510 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9512 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9517 */
              Cons_char (head , take_List_char ((--len ), tail ));
            }) : ({ /* cicili#Let9523 */
              // ----------
              ;
              ({ /* cicili#Progn9525 */
                Nil_char ();
              });
            }));
        });
      }));
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let9532 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9534 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9535 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9540 */
            ({ /* cicili#Let9544 */
              // ----------
              ;
              ({ /* cicili#Let9546 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn9550 */
                    copy_List_char (list );
                  }) : ({ /* cicili#Let9555 */
                    // ----------
                    ;
                    ({ /* cicili#Progn9557 */
                      last_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let9562 */
            // ----------
            ;
            ({ /* cicili#Progn9564 */
              Nil_char ();
            });
          }));
      });
    });
}
List_char init_List_char (List_char list ) {
  return ({ /* cicili#Let9572 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9574 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9575 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9577 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9582 */
            Cons_char (head , init_List_char (tail ));
          }) : ({ /* cicili#Let9588 */
            // ----------
            ;
            ({ /* cicili#Progn9590 */
              Nil_char ();
            });
          }));
      });
    });
}
size_t hasLen_List_char (List_char list , size_t desired ) {
  return ({ /* cicili#Let9597 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9599 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9600 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9605 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_char (tail , (--desired )) ));
          }) : ({ /* cicili#Let9611 */
            // ----------
            ;
            ({ /* cicili#Progn9613 */
              0;
            });
          }));
      });
    });
}
size_t len_List_char (List_char list ) {
  return ({ /* cicili#Let9619 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9621 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9622 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9627 */
            (1 +  len_List_char (tail ) );
          }) : ({ /* cicili#Let9632 */
            // ----------
            ;
            ({ /* cicili#Progn9634 */
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
  return (((len  <=  0 )) ? copy_List_char (list ) : ({ /* cicili#Let9645 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9647 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9648 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9653 */
              drop_List_char ((--len ), tail );
            }) : ({ /* cicili#Let9658 */
              // ----------
              ;
              ({ /* cicili#Progn9660 */
                Nil_char ();
              });
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return ({ /* cicili#Let9668 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let9670 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9671 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9676 */
            Just_char (head );
          }) : ({ /* cicili#Let9681 */
            // ----------
            ;
            ({ /* cicili#Progn9683 */
              Nothing_char ();
            });
          }));
      });
    });
}
List_char nthcdr_List_char (size_t index , List_char list ) {
  return ({ /* cicili#Let9690 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9692 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9693 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9698 */
            nthcdr_List_char ((--index ), tail );
          }) : ({ /* cicili#Let9703 */
            // ----------
            ;
            ({ /* cicili#Progn9705 */
              list ;
            });
          }));
      });
    });
}
Maybe_char nth_List_char (size_t index , List_char list ) {
  return ({ /* cicili#Let9712 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9714 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9715 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9717 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9722 */
            (((index  ==  0 )) ? Just_char (head ) : (((index  <  0 )) ? Nothing_char () : nth_List_char ((--index ), tail )));
          }) : ({ /* cicili#Let9731 */
            // ----------
            ;
            ({ /* cicili#Progn9733 */
              Nothing_char ();
            });
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let9738 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let9742 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9744 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9745 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block9751 */
            { /* cicili#Block9753 */
              free (this );
              free_List_char ((&tail ));
            }
          }
        else
          { /* cicili#Let9761 */
            // ----------
            ;
            ({ /* cicili#Let9763 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block9768 */
                  { /* cicili#Block9770 */
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
  { /* cicili#Let9781 */
    List_char instance  = malloc (sizeof(class_List_char));
    // ----------
    (*instance ) = ((class_List_char){ get_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_char Nil_char () {
  { /* cicili#Let9787 */
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
  { /* cicili#Let9804 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let9809 */
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
    { /* cicili#Let9818 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nil_char ();
      else
        return Cons_char (item , new_List_char_Const ((++buf )));
    }
}
#ifndef __Range_int__H_IMPL__
#define __Range_int__H_IMPL__
int show_Range_int (CFile file , Range_int list ) {
  return ({ /* cicili#Let9833 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let9835 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9836 */
              (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9841 */
            (fprintf (file , "%d", from ) +  fprintf (file , "%s", " ") );
          }) : ({ /* cicili#Let9850 */
            // ----------
            ;
            ({ /* cicili#Progn9852 */
              0;
            });
          }));
      });
    });
}
Range_int drop_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let9858 */
      // ----------
      ;
      ({ /* cicili#Let9860 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9864 */
            ({ /* cicili#Let9866 */
              __auto_type ne  = next_Range_int (list );
              // ----------
              ({ /* cicili#Let9871 */
                // ----------
                ;
                ({ /* cicili#Let9873 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9877 */
                      drop_Range_int ((--len ), ne );
                    }) : ({ /* cicili#Let9882 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9884 */
                        list ;
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let9888 */
            // ----------
            ;
            ({ /* cicili#Progn9890 */
              list ;
            });
          }));
      });
    });
}
List_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let9896 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let9898 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9899 */
                (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  (len  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9904 */
            ({ /* cicili#Let9906 */
              __auto_type ne  = next_Range_int (list );
              // ----------
              ({ /* cicili#Let9911 */
                // ----------
                ;
                ({ /* cicili#Let9913 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9917 */
                      Cons_int (from , take_Range_int ((--len ), ne ));
                    }) : ({ /* cicili#Let9923 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9925 */
                        Cons_int (from , Nil_int ());
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let9931 */
            // ----------
            ;
            ({ /* cicili#Progn9933 */
              Nil_int ();
            });
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let9940 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) to ;
      typeof((((list -> __h_data ). Cons ). __h_2_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let9942 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((({ /* cicili#Progn9943 */
                    (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9945 */
                    (to  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn9947 */
                  (step  =  (((list -> __h_data ). Cons ). __h_2_mem ) );
                  true ;
                }) ) &&  ((from  +  step  ) <=  to  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9952 */
            Cons_Range_int ((from  +  step  ), to , step );
          }) : ({ /* cicili#Let9957 */
            // ----------
            ;
            ({ /* cicili#Progn9959 */
              Nil_Range_int ();
            });
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let9964 */
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
  { /* cicili#Let9973 */
    Range_int instance  = malloc (sizeof(class_Range_int));
    // ----------
    (*instance ) = ((class_Range_int){ get_Range_int__H_Table (), __h_Cons_t , .__h_data.Cons = { from , to , step }});
    return instance ;
  }
}
Range_int Nil_Range_int () {
  { /* cicili#Let9979 */
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
  return ({ /* cicili#Let9996 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let9998 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9999 */
              (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10004 */
            (fprintf (file , "%c", from ) +  fprintf (file , "%s", " ") );
          }) : ({ /* cicili#Let10013 */
            // ----------
            ;
            ({ /* cicili#Progn10015 */
              0;
            });
          }));
      });
    });
}
Range_char drop_Range_char (int len , Range_char list ) {
  return ({ /* cicili#Let10021 */
      // ----------
      ;
      ({ /* cicili#Let10023 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10027 */
            ({ /* cicili#Let10029 */
              __auto_type ne  = next_Range_char (list );
              // ----------
              ({ /* cicili#Let10034 */
                // ----------
                ;
                ({ /* cicili#Let10036 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10040 */
                      drop_Range_char ((--len ), ne );
                    }) : ({ /* cicili#Let10045 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10047 */
                        list ;
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let10051 */
            // ----------
            ;
            ({ /* cicili#Progn10053 */
              list ;
            });
          }));
      });
    });
}
List_char take_Range_char (int len , Range_char list ) {
  return ({ /* cicili#Let10059 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      // ----------
      ;
      ({ /* cicili#Let10061 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10062 */
                (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  (len  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10067 */
            ({ /* cicili#Let10069 */
              __auto_type ne  = next_Range_char (list );
              // ----------
              ({ /* cicili#Let10074 */
                // ----------
                ;
                ({ /* cicili#Let10076 */
                  bool __h_case_result  = (true  &&  ((ne -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10080 */
                      Cons_char (from , take_Range_char ((--len ), ne ));
                    }) : ({ /* cicili#Let10086 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10088 */
                        Cons_char (from , Nil_char ());
                      });
                    }));
                });
              });
            });
          }) : ({ /* cicili#Let10094 */
            // ----------
            ;
            ({ /* cicili#Progn10096 */
              Nil_char ();
            });
          }));
      });
    });
}
Range_char next_Range_char (Range_char list ) {
  return ({ /* cicili#Let10103 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) from ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) to ;
      typeof((((list -> __h_data ). Cons ). __h_2_mem )) step ;
      // ----------
      ;
      ({ /* cicili#Let10105 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (((({ /* cicili#Progn10106 */
                    (from  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn10108 */
                    (to  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn10110 */
                  (step  =  (((list -> __h_data ). Cons ). __h_2_mem ) );
                  true ;
                }) ) &&  ((from  +  step  ) <=  to  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10115 */
            Cons_Range_char ((from  +  step  ), to , step );
          }) : ({ /* cicili#Let10120 */
            // ----------
            ;
            ({ /* cicili#Progn10122 */
              Nil_Range_char ();
            });
          }));
      });
    });
}
void free_Range_char (Range_char * this_ptr ) {
  { /* cicili#Let10127 */
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
  { /* cicili#Let10136 */
    Range_char instance  = malloc (sizeof(class_Range_char));
    // ----------
    (*instance ) = ((class_Range_char){ get_Range_char__H_Table (), __h_Cons_t , .__h_data.Cons = { from , to , step }});
    return instance ;
  }
}
Range_char Nil_Range_char () {
  { /* cicili#Let10142 */
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
  { /* cicili#Let10166 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let10171 */
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
    return ({ /* cicili#Let10181 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10183 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10184 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10186 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10191 */
              ({ /* cicili#Let10193 */
                List_Bool * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let10197 */
              // ----------
              ;
              ({ /* cicili#Progn10199 */
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
  return (((buf  ==  NULL  )) ? Nil_List_Bool () : ({ /* cicili#Let10210 */
        List_Bool item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_Bool () : Cons_List_Bool (item , pure_List_List_Bool ((++buf ), (--len ))));
      }));
}
size_t show_List_List_Bool (CFile file , List_List_Bool list ) {
  return ({ /* cicili#Let10220 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10222 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10223 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10225 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10230 */
            (({ /* cicili#Let10234 */
                // ----------
                ;
                ({ /* cicili#Let10236 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10240 */
                      (show_List_Bool (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let10250 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10252 */
                        show_List_Bool (file , head );
                      });
                    }));
                });
              }) +  show_List_List_Bool (file , tail ) );
          }) : ({ /* cicili#Let10263 */
            // ----------
            ;
            ({ /* cicili#Progn10265 */
              0;
            });
          }));
      });
    });
}
List_List_Bool copy_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let10271 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10273 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10274 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10276 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10281 */
            Cons_List_Bool (head , copy_List_List_Bool (tail ));
          }) : ({ /* cicili#Let10287 */
            // ----------
            ;
            ({ /* cicili#Progn10289 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool replaceAt_List_List_Bool (List_List_Bool list , List_Bool item , size_t index ) {
  return ({ /* cicili#Let10296 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10298 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10299 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10301 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10306 */
            Cons_List_Bool (head , replaceAt_List_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let10312 */
            // ----------
            ;
            ({ /* cicili#Progn10314 */
              ({ /* cicili#Let10318 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let10320 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10321 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10326 */
                      Cons_List_Bool (item , copy_List_List_Bool (taill ));
                    }) : ({ /* cicili#Let10332 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10334 */
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
  return ({ /* cicili#Let10341 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10343 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10344 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10346 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10351 */
            Cons_List_Bool (head , deleteAt_List_List_Bool (tail , (index  -  1 )));
          }) : ({ /* cicili#Let10357 */
            // ----------
            ;
            ({ /* cicili#Progn10359 */
              ({ /* cicili#Let10363 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let10365 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10366 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10371 */
                      copy_List_List_Bool (taill );
                    }) : ({ /* cicili#Let10376 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10378 */
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
  return ({ /* cicili#Let10385 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10387 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10388 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10390 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10395 */
            Cons_List_Bool (head , insertAt_List_List_Bool (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let10401 */
            // ----------
            ;
            ({ /* cicili#Progn10403 */
              Cons_List_Bool (item , copy_List_List_Bool (list ));
            });
          }));
      });
    });
}
List_List_Bool replace_List_List_Bool (List_List_Bool list , List_Bool item , List_List_Bool aimed ) {
  return ({ /* cicili#Let10411 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10413 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10414 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10416 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10421 */
            Cons_List_Bool (head , replace_List_List_Bool (tail , item , aimed ));
          }) : ({ /* cicili#Let10427 */
            // ----------
            ;
            ({ /* cicili#Progn10429 */
              ({ /* cicili#Let10433 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let10435 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10436 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10441 */
                      Cons_List_Bool (item , copy_List_List_Bool (taill ));
                    }) : ({ /* cicili#Let10447 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10449 */
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
  return ({ /* cicili#Let10456 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10458 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10459 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10461 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10466 */
            Cons_List_Bool (head , delete_List_List_Bool (tail , aimed ));
          }) : ({ /* cicili#Let10472 */
            // ----------
            ;
            ({ /* cicili#Progn10474 */
              ({ /* cicili#Let10478 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let10480 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10481 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10486 */
                      copy_List_List_Bool (taill );
                    }) : ({ /* cicili#Let10491 */
                      // ----------
                      ;
                      ({ /* cicili#Progn10493 */
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
  return ({ /* cicili#Let10500 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10502 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10503 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10505 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10510 */
            Cons_List_Bool (head , insert_List_List_Bool (tail , item , rlist ));
          }) : ({ /* cicili#Let10516 */
            // ----------
            ;
            ({ /* cicili#Progn10518 */
              Cons_List_Bool (item , copy_List_List_Bool (rlist ));
            });
          }));
      });
    });
}
List_List_Bool reverse_List_List_Bool (List_List_Bool list ) {
  List_List_Bool _reverse (List_List_Bool list , List_List_Bool rlist ) {
    return ({ /* cicili#Let10527 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10529 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10530 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10532 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10537 */
              _reverse (tail , Cons_List_Bool (head , rlist ));
            }) : ({ /* cicili#Let10542 */
              // ----------
              ;
              ({ /* cicili#Progn10544 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10548 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10550 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10551 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10553 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10558 */
            _reverse (tail , Cons_List_Bool (head , Nil_List_Bool ()));
          }) : ({ /* cicili#Let10564 */
            // ----------
            ;
            ({ /* cicili#Progn10566 */
              list ;
            });
          }));
      });
    });
}
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist ) {
  return ({ /* cicili#Let10572 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10574 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10575 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10577 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10582 */
            Cons_List_Bool (head , append_List_List_Bool (tail , rlist ));
          }) : ({ /* cicili#Let10588 */
            // ----------
            ;
            ({ /* cicili#Progn10590 */
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
  return (((len  <=  0 )) ? Nil_List_Bool () : ({ /* cicili#Let10603 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10605 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10606 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10608 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10613 */
              Cons_List_Bool (head , take_List_List_Bool ((--len ), tail ));
            }) : ({ /* cicili#Let10619 */
              // ----------
              ;
              ({ /* cicili#Progn10621 */
                Nil_List_Bool ();
              });
            }));
        });
      }));
}
List_List_Bool last_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let10628 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10630 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10631 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10636 */
            ({ /* cicili#Let10640 */
              // ----------
              ;
              ({ /* cicili#Let10642 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10646 */
                    copy_List_List_Bool (list );
                  }) : ({ /* cicili#Let10651 */
                    // ----------
                    ;
                    ({ /* cicili#Progn10653 */
                      last_List_List_Bool (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10658 */
            // ----------
            ;
            ({ /* cicili#Progn10660 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool init_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let10668 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10670 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10671 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10673 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10678 */
            Cons_List_Bool (head , init_List_List_Bool (tail ));
          }) : ({ /* cicili#Let10684 */
            // ----------
            ;
            ({ /* cicili#Progn10686 */
              Nil_List_Bool ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_Bool (List_List_Bool list , size_t desired ) {
  return ({ /* cicili#Let10693 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10695 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10696 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10701 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_Bool (tail , (--desired )) ));
          }) : ({ /* cicili#Let10707 */
            // ----------
            ;
            ({ /* cicili#Progn10709 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let10715 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10717 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10718 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10723 */
            (1 +  len_List_List_Bool (tail ) );
          }) : ({ /* cicili#Let10728 */
            // ----------
            ;
            ({ /* cicili#Progn10730 */
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
  return (((len  <=  0 )) ? copy_List_List_Bool (list ) : ({ /* cicili#Let10741 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10743 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10744 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10749 */
              drop_List_List_Bool ((--len ), tail );
            }) : ({ /* cicili#Let10754 */
              // ----------
              ;
              ({ /* cicili#Progn10756 */
                Nil_List_Bool ();
              });
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let10764 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let10766 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10767 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10772 */
            Just_List_Bool (head );
          }) : ({ /* cicili#Let10777 */
            // ----------
            ;
            ({ /* cicili#Progn10779 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
List_List_Bool nthcdr_List_List_Bool (size_t index , List_List_Bool list ) {
  return ({ /* cicili#Let10786 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10788 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10789 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10794 */
            nthcdr_List_List_Bool ((--index ), tail );
          }) : ({ /* cicili#Let10799 */
            // ----------
            ;
            ({ /* cicili#Progn10801 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_Bool nth_List_List_Bool (size_t index , List_List_Bool list ) {
  return ({ /* cicili#Let10808 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10810 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10811 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10813 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10818 */
            (((index  ==  0 )) ? Just_List_Bool (head ) : (((index  <  0 )) ? Nothing_List_Bool () : nth_List_List_Bool ((--index ), tail )));
          }) : ({ /* cicili#Let10827 */
            // ----------
            ;
            ({ /* cicili#Progn10829 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let10834 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let10838 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10840 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10841 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block10847 */
            { /* cicili#Block10849 */
              free (this );
              free_List_List_Bool ((&tail ));
            }
          }
        else
          { /* cicili#Let10857 */
            // ----------
            ;
            ({ /* cicili#Let10859 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10864 */
                  { /* cicili#Block10866 */
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
  { /* cicili#Let10877 */
    List_List_Bool instance  = malloc (sizeof(class_List_List_Bool));
    // ----------
    (*instance ) = ((class_List_List_Bool){ get_List_List_Bool__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_Bool Nil_List_Bool () {
  { /* cicili#Let10883 */
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
  { /* cicili#Let10900 */
    Maybe_List_List_Bool instance  = ((Maybe_List_List_Bool){ get_Maybe_List_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_Bool Nothing_List_List_Bool () {
  { /* cicili#Let10905 */
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
  { /* cicili#Let10923 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let10928 */
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
    return ({ /* cicili#Let10938 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10940 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10941 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10943 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10948 */
              ({ /* cicili#Let10950 */
                List_int * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let10954 */
              // ----------
              ;
              ({ /* cicili#Progn10956 */
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
  return (((buf  ==  NULL  )) ? Nil_List_int () : ({ /* cicili#Let10967 */
        List_int item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_int () : Cons_List_int (item , pure_List_List_int ((++buf ), (--len ))));
      }));
}
size_t show_List_List_int (CFile file , List_List_int list ) {
  return ({ /* cicili#Let10977 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let10979 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10980 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10982 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10987 */
            (({ /* cicili#Let10991 */
                // ----------
                ;
                ({ /* cicili#Let10993 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10997 */
                      (show_List_int (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let11007 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11009 */
                        show_List_int (file , head );
                      });
                    }));
                });
              }) +  show_List_List_int (file , tail ) );
          }) : ({ /* cicili#Let11020 */
            // ----------
            ;
            ({ /* cicili#Progn11022 */
              0;
            });
          }));
      });
    });
}
List_List_int copy_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let11028 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11030 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11031 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11033 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11038 */
            Cons_List_int (head , copy_List_List_int (tail ));
          }) : ({ /* cicili#Let11044 */
            // ----------
            ;
            ({ /* cicili#Progn11046 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int replaceAt_List_List_int (List_List_int list , List_int item , size_t index ) {
  return ({ /* cicili#Let11053 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11055 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11056 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11058 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11063 */
            Cons_List_int (head , replaceAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let11069 */
            // ----------
            ;
            ({ /* cicili#Progn11071 */
              ({ /* cicili#Let11075 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11077 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11078 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11083 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* cicili#Let11089 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11091 */
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
  return ({ /* cicili#Let11098 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11100 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11101 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11103 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11108 */
            Cons_List_int (head , deleteAt_List_List_int (tail , (index  -  1 )));
          }) : ({ /* cicili#Let11114 */
            // ----------
            ;
            ({ /* cicili#Progn11116 */
              ({ /* cicili#Let11120 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11122 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11123 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11128 */
                      copy_List_List_int (taill );
                    }) : ({ /* cicili#Let11133 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11135 */
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
  return ({ /* cicili#Let11142 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11144 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11145 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11147 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11152 */
            Cons_List_int (head , insertAt_List_List_int (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let11158 */
            // ----------
            ;
            ({ /* cicili#Progn11160 */
              Cons_List_int (item , copy_List_List_int (list ));
            });
          }));
      });
    });
}
List_List_int replace_List_List_int (List_List_int list , List_int item , List_List_int aimed ) {
  return ({ /* cicili#Let11168 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11170 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11171 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11173 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11178 */
            Cons_List_int (head , replace_List_List_int (tail , item , aimed ));
          }) : ({ /* cicili#Let11184 */
            // ----------
            ;
            ({ /* cicili#Progn11186 */
              ({ /* cicili#Let11190 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11192 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11193 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11198 */
                      Cons_List_int (item , copy_List_List_int (taill ));
                    }) : ({ /* cicili#Let11204 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11206 */
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
  return ({ /* cicili#Let11213 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11215 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11216 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11218 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11223 */
            Cons_List_int (head , delete_List_List_int (tail , aimed ));
          }) : ({ /* cicili#Let11229 */
            // ----------
            ;
            ({ /* cicili#Progn11231 */
              ({ /* cicili#Let11235 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11237 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11238 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11243 */
                      copy_List_List_int (taill );
                    }) : ({ /* cicili#Let11248 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11250 */
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
  return ({ /* cicili#Let11257 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11259 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11260 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11262 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11267 */
            Cons_List_int (head , insert_List_List_int (tail , item , rlist ));
          }) : ({ /* cicili#Let11273 */
            // ----------
            ;
            ({ /* cicili#Progn11275 */
              Cons_List_int (item , copy_List_List_int (rlist ));
            });
          }));
      });
    });
}
List_List_int reverse_List_List_int (List_List_int list ) {
  List_List_int _reverse (List_List_int list , List_List_int rlist ) {
    return ({ /* cicili#Let11284 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let11286 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11287 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11289 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11294 */
              _reverse (tail , Cons_List_int (head , rlist ));
            }) : ({ /* cicili#Let11299 */
              // ----------
              ;
              ({ /* cicili#Progn11301 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let11305 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11307 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11308 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11310 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11315 */
            _reverse (tail , Cons_List_int (head , Nil_List_int ()));
          }) : ({ /* cicili#Let11321 */
            // ----------
            ;
            ({ /* cicili#Progn11323 */
              list ;
            });
          }));
      });
    });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let11329 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11331 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11332 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11334 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11339 */
            Cons_List_int (head , append_List_List_int (tail , rlist ));
          }) : ({ /* cicili#Let11345 */
            // ----------
            ;
            ({ /* cicili#Progn11347 */
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
  return (((len  <=  0 )) ? Nil_List_int () : ({ /* cicili#Let11360 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let11362 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11363 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11365 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11370 */
              Cons_List_int (head , take_List_List_int ((--len ), tail ));
            }) : ({ /* cicili#Let11376 */
              // ----------
              ;
              ({ /* cicili#Progn11378 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let11385 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11387 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11388 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11393 */
            ({ /* cicili#Let11397 */
              // ----------
              ;
              ({ /* cicili#Let11399 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn11403 */
                    copy_List_List_int (list );
                  }) : ({ /* cicili#Let11408 */
                    // ----------
                    ;
                    ({ /* cicili#Progn11410 */
                      last_List_List_int (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let11415 */
            // ----------
            ;
            ({ /* cicili#Progn11417 */
              Nil_List_int ();
            });
          }));
      });
    });
}
List_List_int init_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let11425 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11427 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11428 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11430 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11435 */
            Cons_List_int (head , init_List_List_int (tail ));
          }) : ({ /* cicili#Let11441 */
            // ----------
            ;
            ({ /* cicili#Progn11443 */
              Nil_List_int ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_int (List_List_int list , size_t desired ) {
  return ({ /* cicili#Let11450 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11452 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11453 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11458 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_int (tail , (--desired )) ));
          }) : ({ /* cicili#Let11464 */
            // ----------
            ;
            ({ /* cicili#Progn11466 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let11472 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11474 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11475 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11480 */
            (1 +  len_List_List_int (tail ) );
          }) : ({ /* cicili#Let11485 */
            // ----------
            ;
            ({ /* cicili#Progn11487 */
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
  return (((len  <=  0 )) ? copy_List_List_int (list ) : ({ /* cicili#Let11498 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let11500 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11501 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11506 */
              drop_List_List_int ((--len ), tail );
            }) : ({ /* cicili#Let11511 */
              // ----------
              ;
              ({ /* cicili#Progn11513 */
                Nil_List_int ();
              });
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let11521 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let11523 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11524 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11529 */
            Just_List_int (head );
          }) : ({ /* cicili#Let11534 */
            // ----------
            ;
            ({ /* cicili#Progn11536 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
List_List_int nthcdr_List_List_int (size_t index , List_List_int list ) {
  return ({ /* cicili#Let11543 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11545 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11546 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11551 */
            nthcdr_List_List_int ((--index ), tail );
          }) : ({ /* cicili#Let11556 */
            // ----------
            ;
            ({ /* cicili#Progn11558 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_int nth_List_List_int (size_t index , List_List_int list ) {
  return ({ /* cicili#Let11565 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11567 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11568 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11570 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11575 */
            (((index  ==  0 )) ? Just_List_int (head ) : (((index  <  0 )) ? Nothing_List_int () : nth_List_List_int ((--index ), tail )));
          }) : ({ /* cicili#Let11584 */
            // ----------
            ;
            ({ /* cicili#Progn11586 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let11591 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let11595 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11597 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11598 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block11604 */
            { /* cicili#Block11606 */
              free (this );
              free_List_List_int ((&tail ));
            }
          }
        else
          { /* cicili#Let11614 */
            // ----------
            ;
            ({ /* cicili#Let11616 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11621 */
                  { /* cicili#Block11623 */
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
  { /* cicili#Let11634 */
    List_List_int instance  = malloc (sizeof(class_List_List_int));
    // ----------
    (*instance ) = ((class_List_List_int){ get_List_List_int__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_int Nil_List_int () {
  { /* cicili#Let11640 */
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
  { /* cicili#Let11657 */
    Maybe_List_List_int instance  = ((Maybe_List_List_int){ get_Maybe_List_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_int Nothing_List_List_int () {
  { /* cicili#Let11662 */
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
  { /* cicili#Let11680 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let11685 */
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
    return ({ /* cicili#Let11695 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let11697 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11698 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11700 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn11705 */
              ({ /* cicili#Let11707 */
                List_char * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let11711 */
              // ----------
              ;
              ({ /* cicili#Progn11713 */
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
  return (((buf  ==  NULL  )) ? Nil_List_char () : ({ /* cicili#Let11724 */
        List_char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_List_char () : Cons_List_char (item , pure_List_List_char ((++buf ), (--len ))));
      }));
}
size_t show_List_List_char (CFile file , List_List_char list ) {
  return ({ /* cicili#Let11734 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11736 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11737 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11739 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11744 */
            (({ /* cicili#Let11748 */
                // ----------
                ;
                ({ /* cicili#Let11750 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11754 */
                      (show_List_char (file , head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let11764 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11766 */
                        show_List_char (file , head );
                      });
                    }));
                });
              }) +  show_List_List_char (file , tail ) );
          }) : ({ /* cicili#Let11777 */
            // ----------
            ;
            ({ /* cicili#Progn11779 */
              0;
            });
          }));
      });
    });
}
List_List_char copy_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let11785 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11787 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11788 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn11790 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11795 */
            Cons_List_char (head , copy_List_List_char (tail ));
          }) : ({ /* cicili#Let11801 */
            // ----------
            ;
            ({ /* cicili#Progn11803 */
              Nil_List_char ();
            });
          }));
      });
    });
}
List_List_char replaceAt_List_List_char (List_List_char list , List_char item , size_t index ) {
  return ({ /* cicili#Let11810 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11812 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11813 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11815 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11820 */
            Cons_List_char (head , replaceAt_List_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let11826 */
            // ----------
            ;
            ({ /* cicili#Progn11828 */
              ({ /* cicili#Let11832 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11834 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11835 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11840 */
                      Cons_List_char (item , copy_List_List_char (taill ));
                    }) : ({ /* cicili#Let11846 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11848 */
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
  return ({ /* cicili#Let11855 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11857 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11858 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11860 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11865 */
            Cons_List_char (head , deleteAt_List_List_char (tail , (index  -  1 )));
          }) : ({ /* cicili#Let11871 */
            // ----------
            ;
            ({ /* cicili#Progn11873 */
              ({ /* cicili#Let11877 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11879 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11880 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11885 */
                      copy_List_List_char (taill );
                    }) : ({ /* cicili#Let11890 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11892 */
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
  return ({ /* cicili#Let11899 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11901 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11902 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11904 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11909 */
            Cons_List_char (head , insertAt_List_List_char (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let11915 */
            // ----------
            ;
            ({ /* cicili#Progn11917 */
              Cons_List_char (item , copy_List_List_char (list ));
            });
          }));
      });
    });
}
List_List_char replace_List_List_char (List_List_char list , List_char item , List_List_char aimed ) {
  return ({ /* cicili#Let11925 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11927 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11928 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11930 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11935 */
            Cons_List_char (head , replace_List_List_char (tail , item , aimed ));
          }) : ({ /* cicili#Let11941 */
            // ----------
            ;
            ({ /* cicili#Progn11943 */
              ({ /* cicili#Let11947 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11949 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11950 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11955 */
                      Cons_List_char (item , copy_List_List_char (taill ));
                    }) : ({ /* cicili#Let11961 */
                      // ----------
                      ;
                      ({ /* cicili#Progn11963 */
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
  return ({ /* cicili#Let11970 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let11972 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn11973 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11975 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11980 */
            Cons_List_char (head , delete_List_List_char (tail , aimed ));
          }) : ({ /* cicili#Let11986 */
            // ----------
            ;
            ({ /* cicili#Progn11988 */
              ({ /* cicili#Let11992 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let11994 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn11995 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12000 */
                      copy_List_List_char (taill );
                    }) : ({ /* cicili#Let12005 */
                      // ----------
                      ;
                      ({ /* cicili#Progn12007 */
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
  return ({ /* cicili#Let12014 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12016 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12017 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12019 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12024 */
            Cons_List_char (head , insert_List_List_char (tail , item , rlist ));
          }) : ({ /* cicili#Let12030 */
            // ----------
            ;
            ({ /* cicili#Progn12032 */
              Cons_List_char (item , copy_List_List_char (rlist ));
            });
          }));
      });
    });
}
List_List_char reverse_List_List_char (List_List_char list ) {
  List_List_char _reverse (List_List_char list , List_List_char rlist ) {
    return ({ /* cicili#Let12041 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let12043 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12044 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12046 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12051 */
              _reverse (tail , Cons_List_char (head , rlist ));
            }) : ({ /* cicili#Let12056 */
              // ----------
              ;
              ({ /* cicili#Progn12058 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12062 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12064 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12065 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12067 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12072 */
            _reverse (tail , Cons_List_char (head , Nil_List_char ()));
          }) : ({ /* cicili#Let12078 */
            // ----------
            ;
            ({ /* cicili#Progn12080 */
              list ;
            });
          }));
      });
    });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let12086 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12088 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12089 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12091 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12096 */
            Cons_List_char (head , append_List_List_char (tail , rlist ));
          }) : ({ /* cicili#Let12102 */
            // ----------
            ;
            ({ /* cicili#Progn12104 */
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
  return (((len  <=  0 )) ? Nil_List_char () : ({ /* cicili#Let12117 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let12119 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12120 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12122 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12127 */
              Cons_List_char (head , take_List_List_char ((--len ), tail ));
            }) : ({ /* cicili#Let12133 */
              // ----------
              ;
              ({ /* cicili#Progn12135 */
                Nil_List_char ();
              });
            }));
        });
      }));
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let12142 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12144 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12145 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12150 */
            ({ /* cicili#Let12154 */
              // ----------
              ;
              ({ /* cicili#Let12156 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn12160 */
                    copy_List_List_char (list );
                  }) : ({ /* cicili#Let12165 */
                    // ----------
                    ;
                    ({ /* cicili#Progn12167 */
                      last_List_List_char (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let12172 */
            // ----------
            ;
            ({ /* cicili#Progn12174 */
              Nil_List_char ();
            });
          }));
      });
    });
}
List_List_char init_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let12182 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12184 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12185 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12187 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12192 */
            Cons_List_char (head , init_List_List_char (tail ));
          }) : ({ /* cicili#Let12198 */
            // ----------
            ;
            ({ /* cicili#Progn12200 */
              Nil_List_char ();
            });
          }));
      });
    });
}
size_t hasLen_List_List_char (List_List_char list , size_t desired ) {
  return ({ /* cicili#Let12207 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12209 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12210 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12215 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_List_char (tail , (--desired )) ));
          }) : ({ /* cicili#Let12221 */
            // ----------
            ;
            ({ /* cicili#Progn12223 */
              0;
            });
          }));
      });
    });
}
size_t len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let12229 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12231 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12232 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12237 */
            (1 +  len_List_List_char (tail ) );
          }) : ({ /* cicili#Let12242 */
            // ----------
            ;
            ({ /* cicili#Progn12244 */
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
  return (((len  <=  0 )) ? copy_List_List_char (list ) : ({ /* cicili#Let12255 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let12257 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12258 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12263 */
              drop_List_List_char ((--len ), tail );
            }) : ({ /* cicili#Let12268 */
              // ----------
              ;
              ({ /* cicili#Progn12270 */
                Nil_List_char ();
              });
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let12278 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let12280 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12281 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12286 */
            Just_List_char (head );
          }) : ({ /* cicili#Let12291 */
            // ----------
            ;
            ({ /* cicili#Progn12293 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
List_List_char nthcdr_List_List_char (size_t index , List_List_char list ) {
  return ({ /* cicili#Let12300 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12302 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12303 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12308 */
            nthcdr_List_List_char ((--index ), tail );
          }) : ({ /* cicili#Let12313 */
            // ----------
            ;
            ({ /* cicili#Progn12315 */
              list ;
            });
          }));
      });
    });
}
Maybe_List_char nth_List_List_char (size_t index , List_List_char list ) {
  return ({ /* cicili#Let12322 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12324 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12325 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12327 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12332 */
            (((index  ==  0 )) ? Just_List_char (head ) : (((index  <  0 )) ? Nothing_List_char () : nth_List_List_char ((--index ), tail )));
          }) : ({ /* cicili#Let12341 */
            // ----------
            ;
            ({ /* cicili#Progn12343 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let12348 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let12352 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12354 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12355 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block12361 */
            { /* cicili#Block12363 */
              free (this );
              free_List_List_char ((&tail ));
            }
          }
        else
          { /* cicili#Let12371 */
            // ----------
            ;
            ({ /* cicili#Let12373 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block12378 */
                  { /* cicili#Block12380 */
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
  { /* cicili#Let12391 */
    List_List_char instance  = malloc (sizeof(class_List_List_char));
    // ----------
    (*instance ) = ((class_List_List_char){ get_List_List_char__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_char Nil_List_char () {
  { /* cicili#Let12397 */
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
  { /* cicili#Let12414 */
    Maybe_List_List_char instance  = ((Maybe_List_List_char){ get_Maybe_List_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_List_char Nothing_List_List_char () {
  { /* cicili#Let12419 */
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
  { /* cicili#Let12437 */
    Maybe_CStr instance  = ((Maybe_CStr){ get_Maybe_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_CStr Nothing_CStr () {
  { /* cicili#Let12442 */
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
    return ({ /* cicili#Let12452 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let12454 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12455 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12457 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12462 */
              ({ /* cicili#Let12464 */
                CStr * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let12468 */
              // ----------
              ;
              ({ /* cicili#Progn12470 */
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
  return (((buf  ==  NULL  )) ? Nil_CStr () : ({ /* cicili#Let12481 */
        CStr item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_CStr () : Cons_CStr (item , pure_List_CStr ((++buf ), (--len ))));
      }));
}
size_t show_List_CStr (CFile file , List_CStr list ) {
  return ({ /* cicili#Let12491 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12493 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12494 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12496 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12501 */
            (({ /* cicili#Let12505 */
                // ----------
                ;
                ({ /* cicili#Let12507 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12511 */
                      (fprintf (file , "%s", head ) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let12520 */
                      // ----------
                      ;
                      ({ /* cicili#Progn12522 */
                        fprintf (file , "%s", head );
                      });
                    }));
                });
              }) +  show_List_CStr (file , tail ) );
          }) : ({ /* cicili#Let12532 */
            // ----------
            ;
            ({ /* cicili#Progn12534 */
              0;
            });
          }));
      });
    });
}
List_CStr copy_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let12540 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12542 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12543 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12545 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12550 */
            Cons_CStr (head , copy_List_CStr (tail ));
          }) : ({ /* cicili#Let12556 */
            // ----------
            ;
            ({ /* cicili#Progn12558 */
              Nil_CStr ();
            });
          }));
      });
    });
}
List_CStr replaceAt_List_CStr (List_CStr list , CStr item , size_t index ) {
  return ({ /* cicili#Let12565 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12567 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12568 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12570 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12575 */
            Cons_CStr (head , replaceAt_List_CStr (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let12581 */
            // ----------
            ;
            ({ /* cicili#Progn12583 */
              ({ /* cicili#Let12587 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let12589 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12590 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12595 */
                      Cons_CStr (item , copy_List_CStr (taill ));
                    }) : ({ /* cicili#Let12601 */
                      // ----------
                      ;
                      ({ /* cicili#Progn12603 */
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
  return ({ /* cicili#Let12610 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12612 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12613 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12615 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12620 */
            Cons_CStr (head , deleteAt_List_CStr (tail , (index  -  1 )));
          }) : ({ /* cicili#Let12626 */
            // ----------
            ;
            ({ /* cicili#Progn12628 */
              ({ /* cicili#Let12632 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let12634 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12635 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12640 */
                      copy_List_CStr (taill );
                    }) : ({ /* cicili#Let12645 */
                      // ----------
                      ;
                      ({ /* cicili#Progn12647 */
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
  return ({ /* cicili#Let12654 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12656 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12657 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12659 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12664 */
            Cons_CStr (head , insertAt_List_CStr (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let12670 */
            // ----------
            ;
            ({ /* cicili#Progn12672 */
              Cons_CStr (item , copy_List_CStr (list ));
            });
          }));
      });
    });
}
List_CStr replace_List_CStr (List_CStr list , CStr item , List_CStr aimed ) {
  return ({ /* cicili#Let12680 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12682 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12683 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12685 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12690 */
            Cons_CStr (head , replace_List_CStr (tail , item , aimed ));
          }) : ({ /* cicili#Let12696 */
            // ----------
            ;
            ({ /* cicili#Progn12698 */
              ({ /* cicili#Let12702 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let12704 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12705 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12710 */
                      Cons_CStr (item , copy_List_CStr (taill ));
                    }) : ({ /* cicili#Let12716 */
                      // ----------
                      ;
                      ({ /* cicili#Progn12718 */
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
  return ({ /* cicili#Let12725 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12727 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12728 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12730 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12735 */
            Cons_CStr (head , delete_List_CStr (tail , aimed ));
          }) : ({ /* cicili#Let12741 */
            // ----------
            ;
            ({ /* cicili#Progn12743 */
              ({ /* cicili#Let12747 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let12749 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12750 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn12755 */
                      copy_List_CStr (taill );
                    }) : ({ /* cicili#Let12760 */
                      // ----------
                      ;
                      ({ /* cicili#Progn12762 */
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
  return ({ /* cicili#Let12769 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12771 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12772 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12774 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12779 */
            Cons_CStr (head , insert_List_CStr (tail , item , rlist ));
          }) : ({ /* cicili#Let12785 */
            // ----------
            ;
            ({ /* cicili#Progn12787 */
              Cons_CStr (item , copy_List_CStr (rlist ));
            });
          }));
      });
    });
}
List_CStr reverse_List_CStr (List_CStr list ) {
  List_CStr _reverse (List_CStr list , List_CStr rlist ) {
    return ({ /* cicili#Let12796 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let12798 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12799 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12801 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12806 */
              _reverse (tail , Cons_CStr (head , rlist ));
            }) : ({ /* cicili#Let12811 */
              // ----------
              ;
              ({ /* cicili#Progn12813 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let12817 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12819 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12820 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12822 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12827 */
            _reverse (tail , Cons_CStr (head , Nil_CStr ()));
          }) : ({ /* cicili#Let12833 */
            // ----------
            ;
            ({ /* cicili#Progn12835 */
              list ;
            });
          }));
      });
    });
}
List_CStr append_List_CStr (List_CStr llist , List_CStr rlist ) {
  return ({ /* cicili#Let12841 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12843 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12844 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12846 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12851 */
            Cons_CStr (head , append_List_CStr (tail , rlist ));
          }) : ({ /* cicili#Let12857 */
            // ----------
            ;
            ({ /* cicili#Progn12859 */
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
  return (((len  <=  0 )) ? Nil_CStr () : ({ /* cicili#Let12872 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let12874 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12875 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12877 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn12882 */
              Cons_CStr (head , take_List_CStr ((--len ), tail ));
            }) : ({ /* cicili#Let12888 */
              // ----------
              ;
              ({ /* cicili#Progn12890 */
                Nil_CStr ();
              });
            }));
        });
      }));
}
List_CStr last_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let12897 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12899 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12900 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12905 */
            ({ /* cicili#Let12909 */
              // ----------
              ;
              ({ /* cicili#Let12911 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn12915 */
                    copy_List_CStr (list );
                  }) : ({ /* cicili#Let12920 */
                    // ----------
                    ;
                    ({ /* cicili#Progn12922 */
                      last_List_CStr (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let12927 */
            // ----------
            ;
            ({ /* cicili#Progn12929 */
              Nil_CStr ();
            });
          }));
      });
    });
}
List_CStr init_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let12937 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12939 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12940 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn12942 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12947 */
            Cons_CStr (head , init_List_CStr (tail ));
          }) : ({ /* cicili#Let12953 */
            // ----------
            ;
            ({ /* cicili#Progn12955 */
              Nil_CStr ();
            });
          }));
      });
    });
}
size_t hasLen_List_CStr (List_CStr list , size_t desired ) {
  return ({ /* cicili#Let12962 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12964 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12965 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12970 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_CStr (tail , (--desired )) ));
          }) : ({ /* cicili#Let12976 */
            // ----------
            ;
            ({ /* cicili#Progn12978 */
              0;
            });
          }));
      });
    });
}
size_t len_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let12984 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let12986 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12987 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12992 */
            (1 +  len_List_CStr (tail ) );
          }) : ({ /* cicili#Let12997 */
            // ----------
            ;
            ({ /* cicili#Progn12999 */
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
  return (((len  <=  0 )) ? copy_List_CStr (list ) : ({ /* cicili#Let13010 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let13012 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13013 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn13018 */
              drop_List_CStr ((--len ), tail );
            }) : ({ /* cicili#Let13023 */
              // ----------
              ;
              ({ /* cicili#Progn13025 */
                Nil_CStr ();
              });
            }));
        });
      }));
}
Maybe_CStr head_List_CStr (List_CStr list ) {
  return ({ /* cicili#Let13033 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let13035 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13036 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13041 */
            Just_CStr (head );
          }) : ({ /* cicili#Let13046 */
            // ----------
            ;
            ({ /* cicili#Progn13048 */
              Nothing_CStr ();
            });
          }));
      });
    });
}
List_CStr nthcdr_List_CStr (size_t index , List_CStr list ) {
  return ({ /* cicili#Let13055 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let13057 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13058 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13063 */
            nthcdr_List_CStr ((--index ), tail );
          }) : ({ /* cicili#Let13068 */
            // ----------
            ;
            ({ /* cicili#Progn13070 */
              list ;
            });
          }));
      });
    });
}
Maybe_CStr nth_List_CStr (size_t index , List_CStr list ) {
  return ({ /* cicili#Let13077 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let13079 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13080 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13082 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13087 */
            (((index  ==  0 )) ? Just_CStr (head ) : (((index  <  0 )) ? Nothing_CStr () : nth_List_CStr ((--index ), tail )));
          }) : ({ /* cicili#Let13096 */
            // ----------
            ;
            ({ /* cicili#Progn13098 */
              Nothing_CStr ();
            });
          }));
      });
    });
}
void free_List_CStr (List_CStr * this_ptr ) {
  { /* cicili#Let13103 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let13107 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let13109 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn13110 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block13116 */
            { /* cicili#Block13118 */
              free (this );
              free_List_CStr ((&tail ));
            }
          }
        else
          { /* cicili#Let13126 */
            // ----------
            ;
            ({ /* cicili#Let13128 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block13133 */
                  { /* cicili#Block13135 */
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
  { /* cicili#Let13146 */
    List_CStr instance  = malloc (sizeof(class_List_CStr));
    // ----------
    (*instance ) = ((class_List_CStr){ get_List_CStr__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_CStr Nil_CStr () {
  { /* cicili#Let13152 */
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
  { /* cicili#Let13169 */
    Maybe_List_CStr instance  = ((Maybe_List_CStr){ get_Maybe_List_CStr__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_CStr Nothing_List_CStr () {
  { /* cicili#Let13174 */
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
  { /* cicili#Let13194 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let13199 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Cell_List_Bool__H_IMPL__
#define __Cell_List_Bool__H_IMPL__
Cell_List_Bool new_Cell_List_Bool (List_Bool pointer ) {
  return ({ /* cicili#Let13206 */
      __auto_type holder  = ((List_Bool *)malloc (sizeof(List_Bool *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_Bool (holder , ((size_t)pointer ));
    });
}
Maybe_List_Bool take_Cell_List_Bool (Cell_List_Bool * this ) {
  return ({ /* cicili#Let13214 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13216 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13217 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13219 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13224 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let13228 */
                __auto_type result  = Just_List_Bool ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let13236 */
            // ----------
            ;
            ({ /* cicili#Progn13238 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool get_Cell_List_Bool (Cell_List_Bool life ) {
  return ({ /* cicili#Let13246 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13248 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13249 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13251 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13256 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_Bool ((*pointer )) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let13263 */
            // ----------
            ;
            ({ /* cicili#Progn13265 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_Cell_List_Bool (Cell_List_Bool * this ) {
  { /* cicili#Let13274 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let13276 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13277 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn13279 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13285 */
          if ((*pointer ) ==  NULL  )
            { /* cicili#Block13288 */
              free (((void *)pointer ));
              (*this ) = Dead_List_Bool ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block13294 */
                free_List_Bool (pointer );
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_Bool ();
              }
              }        }
      else
        { /* cicili#Let13303 */
          // ----------
          ;
          ({ /* cicili#Let13305 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13310 */
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
  { /* cicili#Let13321 */
    Cell_List_Bool instance  = ((Cell_List_Bool){ get_Cell_List_Bool__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_Bool Dead_List_Bool () {
  { /* cicili#Let13326 */
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
  { /* cicili#Let13346 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let13351 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Cell_List_int__H_IMPL__
#define __Cell_List_int__H_IMPL__
Cell_List_int new_Cell_List_int (List_int pointer ) {
  return ({ /* cicili#Let13358 */
      __auto_type holder  = ((List_int *)malloc (sizeof(List_int *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_int (holder , ((size_t)pointer ));
    });
}
Maybe_List_int take_Cell_List_int (Cell_List_int * this ) {
  return ({ /* cicili#Let13366 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13368 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13369 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13371 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13376 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let13380 */
                __auto_type result  = Just_List_int ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_int ());
          }) : ({ /* cicili#Let13388 */
            // ----------
            ;
            ({ /* cicili#Progn13390 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int get_Cell_List_int (Cell_List_int life ) {
  return ({ /* cicili#Let13398 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13400 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13401 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13403 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13408 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_int ((*pointer )) : Nothing_List_int ());
          }) : ({ /* cicili#Let13415 */
            // ----------
            ;
            ({ /* cicili#Progn13417 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_Cell_List_int (Cell_List_int * this ) {
  { /* cicili#Let13426 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let13428 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13429 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn13431 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13437 */
          if ((*pointer ) ==  NULL  )
            { /* cicili#Block13440 */
              free (((void *)pointer ));
              (*this ) = Dead_List_int ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block13446 */
                free_List_int (pointer );
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_int ();
              }
              }        }
      else
        { /* cicili#Let13455 */
          // ----------
          ;
          ({ /* cicili#Let13457 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13462 */
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
  { /* cicili#Let13473 */
    Cell_List_int instance  = ((Cell_List_int){ get_Cell_List_int__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_int Dead_List_int () {
  { /* cicili#Let13478 */
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
  { /* cicili#Let13498 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let13503 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __Cell_List_char__H_IMPL__
#define __Cell_List_char__H_IMPL__
Cell_List_char new_Cell_List_char (List_char pointer ) {
  return ({ /* cicili#Let13510 */
      __auto_type holder  = ((List_char *)malloc (sizeof(List_char *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_List_char (holder , ((size_t)pointer ));
    });
}
Maybe_List_char take_Cell_List_char (Cell_List_char * this ) {
  return ({ /* cicili#Let13518 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13520 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13521 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13523 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13528 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let13532 */
                __auto_type result  = Just_List_char ((*pointer ));
                // ----------
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_char ());
          }) : ({ /* cicili#Let13540 */
            // ----------
            ;
            ({ /* cicili#Progn13542 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char get_Cell_List_char (Cell_List_char life ) {
  return ({ /* cicili#Let13550 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13552 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13553 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13555 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13560 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_List_char ((*pointer )) : Nothing_List_char ());
          }) : ({ /* cicili#Let13567 */
            // ----------
            ;
            ({ /* cicili#Progn13569 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_Cell_List_char (Cell_List_char * this ) {
  { /* cicili#Let13578 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let13580 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn13581 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn13583 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13589 */
          if ((*pointer ) ==  NULL  )
            { /* cicili#Block13592 */
              free (((void *)pointer ));
              (*this ) = Dead_List_char ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block13598 */
                free_List_char (pointer );
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_List_char ();
              }
              }        }
      else
        { /* cicili#Let13607 */
          // ----------
          ;
          ({ /* cicili#Let13609 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13614 */
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
  { /* cicili#Let13625 */
    Cell_List_char instance  = ((Cell_List_char){ get_Cell_List_char__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
    // ----------
    return instance ;
  }
}
Cell_List_char Dead_List_char () {
  { /* cicili#Let13630 */
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
  { /* cicili#Let13650 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Bool Nothing_List_Bool () {
  { /* cicili#Let13655 */
    Maybe_List_Bool instance  = ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __Rc_List_Bool__H_IMPL__
#define __Rc_List_Bool__H_IMPL__
Rc_List_Bool new_Rc_List_Bool (List_Bool pointer ) {
  return ({ /* cicili#Let13662 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_Bool *)malloc (sizeof(List_Bool *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_Bool (holder , count , ((size_t)pointer ));
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let13671 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13673 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13674 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13676 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn13678 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13683 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn13686 */
                (++(*count ));
                __h_Hold_List_Bool (pointer , count , address );
              }) : Gone_List_Bool ());
          }) : ({ /* cicili#Let13692 */
            // ----------
            ;
            ({ /* cicili#Progn13694 */
              Gone_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool take_Rc_List_Bool (Rc_List_Bool * this ) {
  return ({ /* cicili#Let13702 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13704 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13705 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13707 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn13709 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13714 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let13718 */
                __auto_type result  = Just_List_Bool ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let13726 */
            // ----------
            ;
            ({ /* cicili#Progn13728 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
Maybe_List_Bool get_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let13736 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13738 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13739 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13741 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn13743 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13748 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_Bool ((*pointer )) : Nothing_List_Bool ());
          }) : ({ /* cicili#Let13755 */
            // ----------
            ;
            ({ /* cicili#Progn13757 */
              Nothing_List_Bool ();
            });
          }));
      });
    });
}
void free_Rc_List_Bool (Rc_List_Bool * this ) {
  { /* cicili#Let13766 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let13768 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13769 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13771 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn13773 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13779 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block13782 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_Bool ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block13790 */
                if ((*count ) ==  1 )
                  { /* cicili#Block13793 */
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
        { /* cicili#Let13803 */
          // ----------
          ;
          ({ /* cicili#Let13805 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13810 */
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
  { /* cicili#Let13821 */
    Rc_List_Bool instance  = ((Rc_List_Bool){ get_Rc_List_Bool__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_Bool Gone_List_Bool () {
  { /* cicili#Let13826 */
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
  { /* cicili#Let13846 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_int Nothing_List_int () {
  { /* cicili#Let13851 */
    Maybe_List_int instance  = ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __Rc_List_int__H_IMPL__
#define __Rc_List_int__H_IMPL__
Rc_List_int new_Rc_List_int (List_int pointer ) {
  return ({ /* cicili#Let13858 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_int *)malloc (sizeof(List_int *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_int (holder , count , ((size_t)pointer ));
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let13867 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13869 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13870 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13872 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn13874 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13879 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn13882 */
                (++(*count ));
                __h_Hold_List_int (pointer , count , address );
              }) : Gone_List_int ());
          }) : ({ /* cicili#Let13888 */
            // ----------
            ;
            ({ /* cicili#Progn13890 */
              Gone_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int take_Rc_List_int (Rc_List_int * this ) {
  return ({ /* cicili#Let13898 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13900 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13901 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13903 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn13905 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13910 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let13914 */
                __auto_type result  = Just_List_int ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_int ());
          }) : ({ /* cicili#Let13922 */
            // ----------
            ;
            ({ /* cicili#Progn13924 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
Maybe_List_int get_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let13932 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let13934 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13935 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn13937 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn13939 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13944 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_int ((*pointer )) : Nothing_List_int ());
          }) : ({ /* cicili#Let13951 */
            // ----------
            ;
            ({ /* cicili#Progn13953 */
              Nothing_List_int ();
            });
          }));
      });
    });
}
void free_Rc_List_int (Rc_List_int * this ) {
  { /* cicili#Let13962 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let13964 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn13965 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13967 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn13969 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13975 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block13978 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_int ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block13986 */
                if ((*count ) ==  1 )
                  { /* cicili#Block13989 */
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
        { /* cicili#Let13999 */
          // ----------
          ;
          ({ /* cicili#Let14001 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block14006 */
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
  { /* cicili#Let14017 */
    Rc_List_int instance  = ((Rc_List_int){ get_Rc_List_int__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_int Gone_List_int () {
  { /* cicili#Let14022 */
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
  { /* cicili#Let14042 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_char Nothing_List_char () {
  { /* cicili#Let14047 */
    Maybe_List_char instance  = ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __Rc_List_char__H_IMPL__
#define __Rc_List_char__H_IMPL__
Rc_List_char new_Rc_List_char (List_char pointer ) {
  return ({ /* cicili#Let14054 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_char *)malloc (sizeof(List_char *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_char (holder , count , ((size_t)pointer ));
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let14063 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let14065 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn14066 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14068 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn14070 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14075 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn14078 */
                (++(*count ));
                __h_Hold_List_char (pointer , count , address );
              }) : Gone_List_char ());
          }) : ({ /* cicili#Let14084 */
            // ----------
            ;
            ({ /* cicili#Progn14086 */
              Gone_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char take_Rc_List_char (Rc_List_char * this ) {
  return ({ /* cicili#Let14094 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let14096 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn14097 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14099 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn14101 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14106 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) ==  1 ) )) ? ({ /* cicili#Let14110 */
                __auto_type result  = Just_List_char ((*pointer ));
                // ----------
                (*count ) = 0;
                (*pointer ) = NULL ;
                result ;
              }) : Nothing_List_char ());
          }) : ({ /* cicili#Let14118 */
            // ----------
            ;
            ({ /* cicili#Progn14120 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
Maybe_List_char get_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let14128 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let14130 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn14131 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn14133 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn14135 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14140 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_char ((*pointer )) : Nothing_List_char ());
          }) : ({ /* cicili#Let14147 */
            // ----------
            ;
            ({ /* cicili#Progn14149 */
              Nothing_List_char ();
            });
          }));
      });
    });
}
void free_Rc_List_char (Rc_List_char * this ) {
  { /* cicili#Let14158 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let14160 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn14161 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14163 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn14165 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block14171 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block14174 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_char ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block14182 */
                if ((*count ) ==  1 )
                  { /* cicili#Block14185 */
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
        { /* cicili#Let14195 */
          // ----------
          ;
          ({ /* cicili#Let14197 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block14202 */
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
  { /* cicili#Let14213 */
    Rc_List_char instance  = ((Rc_List_char){ get_Rc_List_char__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_List_char Gone_List_char () {
  { /* cicili#Let14218 */
    Rc_List_char instance  = ((Rc_List_char){ get_Rc_List_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_List_char__H_IMPL__ */ 
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let14230 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14232 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14233 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14235 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14240 */
            foldr_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let14245 */
            // ----------
            ;
            ({ /* cicili#Progn14247 */
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
  { /* cicili#Let14264 */
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
  { /* cicili#Let14281 */
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
  return ({ /* cicili#Let14314 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14316 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14317 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14319 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14324 */
            foldr_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let14329 */
            // ----------
            ;
            ({ /* cicili#Progn14331 */
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
  { /* cicili#Let14348 */
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
  { /* cicili#Let14365 */
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
  return ({ /* cicili#Let14398 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14400 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14401 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14403 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14408 */
            foldr_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let14413 */
            // ----------
            ;
            ({ /* cicili#Progn14415 */
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
  { /* cicili#Let14432 */
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
  { /* cicili#Let14449 */
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
  return ({ /* cicili#Let14482 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14484 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14485 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14487 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14492 */
            foldr_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let14497 */
            // ----------
            ;
            ({ /* cicili#Progn14499 */
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
  { /* cicili#Let14516 */
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
  { /* cicili#Let14533 */
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
  return ({ /* cicili#Let14566 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14568 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14569 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14571 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14576 */
            foldr_List_Bool (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let14581 */
            // ----------
            ;
            ({ /* cicili#Progn14583 */
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
  { /* cicili#Let14600 */
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
  { /* cicili#Let14617 */
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
  return ({ /* cicili#Let14653 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14655 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14656 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14658 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14663 */
            foldr_List_int (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let14668 */
            // ----------
            ;
            ({ /* cicili#Progn14670 */
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
  { /* cicili#Let14687 */
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
  { /* cicili#Let14704 */
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
  return ({ /* cicili#Let14740 */
      typeof((((foldable -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((foldable -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14742 */
        bool __h_case_result  = (true  &&  (((foldable -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14743 */
                (head  =  (((foldable -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14745 */
                (tail  =  (((foldable -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14750 */
            foldr_List_char (folder , folder (neutral , head ), tail );
          }) : ({ /* cicili#Let14755 */
            // ----------
            ;
            ({ /* cicili#Progn14757 */
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
  { /* cicili#Let14774 */
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
  { /* cicili#Let14791 */
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
  return ({ /* cicili#Let14829 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14831 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14832 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14834 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14839 */
            Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail ));
          }) : ({ /* cicili#Let14846 */
            // ----------
            ;
            ({ /* cicili#Progn14848 */
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
  { /* cicili#Let14862 */
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
  return ({ /* cicili#Let14880 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14882 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14883 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14885 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14890 */
            Cons_char (a_b (head ), fmap_Functor_List_int_char (a_b , tail ));
          }) : ({ /* cicili#Let14897 */
            // ----------
            ;
            ({ /* cicili#Progn14899 */
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
  { /* cicili#Let14913 */
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
  return ({ /* cicili#Let14931 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14933 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14934 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14936 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14941 */
            Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail ));
          }) : ({ /* cicili#Let14948 */
            // ----------
            ;
            ({ /* cicili#Progn14950 */
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
  { /* cicili#Let14964 */
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
  return ({ /* cicili#Let14982 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let14984 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn14985 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn14987 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn14992 */
            Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail ));
          }) : ({ /* cicili#Let14999 */
            // ----------
            ;
            ({ /* cicili#Progn15001 */
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
  { /* cicili#Let15015 */
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
  return ({ /* cicili#Let15033 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let15035 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15036 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15038 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15043 */
            Cons_int (a_b (head ), fmap_Functor_List_char_int (a_b , tail ));
          }) : ({ /* cicili#Let15050 */
            // ----------
            ;
            ({ /* cicili#Progn15052 */
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
  { /* cicili#Let15066 */
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
  return ({ /* cicili#Let15084 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let15086 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn15087 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn15089 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15094 */
            Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail ));
          }) : ({ /* cicili#Let15101 */
            // ----------
            ;
            ({ /* cicili#Progn15103 */
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
  { /* cicili#Let15117 */
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
  return ({ /* cicili#Let15135 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let15137 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15138 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15143 */
            Just_int (a_b (val ));
          }) : ({ /* cicili#Let15153 */
            // ----------
            ;
            ({ /* cicili#Progn15155 */
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
  { /* cicili#Let15169 */
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
  return ({ /* cicili#Let15187 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let15189 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15190 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15195 */
            Just_char (a_b (val ));
          }) : ({ /* cicili#Let15205 */
            // ----------
            ;
            ({ /* cicili#Progn15207 */
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
  { /* cicili#Let15221 */
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
  return ({ /* cicili#Let15239 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let15241 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15242 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15247 */
            Just_Bool (a_b (val ));
          }) : ({ /* cicili#Let15257 */
            // ----------
            ;
            ({ /* cicili#Progn15259 */
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
  { /* cicili#Let15273 */
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
  return ({ /* cicili#Let15291 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let15293 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15294 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15299 */
            Just_char (a_b (val ));
          }) : ({ /* cicili#Let15309 */
            // ----------
            ;
            ({ /* cicili#Progn15311 */
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
  { /* cicili#Let15325 */
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
  return ({ /* cicili#Let15343 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let15345 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15346 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15351 */
            Just_int (a_b (val ));
          }) : ({ /* cicili#Let15361 */
            // ----------
            ;
            ({ /* cicili#Progn15363 */
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
  { /* cicili#Let15377 */
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
  return ({ /* cicili#Let15395 */
      typeof((((input . __h_data ). Just ). __h_0_mem )) val ;
      // ----------
      ;
      ({ /* cicili#Let15397 */
        bool __h_case_result  = (true  &&  (((input . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn15398 */
              (val  =  (((input . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn15403 */
            Just_Bool (a_b (val ));
          }) : ({ /* cicili#Let15413 */
            // ----------
            ;
            ({ /* cicili#Progn15415 */
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
  { /* cicili#Let15429 */
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
