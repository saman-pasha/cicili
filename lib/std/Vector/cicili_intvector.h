#ifndef CICILI_INTVECTOR_H_
#define CICILI_INTVECTOR_H_
#include <stddef.h>
#define INTVECTOR_GROWTH_STEP 256 
typedef int intvector_elem_t ;
typedef struct IntVector {
  size_t len ;
  size_t cap ;
  intvector_elem_t arr [];
} IntVector;
struct __ciciliS_IntVector_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
struct __ciciliS_IntVector_m_calcCap_ IntVector_s_calcCap (size_t len );
IntVector * IntVector_s_newEmpty (size_t len );
IntVector * IntVector_s_newFromArray (const intvector_elem_t * arr , size_t len );
IntVector * IntVector_s_newCopy (const IntVector * other );
int * IntVector_m_deref (IntVector * this );
IntVector * IntVector_m_clone (IntVector * this );
intvector_elem_t * IntVector_m_cloneArray (IntVector * this );
IntVector * IntVector_m_appendNew (IntVector * this , const IntVector * other );
struct __ciciliS_IntVector_m_append_ {
  IntVector * out ;
  bool newp ;
};
struct __ciciliS_IntVector_m_append_ IntVector_m_append (IntVector * this , const IntVector * other );
void IntVector_m_free (IntVector * this );
struct __ciciliS_IntVector_m_push_ {
  IntVector * out ;
  bool newp ;
};
struct __ciciliS_IntVector_m_push_ IntVector_m_push (IntVector * this , intvector_elem_t val );
struct __ciciliS_IntVector_m_pop_ {
  intvector_elem_t out ;
  bool outp ;
};
struct __ciciliS_IntVector_m_pop_ IntVector_m_pop (IntVector * this );
IntVector * IntVector_m_shrink (IntVector * this );
IntVector * IntVector_m_insert (IntVector * this , size_t index , intvector_elem_t val );
IntVector * IntVector_m_removeAt (IntVector * this , size_t index );
bool IntVector_m_contains (IntVector * this , intvector_elem_t val );
size_t IntVector_m_indexOf (IntVector * this , intvector_elem_t val );
size_t IntVector_m_lastIndexOf (IntVector * this , intvector_elem_t val );
size_t IntVector_m_count (IntVector * this , intvector_elem_t val );
#endif /* CICILI_INTVECTOR_H_ */ 
;

