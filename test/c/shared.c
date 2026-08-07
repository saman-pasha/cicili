#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "shared.h"
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block109 */
      printf ("ok   %-32s %lld\n", what , got );
      return 0;
    }
  else
    { /* block112 */
      printf ("FAIL %-32s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
Parcel parcel_make (int id , Weight w ) {
  return ((Parcel){ id , w });
}
Weight parcel_total (const Parcel * ps , int n ) {
  { /* let116 */
    Weight total  = 0;
    // ----------
    for (int i  = 0; (i  <  n  ); (++i )) {
        total  += (ps [i ]. weight) ;
    }
    return total ;
  }
  return 0;
}
struct __ciciliS_parcel_split_ parcel_split (Weight w ) {
  return ((struct __ciciliS_parcel_split_){ (w  /  2 ), (w  -  (w  /  2 ) )});
}
int main () {
  { /* let124 */
    int bad  = 0;
    // ----------
    bad  += check ("typedef from header", sizeof(Weight), 4) ;
    bad  += check ("enum from header LOW", LOW , 1) ;
    bad  += check ("enum from header MID", MID , 2) ;
    bad  += check ("enum from header HIGH", HIGH , 3) ;
    { /* let126 */
      Parcel p  = parcel_make (7, 250);
      // ----------
      bad  += check ("header struct id", (p . id), 7) ;
      bad  += check ("header struct weight", (p . weight), 250) ;
    }
    { /* let128 */
      Parcel ps [] = { { 1, 100}, { 2, 200}, { 3, 300}};
      // ----------
      bad  += check ("function across header", parcel_total (ps , 3), 600) ;
    }
    { /* let130 */
      typeof(parcel_split (1)) s ;
      // ----------
      s  = parcel_split (101);
      bad  += check ("multi return half", (s . half), 50) ;
      bad  += check ("multi return rest", (s . rest), 51) ;
    }
    if (bad  ==  0 )
      printf ("shared: all ok\n");
    else
      printf ("shared: %d FAILED\n", bad );
    return bad ;
  }
}
