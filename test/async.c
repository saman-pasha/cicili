#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "../lib/std/coroutine/coordinator.h"
struct __ciciliC_Context_108 {
          int (*routine) (    struct __ciciliC_Context_108 * context ,     Coroutine * __ciciliA_Context_ );
  struct ciciliStruct112 { /* ciciliStruct112 */
              int * state_counter ;
    } context ;

};
struct __ciciliS_116 {
      void * context ;
};
  static void __ciciliL_117 (  struct __ciciliS_116 * ciciliDefer114_ptr ) {
          void * context  = (ciciliDefer114_ptr -> context );
    free (context );
  }
struct __ciciliS_121 {
      int * state_counter ;
};
  static void __ciciliL_122 (  struct __ciciliS_121 * ciciliDefer119_ptr ) {
          int * state_counter  = (ciciliDefer119_ptr -> state_counter );
    free (state_counter );
  }
  static void __ciciliL_130 (  int c ) {
      fprintf (stdout , "cmd3 done: %d\n", c );

  }
  static void __ciciliL_138 () {
      fprintf (stdout , "cmd3 error\n");

  }
  static void __ciciliL_145 (  int c ) {
      fprintf (stdout , "cmd3 yield: %d\n", c );

  }
  static int __ciciliC_Context_108_s___ciciliC_Routine_109 (  struct __ciciliC_Context_108 * context ,   Coroutine * __ciciliA_Context_ ) {
          int * state_counter  = ((context -> context ). state_counter );
              struct __ciciliS_116 ciciliDefer114  __attribute__((__cleanup__(__ciciliL_117 ))) = { context };

              struct __ciciliS_121 ciciliDefer119  __attribute__((__cleanup__(__ciciliL_122 ))) = { state_counter };

    { /* cicili#Let124 */
        int counter  = (*state_counter );
        const int end  = 3;
        sleep (1);
        printf ("cmd3 counter update: %d\n", (++(*state_counter )));
        if (counter  ==  end  ) 
              { /* cicili#Block128 */
                __ciciliL_130 (counter );
                return 0;
              } /* cicili#Block128 */


          else
            {
              if (counter  >  end  ) 
                  { /* cicili#Block136 */
                    __ciciliL_138 ();
                    return 0;
                  } /* cicili#Block136 */


              else
                  { /* cicili#Block143 */
                    __ciciliL_145 (counter );
                    longjmp ((__ciciliA_Coordinator_ . main ), -1);
                  } /* cicili#Block143 */


              }

      }
    longjmp ((__ciciliA_Coordinator_ . main ), -1);
  }
  void done_callback1 (  char payload [128]) {
    printf ("task1 the payload received: %s\n", payload );
        ({ /* cicili#Let107 */
            Coroutine * task104  = malloc (sizeof(Coroutine));
            __auto_type cls103  = ((struct __ciciliC_Context_108 ){ __ciciliC_Context_108_s___ciciliC_Routine_109 , { malloc (sizeof(int))}})
;
            void * data  = malloc (sizeof(cls103));
            memcpy (data , (&cls103 ), sizeof(cls103));
            (task104 -> status ) = 0;
            (task104 -> args ) = data ;
            (task104 -> routine ) = ((                int (*)(                void * args ,                 Coroutine * coroutine ))(cls103 . routine ));
            (task104 -> next ) = NULL ;
            Coordinator_m_reg_task(&__ciciliA_Coordinator_, task104 );
          });


  }

  void error_callback1 (  int status ) {
    printf ("task1 the routine error status: %d\n", status );
  }

  void done_callback2 (  char payload [128]) {
    printf ("task2 the payload received: %s\n", payload );
  }

  void error_callback2 (  int status ) {
    printf ("task2 the routine error status: %d\n", status );
  }

          static __thread Coordinator __ciciliA_Coordinator_  = { NULL , NULL , false };

    struct __ciciliC_Context_162 {
          int (*routine) (    struct __ciciliC_Context_162 * context ,     Coroutine * __ciciliA_Context_ );
  struct ciciliStruct166 { /* ciciliStruct166 */
    } context ;

};
struct __ciciliS_170 {
      void * context ;
};
      static void __ciciliL_171 (      struct __ciciliS_170 * ciciliDefer168_ptr ) {
                  void * context  = (ciciliDefer168_ptr -> context );
        free (context );
      }
      static int __ciciliC_Context_162_s___ciciliC_Routine_163 (      struct __ciciliC_Context_162 * context ,       Coroutine * __ciciliA_Context_ ) {
                      struct __ciciliS_170 ciciliDefer168  __attribute__((__cleanup__(__ciciliL_171 ))) = { context };

        { /* cicili#Let173 */
            char buffer [128];
            printf ("polling for cmd1: ");
            if (scanf ("%s", buffer ) >  0 ) 
                { /* cicili#Block176 */
                  printf ("the cmd1: %s\n", buffer );
                  if (strcmp (buffer , "quit") ==  0 ) 
                        { /* cicili#Block180 */
                          done_callback1 (buffer );
                          return 0;
                        } /* cicili#Block180 */


                    else
                      {
                        if (strcmp (buffer , "error") ==  0 ) 
                            { /* cicili#Block185 */
                              error_callback1 (-300);
                              return 0;
                            } /* cicili#Block185 */


                        }

                } /* cicili#Block176 */

              else
                  { /* cicili#Block189 */
                    error_callback1 (-200);
                    return 0;
                  } /* cicili#Block189 */



          }
        longjmp ((__ciciliA_Coordinator_ . main ), -1);
      }
struct __ciciliC_Context_198 {
          int (*routine) (    struct __ciciliC_Context_198 * context ,     Coroutine * __ciciliA_Context_ );
  struct ciciliStruct202 { /* ciciliStruct202 */
              char * buffer ;
    } context ;

};
struct __ciciliS_206 {
      void * context ;
};
      static void __ciciliL_207 (      struct __ciciliS_206 * ciciliDefer204_ptr ) {
                  void * context  = (ciciliDefer204_ptr -> context );
        free (context );
      }
struct __ciciliS_211 {
      char * buffer ;
};
      static void __ciciliL_212 (      struct __ciciliS_211 * ciciliDefer209_ptr ) {
                  char * buffer  = (ciciliDefer209_ptr -> buffer );
        printf ("buffer being released\n");
        free (buffer );
      }
      static void __ciciliL_231 (      int status ,       char * message ) {
          fprintf (stdout , "what's happened? %d: %s\n", status , message );

      }
      static int __ciciliC_Context_198_s___ciciliC_Routine_199 (      struct __ciciliC_Context_198 * context ,       Coroutine * __ciciliA_Context_ ) {
                  char * buffer  = ((context -> context ). buffer );
                      struct __ciciliS_206 ciciliDefer204  __attribute__((__cleanup__(__ciciliL_207 ))) = { context };

        printf ("the state buffer: %s\n", buffer );
                      struct __ciciliS_211 ciciliDefer209  __attribute__((__cleanup__(__ciciliL_212 ))) = { buffer };

        printf ("polling for cmd2: ");
        if (scanf ("%s", buffer ) >  0 ) 
            { /* cicili#Block215 */
              printf ("the cmd2: %s\n", buffer );
              if (strcmp (buffer , "yield") ==  0 ) 
                    { /* cicili#Block219 */
                      done_callback2 (buffer );
                      longjmp ((__ciciliA_Coordinator_ . main ), -1);
                    } /* cicili#Block219 */


                else
                  {
                    if (strcmp (buffer , "done") ==  0 ) 
                        { /* cicili#Block224 */
                          done_callback2 (buffer );
                          return 0;
                        } /* cicili#Block224 */


                    else
                      {
                        if (strcmp (buffer , "error") ==  0 ) 
                            { /* cicili#Block229 */
                              __ciciliL_231 (-3, "don't know");
                              return 0;
                            } /* cicili#Block229 */


                        }
                    }

            } /* cicili#Block215 */

          else
              { /* cicili#Block236 */
                error_callback2 (-2);
                return 0;
              } /* cicili#Block236 */



        longjmp ((__ciciliA_Coordinator_ . main ), -1);
      }
      int main () {
        Coordinator_m_set_logging(&__ciciliA_Coordinator_, true );
            ({ /* cicili#Let161 */
                Coroutine * task158  = malloc (sizeof(Coroutine));
                __auto_type cls157  = ((struct __ciciliC_Context_162 ){ __ciciliC_Context_162_s___ciciliC_Routine_163 , { }})
;
                void * data  = malloc (sizeof(cls157));
                memcpy (data , (&cls157 ), sizeof(cls157));
                (task158 -> status ) = 0;
                (task158 -> args ) = data ;
                (task158 -> routine ) = ((                    int (*)(                    void * args ,                     Coroutine * coroutine ))(cls157 . routine ));
                (task158 -> next ) = NULL ;
                Coordinator_m_reg_task(&__ciciliA_Coordinator_, task158 );
              });


            ({ /* cicili#Let197 */
                Coroutine * task194  = malloc (sizeof(Coroutine));
                __auto_type cls193  = ((struct __ciciliC_Context_198 ){ __ciciliC_Context_198_s___ciciliC_Routine_199 , { malloc (128)}})
;
                void * data  = malloc (sizeof(cls193));
                memcpy (data , (&cls193 ), sizeof(cls193));
                (task194 -> status ) = 0;
                (task194 -> args ) = data ;
                (task194 -> routine ) = ((                    int (*)(                    void * args ,                     Coroutine * coroutine ))(cls193 . routine ));
                (task194 -> next ) = NULL ;
                Coordinator_m_reg_task(&__ciciliA_Coordinator_, task194 );
              });


        Coordinator_m_loop(&__ciciliA_Coordinator_);
      }



