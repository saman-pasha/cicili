#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "cicili_string.h"
struct __ciciliS_String_m_calcCap_ {
  size_t capLen;
  size_t size;
};
static struct __ciciliS_String_m_calcCap_ String_s_calcCap (size_t len) {
  { /* cicili#Let102 */
    size_t capLen = ((((len  %  STRING_GROWTH_STEP  ) >  0 )) ? ((len  /  STRING_GROWTH_STEP  ) +  1 ) : (len  /  STRING_GROWTH_STEP  ));
    return ((struct __ciciliS_String_m_calcCap_){ capLen , (sizeof(string_elem_t) *  capLen  )});
  }
}
String * String_s_newEmpty (size_t len) {
  { /* cicili#Let105 */
    __auto_type cap = String_s_calcCap(len );
    String * slice = malloc ((sizeof(String) +  (cap . size ) ));
    (slice ->len ) = len ;
    (slice ->cap ) = (cap . capLen );
    return slice ;
  }
}
String * String_s_newFromArray (const string_elem_t * arr, size_t len) {
  { /* cicili#Let108 */
    String * slice = String_s_newEmpty(len );
    memcpy ((slice ->arr ), arr , (sizeof(string_elem_t) *  len  ));
    return slice ;
  }
}
String * String_s_newCopy (const String * other) {
  { /* cicili#Let111 */
    String * slice = String_s_newEmpty((other ->len ));
    memcpy ((slice ->arr ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
    return slice ;
  }
}
String * String_m_clone (String * this) {
  return String_s_newCopy(this );
}
string_elem_t * String_m_cloneArray (String * this) {
  { /* cicili#Let115 */
    size_t size = (sizeof(string_elem_t) *  (this ->len ) );
    string_elem_t * arr = malloc (size );
    memcpy (arr , (this ->arr ), size );
    return arr ;
  }
}
String * String_m_appendNew (String * this, const String * other) {
  { /* cicili#Let118 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let120 */
      String * slice = String_s_newEmpty(totalLen );
      memcpy ((slice ->arr ), (this ->arr ), (sizeof(string_elem_t) *  (this ->len ) ));
      memcpy (((slice ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
      return slice ;
    }
  }
}
struct __ciciliS_String_m_append_ String_m_append (String * this, const String * other) {
  { /* cicili#Let123 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block126 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
        return ((struct __ciciliS_String_m_append_){ this , false });
      } /* cicili#Block126 */
    else 
      return ((struct __ciciliS_String_m_append_){ String_m_appendNew(this , other ), true });
  }
}
void String_m_free (String * this) {
  free (this );
}
String * String_m_push (String * this, string_elem_t val) {
  if ((this ->len ) ==  (this ->cap ) ) 
    { /* cicili#Block132 */
      { /* cicili#Let134 */
        size_t newLen = ((this ->len ) +  1 );
        { /* cicili#Let136 */
          String * newSlice = String_s_newEmpty(newLen );
          memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(string_elem_t) *  (this ->len ) ));
          (newSlice ->len ) = newLen ;
          (newSlice ->arr )[(this ->len )] = val ;
          String_m_free(this );
          return newSlice ;
        }
      }
    } /* cicili#Block132 */
  else 
    { /* cicili#Block139 */
      (this ->arr )[(this ->len )] = val ;
      (++(this ->len ));
      return this ;
    } /* cicili#Block139 */
}
struct __ciciliS_String_m_pop_ String_m_pop (String * this) {
  if ((this ->len ) ==  0 ) 
    return ((struct __ciciliS_String_m_pop_){ ((string_elem_t)0), false });
  else 
    { /* cicili#Block144 */
      (--(this ->len ));
      return ((struct __ciciliS_String_m_pop_){ (this ->arr )[(this ->len )], true });
    } /* cicili#Block144 */
}
String * String_m_shrink (String * this) {
  { /* cicili#Let147 */
    String * newSlice = String_s_newEmpty((this ->len ));
    memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(string_elem_t) *  (this ->len ) ));
    String_m_free(this );
    return newSlice ;
  }
}
String * String_m_insert (String * this, size_t index, string_elem_t val) {
  { /* cicili#Let150 */
    size_t safeIndex = (((index  >  (this ->len ) )) ? (this ->len ) : index );
    if ((this ->len ) ==  (this ->cap ) ) 
      { /* cicili#Let153 */
        String * newSlice = String_s_newEmpty(((this ->len ) +  1 ));
        memcpy ((newSlice ->arr ), (this ->arr ), (sizeof(string_elem_t) *  safeIndex  ));
        (newSlice ->arr )[safeIndex ] = val ;
        memcpy (((newSlice ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(string_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (newSlice ->len ) = ((this ->len ) +  1 );
        String_m_free(this );
        return newSlice ;
      }
    else 
      { /* cicili#Block156 */
        memmove (((this ->arr ) +  (safeIndex  +  1 ) ), ((this ->arr ) +  safeIndex  ), (sizeof(string_elem_t) *  ((this ->len ) -  safeIndex  ) ));
        (this ->arr )[safeIndex ] = val ;
        (++(this ->len ));
        return this ;
      } /* cicili#Block156 */
  }
}
String * String_m_removeAt (String * this, size_t index) {
  if (index  >=  (this ->len ) ) 
    return this ;
  else 
    { /* cicili#Block161 */
      memmove (((this ->arr ) +  index  ), ((this ->arr ) +  (index  +  1 ) ), (sizeof(string_elem_t) *  ((this ->len ) -  (index  +  1 ) ) ));
      (--(this ->len ));
      return this ;
    } /* cicili#Block161 */
}
bool String_m_contains (String * this, string_elem_t val) {
  for (size_t i = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block169 */
        return true ;
      } /* cicili#Block169 */

  } 
  return false ;
}
size_t String_m_indexOf (String * this, string_elem_t val) {
  for (size_t i = 0; (i  <  (this ->len ) ); (++i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block177 */
        return i ;
      } /* cicili#Block177 */

  } 
  return (this ->len );
}
size_t String_m_lastIndexOf (String * this, string_elem_t val) {
  for (size_t i = ((this ->len ) -  1 ); (0 >=  i  ); (--i )) {
    if ((this ->arr )[i ] ==  val  ) 
      { /* cicili#Block185 */
        return i ;
      } /* cicili#Block185 */

  } 
  return (this ->len );
}
size_t String_m_count (String * this, string_elem_t val) {
  { /* cicili#Let188 */
    size_t c = 0;
    for (size_t i = 0; (i  <  (this ->len ) ); (++i )) {
      if ((this ->arr )[i ] ==  val  ) 
        { /* cicili#Block195 */
          (++c );
        } /* cicili#Block195 */

    } 
    return c ;
  }
}
String * String_s_new (const string_elem_t * cstr) {
  { /* cicili#Let198 */
    size_t len = strlen (cstr );
    String * str = malloc ((sizeof(String) +  (sizeof(string_elem_t) *  (len  +  1 ) ) ));
    strncpy ((str ->arr ), cstr , len );
    (str ->arr )[len ] = '\0';
    (str ->len ) = len ;
    (str ->cap ) = len ;
    return str ;
  }
}
String * String_s_newFormat (const char * fmt, ...  ) {
  { /* cicili#Let201 */
    string_elem_t buffer[4096];
    va_list va_args;
    va_start (va_args , fmt );
    vsnprintf (buffer , 4096, fmt , va_args );
    va_end (va_args );
    return String_s_new(buffer );
  }
}
String * String_m_substring (String * this, size_t start, size_t length) {
  if ((start  +  length  ) >=  (this ->len ) ) 
    return String_s_new("");

  { /* cicili#Let206 */
    String * sub = String_s_newEmpty(length );
    strncpy ((sub ->arr ), ((this ->arr ) +  start  ), length );
    (sub ->arr )[length ] = '\0';
    (sub ->len ) = length ;
    return sub ;
  }
}
String * String_m_concat (String * this, const String * other) {
  return String_m_appendNew(this , other );
}
size_t String_m_find (String * this, string_elem_t ch) {
  { /* cicili#Let210 */
    string_elem_t * pos = strchr ((this ->arr ), ch );
    return (((pos  !=  NULL  )) ? (pos  -  (this ->arr ) ) : -1);
  }
}
bool String_m_equals (String * this, const String * other) {
  return (strcmp ((this ->arr ), (other ->arr )) ==  0 );
}
String * String_m_toUpper (String * this) {
  { /* cicili#Let214 */
    String * strCopy = String_s_newCopy(this );
    size_t i = 0;
    while ((i  <  (strCopy ->len ) )) {
      (strCopy ->arr )[i ] = toupper ((strCopy ->arr )[i ]);
      i  = (i  +  1 );
    } 
    return strCopy ;
  }
}
String * String_m_toLower (String * this) {
  { /* cicili#Let218 */
    String * strCopy = String_s_newCopy(this );
    size_t i = 0;
    while ((i  <  (strCopy ->len ) )) {
      (strCopy ->arr )[i ] = tolower ((strCopy ->arr )[i ]);
      i  = (i  +  1 );
    } 
    return strCopy ;
  }
}
String * String_m_trim (String * this) {
  { /* cicili#Let222 */
    char * start = (this ->arr );
    char * end = ((this ->arr ) +  ((this ->len ) -  1 ) );
    while ((((start  -  (this ->arr ) ) <  (this ->len ) ) &&  isspace (* (start )) )) {
      start  = (start  +  1 );
    } 
    while (((end  >=  start  ) &&  isspace (* (end )) )) {
      end  = (end  -  1 );
    } 
    { /* cicili#Let226 */
      size_t newlen = (1 +  (end  -  start  ) );
      return String_s_newFromArray(start , newlen );
    }
  }
}
String * String_m_replace (String * this, char oldch, char newch) {
  { /* cicili#Let229 */
    String * strCopy = String_s_newCopy(this );
    size_t i = 0;
    while ((i  <  (strCopy ->len ) )) {
      if ((strCopy ->arr )[i ] ==  oldch  ) 
        (strCopy ->arr )[i ] = newch ;

      i  = (i  +  1 );
    } 
    return strCopy ;
  }
}
bool String_m_startsWith (String * this, const String * prefix) {
  if ((this ->len ) <  (prefix ->len ) ) 
    return false ;

  return (strncmp ((this ->arr ), (prefix ->arr ), (prefix ->len )) ==  0 );
}
bool String_m_endsWith (String * this, const String * suffix) {
  if ((this ->len ) <  (suffix ->len ) ) 
    return false ;

  { /* cicili#Let237 */
    size_t offset = ((this ->len ) -  (suffix ->len ) );
    return (strncmp (((this ->arr ) +  offset  ), (suffix ->arr ), (suffix ->len )) ==  0 );
  }
}
