#ifndef CICILI_BORROWABLESLICE_H_
#define CICILI_BORROWABLESLICE_H_
#include <stddef.h>
#define BORROWABLESLICE_GROWTH_STEP 16
typedef void * borrowableslice_elem_t ;
typedef struct BorrowableSlice {
  size_t len ;
  size_t cap ;
  borrowableslice_elem_t arr [];
} BorrowableSlice;
BorrowableSlice * BorrowableSlice_s_newEmpty (size_t len );
BorrowableSlice * BorrowableSlice_s_newFromArray (const borrowableslice_elem_t * arr , size_t len );
BorrowableSlice * BorrowableSlice_s_newCopy (const BorrowableSlice * other );
void * BorrowableSlice_m_firstElement (BorrowableSlice * this );
BorrowableSlice * BorrowableSlice_m_clone (BorrowableSlice * this );
borrowableslice_elem_t * BorrowableSlice_m_cloneArray (BorrowableSlice * this );
BorrowableSlice * BorrowableSlice_m_appendNew (BorrowableSlice * this , const BorrowableSlice * other );
struct __ciciliS_BorrowableSlice_m_append_ {
  BorrowableSlice * out ;
  bool newp ;
};
struct __ciciliS_BorrowableSlice_m_append_ BorrowableSlice_m_append (BorrowableSlice * this , const BorrowableSlice * other );
void BorrowableSlice_m_free (BorrowableSlice * this );
struct __ciciliS_BorrowableSlice_m_push_ {
  BorrowableSlice * out ;
  bool newp ;
};
struct __ciciliS_BorrowableSlice_m_push_ BorrowableSlice_m_push (BorrowableSlice * this , borrowableslice_elem_t val );
struct __ciciliS_BorrowableSlice_m_pop_ {
  borrowableslice_elem_t out ;
  bool outp ;
};
struct __ciciliS_BorrowableSlice_m_pop_ BorrowableSlice_m_pop (BorrowableSlice * this );
BorrowableSlice * BorrowableSlice_m_shrink (BorrowableSlice * this );
BorrowableSlice * BorrowableSlice_m_insert (BorrowableSlice * this , size_t index , borrowableslice_elem_t val );
BorrowableSlice * BorrowableSlice_m_removeAt (BorrowableSlice * this , size_t index );
bool BorrowableSlice_m_contains (BorrowableSlice * this , borrowableslice_elem_t val );
size_t BorrowableSlice_m_indexOf (BorrowableSlice * this , borrowableslice_elem_t val );
size_t BorrowableSlice_m_lastIndexOf (BorrowableSlice * this , borrowableslice_elem_t val );
size_t BorrowableSlice_m_count (BorrowableSlice * this , borrowableslice_elem_t val );
#endif /* CICILI_BORROWABLESLICE_H_ */ 

