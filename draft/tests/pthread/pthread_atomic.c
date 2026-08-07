#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdatomic.h>
#include <pthread.h>
_Atomic int atomic_counter  = 0;
int locked_counter  = 0;
int counter  = 0;
typedef struct __ciciliC_Context_115 {
    void (*routine) (struct __ciciliC_Context_115 * context );
  struct { /* ciciliStruct118 */
  } context ;
} __ciciliC_Context_115;
typedef struct ciciliOoAIHyvH3kIQwHsniliSmCJCL5Q_ {
  void * context ;
} ciciliOoAIHyvH3kIQwHsniliSmCJCL5Q_;
void __ciciliL_125 (struct ciciliOoAIHyvH3kIQwHsniliSmCJCL5Q_ * ciciliDefer122_ptr ) {
  void * context  = (ciciliDefer122_ptr -> context );
  free (context );
}
void __ciciliL_133 (pthread_mutex_t ** unlock131_ptr ) {
  pthread_mutex_t * unlock131  = (*unlock131_ptr );
  pthread_mutex_unlock (unlock131 );
}
void __ciciliC_Context_115___ciciliC_Routine_116 (struct __ciciliC_Context_115 * context ) {
  struct ciciliOoAIHyvH3kIQwHsniliSmCJCL5Q_ ciciliDefer122  __attribute__((__cleanup__(__ciciliL_125 ))) = { context };
  for (int n  = 0; (n  <  1000 ); (++n )) {
      (++atomic_counter );
      { /* cicili#Let132 */
        static pthread_mutex_t lock130  = PTHREAD_MUTEX_INITIALIZER ;
        pthread_mutex_t * unlock131  __attribute__((__cleanup__(__ciciliL_133 ))) = (&lock130 );
        // ----------
        pthread_mutex_lock ((&lock130 ));
        (++locked_counter );
      }
      (++counter );
  }
}
int main () {
  { /* cicili#Let106 */
    pthread_t threads [10];
    // ----------
    for (int i  = 0; (i  <  10 ); (++i )) {
        threads [i ] = ({ /* cicili#Let113 */
              __auto_type closure112  = ((struct __ciciliC_Context_115 ){ __ciciliC_Context_115___ciciliC_Routine_116 , { }});
              void * data  = malloc (sizeof(closure112));
              pthread_t thread111 ;
              // ----------
              memcpy (data , (&closure112 ), sizeof(closure112));
              pthread_create ((&thread111 ), NULL , ((                void * (*)(void *   ))(closure112 . routine )), data );
              ;
              thread111 ;
            });
    }
    for (int i  = 0; (i  <  10 ); (++i )) {
        pthread_join (threads [i ], NULL );
    }
    printf ("atomic_counter: %d\n", atomic_counter );
    printf ("locked_counter: %d\n", locked_counter );
    printf ("counter: %d\n", counter );
  }
}
