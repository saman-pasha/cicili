#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_borrowablevector.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_BorrowableVector_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
static struct __ciciliS_BorrowableVector_m_calcCap_ BorrowableVector_s_calcCap (size_t len ) {
  { /* cicili#Let106 */
    size_t capLen  = ((((len  %  BORROWABLEVECTOR_GROWTH_STEP  ) >  0 )) ? ((len  /  BORROWABLEVECTOR_GROWTH_STEP  ) +  1 ) : (len  /  BORROWABLEVECTOR_GROWTH_STEP  ));
    return ((struct __ciciliS_BorrowableVector_m_calcCap_){ len , (capLen  *  BORROWABLEVECTOR_GROWTH_STEP  )});
  }
}
BorrowableVector * BorrowableVector_s_newEmpty (size_t len ) {
  { /* cicili#Let109 */
    __auto_type cap  = BorrowableVector_s_calcCap(len );
    BorrowableVector * slice  = malloc ((sizeof(BorrowableVector) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . size );
    return slice ;
  }
}
BorrowableVector * BorrowableVector_s_newFromArray (const borrowablevector_elem_t * arr , size_t len ) {
  { /* cicili#Let112 */
    BorrowableVector * slice  = BorrowableVector_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(borrowablevector_elem_t) *  len  ));
    return slice ;
  }
}
BorrowableVector * BorrowableVector_s_newCopy (const BorrowableVector * other ) {
  { /* cicili#Let115 */
    BorrowableVector * slice  = BorrowableVector_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(borrowablevector_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
void * BorrowableVector_m_deref (BorrowableVector * this ) {
  return (this ->arr );
}
BorrowableVector * BorrowableVector_m_clone (BorrowableVector * this ) {
  return BorrowableVector_s_newCopy(this );
}
borrowablevector_elem_t * BorrowableVector_m_cloneArray (BorrowableVector * this ) {
  { /* cicili#Let120 */
    size_t size  = (sizeof(borrowablevector_elem_t) *  (this ->len ) );
    borrowablevector_elem_t * arr  = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
BorrowableVector * BorrowableVector_m_appendNew (BorrowableVector * this , const BorrowableVector * other ) {
  { /* cicili#Let123 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let125 */
      BorrowableVector * slice  = BorrowableVector_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(borrowablevector_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_BorrowableVector_m_append_ BorrowableVector_m_append (BorrowableVector * this , const BorrowableVector * other ) {
  { /* cicili#Let128 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block131 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(borrowablevector_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_BorrowableVector_m_append_){ this , false });
      } /* cicili#Block131 */
    else 
      return ((struct __ciciliS_BorrowableVector_m_append_){ BorrowableVector_m_appendNew(this , other ), true });
  }
}
void BorrowableVector_m_free (BorrowableVector * this ) {
  free (this );
}
struct __ciciliS_BorrowableVector_m_push_ BorrowableVector_m_push (BorrowableVector * this , borrowablevector_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block137 */
      { /* cicili#Let139 */
        size_t newLen  = ((this ->len ) +  1 );
        { /* cicili#Let141 */
          BorrowableVector * newVector  = BorrowableVector_s_newEmpty(newLen );
          memcpy ((newVector ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  (this ->len ) ));
          (newVector ->len ) = newLen ;
          (newVector ->arr )[(this ->len )] = val ;
          BorrowableVector_m_free(this );
          return ((struct __ciciliS_BorrowableVector_m_push_){ newVector , true });
        }
      }
    } /* cicili#Block137 */
  else 
    { /* cicili#Block144 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return ((struct __ciciliS_BorrowableVector_m_push_){ this , false });
    } /* cicili#Block144 */
}
struct __ciciliS_BorrowableVector_m_pop_ BorrowableVector_m_pop (BorrowableVector * this ) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_BorrowableVector_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block149 */
      (--(this ->len ));
      return ((struct __ciciliS_BorrowableVector_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block149 */
}
BorrowableVector * BorrowableVector_m_shrink (BorrowableVector * this ) {
  { /* cicili#Let152 */
    BorrowableVector * newVector  = BorrowableVector_s_newEmpty((this ->len ));
    memcpy ((newVector ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  (this ->len ) ));
    BorrowableVector_m_free(this );
    return newVector ;
  }
}
BorrowableVector * BorrowableVector_m_insert (BorrowableVector * this , size_t index , borrowablevector_elem_t val ) {
  { /* cicili#Let155 */
    size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let158 */
        BorrowableVector * newVector  = BorrowableVector_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newVector ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  safeIndex  ));
        (newVector ->arr )[safeIndex ] = val ;
        memcpy (((newVector ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(borrowablevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newVector ->len ) = ((this ->len ) +  1 );
        BorrowableVector_m_free(this );
        return newVector ;
      }
    else 
      { /* cicili#Block161 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(borrowablevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block161 */
  }
}
BorrowableVector * BorrowableVector_m_removeAt (BorrowableVector * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block166 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(borrowablevector_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block166 */
}
bool BorrowableVector_m_contains (BorrowableVector * this , borrowablevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block174 */
        return true ;
      } /* cicili#Block174 */

  } 
  return false ;
}
size_t BorrowableVector_m_indexOf (BorrowableVector * this , borrowablevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block182 */
        return i ;
      } /* cicili#Block182 */

  } 
  return (this ->len );
}
size_t BorrowableVector_m_lastIndexOf (BorrowableVector * this , borrowablevector_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (i  >=  0 ); (--i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block190 */
        return i ;
      } /* cicili#Block190 */

  } 
  return (this ->len );
}
size_t BorrowableVector_m_count (BorrowableVector * this , borrowablevector_elem_t val ) {
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

