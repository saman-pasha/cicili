#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "method.h"
void Sample_m_PrintAttrA (Sample * this ) {
  printf ("AttrA: %d\n", (this ->AttrA ));
}
void Sample_m_SetAttrA (Sample * this , int a ) {
  (this ->AttrA ) = a ;
}
void Sample_m_PrintAttrB (Sample * this ) {
  printf ("AttrB: %s\n", (this ->AttrB ));
}
void Sample_m_SetAttrB (Sample * this , char * b ) {
  (this ->AttrB ) = b ;
}
void Sample_m_PrintBoth (Sample * this ) {
  Sample_m_PrintAttrA(this );
  Sample_m_PrintAttrB(this );
}
