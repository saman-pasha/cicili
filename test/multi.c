#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct MultiReturn_t {
  int a ;
  int b ;
} MultiReturn_t;
struct __ciciliS_aMultiReturnFunc_ {
  int a ;
  int b ;
};
static struct __ciciliS_aMultiReturnFunc_ aMultiReturnFunc (int x , int y ) {
    return ((struct __ciciliS_aMultiReturnFunc_){ x , y });
}
struct __ciciliS_aMultiReturnFuncPtr_ {
  int a ;
  int b ;
};
static struct __ciciliS_aMultiReturnFuncPtr_ aMultiReturnFuncPtr (int x , int y ) {
    { /* cicili#Let102 */
        typeof(aMultiReturnFuncPtr (x , y )) output  = { x , y };
        // ----------
        return ((struct __ciciliS_aMultiReturnFuncPtr_)output );
    }
}
MultiReturn_t aMultiReturnFuncKV (int x , int y ) {
    return ((MultiReturn_t){ .a = x , .b = y });
}
struct __ciciliS_aMultiReturnFuncS_ {
  int a ;
  int b ;
};
static struct __ciciliS_aMultiReturnFuncS_ aMultiReturnFuncS (int x , int y ) {
    { /* cicili#Let106 */
        typeof(aMultiReturnFuncS (x , y )) s  = { x , y };
        // ----------
        return ((struct __ciciliS_aMultiReturnFuncS_)s );
    }
}
int main () {
    { /* cicili#Let109 */
        int n  = 3;
        int t  = 4;
        MultiReturn_t mrt ;
        typeof(aMultiReturnFunc (1, 1)) mr ;
        typeof(aMultiReturnFuncPtr (1, 1)) mrtPtr ;
        // ----------
        mr  = aMultiReturnFunc (n , t );
        printf ("a: %d, b: %d\n", (mr . a ), (mr . b ));
        mrt  = aMultiReturnFuncKV ((++n ), (++t ));
        printf ("a: %d, b: %d\n", (mrt . a ), (mrt . b ));
        mrtPtr  = aMultiReturnFuncPtr ((++n ), (++t ));
        printf ("a: %d, b: %d\n", (mrtPtr . a ), (mrtPtr . b ));
    }
}
