#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>
typedef struct __ciciliC_Context_110 {
    void (*routine) (struct __ciciliC_Context_110 * context );
  struct { /* ciciliStruct113 */
    int a_value ;
  } context ;
} __ciciliC_Context_110;
typedef struct __ciciliS_118 {
  void * context ;
} __ciciliS_118;
static void __ciciliL_119 (struct __ciciliS_118 * ciciliDefer116_ptr ) {
  void * context  = (ciciliDefer116_ptr -> context );
  free (context );
}
static void __ciciliC_Context_110_s___ciciliC_Routine_111 (struct __ciciliC_Context_110 * context ) {
  int a_value  = ((context -> context ). a_value );
  struct __ciciliS_118 ciciliDefer116  __attribute__((__cleanup__(__ciciliL_119 ))) = { context };
  fprintf (stdout , "a value from thread: %lu -> %d\n", ((unsigned long)pthread_self ()), a_value );
}
typedef struct __ciciliC_Context_131 {
    void * (*routine) (struct __ciciliC_Context_131 * context );
  struct { /* ciciliStruct134 */
    int input ;
  } context ;
} __ciciliC_Context_131;
typedef struct __ciciliS_139 {
  void * context ;
} __ciciliS_139;
static void __ciciliL_140 (struct __ciciliS_139 * ciciliDefer137_ptr ) {
  void * context  = (ciciliDefer137_ptr -> context );
  free (context );
}
static void * __ciciliC_Context_131_s___ciciliC_Routine_132 (struct __ciciliC_Context_131 * context ) {
  int input  = ((context -> context ). input );
  struct __ciciliS_139 ciciliDefer137  __attribute__((__cleanup__(__ciciliL_140 ))) = { context };
  fprintf (stdout , "early exit thread: %lu -> %d\n", ((unsigned long)pthread_self ()), input );
  pthread_exit (NULL );
  fprintf (stdout , "not seen section: %lu -> %d\n", ((unsigned long)pthread_self ()), (input  +  8 ));
  return NULL ;
}
typedef struct __ciciliC_Context_157 {
    void * (*routine) (struct __ciciliC_Context_157 * context );
  struct { /* ciciliStruct160 */
  } context ;
} __ciciliC_Context_157;
typedef struct __ciciliS_165 {
  void * context ;
} __ciciliS_165;
static void __ciciliL_166 (struct __ciciliS_165 * ciciliDefer163_ptr ) {
  void * context  = (ciciliDefer163_ptr -> context );
  free (context );
}
static void * __ciciliC_Context_157_s___ciciliC_Routine_158 (struct __ciciliC_Context_157 * context ) {
  struct __ciciliS_165 ciciliDefer163  __attribute__((__cleanup__(__ciciliL_166 ))) = { context };
  { /* cicili#Let168 */
    int counter  = 0;
    __auto_type allocated  = malloc (sizeof(int));
    // ----------
    while (((counter ++) <  5 )) {
        fprintf (stdout , "long running thread: %lu counter: %d\n", ((unsigned long)pthread_self ()), counter );
        sleep (1);
    }
    memcpy (allocated , (&counter ), sizeof(int));
    return allocated ;
  }
}
static pthread_t __ciciliL_150 () {
  return ({ /* cicili#Let155 */
      __auto_type cls154  = ((struct __ciciliC_Context_157 ){ __ciciliC_Context_157_s___ciciliC_Routine_158 , { }});
      void * data  = malloc (sizeof(cls154));
      pthread_t tid153 ;
      // ----------
      memcpy (data , (&cls154 ), sizeof(cls154));
      pthread_create ((&tid153 ), NULL , ((        void * (*)(void *   ))(cls154 . routine )), data );
      ;
      tid153 ;
    });
}
typedef struct __ciciliC_Context_185 {
    void (*routine) (struct __ciciliC_Context_185 * context );
  struct { /* ciciliStruct188 */
    int input ;
  } context ;
} __ciciliC_Context_185;
typedef struct __ciciliS_193 {
  void * context ;
} __ciciliS_193;
static void __ciciliL_194 (struct __ciciliS_193 * ciciliDefer191_ptr ) {
  void * context  = (ciciliDefer191_ptr -> context );
  free (context );
}
static void __ciciliC_Context_185_s___ciciliC_Routine_186 (struct __ciciliC_Context_185 * context ) {
  int input  = ((context -> context ). input );
  struct __ciciliS_193 ciciliDefer191  __attribute__((__cleanup__(__ciciliL_194 ))) = { context };
  fprintf (stdout , "detached int input from thread: %lu -> %d\n", ((unsigned long)pthread_self ()), input );
}
typedef struct __ciciliS_206 {
  int * output ;
} __ciciliS_206;
static void __ciciliL_207 (struct __ciciliS_206 * ciciliDefer204_ptr ) {
  int * output  = (ciciliDefer204_ptr -> output );
  free (output );
}
int main () {
  { /* cicili#Let104 */
    int a_value  = 50;
    __auto_type id0  = ({ /* cicili#Let108 */
      __auto_type cls107  = ((struct __ciciliC_Context_110 ){ __ciciliC_Context_110_s___ciciliC_Routine_111 , { a_value }});
      void * data  = malloc (sizeof(cls107));
      pthread_t tid106 ;
      // ----------
      memcpy (data , (&cls107 ), sizeof(cls107));
      pthread_create ((&tid106 ), NULL , ((        void * (*)(void *   ))(cls107 . routine )), data );
      ;
      tid106 ;
    });
    __auto_type id1  = ({ /* cicili#Let129 */
      __auto_type cls128  = ((struct __ciciliC_Context_131 ){ __ciciliC_Context_131_s___ciciliC_Routine_132 , { 12}});
      void * data  = malloc (sizeof(cls128));
      pthread_t tid127 ;
      // ----------
      memcpy (data , (&cls128 ), sizeof(cls128));
      pthread_create ((&tid127 ), NULL , ((        void * (*)(void *   ))(cls128 . routine )), data );
      ;
      tid127 ;
    });
    __auto_type runner  = __ciciliL_150 ;
    __auto_type id2  = runner ();
    __auto_type id3  = runner ();
    // ----------
    pthread_join (id0 , NULL );
    pthread_join (id1 , NULL );
    pthread_cancel (id2 );
    ({ /* cicili#Let183 */
      __auto_type cls182  = ((struct __ciciliC_Context_185 ){ __ciciliC_Context_185_s___ciciliC_Routine_186 , { 25}});
      void * data  = malloc (sizeof(cls182));
      pthread_t tid181 ;
      // ----------
      memcpy (data , (&cls182 ), sizeof(cls182));
      pthread_create ((&tid181 ), NULL , ((        void * (*)(void *   ))(cls182 . routine )), data );
      pthread_detach (tid181 );
      tid181 ;
    });
    int * output ;
    pthread_join (id3 , ((void **)(&output )));
    struct __ciciliS_206 ciciliDefer204  __attribute__((__cleanup__(__ciciliL_207 ))) = { output };
    fprintf (stdout , "output value: %d\n", ((int)(*output )));
    return 0;
  }
}
