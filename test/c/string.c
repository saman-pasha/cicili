#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block105 */
      printf ("ok   %-32s %lld\n", what , got );
      return 0;
    }
  else
    { /* block108 */
      printf ("FAIL %-32s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int primes [] = { 2, 3, 5, 7, 11};
int grid [2][3] = { { 1, 2, 3}, { 4, 5, 6}};
const char * greeting  = "hello";
int main () {
  { /* let112 */
    int bad  = 0;
    // ----------
    bad  += check ("nth 0", primes [0], 2) ;
    bad  += check ("nth 4", primes [4], 11) ;
    bad  += check ("sizeof array", sizeof(primes), 20) ;
    bad  += check ("element count", (sizeof(primes) /  sizeof(int) ), 5) ;
    { /* let114 */
      int sparse [5] = { 1, 2};
      // ----------
      bad  += check ("partial init set", sparse [1], 2) ;
      bad  += check ("partial init zero", sparse [4], 0) ;
    }
    { /* let116 */
      int scratch [3];
      // ----------
      for (int i  = 0; (i  <  3 ); (++i )) {
          scratch [i ] = (i  *  10 );
      }
      bad  += check ("filled by loop", scratch [2], 20) ;
    }
    bad  += check ("grid [0][2]", grid [0][2], 3) ;
    bad  += check ("grid [1][0]", grid [1][0], 4) ;
    bad  += check ("sizeof grid", sizeof(grid), 24) ;
    bad  += check ("strlen literal", strlen ("hello"), 5) ;
    bad  += check ("file scope string", strlen (greeting ), 5) ;
    bad  += check ("strcmp equal", strcmp ("abc", "abc"), 0) ;
    bad  += check ("index into literal", "hello"[1], 101) ;
    { /* let121 */
      char buf [16];
      // ----------
      strcpy (buf , "hi");
      bad  += check ("strcpy", strlen (buf ), 2) ;
      strcat (buf , " there");
      bad  += check ("strcat", strlen (buf ), 8) ;
      bad  += check ("buf first char", buf [0], 104) ;
    }
    { /* let123 */
      char buf [32];
      // ----------
      snprintf (buf , 32, "%d-%d", 6, 7);
      bad  += check ("snprintf", strlen (buf ), 3) ;
      bad  += check ("snprintf content", strcmp (buf , "6-7"), 0) ;
    }
    bad  += check ("char literal", 'A', 65) ;
    bad  += check ("char digit", '7', 55) ;
    bad  += check ("char space", ' ', 32) ;
    bad  += check ("newline", '\n', 10) ;
    bad  += check ("tab", '\t', 9) ;
    bad  += check ("return", '\r', 13) ;
    bad  += check ("backspace", '\b', 8) ;
    bad  += check ("null", '\0', 0) ;
    bad  += check ("escape in string", strlen ("a\nb"), 3) ;
    bad  += check ("isdigit", ((isdigit ('7')) ? 1 : 0), 1) ;
    bad  += check ("isalpha", ((isalpha ('A')) ? 1 : 0), 1) ;
    bad  += check ("toupper", toupper ('a'), 65) ;
    if (bad  ==  0 )
      printf ("string: all ok\n");
    else
      printf ("string: %d FAILED\n", bad );
    return bad ;
  }
}
