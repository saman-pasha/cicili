#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_charstring.h"
#include <ctype.h>
#include <stdarg.h>
struct __ciciliS_CharString_m_calcCap_ CharString_s_calcCap (size_t len ) {
  { /* cicili#Let143 */
      size_t capLen  = ((((len  %  CHARSTRING_GROWTH_STEP  ) >  0 )) ? ((len  /  CHARSTRING_GROWTH_STEP  ) +  1 ) : (len  /  CHARSTRING_GROWTH_STEP  ));
      return ((struct __ciciliS_CharString_m_calcCap_){ len , (capLen  *  CHARSTRING_GROWTH_STEP  )});
    }
}
CharString * CharString_s_newEmpty (size_t len ) {
  { /* cicili#Let146 */
      __auto_type cap  = CharString_s_calcCap(len );
      CharString * slice  = malloc ((sizeof(CharString) +  (cap . size ) ));
      (slice ->len ) = len ;
      (slice ->cap ) = (cap . size );
      return slice ;
    }
}
CharString * CharString_s_newFromArray (const charstring_elem_t * arr , size_t len ) {
  { /* cicili#Let149 */
      CharString * slice  = CharString_s_newEmpty(len );
      memcpy ((slice ->arr ), arr , (sizeof(charstring_elem_t) *  len  ));
      return slice ;
    }
}
CharString * CharString_s_newCopy (const CharString * other ) {
  { /* cicili#Let152 */
      CharString * slice  = CharString_s_newEmpty((other ->len ));
      memcpy ((slice ->arr ), (other ->arr ), (sizeof(charstring_elem_t) *  (other ->len ) ));
      return slice ;
    }
}
char * CharString_m_deref (CharString * this ) {
  return (this ->arr );
}
CharString * CharString_m_clone (CharString * this ) {
  return CharString_s_newCopy(this );
}
charstring_elem_t * CharString_m_cloneArray (CharString * this ) {
  { /* cicili#Let157 */
      size_t size  = (sizeof(charstring_elem_t) *  (this ->len ) );
      charstring_elem_t * arr  = malloc (size );
      memcpy (arr , (this ->arr ), size );
      return arr ;
    }
}
CharString * CharString_m_appendNew (CharString * this , const CharString * other ) {
  { /* cicili#Let160 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      { /* cicili#Let162 */
          CharString * slice  = CharString_s_newEmpty(totalLen );
          memcpy ((slice ->arr ), (this ->arr ), (sizeof(charstring_elem_t) *  (this ->len ) ));
          memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(charstring_elem_t) *  (other ->len ) ));
          return slice ;
        }
    }
}
struct __ciciliS_CharString_m_append_ CharString_m_append (CharString * this , const CharString * other ) {
  { /* cicili#Let165 */
      size_t totalLen  = ((this ->len ) +  (other ->len ) );
      if (totalLen  <=  (this ->cap ) ) 
          { /* cicili#Block168 */
            memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(charstring_elem_t) *  (other ->len ) ));
            return ((struct __ciciliS_CharString_m_append_){ this , false });
          } /* cicili#Block168 */

        else
          return ((struct __ciciliS_CharString_m_append_){ CharString_m_appendNew(this , other ), true });

    }
}
void CharString_m_free (CharString * this ) {
  free (this );
}
struct __ciciliS_CharString_m_push_ CharString_m_push (CharString * this , charstring_elem_t val ) {
  if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Block174 */
        { /* cicili#Let176 */
            size_t newLen  = ((this ->len ) +  1 );
            { /* cicili#Let178 */
                CharString * newVector  = CharString_s_newEmpty(newLen );
                memcpy ((newVector ->arr ), (this ->arr ), (sizeof(charstring_elem_t) *  (this ->len ) ));
                (newVector ->len ) = newLen ;
                (newVector ->arr )[(this ->len )] = val ;
                CharString_m_free(this );
                return ((struct __ciciliS_CharString_m_push_){ newVector , true });
              }
          }
      } /* cicili#Block174 */

    else
      { /* cicili#Block181 */
        (this ->arr )[(this ->len )] = val ;
        (++(this ->len ));
        return ((struct __ciciliS_CharString_m_push_){ this , false });
      } /* cicili#Block181 */


}
struct __ciciliS_CharString_m_pop_ CharString_m_pop (CharString * this ) {
  if ((this ->len ) ==  0 ) 
      return ((struct __ciciliS_CharString_m_pop_){ (this ->arr )[0], false });
    else
      { /* cicili#Block186 */
        (--(this ->len ));
        return ((struct __ciciliS_CharString_m_pop_){ (this ->arr )[(this ->len )], true });
      } /* cicili#Block186 */


}
CharString * CharString_m_shrink (CharString * this ) {
  { /* cicili#Let189 */
      CharString * newVector  = CharString_s_newEmpty((this ->len ));
      memcpy ((newVector ->arr ), (this ->arr ), (sizeof(charstring_elem_t) *  (this ->len ) ));
      CharString_m_free(this );
      return newVector ;
    }
}
CharString * CharString_m_insert (CharString * this , size_t index , charstring_elem_t val ) {
  { /* cicili#Let192 */
      size_t safeIndex  = (((index  >  (this ->len ) )) ? (this ->len ) : index );
      if ((this ->len ) ==  (this ->cap ) ) 
          { /* cicili#Let195 */
              CharString * newVector  = CharString_s_newEmpty(((this ->len ) +  1 ));
              memcpy ((newVector ->arr ), (this ->arr ), (sizeof(charstring_elem_t) *  safeIndex  ));
              (newVector ->arr )[safeIndex ] = val ;
              memcpy (((newVector ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(charstring_elem_t) *  ((this ->len ) -  safeIndex  ) ));
              (newVector ->len ) = ((this ->len ) +  1 );
              CharString_m_free(this );
              return newVector ;
            }
        else
          { /* cicili#Block198 */
            memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(charstring_elem_t) *  ((this ->len ) -  safeIndex  ) ));
            (this ->arr )[safeIndex ] = val ;
            (++(this ->len ));
            return this ;
          } /* cicili#Block198 */


    }
}
CharString * CharString_m_removeAt (CharString * this , size_t index ) {
  if (index  >=  (this ->len ) ) 
      return this ;
    else
      { /* cicili#Block203 */
        memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(charstring_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
        (--(this ->len ));
        return this ;
      } /* cicili#Block203 */


}
bool CharString_m_contains (CharString * this , charstring_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block210 */
              return true ;
            } /* cicili#Block210 */




    } 

  return false ;
}
size_t CharString_m_indexOf (CharString * this , charstring_elem_t val ) {
  for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block217 */
              return i ;
            } /* cicili#Block217 */




    } 

  return (this ->len );
}
size_t CharString_m_lastIndexOf (CharString * this , charstring_elem_t val ) {
  for (size_t i  = ((this ->len ) -  1 ); (i  >=  0 ); (--i )) {
        if ((this ->arr )[i ] ==  val  ) 
            { /* cicili#Block224 */
              return i ;
            } /* cicili#Block224 */




    } 

  return (this ->len );
}
size_t CharString_m_count (CharString * this , charstring_elem_t val ) {
  { /* cicili#Let227 */
      size_t c  = 0;
      for (size_t i  = 0; (i  <  (this ->len ) ); (++i )) {
            if ((this ->arr )[i ] ==  val  ) 
                { /* cicili#Block233 */
                  (++c );
                } /* cicili#Block233 */




        } 

      return c ;
    }
}
CharString * CharString_s_new (const charstring_elem_t * cstr ) {
  { /* cicili#Let236 */
      size_t len  = strlen (cstr );
      CharString * str  = CharString_s_newEmpty((len  +  1 ));
      strncpy ((str ->arr ), cstr , len );
      (str ->arr )[len ] = '\0';
      (str ->len ) = len ;
      return str ;
    }
}
CharString * CharString_s_newFormat (const char * fmt , ...   ) {
  { /* cicili#Let239 */
      charstring_elem_t buffer [4096];
      va_list va_args ;
      va_start (va_args , fmt );
      vsnprintf (buffer , 4096, fmt , va_args );
      va_end (va_args );
      return CharString_s_new(buffer );
    }
}
CharString * CharString_m_substring (CharString * this , size_t start , size_t length ) {
  if ((start  +  length  ) >  (this ->len ) ) 
      return CharString_s_new("");


  { /* cicili#Let244 */
      CharString * sub  = CharString_s_newEmpty((length  +  1 ));
      strncpy ((sub ->arr ), ((this ->arr ) +  start  ), length );
      (sub ->arr )[length ] = '\0';
      (sub ->len ) = length ;
      return sub ;
    }
}
CharString * CharString_m_concat (CharString * this , const CharString * other ) {
  { /* cicili#Let247 */
      size_t len  = ((this ->len ) +  (other ->len ) );
      CharString * str  = CharString_s_newEmpty((len  +  1 ));
      strncpy ((str ->arr ), (this ->arr ), (this ->len ));
      strncpy (((str ->arr ) +  (this ->len ) ), (other ->arr ), len );
      (str ->arr )[len ] = '\0';
      (str ->len ) = len ;
      return str ;
    }
}
size_t CharString_m_find (CharString * this , charstring_elem_t ch ) {
  { /* cicili#Let250 */
      charstring_elem_t * pos  = strchr ((this ->arr ), ch );
      return (((pos  !=  NULL  )) ? (pos  -  (this ->arr ) ) : -1);
    }
}
bool CharString_m_equals (CharString * this , const CharString * other ) {
  return (strcmp ((this ->arr ), (other ->arr )) ==  0 );
}
CharString * CharString_m_toUpper (CharString * this ) {
  { /* cicili#Let254 */
      CharString * strCopy  = CharString_s_newCopy(this );
      size_t i  = 0;
      while ((i  <  (strCopy ->len ) )) {
          (strCopy ->arr )[i ] = toupper ((strCopy ->arr )[i ]);
          i  = (i  +  1 );
        }

      return strCopy ;
    }
}
CharString * CharString_m_toLower (CharString * this ) {
  { /* cicili#Let258 */
      CharString * strCopy  = CharString_s_newCopy(this );
      size_t i  = 0;
      while ((i  <  (strCopy ->len ) )) {
          (strCopy ->arr )[i ] = tolower ((strCopy ->arr )[i ]);
          i  = (i  +  1 );
        }

      return strCopy ;
    }
}
CharString * CharString_m_trim (CharString * this ) {
  { /* cicili#Let262 */
      char * start  = (this ->arr );
      char * end  = ((this ->arr ) +  ((this ->len ) -  1 ) );
      while ((((start  -  (this ->arr ) ) <  (this ->len ) ) &&  isspace (* (start )) )) {
          start  = (start  +  1 );
        }

      while (((end  >=  start  ) &&  isspace (* (end )) )) {
          end  = (end  -  1 );
        }

      { /* cicili#Let266 */
          size_t newlen  = (1 +  (end  -  start  ) );
          return CharString_s_newFromArray(start , newlen );
        }
    }
}
CharString * CharString_m_replace (CharString * this , char oldch , char newch ) {
  { /* cicili#Let269 */
      CharString * strCopy  = CharString_s_newCopy(this );
      size_t i  = 0;
      while ((i  <  (strCopy ->len ) )) {
          if ((strCopy ->arr )[i ] ==  oldch  ) 
              (strCopy ->arr )[i ] = newch ;


          i  = (i  +  1 );
        }

      return strCopy ;
    }
}
bool CharString_m_startsWith (CharString * this , const CharString * prefix ) {
  if ((this ->len ) <  (prefix ->len ) ) 
      return false ;


  return (strncmp ((this ->arr ), (prefix ->arr ), (prefix ->len )) ==  0 );
}
bool CharString_m_endsWith (CharString * this , const CharString * suffix ) {
  if ((this ->len ) <  (suffix ->len ) ) 
      return false ;


  { /* cicili#Let277 */
      size_t offset  = ((this ->len ) -  (suffix ->len ) );
      return (strncmp (((this ->arr ) +  offset  ), (suffix ->arr ), (suffix ->len )) ==  0 );
    }
}
CharString * char_s_toString (const char * cstr ) {
  return CharString_s_new(cstr );
}
char * CharString_s_tochar (CharString * str ) {
  return CharString_m_deref(str );
}
;

