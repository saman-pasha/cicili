#ifndef CICILI_BYTEVECTOR_H_
#define CICILI_BYTEVECTOR_H_
#include <stddef.h>
#define BYTEVECTOR_GROWTH_STEP 256
typedef unsigned char bytevector_elem_t;
typedef struct ByteVector {
  size_t len;
  size_t cap;
  bytevector_elem_t arr[];
} ByteVector;
ByteVector * ByteVector_s_newEmpty (size_t len);
ByteVector * ByteVector_s_newFromArray (const bytevector_elem_t * arr, size_t len);
ByteVector * ByteVector_s_newCopy (const ByteVector * other);
ByteVector * ByteVector_m_clone (ByteVector * this);
bytevector_elem_t * ByteVector_m_cloneArray (ByteVector * this);
ByteVector * ByteVector_m_appendNew (ByteVector * this, const ByteVector * other);
ByteVector * ByteVector_m_append (ByteVector * this, const ByteVector * other);
void ByteVector_m_free (ByteVector * this);
#endif /* CICILI_BYTEVECTOR_H_ */ 
