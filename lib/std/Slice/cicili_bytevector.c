#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_bytevector.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_ByteVector_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
static struct __ciciliS_ByteVector_m_calcCap_ ByteVector_s_calcCap (size_t len ) {
  { /* cicili#Let106 */
    size_t capLen  = ((((len  %  BYTEVECTOR_GROWTH_STEP  ) >  0 )) ? ((len  /  BYTEVECTOR_GROWTH_STEP  ) +  1 ) : (len  /  BYTEVECTOR_GROWTH_STEP  ));
    return ((struct __ciciliS_ByteVector_m_calcCap_){ len , (capLen  *  BYTEVECTOR_GROWTH_STEP  )});
  }
}
ByteVector * ByteVector_s_newEmpty (size_t len ) {
  { /* cicili#Let109 */
    __auto_type cap  = ByteVector_s_calcCap(len );
    ByteVector * slice  = malloc ((sizeof(ByteVector) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . size );
    return slice ;
  }
}
ByteVector * ByteVector_s_newFromArray (const bytevector_elem_t * arr , size_t len ) {
  { /* cicili#Let112 */
    ByteVector * slice  = ByteVector_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(bytevector_elem_t) *  len  ));
    return slice ;
  }
}
ByteVector * ByteVector_s_newCopy (const ByteVector * other ) {
  { /* cicili#Let115 */
    ByteVector * slice  = ByteVector_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
unsigned char * ByteVector_m_deref (ByteVector * this ) {
  return (this ->arr );
}
ByteVector * ByteVector_m_clone (ByteVector * this ) {
  return ByteVector_s_newCopy(this );
}
bytevector_elem_t * ByteVector_m_cloneArray (ByteVector * this ) {
  { /* cicili#Let120 */
    size_t size  = (sizeof(bytevector_elem_t) *  (this ->len ) );
    bytevector_elem_t * arr  = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
ByteVector * ByteVector_m_appendNew (ByteVector * this , const ByteVector * other ) {
  { /* cicili#Let123 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let125 */
      ByteVector * slice  = ByteVector_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_ByteVector_m_append_ ByteVector_m_append (ByteVector * this , const ByteVector * other ) {
  { /* cicili#Let128 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block131 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_ByteVector_m_append_){ this , false });
      } /* cicili#Block131 */
    else 
      return ((struct __ciciliS_ByteVector_m_append_){ ByteVector_m_appendNew(this , other ), true });
  }
}
void ByteVector_m_free (ByteVector * this ) {
  free (this );
}
struct __ciciliS_ByteVector_m_push_ ByteVector_m_push (ByteVector * this , bytevector_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block137 */
      { /* cicili#Let139 */
        size_t newLen  = ((this ->len ) +  1 );
        { /* cicili#Let141 */
          ByteVector * newSlice  = ByteVector_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          ByteVector_m_free(this );
          return ((struct __ciciliS_ByteVector_m_push_){ newSlice , true });
        }
      }
    } /* cicili#Block137 */
  else 
    { /* cicili#Block144 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return ((struct __ciciliS_ByteVector_m_push_){ this , false });
    } /* cicili#Block144 */
}
struct __ciciliS_ByteVector_m_pop_ ByteVector_m_pop (ByteVector * this ) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_ByteVector_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block149 */
      (--(this ->len ));
      return ((struct __ciciliS_ByteVector_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block149 */
}
ByteVector * ByteVector_m_shrink (ByteVector * this ) {
  { /* cicili#Let152 */
    ByteVector * newSlice  = ByteVector_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
    ByteVector_m_free(this );
    return newSlice ;
  }
}
ByteVector * ByteVector_m_insert (ByteVector * this , size_t index , bytevector_elem_t val ) {
  { /* cicili#Let155 */
    size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let158 */
        ByteVector * newSlice  = ByteVector_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(bytevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        ByteVector_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block161 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(bytevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block161 */
  }
}
ByteVector * ByteVector_m_removeAt (ByteVector * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block166 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(bytevector_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block166 */
}
bool ByteVector_m_contains (ByteVector * this , bytevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block174 */
        return true ;
      } /* cicili#Block174 */

  } 
  return false ;
}
size_t ByteVector_m_indexOf (ByteVector * this , bytevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block182 */
        return i ;
      } /* cicili#Block182 */

  } 
  return (this ->len );
}
size_t ByteVector_m_lastIndexOf (ByteVector * this , bytevector_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (0 >=  i  ); (--i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block190 */
        return i ;
      } /* cicili#Block190 */

  } 
  return (this ->len );
}
size_t ByteVector_m_count (ByteVector * this , bytevector_elem_t val ) {
  { /* cicili#Let193 */
    size_t c  = 0;
    for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
      if ((this ->arr )[i ] ==  val  ) 
        { /* cicili#Block200 */
          (++c );
        } /* cicili#Block200 */

    } 
    return c ;
  }
}

