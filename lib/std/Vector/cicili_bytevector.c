#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_bytevector.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_ByteVector_m_calcCap_ ByteVector_s_calcCap (size_t len ) {
  { /* cicili#Let128 */
      size_t capLen  = ((((len  %  BYTEVECTOR_GROWTH_STEP  ) >  0 )) ? ((len  /  BYTEVECTOR_GROWTH_STEP  ) +  1 ) : (len  /  BYTEVECTOR_GROWTH_STEP  ));
      return ((struct __ciciliS_ByteVector_m_calcCap_){ len , (capLen  *  BYTEVECTOR_GROWTH_STEP  )});
    }
}
ByteVector * ByteVector_s_newEmpty (size_t len ) {
  { /* cicili#Let131 */
      __auto_type cap  = ByteVector_s_calcCap(len );
      ByteVector * slice  = malloc ((sizeof(ByteVector) +  (cap . size ) ));
      (slice ->len ) = len ;
      (slice ->cap ) = (cap . size );
      return slice ;
    }
}
ByteVector * ByteVector_s_newFromArray (const bytevector_elem_t * arr , size_t len ) {
  { /* cicili#Let134 */
      ByteVector * slice  = ByteVector_s_newEmpty(len );
      memcpy ((slice ->arr ), arr , (sizeof(bytevector_elem_t) *  len  ));
      return slice ;
    }
}
ByteVector * ByteVector_s_newCopy (const ByteVector * other ) {
  { /* cicili#Let137 */
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
  { /* cicili#Let142 */
      size_t size  = (sizeof(bytevector_elem_t) *  (this ->len ) );
      bytevector_elem_t * arr  = malloc (size );
      memcpy (arr , (this ->arr ), size );
      return arr ;
    }
}
ByteVector * ByteVector_m_appendNew (ByteVector * this , const ByteVector * other ) {
  { /* cicili#Let145 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      { /* cicili#Let147 */
          ByteVector * slice  = ByteVector_s_newEmpty(totalLen );
          memcpy ((slice ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
          memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
          return slice ;
        }
    }
}
struct __ciciliS_ByteVector_m_append_ ByteVector_m_append (ByteVector * this , const ByteVector * other ) {
  { /* cicili#Let150 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      if (totalLen  <=  (this ->cap ) ) 
          { /* cicili#Block153 */
            memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(bytevector_elem_t) *  (other ->len ) ));
            return ((struct __ciciliS_ByteVector_m_append_){ this , false });
          } /* cicili#Block153 */

        else
          return ((struct __ciciliS_ByteVector_m_append_){ ByteVector_m_appendNew(this , other ), true });

    }
}
void ByteVector_m_free (ByteVector * this ) {
  free (this );
}
struct __ciciliS_ByteVector_m_push_ ByteVector_m_push (ByteVector * this , bytevector_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Block159 */
        { /* cicili#Let161 */
            size_t newLen  = ((this ->len ) +  1 );
            { /* cicili#Let163 */
                ByteVector * newVector  = ByteVector_s_newEmpty(newLen );
                memcpy ((newVector ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
                (newVector ->len ) = newLen ;
                (newVector ->arr )[(this ->len )] = val ;
                ByteVector_m_free(this );
                return ((struct __ciciliS_ByteVector_m_push_){ newVector , true });
              }
          }
      } /* cicili#Block159 */

    else
      { /* cicili#Block166 */
        (this ->arr )[(this ->len )] = val ;
        (++(this ->len ));
        return ((struct __ciciliS_ByteVector_m_push_){ this , false });
      } /* cicili#Block166 */


}
struct __ciciliS_ByteVector_m_pop_ ByteVector_m_pop (ByteVector * this ) {
  if ((this ->len ) ==  0 ) 
      return ((struct __ciciliS_ByteVector_m_pop_){ (this ->arr )[0], false });
    else
      { /* cicili#Block171 */
        (--(this ->len ));
        return ((struct __ciciliS_ByteVector_m_pop_){ (this ->arr )[(this ->len )], true });
      } /* cicili#Block171 */


}
ByteVector * ByteVector_m_shrink (ByteVector * this ) {
  { /* cicili#Let174 */
      ByteVector * newVector  = ByteVector_s_newEmpty((this ->len ));
      memcpy ((newVector ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  (this ->len ) ));
      ByteVector_m_free(this );
      return newVector ;
    }
}
ByteVector * ByteVector_m_insert (ByteVector * this , size_t index , bytevector_elem_t val ) {
  { /* cicili#Let177 */
      size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
      if ((this ->len ) ==  (this ->cap ) ) 
          { /* cicili#Let180 */
              ByteVector * newVector  = ByteVector_s_newEmpty(((this ->len ) +  1 ));
              memcpy ((newVector ->arr ), (this ->arr ), (sizeof(bytevector_elem_t) *  safeIndex  ));
              (newVector ->arr )[safeIndex ] = val ;
              memcpy (((newVector ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(bytevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
              (newVector ->len ) = ((this ->len ) +  1 );
              ByteVector_m_free(this );
              return newVector ;
            }
        else
          { /* cicili#Block183 */
            memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(bytevector_elem_t) *  ((this ->len ) -  safeIndex  ) ));
            (this ->arr )[safeIndex ] = val ;
            (++(this ->len ));
            return this ;
          } /* cicili#Block183 */


    }
}
ByteVector * ByteVector_m_removeAt (ByteVector * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
      return this ;
    else
      { /* cicili#Block188 */
        memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(bytevector_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
        (--(this ->len ));
        return this ;
      } /* cicili#Block188 */


}
bool ByteVector_m_contains (ByteVector * this , bytevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block195 */
              return true ;
            } /* cicili#Block195 */




    } 

  return false ;
}
size_t ByteVector_m_indexOf (ByteVector * this , bytevector_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block202 */
              return i ;
            } /* cicili#Block202 */




    } 

  return (this ->len );
}
size_t ByteVector_m_lastIndexOf (ByteVector * this , bytevector_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (i  >=  0 ); (--i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block209 */
              return i ;
            } /* cicili#Block209 */




    } 

  return (this ->len );
}
size_t ByteVector_m_count (ByteVector * this , bytevector_elem_t val ) {
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

