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
    { /* cicili#Let124 */
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
  union { /* ciciliUnion153 */
    struct { /* ciciliStruct154 */
    } False ;
    struct { /* ciciliStruct155 */
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
  union { /* ciciliUnion160 */
    struct { /* ciciliStruct161 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct162 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct163 */
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
    { /* cicili#Let170 */
        __auto_type __h_match169_0_arg  = (((self . __h_data ). Byte ). __h_0_mem );
        // ----------
        if ((self . __h_ctor ) ==  __h_Byte_t  )
            fprintf (stdout , "Integer is Byte: %d\n", __h_match169_0_arg );
        else
            { /* cicili#Let181 */
                __auto_type __h_match180_0_arg  = (((self . __h_data ). Short ). __h_0_mem );
                // ----------
                if ((self . __h_ctor ) ==  __h_Short_t  )
                    fprintf (stdout , "Integer is Short: %d\n", __h_match180_0_arg );
                else
                    { /* cicili#Let192 */
                        __auto_type __h_match191_0_arg  = (((self . __h_data ). Int ). __h_0_mem );
                        // ----------
                        if (((self . __h_ctor ) ==  __h_Int_t  ) &&  (__h_match191_0_arg  <  1000 ) )
                            fprintf (stdout , "Integer is Int below 1000: %d\n", __h_match191_0_arg );
                        else
                            { /* cicili#Let203 */
                                __auto_type __h_match202_0_arg  = (((self . __h_data ). Int ). __h_0_mem );
                                // ----------
                                if (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((__h_match202_0_arg  >=  1000 ) &&  (__h_match202_0_arg  <  10000 ) ) )
                                    fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", __h_match202_0_arg );
                                else
                                    { /* cicili#Let214 */
                                        // ----------
                                        fprintf (stdout , "Integer is N/A\n");
                                    }

                            }

                    }

            }

    }
}
void Integer_m_show (Integer * this ) {
    Integer_s_show((*this ));
}
typedef enum __h_Maybe_char_ctor_t {
  __h_Nothing_char_t,
  __h_Just_char_t
} __h_Maybe_char_ctor_t;
typedef struct Maybe_char {
  __h_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion223 */
    struct { /* ciciliStruct224 */
    } Nothing_char ;
    struct { /* ciciliStruct225 */
      char __h_0_mem ;
    } Just_char ;
  } __h_data ;
} Maybe_char;
Maybe_char Nothing_char () {
    return ((Maybe_char){ __h_Nothing_char_t });
}
Maybe_char Just_char (char value ) {
    return ((Maybe_char){ __h_Just_char_t , .__h_data.Just_char = { value }});
}
typedef enum __h_Maybe_Maybe_char_ctor_t {
  __h_Nothing_Maybe_char_t,
  __h_Just_Maybe_char_t
} __h_Maybe_Maybe_char_ctor_t;
typedef struct Maybe_Maybe_char {
  __h_Maybe_Maybe_char_ctor_t __h_ctor ;
  union { /* ciciliUnion233 */
    struct { /* ciciliStruct234 */
    } Nothing_Maybe_char ;
    struct { /* ciciliStruct235 */
      Maybe_char __h_0_mem ;
    } Just_Maybe_char ;
  } __h_data ;
} Maybe_Maybe_char;
Maybe_Maybe_char Nothing_Maybe_char () {
    return ((Maybe_Maybe_char){ __h_Nothing_Maybe_char_t });
}
Maybe_Maybe_char Just_Maybe_char (Maybe_char value ) {
    return ((Maybe_Maybe_char){ __h_Just_Maybe_char_t , .__h_data.Just_Maybe_char = { value }});
}
void print_inside_maybe (Maybe_Maybe_char mb ) {
    { /* cicili#Let242 */
        // ----------
        if ((mb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  )
            fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
        else
            { /* cicili#Let250 */
                __auto_type __h_match249_0_arg  = (((mb . __h_data ). Just_Maybe_char ). __h_0_mem );
                // ----------
                if ((mb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
                    { /* cicili#Let259 */
                        // ----------
                        if ((__h_match249_0_arg . __h_ctor ) ==  __h_Nothing_char_t  )
                            fprintf (stdout , "wrapper Nothing char: Nothing\n");
                        else
                            { /* cicili#Let267 */
                                __auto_type __h_match266_0_arg  = (((__h_match249_0_arg . __h_data ). Just_char ). __h_0_mem );
                                // ----------
                                if ((__h_match249_0_arg . __h_ctor ) ==  __h_Just_char_t  )
                                    fprintf (stdout , "wrapper Just Maybe char: Just %c\n", __h_match266_0_arg );

                            }

                    }

            }

    }
}
typedef enum __h_TupleT_ctor_t {
  __h_Tuple_t
} __h_TupleT_ctor_t;
typedef struct TupleT {
  __h_TupleT_ctor_t __h_ctor ;
  union { /* ciciliUnion278 */
    struct { /* ciciliStruct279 */
      int __h_0_mem ;
      char __h_1_mem ;
    } Tuple ;
  } __h_data ;
} TupleT;
TupleT __h_Tuple_ctor (int x , char c ) {
    return ((TupleT){ __h_Tuple_t , .__h_data.Tuple = { x , c }});
}
struct __ciciliS_284 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
typedef struct __ciciliS_284 aTuple ;
void print_tuple (aTuple tup ) {
    { /* cicili#Let288 */
        __auto_type __h_match287_2_arg  = (tup . __h_2_mem );
        __auto_type __h_match287_1_arg  = (tup . __h_1_mem );
        __auto_type __h_match287_0_arg  = (tup . __h_0_mem );
        // ----------
        if (__h_match287_2_arg  >  10 )
            fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", __h_match287_0_arg , __h_match287_1_arg , __h_match287_2_arg );
        else
            { /* cicili#Let301 */
                __auto_type __h_match300_2_arg  = (tup . __h_2_mem );
                __auto_type __h_match300_1_arg  = (tup . __h_1_mem );
                __auto_type __h_match300_0_arg  = (tup . __h_0_mem );
                // ----------
                if (true  ==  true  )
                    fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", __h_match300_0_arg , __h_match300_1_arg , __h_match300_2_arg );

            }

    }
}
static int __ciciliL_410 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_418 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
struct __ciciliS_425 {
  int dd ;
};
struct __ciciliS_427 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
struct __ciciliS_429 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
struct __ciciliS_431 {
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
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_410 (2, 16));
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_418 (2, 16));
    Integer_s_show(Byte (10));
    Integer_s_show(Short (20));
    Integer_s_show(Int (30));
    Integer_s_show(Int (2000));
    Integer_s_show(Int (20000));
    { /* cicili#Let420 */
        __auto_type integer  = Int (3000);
        __auto_type tuple  = __h_Tuple_ctor (12, 'S');
        struct __ciciliS_425 ss  = { 2};
        aTuple tup0  = { 4400, 'A', 33};
        struct __ciciliS_427 tup1  = { 4401, 'B', 34};
        __auto_type tup2  = ((struct __ciciliS_431 ){ 4402, 'C', 35});
        // ----------
        Integer_m_show(&integer);
        { /* cicili#Let435 */
            __auto_type __h_match434_1_arg  = (((tuple . __h_data ). Tuple ). __h_1_mem );
            __auto_type __h_match434_0_arg  = (((tuple . __h_data ). Tuple ). __h_0_mem );
            // ----------
            if ((tuple . __h_ctor ) ==  __h_Tuple_t  )
                fprintf (stdout , "Tuple: int, char = (%d, %c)\n", __h_match434_0_arg , __h_match434_1_arg );

        }
        print_tuple (tup0 );
        print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
        { /* cicili#Let450 */
            __auto_type __h_match449_2_arg  = (tup2 . __h_2_mem );
            __auto_type __h_match449_1_arg  = (tup2 . __h_1_mem );
            __auto_type __h_match449_0_arg  = (tup2 . __h_0_mem );
            // ----------
            if (__h_match449_2_arg  >  10 )
                fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", __h_match449_0_arg , __h_match449_1_arg , __h_match449_2_arg );
            else
                { /* cicili#Let463 */
                    __auto_type __h_match462_2_arg  = (tup2 . __h_2_mem );
                    __auto_type __h_match462_1_arg  = (tup2 . __h_1_mem );
                    __auto_type __h_match462_0_arg  = (tup2 . __h_0_mem );
                    // ----------
                    if (true  ==  true  )
                        fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", __h_match462_0_arg , __h_match462_1_arg , __h_match462_2_arg );

                }

        }
    }
    { /* cicili#Let473 */
        __auto_type m1  = Nothing_Maybe_char ();
        __auto_type m2  = Just_Maybe_char (Nothing_char ());
        __auto_type m3  = Just_Maybe_char (Just_char ('H'));
        // ----------
        print_inside_maybe (m1 );
        print_inside_maybe (m2 );
        print_inside_maybe (m3 );
    }
}
