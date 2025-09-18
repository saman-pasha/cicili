#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct Int {
  bool isFun ;
  union { /* ciciliUnion104 */
    int val ;
    int (*fun) ();
  };
} Int;
int Int_m_next (Int * this ) {
    return (((this -> isFun )) ? (this -> fun )() : (this -> val ));
}
int Int_s_to_int (Int self ) {
    return (((self . isFun )) ? (self . fun )() : (self . val ));
}
int Int_m_add (Int * this , Int rhs ) {
    return (Int_m_next(this ) +  Int_m_next(&rhs) );
}
int Int_m_sub (Int * this , Int rhs ) {
    return (Int_m_next(this ) -  Int_m_next(&rhs) );
}
int Int_m_mul (Int * this , Int rhs ) {
    return (Int_m_next(this ) *  Int_m_next(&rhs) );
}
int Int_m_div (Int * this , Int rhs ) {
    return (Int_m_next(this ) /  Int_m_next(&rhs) );
}
int Int_m_quot (Int * this , Int rhs ) {
    { /* cicili#Let115 */
        int rval  = Int_m_next(&rhs);
        // ----------
        return ((Int_m_next(this ) +  (rval  -  1 ) ) /  rval  );
    }
}
typedef struct add3_int {
  int arg_0 ;
  int arg_1 ;
} add3_int;
add3_int * add3_int_s_call_0 (int fst ) {
    { /* cicili#Let123 */
        add3_int * this  = malloc (sizeof(add3_int ));
        // ----------
        (this -> arg_0 ) = fst ;
        return this ;
    }
}
add3_int * add3_int_m_call_1 (add3_int * this , int snd ) {
    (this -> arg_1 ) = snd ;
    return this ;
}
int add3_int_m_call (add3_int * this , int trd ) {
    fprintf (stdout , "add3: %d + %d + %d = %d\n", (this -> arg_0 ), (this -> arg_1 ), trd , ((this -> arg_0 ) +  (this -> arg_1 ) +  trd  ));
    return ((this -> arg_0 ) +  (this -> arg_1 ) +  trd  );
}
int main () {
    fprintf (stdout , "output of haskelus function: %d\n", add3_int_m_call(add3_int_m_call_1(add3_int_s_call_0(2), 3), 4));
    fprintf (stdout , "output of lambda calculus: %d & %d\n", (2 +  3 ), (2 +  3 ));
    fprintf (stdout , "output of lambda calculus: %d\n", (2 +  3 +  4 ));
    fprintf (stdout , "output of lambda closure: %d\n", (2 +  3 ));
    fprintf (stdout , "output of lambda closure: %d\n", (2 +  3 +  4 ));
    fprintf (stdout , "output of function closure: %d\n", (2 +  3 ));
    fprintf (stdout , "output of function closure: %d\n", (2 +  3 +  4 ));
    fprintf (stdout , "output of let-in: %d\n", (2 *  3 ));
    fprintf (stdout , "output of let-in closure: %d\n", (2 *  3 ));
}
