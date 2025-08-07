#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_borrowablevector.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_BorrowableVector_m_calcCap_ BorrowableVector_s_calcCap (size_t len ) {
  { /* cicili#Let128 */
      size_t capLen  = ((((len  %  BORROWABLEVECTOR_GROWTH_STEP  ) >  0 )) ? ((len  /  BORROWABLEVECTOR_GROWTH_STEP  ) +  1 ) : (len  /  BORROWABLEVECTOR_GROWTH_STEP  ));
      return ((struct __ciciliS_BorrowableVector_m_calcCap_){ len , (capLen  *  BORROWABLEVECTOR_GROWTH_STEP  )});
    }
}
BorrowableVector * BorrowableVector_s_newEmpty (size_t len ) {
  { /* cicili#Let131 */
      __auto_type cap  = BorrowableVector_s_calcCap(len );
      BorrowableVector * slice  = malloc ((sizeof(BorrowableVector) +  (cap . size ) ));
      (slice ->len ) = len ;
      (slice ->cap ) = (cap . size );
      return slice ;
    }
}
BorrowableVector * BorrowableVector_s_newFromArray (const borrowablevector_elem_t * arr , size_t len ) {
  { /* cicili#Let134 */
      BorrowableVector * slice  = BorrowableVector_s_newEmpty(len );
      memcpy ((slice ->arr ), arr , (sizeof(borrowablevector_elem_t) *  len  ));
      return slice ;
    }
}
BorrowableVector * BorrowableVector_s_newCopy (const BorrowableVector * other ) {
  { /* cicili#Let137 */
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
  { /* cicili#Let142 */
      size_t size  = (sizeof(borrowablevector_elem_t) *  (this ->len ) );
      borrowablevector_elem_t * arr  = malloc (size );
      memcpy (arr , (this ->arr ), size );
      return arr ;
    }
}
BorrowableVector * BorrowableVector_m_appendNew (BorrowableVector * this , const BorrowableVector * other ) {
  { /* cicili#Let145 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      { /* cicili#Let147 */
          BorrowableVector * slice  = BorrowableVector_s_newEmpty(totalLen );
          memcpy ((slice ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  (this ->len ) ));
          memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(borrowablevector_elem_t) *  (other ->len ) ));
          return slice ;
        }
    }
}
struct __ciciliS_BorrowableVector_m_append_ BorrowableVector_m_append (BorrowableVector * this , const BorrowableVector * other ) {
  { /* cicili#Let150 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      if (totalLen  <=  (this ->cap ) ) 
          { /* cicili#Block153 */
            memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(borrowablevector_elem_t) *  (other ->len ) ));
            return ((struct __ciciliS_BorrowableVector_m_append_){ this , false });
          } /* cicili#Block153 */

        else
          return ((struct __ciciliS_BorrowableVector_m_append_){ BorrowableVector_m_appendNew(this , other ), true });

    }
}
void BorrowableVector_m_free (BorrowableVector * this ) {
  free (this );
}
struct __ciciliS_BorrowableVector_m_push_ BorrowableVector_m_push (BorrowableVector * this , borrowablevector_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Block159 */
        { /* cicili#Let161 */
            size_t newLen  = ((this ->len ) +  1 );
            { /* cicili#Let163 */
                BorrowableVector * newVector  = BorrowableVector_s_newEmpty(newLen );
                memcpy ((newVector ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  (this ->len ) ));
                (newVector ->len ) = newLen ;
                (newVector ->arr )[(this ->len )] = val ;
                BorrowableVector_m_free(this );
                return ((struct __ciciliS_BorrowableVector_m_push_){ newVector , true });
              }
          }
      } /* cicili#Block159 */

    else
      { /* cicili#Block166 */
        (this ->arr )[(this ->len )] = val ;
        (++(this ->len ));
        return ((struct __ciciliS_BorrowableVector_m_push_){ this , false });
      } /* cicili#Block166 */


}
struct __ciciliS_BorrowableVector_m_pop_ BorrowableVector_m_pop (BorrowableVector * this ) {
  if ((this ->len ) ==  0 ) 
      return ((struct __ciciliS_BorrowableVector_m_pop_){ (this ->arr )[0], false });
    else
      { /* cicili#Block171 */
        (--(this ->len ));
        return ((struct __ciciliS_BorrowableVector_m_pop_){ (this ->arr )[(this ->len )], true });
      } /* cicili#Block171 */


}
BorrowableVector * BorrowableVector_m_shrink (BorrowableVector * this ) {
  { /* cicili#Let174 */
      BorrowableVector * newVector  = BorrowableVector_s_newEmpty((this ->len ));
      memcpy ((newVector ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  (this ->len ) ));
      BorrowableVector_m_free(this );
      return newVector ;
    }
}
BorrowableVector * BorrowableVector_m_insert (BorrowableVector * this , size_t index , borrowablevector_elem_t val ) {
  { /* cicili#Let177 */
      size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
      if ((this ->len ) ==  (this ->cap ) ) 
          { /* cicili#Let180 */
              BorrowableVector * newVector  = BorrowableVector_s_newEmpty(((this ->len ) +  1 ));
              memcpy ((newVector ->arr ), (this ->arr ), (sizeof(borrowablevector_elem_t) *  safeIndex  ));
              (newVector ->arr )[safeIndex ] = val ;
              memcpy (((newVector ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(borrowablevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
              (newVector ->len ) = ((this ->len ) +  1 );
              BorrowableVector_m_free(this );
              return newVector ;
            }
        else
          { /* cicili#Block183 */
            memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(borrowablevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
            (this ->arr )[safeIndex ] = val ;
            (++(this ->len ));
            return this ;
          } /* cicili#Block183 */


    }
}
BorrowableVector * BorrowableVector_m_removeAt (BorrowableVector * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
      return this ;
    else
      { /* cicili#Block188 */
        memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(borrowablevector_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
        (--(this ->len ));
        return this ;
      } /* cicili#Block188 */


}
bool BorrowableVector_m_contains (BorrowableVector * this , borrowablevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block195 */
              return true ;
            } /* cicili#Block195 */




    } 

  return false ;
}
size_t BorrowableVector_m_indexOf (BorrowableVector * this , borrowablevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block202 */
              return i ;
            } /* cicili#Block202 */




    } 

  return (this ->len );
}
size_t BorrowableVector_m_lastIndexOf (BorrowableVector * this , borrowablevector_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (i  >=  0 ); (--i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block209 */
              return i ;
            } /* cicili#Block209 */




    } 

  return (this ->len );
}
size_t BorrowableVector_m_count (BorrowableVector * this , borrowablevector_elem_t val ) {
  { /* cicili#Let212 */
      size_t c  = 0;
      for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
            if ((this ->arr )[i ] ==  val  ) 
                { /* cicili#Block218 */
                  (++c );
                } /* cicili#Block218 */




        } 

      return c ;
    }
}
;

