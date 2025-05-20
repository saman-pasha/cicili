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
  size_t capLen;
  size_t size;
} __ciciliS_String_m_calcCap_;
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
String * String_m_append (String * this, const String * other) {
  { /* cicili#Let123 */
    size_t totalLen = ((this ->len ) +  (other ->len ) );
    if (totalLen  <=  (this ->cap ) ) 
      { /* cicili#Block126 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
        return this ;
      } /* cicili#Block126 */
    else 
      return String_m_appendNew(this , other );
  }
}
void String_m_free (String * this) {
  free (this );
}
String * String_s_new (const string_elem_t * cstr) {
  { /* cicili#Let131 */
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
  { /* cicili#Let134 */
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

  { /* cicili#Let139 */
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
  { /* cicili#Let143 */
    string_elem_t * pos = strchr ((this ->arr ), ch );
    return (((pos  !=  NULL  )) ? (pos  -  (this ->arr ) ) : -1);
  }
}
bool String_m_equals (String * this, const String * other) {
  return (strcmp ((this ->arr ), (other ->arr )) ==  0 );
}
String * String_m_toUpper (String * this) {
  { /* cicili#Let147 */
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
  { /* cicili#Let151 */
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
  { /* cicili#Let155 */
    char * start = (this ->arr );
    char * end = ((this ->arr ) +  ((this ->len ) -  1 ) );
    while ((((start  -  (this ->arr ) ) <  (this ->len ) ) &&  isspace (* (start )) )) {
      start  = (start  +  1 );
    } 
    while (((end  >=  start  ) &&  isspace (* (end )) )) {
      end  = (end  -  1 );
    } 
    { /* cicili#Let159 */
      size_t newlen = (1 +  (end  -  start  ) );
      return String_s_newFromArray(start , newlen );
    }
  }
}
String * String_m_replace (String * this, char oldch, char newch) {
  { /* cicili#Let162 */
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

  { /* cicili#Let170 */
    size_t offset = ((this ->len ) -  (suffix ->len ) );
    return (strncmp (((this ->arr ) +  offset  ), (suffix ->arr ), (suffix ->len )) ==  0 );
  }
}
