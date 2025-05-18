#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include "cicili_string.h"
static struct __ciciliS_String_m_calcCap_ {
  size_t len;
  size_t size;
} __ciciliS_String_m_calcCap_;
static struct __ciciliS_String_m_calcCap_ String_s_calcCap (size_t xcap) {
  { /* cicili#Let102 */
    size_t len = ((((xcap  %  STRING_GROWTH_STEP  ) >  0 )) ? ((xcap  /  STRING_GROWTH_STEP  ) +  1 ) : (xcap  /  STRING_GROWTH_STEP  ));
    return ((struct __ciciliS_String_m_calcCap_){ len , (sizeof(string_elem_t) *  len  )});
  }
}
String * String_s_newEmpty (size_t xlen) {
  { /* cicili#Let105 */
    __auto_type ccap = String_s_calcCap(xlen );
    String * slc = malloc ((sizeof(String) +  (ccap . size ) ));
    (slc ->len ) = xlen ;
    (slc ->cap ) = (ccap . len );
    return slc ;
  }
}
String * String_s_newFromArray (const string_elem_t * xarr, size_t xlen) {
  { /* cicili#Let108 */
    String * slc = String_s_newEmpty(xlen );
    memcpy ((slc ->arr ), xarr , (sizeof(string_elem_t) *  xlen  ));
    return slc ;
  }
}
String * String_s_newCopy (const String * other) {
  { /* cicili#Let111 */
    String * slc = String_s_newEmpty((other ->len ));
    memcpy ((slc ->arr ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
    return slc ;
  }
}
String * String_m_clone (String * this) {
  return String_s_newCopy(this );
}
string_elem_t * String_m_cloneArray (String * this) {
  { /* cicili#Let115 */
    size_t xsize = (sizeof(string_elem_t) *  (this ->len ) );
    string_elem_t * xarr = malloc (xsize );
    memcpy (xarr , (this ->arr ), xsize );
    return xarr ;
  }
}
String * String_m_appendNew (String * this, const String * other) {
  { /* cicili#Let118 */
    size_t tlen = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let120 */
      String * slc = String_s_newEmpty(tlen );
      memcpy ((slc ->arr ), (this ->arr ), (sizeof(string_elem_t) *  (this ->len ) ));
      memcpy (((slc ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
      return slc ;
    }
  }
}
String * String_m_append (String * this, const String * other) {
  { /* cicili#Let123 */
    size_t tlen = ((this ->len ) +  (other ->len ) );
    if (tlen  <=  (this ->cap ) ) 
      { /* cicili#Block126 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
        return this ;
      } /* cicili#Block126 */
    else 
      return String_m_appendNew(this , other );
  }
}
String * String_s_new (const string_elem_t * cstr) {
  { /* cicili#Let130 */
    size_t len = strlen (cstr );
    String * str = malloc ((sizeof(String) +  (sizeof(string_elem_t) *  (len  +  1 ) ) ));
    strncpy ((str ->arr ), cstr , len );
    (str ->arr )[len ] = '\0';
    return str ;
  }
}
String * String_m_substring (String * this, size_t start, size_t length) {
  if ((start  +  length  ) >=  (this ->len ) ) 
    return String_s_new("");

  { /* cicili#Let134 */
    String * sub = String_s_newEmpty(length );
    strncpy ((sub ->arr ), ((this ->arr ) +  start  ), length );
    (sub ->arr )[length ] = '\0';
    return sub ;
  }
}
String * String_m_concat (String * this, const String * other) {
  return String_m_appendNew(this , other );
}
size_t String_m_find (String * this, string_elem_t ch) {
  { /* cicili#Let138 */
    string_elem_t * pos = strchr ((this ->arr ), ch );
    return (((pos  !=  NULL  )) ? (pos  -  (this ->arr ) ) : -1);
  }
}
bool String_m_equals (String * this, const String * other) {
  return (strcmp ((this ->arr ), (other ->arr )) ==  0 );
}
String * String_m_format (String * this, const char * fmt, ...  ) {
  { /* cicili#Let142 */
    string_elem_t buffer[4096];
    va_list va_args;
    va_start (va_args , fmt );
    vsnprintf (buffer , 4096, fmt , va_args );
    va_end (va_args );
    return String_s_new(buffer );
  }
}
String * String_m_toUpper (String * this) {
  { /* cicili#Let146 */
    String * strCopy = String_s_newCopy(this );
    { /* cicili#Let148 */
      size_t i = 0;
      while ((i  <  (strCopy ->len ) )) {
        (strCopy ->arr )[i ] = toupper ((strCopy ->arr )[i ]);
        i  = (i  +  1 );
      } 
    }
    return strCopy ;
  }
}
String * String_m_toLower (String * this) {
  { /* cicili#Let152 */
    String * strCopy = String_s_newCopy(this );
    { /* cicili#Let154 */
      size_t i = 0;
      while ((i  <  (strCopy ->len ) )) {
        (strCopy ->arr )[i ] = tolower ((strCopy ->arr )[i ]);
        i  = (i  +  1 );
      } 
    }
    return strCopy ;
  }
}
