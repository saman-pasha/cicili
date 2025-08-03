#ifndef CICILI_CHARSTRING_H_
#define CICILI_CHARSTRING_H_
#include <stddef.h>
#define CHARSTRING_GROWTH_STEP 256 
typedef char charstring_elem_t ;
typedef struct CharString {
  size_t len ;
  size_t cap ;
  charstring_elem_t arr [];
} CharString;
struct __ciciliS_CharString_m_calcCap_ {
  size_t capLen ;
  size_t size ;
};
struct __ciciliS_CharString_m_calcCap_ CharString_s_calcCap (size_t len );
CharString * CharString_s_newEmpty (size_t len );
CharString * CharString_s_newFromArray (const charstring_elem_t * arr , size_t len );
CharString * CharString_s_newCopy (const CharString * other );
char * CharString_m_deref (CharString * this );
CharString * CharString_m_clone (CharString * this );
charstring_elem_t * CharString_m_cloneArray (CharString * this );
CharString * CharString_m_appendNew (CharString * this , const CharString * other );
struct __ciciliS_CharString_m_append_ {
  CharString * out ;
  bool newp ;
};
struct __ciciliS_CharString_m_append_ CharString_m_append (CharString * this , const CharString * other );
void CharString_m_free (CharString * this );
struct __ciciliS_CharString_m_push_ {
  CharString * out ;
  bool newp ;
};
struct __ciciliS_CharString_m_push_ CharString_m_push (CharString * this , charstring_elem_t val );
struct __ciciliS_CharString_m_pop_ {
  charstring_elem_t out ;
  bool outp ;
};
struct __ciciliS_CharString_m_pop_ CharString_m_pop (CharString * this );
CharString * CharString_m_shrink (CharString * this );
CharString * CharString_m_insert (CharString * this , size_t index , charstring_elem_t val );
CharString * CharString_m_removeAt (CharString * this , size_t index );
bool CharString_m_contains (CharString * this , charstring_elem_t val );
size_t CharString_m_indexOf (CharString * this , charstring_elem_t val );
size_t CharString_m_lastIndexOf (CharString * this , charstring_elem_t val );
size_t CharString_m_count (CharString * this , charstring_elem_t val );
CharString * CharString_s_new (const charstring_elem_t * cstr );
CharString * CharString_s_newFormat (const char * fmt , ...   );
CharString * CharString_m_substring (CharString * this , size_t start , size_t length );
CharString * CharString_m_concat (CharString * this , const CharString * other );
size_t CharString_m_find (CharString * this , char ch );
bool CharString_m_equals (CharString * this , const CharString * other );
CharString * CharString_m_toUpper (CharString * this );
CharString * CharString_m_toLower (CharString * this );
CharString * CharString_m_trim (CharString * this );
CharString * CharString_m_replace (CharString * this , char oldch , char newch );
bool CharString_m_startsWith (CharString * this , const CharString * prefix );
bool CharString_m_endsWith (CharString * this , const CharString * suffix );
CharString * char_s_toString (const char * cstr );
char * CharString_s_tochar (CharString * str );
#endif /* CICILI_CHARSTRING_H_ */ 
;

