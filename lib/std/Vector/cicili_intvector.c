#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_intvector.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_IntVector_m_calcCap_ IntVector_s_calcCap (size_t len ) {
  { /* cicili#Let128 */
      size_t capLen  = ((((len  %  INTVECTOR_GROWTH_STEP  ) >  0 )) ? ((len  /  INTVECTOR_GROWTH_STEP  ) +  1 ) : (len  /  INTVECTOR_GROWTH_STEP  ));
      return ((struct __ciciliS_IntVector_m_calcCap_){ len , (capLen  *  INTVECTOR_GROWTH_STEP  )});
    }
}
IntVector * IntVector_s_newEmpty (size_t len ) {
  { /* cicili#Let131 */
      __auto_type cap  = IntVector_s_calcCap(len );
      IntVector * slice  = malloc ((sizeof(IntVector) +  (cap . size ) ));
      (slice ->len ) = len ;
      (slice ->cap ) = (cap . size );
      return slice ;
    }
}
IntVector * IntVector_s_newFromArray (const intvector_elem_t * arr , size_t len ) {
  { /* cicili#Let134 */
      IntVector * slice  = IntVector_s_newEmpty(len );
      memcpy ((slice ->arr ), arr , (sizeof(intvector_elem_t) *  len  ));
      return slice ;
    }
}
IntVector * IntVector_s_newCopy (const IntVector * other ) {
  { /* cicili#Let137 */
      IntVector * slice  = IntVector_s_newEmpty((other ->len ));
      memcpy ((slice ->arr ), (other ->arr ), (sizeof(intvector_elem_t) *  (other ->len ) ));
      return slice ;
    }
}
int * IntVector_m_deref (IntVector * this ) {
  return (this ->arr );
}
IntVector * IntVector_m_clone (IntVector * this ) {
  return IntVector_s_newCopy(this );
}
intvector_elem_t * IntVector_m_cloneArray (IntVector * this ) {
  { /* cicili#Let142 */
      size_t size  = (sizeof(intvector_elem_t) *  (this ->len ) );
      intvector_elem_t * arr  = malloc (size );
      memcpy (arr , (this ->arr ), size );
      return arr ;
    }
}
IntVector * IntVector_m_appendNew (IntVector * this , const IntVector * other ) {
  { /* cicili#Let145 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      { /* cicili#Let147 */
          IntVector * slice  = IntVector_s_newEmpty(totalLen );
          memcpy ((slice ->arr ), (this ->arr ), (sizeof(intvector_elem_t) *  (this ->len ) ));
          memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(intvector_elem_t) *  (other ->len ) ));
          return slice ;
        }
    }
}
struct __ciciliS_IntVector_m_append_ IntVector_m_append (IntVector * this , const IntVector * other ) {
  { /* cicili#Let150 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      if (totalLen  <=  (this ->cap ) ) 
          { /* cicili#Block153 */
            memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(intvector_elem_t) *  (other ->len ) ));
            return ((struct __ciciliS_IntVector_m_append_){ this , false });
          } /* cicili#Block153 */

        else
          return ((struct __ciciliS_IntVector_m_append_){ IntVector_m_appendNew(this , other ), true });

    }
}
void IntVector_m_free (IntVector * this ) {
  free (this );
}
struct __ciciliS_IntVector_m_push_ IntVector_m_push (IntVector * this , intvector_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Block159 */
        { /* cicili#Let161 */
            size_t newLen  = ((this ->len ) +  1 );
            { /* cicili#Let163 */
                IntVector * newVector  = IntVector_s_newEmpty(newLen );
                memcpy ((newVector ->arr ), (this ->arr ), (sizeof(intvector_elem_t) *  (this ->len ) ));
                (newVector ->len ) = newLen ;
                (newVector ->arr )[(this ->len )] = val ;
                IntVector_m_free(this );
                return ((struct __ciciliS_IntVector_m_push_){ newVector , true });
              }
          }
      } /* cicili#Block159 */

    else
      { /* cicili#Block166 */
        (this ->arr )[(this ->len )] = val ;
        (++(this ->len ));
        return ((struct __ciciliS_IntVector_m_push_){ this , false });
      } /* cicili#Block166 */


}
struct __ciciliS_IntVector_m_pop_ IntVector_m_pop (IntVector * this ) {
  if ((this ->len ) ==  0 ) 
      return ((struct __ciciliS_IntVector_m_pop_){ (this ->arr )[0], false });
    else
      { /* cicili#Block171 */
        (--(this ->len ));
        return ((struct __ciciliS_IntVector_m_pop_){ (this ->arr )[(this ->len )], true });
      } /* cicili#Block171 */


}
IntVector * IntVector_m_shrink (IntVector * this ) {
  { /* cicili#Let174 */
      IntVector * newVector  = IntVector_s_newEmpty((this ->len ));
      memcpy ((newVector ->arr ), (this ->arr ), (sizeof(intvector_elem_t) *  (this ->len ) ));
      IntVector_m_free(this );
      return newVector ;
    }
}
IntVector * IntVector_m_insert (IntVector * this , size_t index , intvector_elem_t val ) {
  { /* cicili#Let177 */
      size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
      if ((this ->len ) ==  (this ->cap ) ) 
          { /* cicili#Let180 */
              IntVector * newVector  = IntVector_s_newEmpty(((this ->len ) +  1 ));
              memcpy ((newVector ->arr ), (this ->arr ), (sizeof(intvector_elem_t) *  safeIndex  ));
              (newVector ->arr )[safeIndex ] = val ;
              memcpy (((newVector ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(intvector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
              (newVector ->len ) = ((this ->len ) +  1 );
              IntVector_m_free(this );
              return newVector ;
            }
        else
          { /* cicili#Block183 */
            memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(intvector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
            (this ->arr )[safeIndex ] = val ;
            (++(this ->len ));
            return this ;
          } /* cicili#Block183 */


    }
}
IntVector * IntVector_m_removeAt (IntVector * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
      return this ;
    else
      { /* cicili#Block188 */
        memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(intvector_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
        (--(this ->len ));
        return this ;
      } /* cicili#Block188 */


}
bool IntVector_m_contains (IntVector * this , intvector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block195 */
              return true ;
            } /* cicili#Block195 */




    } 

  return false ;
}
size_t IntVector_m_indexOf (IntVector * this , intvector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block202 */
              return i ;
            } /* cicili#Block202 */




    } 

  return (this ->len );
}
size_t IntVector_m_lastIndexOf (IntVector * this , intvector_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (i  >=  0 ); (--i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block209 */
              return i ;
            } /* cicili#Block209 */




    } 

  return (this ->len );
}
size_t IntVector_m_count (IntVector * this , intvector_elem_t val ) {
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

