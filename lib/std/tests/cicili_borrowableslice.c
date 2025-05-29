#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_borrowableslice.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_BorrowableSlice_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
static struct __ciciliS_BorrowableSlice_m_calcCap_ BorrowableSlice_s_calcCap (size_t len ) {
  { /* cicili#Let106 */
    size_t capLen  = ((((len  %  BORROWABLESLICE_GROWTH_STEP  ) >  0 )) ? ((len  /  BORROWABLESLICE_GROWTH_STEP  ) +  1 ) : (len  /  BORROWABLESLICE_GROWTH_STEP  ));
    return ((struct __ciciliS_BorrowableSlice_m_calcCap_){ capLen , (sizeof(borrowableslice_elem_t) *  capLen  )});
  }
}
BorrowableSlice * BorrowableSlice_s_newEmpty (size_t len ) {
  { /* cicili#Let109 */
    __auto_type cap  = BorrowableSlice_s_calcCap(len );
    BorrowableSlice * slice  = malloc ((sizeof(BorrowableSlice) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
BorrowableSlice * BorrowableSlice_s_newFromArray (const borrowableslice_elem_t * arr , size_t len ) {
  { /* cicili#Let112 */
    BorrowableSlice * slice  = BorrowableSlice_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(borrowableslice_elem_t) *  len  ));
    return slice ;
  }
}
BorrowableSlice * BorrowableSlice_s_newCopy (const BorrowableSlice * other ) {
  { /* cicili#Let115 */
    BorrowableSlice * slice  = BorrowableSlice_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(borrowableslice_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
void * BorrowableSlice_m_firstElement (BorrowableSlice * this ) {
  return ((void *)(this ->arr )[0]);
}
BorrowableSlice * BorrowableSlice_m_clone (BorrowableSlice * this ) {
  return BorrowableSlice_s_newCopy(this );
}
borrowableslice_elem_t * BorrowableSlice_m_cloneArray (BorrowableSlice * this ) {
  { /* cicili#Let120 */
    size_t size  = (sizeof(borrowableslice_elem_t) *  (this ->len ) );
    borrowableslice_elem_t * arr  = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
BorrowableSlice * BorrowableSlice_m_appendNew (BorrowableSlice * this , const BorrowableSlice * other ) {
  { /* cicili#Let123 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let125 */
      BorrowableSlice * slice  = BorrowableSlice_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(borrowableslice_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(borrowableslice_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_BorrowableSlice_m_append_ BorrowableSlice_m_append (BorrowableSlice * this , const BorrowableSlice * other ) {
  { /* cicili#Let128 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block131 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(borrowableslice_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_BorrowableSlice_m_append_){ this , false });
      } /* cicili#Block131 */
    else 
      return ((struct __ciciliS_BorrowableSlice_m_append_){ BorrowableSlice_m_appendNew(this , other ), true });
  }
}
void BorrowableSlice_m_free (BorrowableSlice * this ) {
  free (this );
}
struct __ciciliS_BorrowableSlice_m_push_ BorrowableSlice_m_push (BorrowableSlice * this , borrowableslice_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block137 */
      { /* cicili#Let139 */
        size_t newLen  = ((this ->len ) +  1 );
        { /* cicili#Let141 */
          BorrowableSlice * newSlice  = BorrowableSlice_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(borrowableslice_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          BorrowableSlice_m_free(this );
          return ((struct __ciciliS_BorrowableSlice_m_push_){ newSlice , true });
        }
      }
    } /* cicili#Block137 */
  else 
    { /* cicili#Block144 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return ((struct __ciciliS_BorrowableSlice_m_push_){ this , false });
    } /* cicili#Block144 */
}
struct __ciciliS_BorrowableSlice_m_pop_ BorrowableSlice_m_pop (BorrowableSlice * this ) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_BorrowableSlice_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block149 */
      (--(this ->len ));
      return ((struct __ciciliS_BorrowableSlice_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block149 */
}
BorrowableSlice * BorrowableSlice_m_shrink (BorrowableSlice * this ) {
  { /* cicili#Let152 */
    BorrowableSlice * newSlice  = BorrowableSlice_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(borrowableslice_elem_t) *  (this ->len ) ));
    BorrowableSlice_m_free(this );
    return newSlice ;
  }
}
BorrowableSlice * BorrowableSlice_m_insert (BorrowableSlice * this , size_t index , borrowableslice_elem_t val ) {
  { /* cicili#Let155 */
    size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let158 */
        BorrowableSlice * newSlice  = BorrowableSlice_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(borrowableslice_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(borrowableslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        BorrowableSlice_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block161 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(borrowableslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block161 */
  }
}
BorrowableSlice * BorrowableSlice_m_removeAt (BorrowableSlice * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block166 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(borrowableslice_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block166 */
}
bool BorrowableSlice_m_contains (BorrowableSlice * this , borrowableslice_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block174 */
        return true ;
      } /* cicili#Block174 */

  } 
  return false ;
}
size_t BorrowableSlice_m_indexOf (BorrowableSlice * this , borrowableslice_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block182 */
        return i ;
      } /* cicili#Block182 */

  } 
  return (this ->len );
}
size_t BorrowableSlice_m_lastIndexOf (BorrowableSlice * this , borrowableslice_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (0 >=  i  ); (--i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block190 */
        return i ;
      } /* cicili#Block190 */

  } 
  return (this ->len );
}
size_t BorrowableSlice_m_count (BorrowableSlice * this , borrowableslice_elem_t val ) {
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

