#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "../lib/std/coroutine/coordinator.h"
struct __ciciliC_Context_107 {
    int (*routine) (  struct __ciciliC_Context_107 * context ,   Coroutine * __ciciliA_Context_ );
  struct ciciliStruct110 { /* ciciliStruct110 */
    int * state_counter ;
  } context ;
};
struct __ciciliS_114 {
  void * context ;
};
static void __ciciliL_115 (struct __ciciliS_114 * ciciliDefer112_ptr ) {
      void * context  = (ciciliDefer112_ptr -> context );
  free (context );
}
struct __ciciliS_119 {
  int * state_counter ;
};
static void __ciciliL_120 (struct __ciciliS_119 * ciciliDefer117_ptr ) {
      int * state_counter  = (ciciliDefer117_ptr -> state_counter );
  free (state_counter );
}
static void __ciciliL_127 (int c ) {
  fprintf (stdout , "cmd3 done: %d\n", c );
}
static void __ciciliL_133 () {
  fprintf (stdout , "cmd3 error\n");
}
static void __ciciliL_138 (int c ) {
  fprintf (stdout , "cmd3 yield: %d\n", c );
}
static int __ciciliC_Context_107_s___ciciliC_Routine_108 (struct __ciciliC_Context_107 * context , Coroutine * __ciciliA_Context_ ) {
      int * state_counter  = ((context -> context ). state_counter );
  struct __ciciliS_114 ciciliDefer112  __attribute__((__cleanup__(__ciciliL_115 ))) = { context };
;
  struct __ciciliS_119 ciciliDefer117  __attribute__((__cleanup__(__ciciliL_120 ))) = { state_counter };
;
  { /* cicili#Let122 */
      int counter  = (*state_counter );
      const int end  = 3;
      sleep (1);
      printf ("cmd3 counter update: %d\n", (++(*state_counter )));
      if (counter  ==  end  ) 
          { /* cicili#Block125 */
            __ciciliL_127 (counter );
            return 0;
          } /* cicili#Block125 */

        else
          {
            if (counter  >  end  ) 
              { /* cicili#Block131 */
                __ciciliL_133 ();
                return 0;
              } /* cicili#Block131 */

            else
              { /* cicili#Block136 */
                __ciciliL_138 (counter );
                longjmp ((__ciciliA_Coordinator_ . main ), -1);
              } /* cicili#Block136 */

            }

    }
  longjmp ((__ciciliA_Coordinator_ . main ), -1);
}
void done_callback1 (char payload [128]) {
  printf ("task1 the payload received: %s\n", payload );
    ({ /* cicili#Let106 */
        Coroutine * task104  = malloc (sizeof(Coroutine));
        __auto_type cls103  = ((struct __ciciliC_Context_107 ){ __ciciliC_Context_107_s___ciciliC_Routine_108 , { malloc (sizeof(int))}});
        void * data  = malloc (sizeof(cls103));
        memcpy (data , (&cls103 ), sizeof(cls103));
        (task104 -> status ) = 0;
        (task104 -> args ) = data ;
        (task104 -> routine ) = ((            int (*)(            void * args ,             Coroutine * coroutine ))(cls103 . routine ));
        (task104 -> next ) = NULL ;
        Coordinator_m_reg_task(&__ciciliA_Coordinator_, task104 );
      });

}
void error_callback1 (int status ) {
  printf ("task1 the routine error status: %d\n", status );
}
void done_callback2 (char payload [128]) {
  printf ("task2 the payload received: %s\n", payload );
}
void error_callback2 (int status ) {
  printf ("task2 the routine error status: %d\n", status );
}
static __thread Coordinator __ciciliA_Coordinator_  = { NULL , NULL , false };
struct __ciciliC_Context_152 {
    int (*routine) (  struct __ciciliC_Context_152 * context ,   Coroutine * __ciciliA_Context_ );
  struct ciciliStruct155 { /* ciciliStruct155 */
  } context ;
};
struct __ciciliS_159 {
  void * context ;
};
static void __ciciliL_160 (struct __ciciliS_159 * ciciliDefer157_ptr ) {
      void * context  = (ciciliDefer157_ptr -> context );
  free (context );
}
static int __ciciliC_Context_152_s___ciciliC_Routine_153 (struct __ciciliC_Context_152 * context , Coroutine * __ciciliA_Context_ ) {
  struct __ciciliS_159 ciciliDefer157  __attribute__((__cleanup__(__ciciliL_160 ))) = { context };
;
  { /* cicili#Let162 */
      char buffer [128];
      printf ("polling for cmd1: ");
      if (scanf ("%s", buffer ) >  0 ) 
          { /* cicili#Block165 */
            printf ("the cmd1: %s\n", buffer );
            if (strcmp (buffer , "quit") ==  0 ) 
                { /* cicili#Block168 */
                  done_callback1 (buffer );
                  return 0;
                } /* cicili#Block168 */

              else
                {
                  if (strcmp (buffer , "error") ==  0 ) 
                    { /* cicili#Block172 */
                      error_callback1 (-300);
                      return 0;
                    } /* cicili#Block172 */

                  }

          } /* cicili#Block165 */

        else
          { /* cicili#Block175 */
            error_callback1 (-200);
            return 0;
          } /* cicili#Block175 */


    }
  longjmp ((__ciciliA_Coordinator_ . main ), -1);
}
struct __ciciliC_Context_183 {
    int (*routine) (  struct __ciciliC_Context_183 * context ,   Coroutine * __ciciliA_Context_ );
  struct ciciliStruct186 { /* ciciliStruct186 */
    char * buffer ;
  } context ;
};
struct __ciciliS_190 {
  void * context ;
};
static void __ciciliL_191 (struct __ciciliS_190 * ciciliDefer188_ptr ) {
      void * context  = (ciciliDefer188_ptr -> context );
  free (context );
}
struct __ciciliS_195 {
  char * buffer ;
};
static void __ciciliL_196 (struct __ciciliS_195 * ciciliDefer193_ptr ) {
      char * buffer  = (ciciliDefer193_ptr -> buffer );
  printf ("buffer being released\n");
  free (buffer );
}
static void __ciciliL_212 (int status , char * message ) {
  fprintf (stdout , "what's happened? %d: %s\n", status , message );
}
static int __ciciliC_Context_183_s___ciciliC_Routine_184 (struct __ciciliC_Context_183 * context , Coroutine * __ciciliA_Context_ ) {
      char * buffer  = ((context -> context ). buffer );
  struct __ciciliS_190 ciciliDefer188  __attribute__((__cleanup__(__ciciliL_191 ))) = { context };
;
  printf ("the state buffer: %s\n", buffer );
  struct __ciciliS_195 ciciliDefer193  __attribute__((__cleanup__(__ciciliL_196 ))) = { buffer };
;
  printf ("polling for cmd2: ");
  if (scanf ("%s", buffer ) >  0 ) 
      { /* cicili#Block199 */
        printf ("the cmd2: %s\n", buffer );
        if (strcmp (buffer , "yield") ==  0 ) 
            { /* cicili#Block202 */
              done_callback2 (buffer );
              longjmp ((__ciciliA_Coordinator_ . main ), -1);
            } /* cicili#Block202 */

          else
            {
              if (strcmp (buffer , "done") ==  0 ) 
                { /* cicili#Block206 */
                  done_callback2 (buffer );
                  return 0;
                } /* cicili#Block206 */

              else
                {
                  if (strcmp (buffer , "error") ==  0 ) 
                    { /* cicili#Block210 */
                      __ciciliL_212 (-3, "don't know");
                      return 0;
                    } /* cicili#Block210 */

                  }
              }

      } /* cicili#Block199 */

    else
      { /* cicili#Block215 */
        error_callback2 (-2);
        return 0;
      } /* cicili#Block215 */


  longjmp ((__ciciliA_Coordinator_ . main ), -1);
}
int main () {
  Coordinator_m_set_logging(&__ciciliA_Coordinator_, true );
    ({ /* cicili#Let151 */
        Coroutine * task149  = malloc (sizeof(Coroutine));
        __auto_type cls148  = ((struct __ciciliC_Context_152 ){ __ciciliC_Context_152_s___ciciliC_Routine_153 , { }});
        void * data  = malloc (sizeof(cls148));
        memcpy (data , (&cls148 ), sizeof(cls148));
        (task149 -> status ) = 0;
        (task149 -> args ) = data ;
        (task149 -> routine ) = ((            int (*)(            void * args ,             Coroutine * coroutine ))(cls148 . routine ));
        (task149 -> next ) = NULL ;
        Coordinator_m_reg_task(&__ciciliA_Coordinator_, task149 );
      });

    ({ /* cicili#Let182 */
        Coroutine * task180  = malloc (sizeof(Coroutine));
        __auto_type cls179  = ((struct __ciciliC_Context_183 ){ __ciciliC_Context_183_s___ciciliC_Routine_184 , { malloc (128)}});
        void * data  = malloc (sizeof(cls179));
        memcpy (data , (&cls179 ), sizeof(cls179));
        (task180 -> status ) = 0;
        (task180 -> args ) = data ;
        (task180 -> routine ) = ((            int (*)(            void * args ,             Coroutine * coroutine ))(cls179 . routine ));
        (task180 -> next ) = NULL ;
        Coordinator_m_reg_task(&__ciciliA_Coordinator_, task180 );
      });

  Coordinator_m_loop(&__ciciliA_Coordinator_);
}
