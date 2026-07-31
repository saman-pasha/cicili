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
typedef struct cicili9hxDCwfLNKcFaK7pcEUPq3xpP5g_ {
  void * context ;
} cicili9hxDCwfLNKcFaK7pcEUPq3xpP5g_;
void __ciciliL_120 (struct cicili9hxDCwfLNKcFaK7pcEUPq3xpP5g_ * ciciliDefer117 ) {
  void * context  = (ciciliDefer117 -> context);
  free (context );
}
void __ciciliC_Context_110___ciciliC_Routine_111 (struct __ciciliC_Context_110 * context ) {
  int a_value  = ((context -> context). a_value);
  struct cicili9hxDCwfLNKcFaK7pcEUPq3xpP5g_ ciciliDefer117  __attribute__((__cleanup__(__ciciliL_120 ))) = { context };
  fprintf (stdout , "a value from thread: %lu -> %d\n", ((unsigned long)pthread_self ()), a_value );
}
typedef struct __ciciliC_Context_131 {
    void * (*routine) (struct __ciciliC_Context_131 * context );
  struct { /* ciciliStruct134 */
    int input ;
  } context ;
} __ciciliC_Context_131;
typedef struct ciciliGTbKEVPPI9rtNc37gVlaaNrPFQo_ {
  void * context ;
} ciciliGTbKEVPPI9rtNc37gVlaaNrPFQo_;
void __ciciliL_139 (struct ciciliGTbKEVPPI9rtNc37gVlaaNrPFQo_ * ciciliDefer117 ) {
  void * context  = (ciciliDefer117 -> context);
  free (context );
}
void * __ciciliC_Context_131___ciciliC_Routine_132 (struct __ciciliC_Context_131 * context ) {
  int input  = ((context -> context). input);
  struct ciciliGTbKEVPPI9rtNc37gVlaaNrPFQo_ ciciliDefer117  __attribute__((__cleanup__(__ciciliL_139 ))) = { context };
  fprintf (stdout , "early exit thread: %lu -> %d\n", ((unsigned long)pthread_self ()), input );
  pthread_exit (NULL );
  fprintf (stdout , "not seen section: %lu -> %d\n", ((unsigned long)pthread_self ()), (input  +  8 ));
  return NULL ;
}
typedef struct __ciciliC_Context_155 {
    void * (*routine) (struct __ciciliC_Context_155 * context );
  struct { /* ciciliStruct158 */
  } context ;
} __ciciliC_Context_155;
typedef struct ciciliGJ_nXyOnCmpWmEy6NI_WuHaGcIw_ {
  void * context ;
} ciciliGJ_nXyOnCmpWmEy6NI_WuHaGcIw_;
void __ciciliL_163 (struct ciciliGJ_nXyOnCmpWmEy6NI_WuHaGcIw_ * ciciliDefer117 ) {
  void * context  = (ciciliDefer117 -> context);
  free (context );
}
void * __ciciliC_Context_155___ciciliC_Routine_156 (struct __ciciliC_Context_155 * context ) {
  struct ciciliGJ_nXyOnCmpWmEy6NI_WuHaGcIw_ ciciliDefer117  __attribute__((__cleanup__(__ciciliL_163 ))) = { context };
  { /* let165 */
    int counter  = 0;
    void * allocated  = malloc (sizeof(int));
    // ----------
    while (((counter ++) <  5 )) {
        fprintf (stdout , "long running thread: %lu counter: %d\n", ((unsigned long)pthread_self ()), counter );
        sleep (1);
    }
    memcpy (allocated , (&counter ), sizeof(int));
    return allocated ;
  }
}
pthread_t __ciciliL_148 () {
  return ({ /* letn153 */
      struct __ciciliC_Context_155 closure152  = ((struct __ciciliC_Context_155){ __ciciliC_Context_155___ciciliC_Routine_156 , { }});
      void * data  = malloc (sizeof(closure152));
      pthread_t thread151 ;
      // ----------
      memcpy (data , (&closure152 ), sizeof(closure152));
      pthread_create ((&thread151 ), NULL , ((        void * (*)(void *))(closure152 . routine)), data );
      ;
      thread151 ;
    });
}
typedef struct __ciciliC_Context_183 {
    void (*routine) (struct __ciciliC_Context_183 * context );
  struct { /* ciciliStruct186 */
    int input ;
  } context ;
} __ciciliC_Context_183;
typedef struct cicili3FTdlH6GSN9x2HIyHhDFrOyzavo_ {
  void * context ;
} cicili3FTdlH6GSN9x2HIyHhDFrOyzavo_;
void __ciciliL_191 (struct cicili3FTdlH6GSN9x2HIyHhDFrOyzavo_ * ciciliDefer117 ) {
  void * context  = (ciciliDefer117 -> context);
  free (context );
}
void __ciciliC_Context_183___ciciliC_Routine_184 (struct __ciciliC_Context_183 * context ) {
  int input  = ((context -> context). input);
  struct cicili3FTdlH6GSN9x2HIyHhDFrOyzavo_ ciciliDefer117  __attribute__((__cleanup__(__ciciliL_191 ))) = { context };
  fprintf (stdout , "detached int input from thread: %lu -> %d\n", ((unsigned long)pthread_self ()), input );
}
typedef struct cicilifxyNCztMK_bxY043anSCdbklEfo_ {
  int * output ;
} cicilifxyNCztMK_bxY043anSCdbklEfo_;
void __ciciliL_203 (struct cicilifxyNCztMK_bxY043anSCdbklEfo_ * ciciliDefer200 ) {
  int * output  = (ciciliDefer200 -> output);
  free (output );
}
int main () {
  { /* let104 */
    int a_value  = 50;
    pthread_t id0  = ({ /* letn108 */
      struct __ciciliC_Context_110 closure107  = ((struct __ciciliC_Context_110){ __ciciliC_Context_110___ciciliC_Routine_111 , { a_value }});
      void * data  = malloc (sizeof(closure107));
      pthread_t thread106 ;
      // ----------
      memcpy (data , (&closure107 ), sizeof(closure107));
      pthread_create ((&thread106 ), NULL , ((        void * (*)(void *))(closure107 . routine)), data );
      ;
      thread106 ;
    });
    pthread_t id1  = ({ /* letn129 */
      struct __ciciliC_Context_131 closure128  = ((struct __ciciliC_Context_131){ __ciciliC_Context_131___ciciliC_Routine_132 , { 12}});
      void * data  = malloc (sizeof(closure128));
      pthread_t thread127 ;
      // ----------
      memcpy (data , (&closure128 ), sizeof(closure128));
      pthread_create ((&thread127 ), NULL , ((        void * (*)(void *))(closure128 . routine)), data );
      ;
      thread127 ;
    });
      pthread_t (*runner) () = __ciciliL_148 ;
    pthread_t id2  = runner ();
    pthread_t id3  = runner ();
    // ----------
    pthread_join (id0 , NULL );
    pthread_join (id1 , NULL );
    pthread_cancel (id2 );
    ((void)({ /* letn181 */
      struct __ciciliC_Context_183 closure180  = ((struct __ciciliC_Context_183){ __ciciliC_Context_183___ciciliC_Routine_184 , { 25}});
      void * data  = malloc (sizeof(closure180));
      pthread_t thread179 ;
      // ----------
      memcpy (data , (&closure180 ), sizeof(closure180));
      pthread_create ((&thread179 ), NULL , ((        void * (*)(void *))(closure180 . routine)), data );
      pthread_detach (thread179 );
      thread179 ;
    }));
    int * output ;
    pthread_join (id3 , ((void **)(&output )));
    struct cicilifxyNCztMK_bxY043anSCdbklEfo_ ciciliDefer200  __attribute__((__cleanup__(__ciciliL_203 ))) = { output };
    fprintf (stdout , "output value: %d\n", ((int)(*output )));
    return 0;
  }
}
