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
  size_t len;
  size_t size;
} __ciciliS_ByteVector_m_calcCap_;
static struct __ciciliS_ByteVector_m_calcCap_ ByteVector_s_calcCap (size_t xcap) {
  { /* cicili#Let102 */
    size_t len = ((((xcap  %  BYTEVECTOR_GROWTH_STEP  ) >  0 )) ? ((xcap  /  BYTEVECTOR_GROWTH_STEP  ) +  1 ) : (xcap  /  BYTEVECTOR_GROWTH_STEP  ));
    return ((struct __ciciliS_ByteVector_m_calcCap_){ len , (sizeof(bytevector_elem_t) *  len  )});
  }
}
ByteVector * ByteVector_s_newEmpty (size_t xlen) {
  { /* cicili#Let105 */
    __auto_type ccap = ByteVector_s_calcCap(xlen );
    ByteVector * slc = malloc ((sizeof(ByteVector) +  (ccap . size ) ));
    (slc ->len ) = xlen ;
    (slc ->cap ) = (ccap . len );
    return slc ;
  }
}
ByteVector * ByteVector_s_newFromArray (const bytevector_elem_t * xarr, size_t xlen) {
  { /* cicili#Let108 */
    ByteVector * slc = ByteVector_s_newEmpty(xlen );
    memcpy ((slc ->arr ), xarr , (sizeof(bytevector_elem_t) *  xlen  ));
    return slc ;
  }
}
ByteVector * ByteVector_s_newCopy (const ByteVector * other) {
  { /* cicili#Let111 */
    ByteVector * slc = ByteVector_s_newEmpty((other ->len ));
    memcpy ((slc ->arr ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
    return slc ;
  }
}
ByteVector * ByteVector_m_clone (ByteVector * this) {
  return ByteVector_s_newCopy(this );
}
bytevector_elem_t * ByteVector_m_cloneArray (ByteVector * this) {
  { /* cicili#Let115 */
    size_t xsize = (sizeof(bytevector_elem_t) *  (this ->len ) );
    bytevector_elem_t * xarr = malloc (xsize );
    memcpy (xarr , (this ->arr ), xsize );
    return xarr ;
  }
}
ByteVector * ByteVector_m_appendNew (ByteVector * this, const ByteVector * other) {
  { /* cicili#Let118 */
    size_t tlen = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let120 */
      ByteVector * slc = ByteVector_s_newEmpty(tlen );
      memcpy ((slc ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
      memcpy (((slc ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
      return slc ;
    }
  }
}
ByteVector * ByteVector_m_append (ByteVector * this, const ByteVector * other) {
  { /* cicili#Let123 */
    size_t tlen = ((this ->len ) +  (other ->len ) );
    if (tlen  <=  (this ->cap ) ) 
      { /* cicili#Block126 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
        return this ;
      } /* cicili#Block126 */
    else 
      return ByteVector_m_appendNew(this , other );
  }
}
