#include "mymath.h"
int obj3_does (int x , int y ) {
    return obj1_does (obj2_does (x , y ), obj2_does (x , y ));
}
