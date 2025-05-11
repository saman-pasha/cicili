#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct CharList {
  char arr[8];
} CharList;
int main (int argc, char * argv[]) {
  { /* cicili#Let177 */
    CharList fi = {"abcdefgh"};
    CharList se = {"ijklmnop"};
    (fi . arr ) = "qrst";
    fi  = se ;
    fprintf (stdout , "%.*s\n", ((int)sizeof((fi . arr ))), (fi . arr ));
  }
}

