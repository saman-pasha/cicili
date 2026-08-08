#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char page_text [262144];
char head_text [262144];
char body_text [262144];
static int slurp (const char * path , char * buf , size_t cap ) {
  { /* let105 */
    FILE * f  = fopen (path , "rb");
    // ----------
    if (f  ==  NULL  )
      { /* block109 */
        printf ("FAIL cannot open %s\n", path );
        return 0;
      }
    { /* let111 */
      size_t n  = fread (buf , 1, (cap  -  1 ), f );
      // ----------
      buf [n ] = 0;
      fclose (f );
      return 1;
    }
  }
}
static int has (const char * hay , const char * needle , const char * what ) {
  if (strstr (hay , needle ) !=  NULL  )
    { /* block116 */
      printf ("ok   %s\n", what );
      return 0;
    }
  else
    { /* block119 */
      printf ("FAIL %s -- no '%s'\n", what , needle );
      return 1;
    }
}
static int before (const char * hay , const char * a , const char * b , const char * what ) {
  { /* let122 */
    const char * pa  = strstr (hay , a );
    const char * pb  = strstr (hay , b );
    // ----------
    if ((pa  !=  NULL  ) &&  ((pb  !=  NULL  ) &&  (pa  <  pb  ) ) )
      { /* block126 */
        printf ("ok   %s\n", what );
        return 0;
      }
    else
      { /* block129 */
        printf ("FAIL %s\n", what );
        return 1;
      }
  }
}
int main () {
  { /* let133 */
    int bad  = 0;
    // ----------
    if (0 ==  slurp ("emit.parsi", page_text , 262144) )
      return 1;
    if (0 ==  slurp ("emit_report.hpp", head_text , 262144) )
      return 1;
    if (0 ==  slurp ("emit_report.cpp", body_text , 262144) )
      return 1;
    bad  += has (page_text , "TABLE emit::books", "TABLE emitted") ;
    bad  += has (page_text , "SEQUENCE emit::books_seq", "SEQUENCE emitted") ;
    bad  += has (page_text , "PROCEDURE emit::add_book", "PROCEDURE emitted") ;
    bad  += has (page_text , "PAGE emit::report", "PAGE emitted") ;
    bad  += has (page_text , "COLUMN id AS Long PRIMARY KEY;", "COLUMN with its key") ;
    bad  += has (page_text , "RETURNS Long", "PROCEDURE return type") ;
    bad  += has (page_text , "REQUIRES emit::books, emit::books_seq", "REQUIRES qualified") ;
    bad  += has (page_text , "INSERT INTO emit::books VALUES", "INSERT emitted") ;
    bad  += has (page_text , "OVERRIDE FUNCTION PAGE_LOAD() RETURNS Void", "PAGE_LOAD override") ;
    bad  += has (page_text , "FROM emit::books", "SELECT cursor") ;
    bad  += has (page_text , "ECHO '<h1>Books</h1>';", "string as a Parsi literal") ;
    bad  += has (page_text , "`emit_report_e1()", "lifted call in the page") ;
    bad  += has (head_text , "std::string emit_report_e1 ();", "lifted prototype in the .hpp") ;
    bad  += has (body_text , "parsi_str( (20 +  22 ) )", "lifted body in the .cpp") ;
    bad  += has (body_text , "template <typename T> static std::string parsi_str", "parsi_str emitted once") ;
    bad  += has (page_text , "BEGIN HPP", "HPP block") ;
    bad  += has (page_text , "#include \"emit_report.hpp\"", "HPP block includes the fragment") ;
    bad  += has (page_text , "BEGIN CPP", "CPP block") ;
    bad  += has (page_text , "#include \"emit_report.cpp\"", "CPP block includes the fragment") ;
    bad  += before (page_text , "TABLE emit::books", "SEQUENCE emit::books_seq", "table before sequence") ;
    bad  += before (page_text , "SEQUENCE emit::books_seq", "PROCEDURE emit::add_book", "sequence before procedure") ;
    bad  += before (page_text , "PROCEDURE emit::add_book", "PAGE emit::report", "procedure before page") ;
    if (bad  ==  0 )
      printf ("parsi-emit: all ok\n");
    else
      printf ("parsi-emit: %d FAILED\n", bad );
    return bad ;
  }
}
