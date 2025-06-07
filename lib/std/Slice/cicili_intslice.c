#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_intslice.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_IntSlice_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
static struct __ciciliS_IntSlice_m_calcCap_ IntSlice_s_calcCap (size_t len ) {
  { /* cicili#Let106 */
    size_t capLen  = ((((len  %  INTSLICE_GROWTH_STEP  ) >  0 )) ? ((len  /  INTSLICE_GROWTH_STEP  ) +  1 ) : (len  /  INTSLICE_GROWTH_STEP  ));
    return ((struct __ciciliS_IntSlice_m_calcCap_){ capLen , (sizeof(intslice_elem_t) *  capLen  )});
  }
}
IntSlice * IntSlice_s_newEmpty (size_t len ) {
  { /* cicili#Let109 */
    __auto_type cap  = IntSlice_s_calcCap(len );
    IntSlice * slice  = malloc ((sizeof(IntSlice) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
IntSlice * IntSlice_s_newFromArray (const intslice_elem_t * arr , size_t len ) {
  { /* cicili#Let112 */
    IntSlice * slice  = IntSlice_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(intslice_elem_t) *  len  ));
    return slice ;
  }
}
IntSlice * IntSlice_s_newCopy (const IntSlice * other ) {
  { /* cicili#Let115 */
    IntSlice * slice  = IntSlice_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(intslice_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
int * IntSlice_m_deref (IntSlice * this ) {
  return (this ->arr );
}
IntSlice * IntSlice_m_clone (IntSlice * this ) {
  return IntSlice_s_newCopy(this );
}
intslice_elem_t * IntSlice_m_cloneArray (IntSlice * this ) {
  { /* cicili#Let120 */
    size_t size  = (sizeof(intslice_elem_t) *  (this ->len ) );
    intslice_elem_t * arr  = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
IntSlice * IntSlice_m_appendNew (IntSlice * this , const IntSlice * other ) {
  { /* cicili#Let123 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let125 */
      IntSlice * slice  = IntSlice_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(intslice_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(intslice_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_IntSlice_m_append_ IntSlice_m_append (IntSlice * this , const IntSlice * other ) {
  { /* cicili#Let128 */
    size_t totalLen  = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block131 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(intslice_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_IntSlice_m_append_){ this , false });
      } /* cicili#Block131 */
    else 
      return ((struct __ciciliS_IntSlice_m_append_){ IntSlice_m_appendNew(this , other ), true });
  }
}
void IntSlice_m_free (IntSlice * this ) {
  free (this );
}
struct __ciciliS_IntSlice_m_push_ IntSlice_m_push (IntSlice * this , intslice_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block137 */
      { /* cicili#Let139 */
        size_t newLen  = ((this ->len ) +  1 );
        { /* cicili#Let141 */
          IntSlice * newSlice  = IntSlice_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(intslice_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          IntSlice_m_free(this );
          return ((struct __ciciliS_IntSlice_m_push_){ newSlice , true });
        }
      }
    } /* cicili#Block137 */
  else 
    { /* cicili#Block144 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return ((struct __ciciliS_IntSlice_m_push_){ this , false });
    } /* cicili#Block144 */
}
struct __ciciliS_IntSlice_m_pop_ IntSlice_m_pop (IntSlice * this ) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_IntSlice_m_pop_){ (this ->arr )[0], false });
  else 
    { /* cicili#Block149 */
      (--(this ->len ));
      return ((struct __ciciliS_IntSlice_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block149 */
}
IntSlice * IntSlice_m_shrink (IntSlice * this ) {
  { /* cicili#Let152 */
    IntSlice * newSlice  = IntSlice_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(intslice_elem_t) *  (this ->len ) ));
    IntSlice_m_free(this );
    return newSlice ;
  }
}
IntSlice * IntSlice_m_insert (IntSlice * this , size_t index , intslice_elem_t val ) {
  { /* cicili#Let155 */
    size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let158 */
        IntSlice * newSlice  = IntSlice_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(intslice_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(intslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        IntSlice_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block161 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(intslice_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block161 */
  }
}
IntSlice * IntSlice_m_removeAt (IntSlice * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block166 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(intslice_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block166 */
}
bool IntSlice_m_contains (IntSlice * this , intslice_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block174 */
        return true ;
      } /* cicili#Block174 */

  } 
  return false ;
}
size_t IntSlice_m_indexOf (IntSlice * this , intslice_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block182 */
        return i ;
      } /* cicili#Block182 */

  } 
  return (this ->len );
}
size_t IntSlice_m_lastIndexOf (IntSlice * this , intslice_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (0 >=  i  ); (--i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block190 */
        return i ;
      } /* cicili#Block190 */

  } 
  return (this ->len );
}
size_t IntSlice_m_count (IntSlice * this , intslice_elem_t val ) {
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

