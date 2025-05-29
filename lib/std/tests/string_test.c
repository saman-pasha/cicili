#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "../Slice/cicili_string.h"
static void __ciciliL_182 (String ** a ) {
  String_m_free((*a ));
}
static void __ciciliL_184 (String ** b ) {
  String_m_free((*b ));
}
int main () {
  { /* cicili#Let181 */
    String * a  __attribute__((__cleanup__(__ciciliL_182 ))) = String_s_new("hello");
    String * b  __attribute__((__cleanup__(__ciciliL_184 ))) = String_s_new("world");
    String * formatted  = String_s_newFormat("value: %d, %s", 42, "test");
    String * helloWorld  = String_m_concat(a , b );
    String * upper  = String_m_toUpper(a );
    String * lower  = String_m_toLower(upper );
    String * trimmed  = String_m_trim(String_s_new("   padded   "));
    String * replaced  = String_m_replace(String_s_new("a-b-c-d"), '-', '_');
    String * substr  = String_m_substring(helloWorld , 3, 4);
    String * prefix  = String_s_new("hel");
    String * suffix  = String_s_new("rld");
    bool eq1  = String_m_equals(a , a );
    bool eq2  = String_m_equals(a , b );
    size_t index  = String_m_find(a , 'l');
    bool sw  = String_m_startsWith(a , prefix );
    bool ew  = String_m_endsWith(helloWorld , suffix );
    fprintf (stdout , "a: %s\n", (a ->arr ));
    fprintf (stdout , "b: %s\n", (b ->arr ));
    fprintf (stdout , "helloWorld: %s\n", (helloWorld ->arr ));
    fprintf (stdout , "formatted: %s\n", (formatted ->arr ));
    fprintf (stdout , "upper: %s\n", (upper ->arr ));
    fprintf (stdout , "lower: %s\n", (lower ->arr ));
    fprintf (stdout , "trimmed: [%s]\n", (trimmed ->arr ));
    fprintf (stdout , "replaced: %s\n", (replaced ->arr ));
    fprintf (stdout , "substring(3,4): %s\n", (substr ->arr ));
    fprintf (stdout , "a equals a: %s\n", ((eq1 ) ? "true" : "false"));
    fprintf (stdout , "a equals b: %s\n", ((eq2 ) ? "true" : "false"));
    fprintf (stdout , "find 'l' in a: %zu\n", index );
    fprintf (stdout , "a starts with 'hel': %s\n", ((sw ) ? "true" : "false"));
    fprintf (stdout , "helloWorld ends with 'rld': %s\n", ((ew ) ? "true" : "false"));
    String_m_free(helloWorld );
    String_m_free(formatted );
    String_m_free(upper );
    String_m_free(lower );
    String_m_free(trimmed );
    String_m_free(replaced );
    String_m_free(substr );
    String_m_free(prefix );
    String_m_free(suffix );
    return 0;
  }
}

