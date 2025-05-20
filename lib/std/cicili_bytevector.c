#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "cicili_bytevector.h"
static struct __ciciliS_ByteVector_m_calcCap_ {
  size_t capLen;
  size_t size;
} __ciciliS_ByteVector_m_calcCap_;
static struct __ciciliS_ByteVector_m_calcCap_ ByteVector_s_calcCap (size_t len) {
  { /* cicili#Let102 */
    size_t capLen = ((((len  %  BYTEVECTOR_GROWTH_STEP  ) >  0 )) ? ((len  /  BYTEVECTOR_GROWTH_STEP  ) +  1 ) : (len  /  BYTEVECTOR_GROWTH_STEP  ));
    return ((struct __ciciliS_ByteVector_m_calcCap_){ capLen , (sizeof(bytevector_elem_t) *  capLen  )});
  }
}
ByteVector * ByteVector_s_newEmpty (size_t len) {
  { /* cicili#Let105 */
    __auto_type cap = ByteVector_s_calcCap(len );
    ByteVector * slice = malloc ((sizeof(ByteVector) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
ByteVector * ByteVector_s_newFromArray (const bytevector_elem_t * arr, size_t len) {
  { /* cicili#Let108 */
    ByteVector * slice = ByteVector_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(bytevector_elem_t) *  len  ));
    return slice ;
  }
}
ByteVector * ByteVector_s_newCopy (const ByteVector * other) {
  { /* cicili#Let111 */
    ByteVector * slice = ByteVector_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
ByteVector * ByteVector_m_clone (ByteVector * this) {
  return ByteVector_s_newCopy(this );
}
bytevector_elem_t * ByteVector_m_cloneArray (ByteVector * this) {
  { /* cicili#Let115 */
    size_t size = (sizeof(bytevector_elem_t) *  (this ->len ) );
    bytevector_elem_t * arr = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
ByteVector * ByteVector_m_appendNew (ByteVector * this, const ByteVector * other) {
  { /* cicili#Let118 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let120 */
      ByteVector * slice = ByteVector_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
ByteVector * ByteVector_m_append (ByteVector * this, const ByteVector * other) {
  { /* cicili#Let123 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block126 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
        return this ;
      } /* cicili#Block126 */
    else 
      return ByteVector_m_appendNew(this , other );
  }
}
void ByteVector_m_free (ByteVector * this) {
  free (this );
}
