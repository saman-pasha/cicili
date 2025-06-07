#ifndef CICILI_BYTEVECTOR_H_
#define CICILI_BYTEVECTOR_H_
#include <stddef.h>
#define BYTEVECTOR_GROWTH_STEP 256
typedef unsigned char bytevector_elem_t ;
typedef struct ByteVector {
  size_t len ;
  size_t cap ;
  bytevector_elem_t arr [];
} ByteVector;
ByteVector * ByteVector_s_newEmpty (size_t len );
ByteVector * ByteVector_s_newFromArray (const bytevector_elem_t * arr , size_t len );
ByteVector * ByteVector_s_newCopy (const ByteVector * other );
unsigned char * ByteVector_m_deref (ByteVector * this );
ByteVector * ByteVector_m_clone (ByteVector * this );
bytevector_elem_t * ByteVector_m_cloneArray (ByteVector * this );
ByteVector * ByteVector_m_appendNew (ByteVector * this , const ByteVector * other );
struct __ciciliS_ByteVector_m_append_ {
  ByteVector * out ;
  bool newp ;
};
struct __ciciliS_ByteVector_m_append_ ByteVector_m_append (ByteVector * this , const ByteVector * other );
void ByteVector_m_free (ByteVector * this );
struct __ciciliS_ByteVector_m_push_ {
  ByteVector * out ;
  bool newp ;
};
struct __ciciliS_ByteVector_m_push_ ByteVector_m_push (ByteVector * this , bytevector_elem_t val );
struct __ciciliS_ByteVector_m_pop_ {
  bytevector_elem_t out ;
  bool outp ;
};
struct __ciciliS_ByteVector_m_pop_ ByteVector_m_pop (ByteVector * this );
ByteVector * ByteVector_m_shrink (ByteVector * this );
ByteVector * ByteVector_m_insert (ByteVector * this , size_t index , bytevector_elem_t val );
ByteVector * ByteVector_m_removeAt (ByteVector * this , size_t index );
bool ByteVector_m_contains (ByteVector * this , bytevector_elem_t val );
size_t ByteVector_m_indexOf (ByteVector * this , bytevector_elem_t val );
size_t ByteVector_m_lastIndexOf (ByteVector * this , bytevector_elem_t val );
size_t ByteVector_m_count (ByteVector * this , bytevector_elem_t val );
#endif /* CICILI_BYTEVECTOR_H_ */ 

