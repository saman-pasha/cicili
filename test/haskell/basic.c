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
void Integer_s_show (Integer self ) {
    if ((self . __h_ctor ) ==  __h_Byte_t  ) {
        fprintf (stdout , "Integer is Byte: %d\n", (((self . __h_data ). Byte ). __h_0_mem ));
    }
    else if ((self . __h_ctor ) ==  __h_Short_t  ) {
        fprintf (stdout , "Integer is Short: %d\n", (((self . __h_data ). Short ). __h_0_mem ));
    }
    else if (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((((self . __h_data ). Int ). __h_0_mem ) <  1000 ) ) {
        fprintf (stdout , "Integer is Int below 1000: %d\n", (((self . __h_data ). Int ). __h_0_mem ));
    }
    else if (((self . __h_ctor ) ==  __h_Int_t  ) &&  (((((self . __h_data ). Int ). __h_0_mem ) >=  1000 ) &&  ((((self . __h_data ). Int ). __h_0_mem ) <  10000 ) ) ) {
        fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", (((self . __h_data ). Int ). __h_0_mem ));
    }
    else if (true  ==  true  ) {
        fprintf (stdout , "Integer is N/A\n");
    }
}
void Integer_m_show (Integer * this ) {
    Integer_s_show((*this ));
}
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t,
  __h_Just_t
} __h_Maybe_ctor_t;
typedef struct Maybe {
  __h_Maybe_ctor_t __h_ctor ;
  union { /* ciciliUnion209 */
    struct { /* ciciliStruct210 */
    } Nothing ;
    struct { /* ciciliStruct211 */
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
typedef enum __h_TupleT_ctor_t {
  __h_Tuple_t
} __h_TupleT_ctor_t;
typedef struct TupleT {
  __h_TupleT_ctor_t __h_ctor ;
  union { /* ciciliUnion216 */
    struct { /* ciciliStruct217 */
      int __h_0_mem ;
      char __h_1_mem ;
    } Tuple ;
  } __h_data ;
} TupleT;
TupleT __h_Tuple_ctor (int x , char c ) {
    return ((TupleT){ __h_Tuple_t , .__h_data.Tuple = { x , c }});
}
struct __ciciliS_222 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
typedef struct __ciciliS_222 aTuple ;
void print_tuple (aTuple tup ) {
    if ((tup . __h_2_mem ) >  10 ) {
        fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", (tup . __h_0_mem ), (tup . __h_1_mem ), (tup . __h_2_mem ));
    }
    else if (true  ==  true  ) {
        fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", (tup . __h_0_mem ), (tup . __h_1_mem ), (tup . __h_2_mem ));
    }
}
static int __ciciliL_350 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_358 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
struct __ciciliS_363 {
  int dd ;
};
struct __ciciliS_365 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
struct __ciciliS_367 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
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
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_350 (2, 16));
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_358 (2, 16));
    Integer_s_show(Byte (10));
    Integer_s_show(Short (20));
    Integer_s_show(Int (30));
    Integer_s_show(Int (2000));
    Integer_s_show(Int (20000));
    { /* cicili#Let360 */
        __auto_type integer  = Int (3000);
        __auto_type tuple  = __h_Tuple_ctor (12, 'S');
        struct __ciciliS_363 ss  = { 2};
        aTuple tup0  = { 4400, 'A', 33};
        struct __ciciliS_365 tup1  = { 4401, 'B', 34};
        __auto_type tup2  = ((struct __ciciliS_367 ){ 4402, 'C', 35});
        // ----------
        Integer_m_show(&integer);
        if ((tuple . __h_ctor ) ==  __h_Tuple_t  ) {
            fprintf (stdout , "Tuple: int, char = (%d, %c)\n", (((tuple . __h_data ). Tuple ). __h_0_mem ), (((tuple . __h_data ). Tuple ). __h_1_mem ));
        }
        print_tuple (tup0 );
        print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
        if ((tup2 . __h_2_mem ) >  10 ) {
            fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", (tup2 . __h_0_mem ), (tup2 . __h_1_mem ), (tup2 . __h_2_mem ));
        }
        else if (true  ==  true  ) {
            fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", (tup2 . __h_0_mem ), (tup2 . __h_1_mem ), (tup2 . __h_2_mem ));
        }
    }
}
