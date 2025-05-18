#ifndef __CICILI_BYTEVECTOR_H_
#define __CICILI_BYTEVECTOR_H_
#include <stddef.h>
const size_t BYTEVECTOR_GROWTH_STEP = 256;
typedef unsigned char bytevector_elem_t;
typedef struct ByteVector {
  size_t len;
  size_t cap;
  bytevector_elem_t arr[];
} ByteVector;
ByteVector * ByteVector_s_newEmpty (size_t xcap);
ByteVector * ByteVector_s_newFromArray (const bytevector_elem_t * xarr, size_t xlen);
ByteVector * ByteVector_s_newCopy (const ByteVector * other);
ByteVector * ByteVector_m_clone (ByteVector * this);
bytevector_elem_t * ByteVector_m_cloneArray (ByteVector * this);
ByteVector * ByteVector_m_appendNew (ByteVector * this, const ByteVector * other);
ByteVector * ByteVector_m_append (ByteVector * this, const ByteVector * other);
#endif /* __CICILI_BYTEVECTOR_H_ */ 
