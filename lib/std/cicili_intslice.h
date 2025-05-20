#ifndef CICILI_INTSLICE_H_
#define CICILI_INTSLICE_H_
#include <stddef.h>
#define INTSLICE_GROWTH_STEP 256
typedef int intslice_elem_t;
typedef struct IntSlice {
  size_t len;
  size_t cap;
  intslice_elem_t arr[];
} IntSlice;
IntSlice * IntSlice_s_newEmpty (size_t len);
IntSlice * IntSlice_s_newFromArray (const intslice_elem_t * arr, size_t len);
IntSlice * IntSlice_s_newCopy (const IntSlice * other);
IntSlice * IntSlice_m_clone (IntSlice * this);
intslice_elem_t * IntSlice_m_cloneArray (IntSlice * this);
IntSlice * IntSlice_m_appendNew (IntSlice * this, const IntSlice * other);
struct __ciciliS_IntSlice_m_append_ {
  IntSlice * out;
  bool newp;
};
struct __ciciliS_IntSlice_m_append_ IntSlice_m_append (IntSlice * this, const IntSlice * other);
void IntSlice_m_free (IntSlice * this);
IntSlice * IntSlice_m_push (IntSlice * this, intslice_elem_t val);
struct __ciciliS_IntSlice_m_pop_ {
  intslice_elem_t out;
  bool outp;
};
struct __ciciliS_IntSlice_m_pop_ IntSlice_m_pop (IntSlice * this);
IntSlice * IntSlice_m_shrink (IntSlice * this);
IntSlice * IntSlice_m_insert (IntSlice * this, size_t index, intslice_elem_t val);
IntSlice * IntSlice_m_removeAt (IntSlice * this, size_t index);
bool IntSlice_m_contains (IntSlice * this, intslice_elem_t val);
size_t IntSlice_m_indexOf (IntSlice * this, intslice_elem_t val);
size_t IntSlice_m_lastIndexOf (IntSlice * this, intslice_elem_t val);
size_t IntSlice_m_count (IntSlice * this, intslice_elem_t val);
#endif /* CICILI_INTSLICE_H_ */ 
