#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "charlist.h"
int main () {
  { /* cicili#Let104 */
    CharList cl = {"CICILI INTERFACE MECHANISM\n"};
    CharList_toString(&cl, stdout );
  }
}

