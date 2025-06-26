#ifndef CICILI_BORROWABLEVECTOR_H_
#define CICILI_BORROWABLEVECTOR_H_
#include <stddef.h>
#define BORROWABLEVECTOR_GROWTH_STEP 16
typedef void * borrowablevector_elem_t ;
typedef struct BorrowableVector {
  size_t len ;
  size_t cap ;
  borrowablevector_elem_t arr [];
} BorrowableVector;
BorrowableVector * BorrowableVector_s_newEmpty (size_t len );
BorrowableVector * BorrowableVector_s_newFromArray (const borrowablevector_elem_t * arr , size_t len );
BorrowableVector * BorrowableVector_s_newCopy (const BorrowableVector * other );
void * BorrowableVector_m_deref (BorrowableVector * this );
BorrowableVector * BorrowableVector_m_clone (BorrowableVector * this );
borrowablevector_elem_t * BorrowableVector_m_cloneArray (BorrowableVector * this );
BorrowableVector * BorrowableVector_m_appendNew (BorrowableVector * this , const BorrowableVector * other );
struct __ciciliS_BorrowableVector_m_append_ {
  BorrowableVector * out ;
  bool newp ;
};
struct __ciciliS_BorrowableVector_m_append_ BorrowableVector_m_append (BorrowableVector * this , const BorrowableVector * other );
void BorrowableVector_m_free (BorrowableVector * this );
struct __ciciliS_BorrowableVector_m_push_ {
  BorrowableVector * out ;
  bool newp ;
};
struct __ciciliS_BorrowableVector_m_push_ BorrowableVector_m_push (BorrowableVector * this , borrowablevector_elem_t val );
struct __ciciliS_BorrowableVector_m_pop_ {
  borrowablevector_elem_t out ;
  bool outp ;
};
struct __ciciliS_BorrowableVector_m_pop_ BorrowableVector_m_pop (BorrowableVector * this );
BorrowableVector * BorrowableVector_m_shrink (BorrowableVector * this );
BorrowableVector * BorrowableVector_m_insert (BorrowableVector * this , size_t index , borrowablevector_elem_t val );
BorrowableVector * BorrowableVector_m_removeAt (BorrowableVector * this , size_t index );
bool BorrowableVector_m_contains (BorrowableVector * this , borrowablevector_elem_t val );
size_t BorrowableVector_m_indexOf (BorrowableVector * this , borrowablevector_elem_t val );
size_t BorrowableVector_m_lastIndexOf (BorrowableVector * this , borrowablevector_elem_t val );
size_t BorrowableVector_m_count (BorrowableVector * this , borrowablevector_elem_t val );
#endif /* CICILI_BORROWABLEVECTOR_H_ */ 

