#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "math.h"
typedef struct IntT {
  bool isFun ;
  union { /* ciciliUnion105 */
    int val ;
    int (*fun) ();
  };
} IntT;
int IntT_m_next (IntT * this ) {
    return (((this -> isFun )) ? (this -> fun )() : (this -> val ));
}
int IntT_s_to_int (IntT self ) {
    return (((self . isFun )) ? (self . fun )() : (self . val ));
}
int IntT_m_add (IntT * this , IntT rhs ) {
    return (IntT_m_next(this ) +  IntT_m_next(&rhs) );
}
int IntT_m_sub (IntT * this , IntT rhs ) {
    return (IntT_m_next(this ) -  IntT_m_next(&rhs) );
}
int IntT_m_mul (IntT * this , IntT rhs ) {
    return (IntT_m_next(this ) *  IntT_m_next(&rhs) );
}
int IntT_m_div (IntT * this , IntT rhs ) {
    return (IntT_m_next(this ) /  IntT_m_next(&rhs) );
}
int IntT_m_quot (IntT * this , IntT rhs ) {
    { /* cicili#Let116 */
        int rval  = IntT_m_next(&rhs);
        // ----------
        return ((IntT_m_next(this ) +  (rval  -  1 ) ) /  rval  );
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
int power_irreducible_int (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
typedef enum __h_Bool_ctor_t {
  __h_False_t,
  __h_True_t
} __h_Bool_ctor_t;
typedef struct Bool {
  __h_Bool_ctor_t __h_ctor ;
  union { /* ciciliUnion149 */
    struct { /* ciciliStruct150 */
    } False ;
    struct { /* ciciliStruct151 */
    } True ;
  } __h_data ;
} Bool;
Bool False () {
    return ((Bool){ __h_False_t });
}
Bool True () {
    return ((Bool){ __h_True_t });
}
typedef enum __h_Integer_ctor_t {
  __h_Byte_t,
  __h_Short_t,
  __h_Int_t
} __h_Integer_ctor_t;
typedef struct Integer {
  __h_Integer_ctor_t __h_ctor ;
  union { /* ciciliUnion156 */
    struct { /* ciciliStruct157 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct158 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct159 */
      int __h_0_mem ;
    } Int ;
  } __h_data ;
} Integer;
Integer Byte (char c ) {
    return ((Integer){ __h_Byte_t , .__h_data.Byte = { c }});
}
Integer Short (short s ) {
    return ((Integer){ __h_Short_t , .__h_data.Short = { s }});
}
Integer Int (int x ) {
    return ((Integer){ __h_Int_t , .__h_data.Int = { x }});
}
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t,
  __h_Just_t
} __h_Maybe_ctor_t;
typedef struct Maybe {
  __h_Maybe_ctor_t __h_ctor ;
  union { /* ciciliUnion168 */
    struct { /* ciciliStruct169 */
    } Nothing ;
    struct { /* ciciliStruct170 */
      int __h_0_mem ;
    } Just ;
  } __h_data ;
} Maybe;
Maybe Nothing () {
    return ((Maybe){ __h_Nothing_t });
}
Maybe Just (int value ) {
    return ((Maybe){ __h_Just_t , .__h_data.Just = { value }});
}
static int __ciciliL_272 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_280 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
int main () {
    fprintf (stdout , "output of haskelus function: %d\n", add3_int_m_call(add3_int_m_call_1(add3_int_s_call_0(2), 3), 4));
    fprintf (stdout , "output of lambda calculus: %d & %d\n", (2 +  3 ), (2 +  3 ));
    fprintf (stdout , "output of lambda calculus: %d\n", (2 +  3 +  4 ));
    fprintf (stdout , "output of lambda closure: %d\n", (2 +  3 ));
    fprintf (stdout , "output of lambda closure: %d\n", (2 +  3 +  4 ));
    fprintf (stdout , "output of function closure: %d\n", (2 +  3 ));
    fprintf (stdout , "output of function closure: %d\n", (2 +  3 +  4 ));
    fprintf (stdout , "output of inline where: %d\n", (2 *  3 ));
    fprintf (stdout , "output of where/letin and closure: %d\n", (2 *  3 ));
    fprintf (stdout , "output of function using where: %d\n", (2 *  3 ));
    fprintf (stdout , "output of function application: %d\n", (3 *  4 ));
    fprintf (stdout , "output of function application: %d\n", (3 *  (2 +  2 ) ));
    fprintf (stdout , "output of function application: %d\n", (3 *  (2 +  (2 *  5 ) ) ));
    fprintf (stdout , "output of reducible function: %d\n", power_irreducible_int (2, 16));
    fprintf (stdout , "output of reducible function: %d\n", ((int)pow (((double)2), ((double)16))));
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_272 (2, 16));
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_280 (2, 16));
}
