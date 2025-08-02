#ifndef __COORDINATOR_H__
#define __COORDINATOR_H__
#include <stdlib.h>
#include <unistd.h>
#include <setjmp.h>
typedef struct Coroutine {
  int status ;
  void * args ;
    int (*routine) (  void * args ,   struct Coroutine * coroutine );
  struct Coroutine * next ;
} Coroutine;
typedef struct Coordinator {
  Coroutine * head ;
  Coroutine * tail ;
  bool m_logging ;
  jmp_buf main ;
} Coordinator;
void Coordinator_m_reg_task (Coordinator * this , Coroutine * coroutine );
bool Coordinator_m_poll (Coordinator * this , Coroutine * coroutine );
void Coordinator_m_loop (Coordinator * this );
void Coordinator_m_set_logging (Coordinator * this , bool logging );
static __thread Coordinator __ciciliA_Coordinator_ ;
#endif /* __COORDINATOR_H__ */ 
