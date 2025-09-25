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
  union { /* ciciliUnion152 */
    struct { /* ciciliStruct153 */
    } False ;
    struct { /* ciciliStruct154 */
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
  union { /* ciciliUnion159 */
    struct { /* ciciliStruct160 */
      char __h_0_mem ;
    } Byte ;
    struct { /* ciciliStruct161 */
      short __h_0_mem ;
    } Short ;
    struct { /* ciciliStruct162 */
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
    { /* cicili#Let169 */
        const __auto_type c  = (((self . __h_data ). Byte ). __h_0_mem );
        // ----------
        if ((self . __h_ctor ) ==  __h_Byte_t  )
            fprintf (stdout , "Integer is Byte: %d\n", c );
        else
            { /* cicili#Let177 */
                const __auto_type sh  = (((self . __h_data ). Short ). __h_0_mem );
                // ----------
                if ((self . __h_ctor ) ==  __h_Short_t  )
                    fprintf (stdout , "Integer is Short: %d\n", sh );
                else
                    { /* cicili#Let185 */
                        const __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                        // ----------
                        if (((self . __h_ctor ) ==  __h_Int_t  ) &&  (i  <  1000 ) )
                            fprintf (stdout , "Integer is Int below 1000: %d\n", i );
                        else
                            { /* cicili#Let193 */
                                const __auto_type i  = (((self . __h_data ). Int ). __h_0_mem );
                                // ----------
                                if (((self . __h_ctor ) ==  __h_Int_t  ) &&  ((i  >=  1000 ) &&  (i  <  10000 ) ) )
                                    fprintf (stdout , "Integer is Int between 1000 and 10000: %d\n", i );
                                else
                                    { /* cicili#Let201 */
                                        // ----------
                                        if (true  ==  true  )
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
  union { /* ciciliUnion212 */
    struct { /* ciciliStruct213 */
    } Nothing_char ;
    struct { /* ciciliStruct214 */
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
  union { /* ciciliUnion222 */
    struct { /* ciciliStruct223 */
    } Nothing_Maybe_char ;
    struct { /* ciciliStruct224 */
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
    { /* cicili#Let231 */
        // ----------
        if ((mb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  )
            fprintf (stdout , "wrapper Nothing Maybe char: Nothing\n");
        else
            { /* cicili#Let239 */
                const __auto_type mc  = (((mb . __h_data ). Just_Maybe_char ). __h_0_mem );
                // ----------
                if ((mb . __h_ctor ) ==  __h_Just_Maybe_char_t  )
                    { /* cicili#Let245 */
                        // ----------
                        if ((mc . __h_ctor ) ==  __h_Nothing_char_t  )
                            fprintf (stdout , "wrapper Just Nothing char: Nothing\n");
                        else
                            { /* cicili#Let253 */
                                const __auto_type c  = (((mc . __h_data ). Just_char ). __h_0_mem );
                                // ----------
                                if ((mc . __h_ctor ) ==  __h_Just_char_t  )
                                    fprintf (stdout , "wrapper Just Just char: Just %c\n", c );

                            }

                    }

            }

    }
}
void print_inner_maybe (Maybe_Maybe_char imb ) {
    { /* cicili#Let262 */
        // ----------
        if ((imb . __h_ctor ) ==  __h_Nothing_Maybe_char_t  )
            fprintf (stdout , "inner Nothing Maybe char: Nothing\n");
        else
            { /* cicili#Let271 */
                const __auto_type __h_match269_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
                // ----------
                if (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match269_0_arg . __h_ctor ) ==  __h_Nothing_char_t  ) )
                    fprintf (stdout , "inner Just Nothing char: Nothing\n");
                else
                    { /* cicili#Let280 */
                        const __auto_type __h_match278_0_arg  = (((imb . __h_data ). Just_Maybe_char ). __h_0_mem );
                        const __auto_type c  = (((__h_match278_0_arg . __h_data ). Just_char ). __h_0_mem );
                        // ----------
                        if (((imb . __h_ctor ) ==  __h_Just_Maybe_char_t  ) &&  ((__h_match278_0_arg . __h_ctor ) ==  __h_Just_char_t  ) )
                            fprintf (stdout , "inner Just Just char: Just %c\n", c );

                    }

            }

    }
}
typedef enum __h_TupleT_ctor_t {
  __h_Tuple_t
} __h_TupleT_ctor_t;
typedef struct TupleT {
  __h_TupleT_ctor_t __h_ctor ;
  union { /* ciciliUnion288 */
    struct { /* ciciliStruct289 */
      int __h_0_mem ;
      char __h_1_mem ;
    } Tuple ;
  } __h_data ;
} TupleT;
TupleT __h_Tuple_ctor (int x , char c ) {
    return ((TupleT){ __h_Tuple_t , .__h_data.Tuple = { x , c }});
}
struct __ciciliS_294 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
typedef struct __ciciliS_294 aTuple ;
void print_tuple (aTuple tup ) {
    { /* cicili#Let298 */
        const __auto_type i  = (tup . __h_0_mem );
        const __auto_type c  = (tup . __h_1_mem );
        const __auto_type s  = (tup . __h_2_mem );
        // ----------
        if (s  >  10 )
            fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
        else
            { /* cicili#Let306 */
                const __auto_type i  = (tup . __h_0_mem );
                const __auto_type c  = (tup . __h_1_mem );
                const __auto_type s  = (tup . __h_2_mem );
                // ----------
                if (true  ==  true  )
                    fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s );

            }

    }
}
typedef enum __h_Maybe_aTuple_ctor_t {
  __h_Nothing_aTuple_t,
  __h_Just_aTuple_t
} __h_Maybe_aTuple_ctor_t;
typedef struct Maybe_aTuple {
  __h_Maybe_aTuple_ctor_t __h_ctor ;
  union { /* ciciliUnion315 */
    struct { /* ciciliStruct316 */
    } Nothing_aTuple ;
    struct { /* ciciliStruct317 */
      aTuple __h_0_mem ;
    } Just_aTuple ;
  } __h_data ;
} Maybe_aTuple;
Maybe_aTuple Nothing_aTuple () {
    return ((Maybe_aTuple){ __h_Nothing_aTuple_t });
}
Maybe_aTuple Just_aTuple (aTuple value ) {
    return ((Maybe_aTuple){ __h_Just_aTuple_t , .__h_data.Just_aTuple = { value }});
}
static int __ciciliL_419 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
static int __ciciliL_427 (int x , int y ) {
    return ((int)pow (((double)x ), ((double)y )));
}
struct __ciciliS_432 {
  int dd ;
};
struct __ciciliS_434 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
struct __ciciliS_436 {
  int __h_0_mem ;
  char __h_1_mem ;
  short __h_2_mem ;
};
struct __ciciliS_506 {
  int __h_0_mem ;
  Maybe_char __h_1_mem ;
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
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_419 (2, 16));
    fprintf (stdout , "output of reducible function: %d\n", __ciciliL_427 (2, 16));
    Integer_s_show(Byte (10));
    Integer_s_show(Short (20));
    Integer_s_show(Int (30));
    Integer_s_show(Int (2000));
    Integer_s_show(Int (20000));
    { /* cicili#Let429 */
        __auto_type integer  = Int (3000);
        __auto_type tuple  = __h_Tuple_ctor (12, 'S');
        struct __ciciliS_432 ss  = { 2};
        aTuple tup0  = { 4400, 'A', 33};
        struct __ciciliS_434 tup1  = { 4401, 'B', 34};
        __auto_type tup2  = ((struct __ciciliS_436 ){ 4402, 'C', 35});
        // ----------
        Integer_m_show(&integer);
        { /* cicili#Let440 */
            const __auto_type i  = (((tuple . __h_data ). Tuple ). __h_0_mem );
            const __auto_type c  = (((tuple . __h_data ). Tuple ). __h_1_mem );
            // ----------
            if ((tuple . __h_ctor ) ==  __h_Tuple_t  )
                fprintf (stdout , "Tuple: int, char = (%d, %c)\n", i , c );

        }
        print_tuple (tup0 );
        print_tuple (((aTuple)(*((aTuple *)(&tup1 )))));
        { /* cicili#Let451 */
            const __auto_type i  = (tup2 . __h_0_mem );
            const __auto_type c  = (tup2 . __h_1_mem );
            const __auto_type s  = (tup2 . __h_2_mem );
            // ----------
            if (s  >  10 )
                fprintf (stdout , "tuple s > 10: int, char, short = (%d, %c, %d)\n", i , c , s );
            else
                { /* cicili#Let459 */
                    const __auto_type i  = (tup2 . __h_0_mem );
                    const __auto_type c  = (tup2 . __h_1_mem );
                    const __auto_type s  = (tup2 . __h_2_mem );
                    // ----------
                    if (true  ==  true  )
                        fprintf (stdout , "tuple: int, char, short = (%d, %c, %d)\n", i , c , s );

                }

        }
    }
    { /* cicili#Let464 */
        __auto_type m1  = Nothing_Maybe_char ();
        __auto_type m2  = Just_Maybe_char (Nothing_char ());
        __auto_type m3  = Just_Maybe_char (Just_char ('G'));
        __auto_type m4  = Just_Maybe_char (Just_char ('H'));
        // ----------
        print_inside_maybe (m1 );
        print_inside_maybe (m2 );
        print_inside_maybe (m3 );
        print_inner_maybe (m4 );
    }
    { /* cicili#Let476 */
        const __auto_type __h_data475  = Just_aTuple (((aTuple){ 55, 'D', 93}));
        // ----------
        if ((__h_data475 . __h_ctor ) ==  __h_Nothing_aTuple_t  )
            fprintf (stdout , "tuple inside maybe: Nothing");
        else
            { /* cicili#Let486 */
                const __auto_type __h_match484_0_arg  = (((__h_data475 . __h_data ). Just_aTuple ). __h_0_mem );
                const __auto_type t  = __h_match484_0_arg ;
                const __auto_type i  = (t . __h_0_mem );
                const __auto_type c  = (t . __h_1_mem );
                const __auto_type s  = (t . __h_2_mem );
                // ----------
                if (((__h_data475 . __h_ctor ) ==  __h_Just_aTuple_t  ) &&  (true  ==  true  ) )
                    { /* cicili#Let492 */
                        const __auto_type ii  = (t . __h_0_mem );
                        const __auto_type cc  = (t . __h_1_mem );
                        const __auto_type ss  = (t . __h_2_mem );
                        // ----------
                        if (true  ==  true  )
                            ({ /* cicili#Progn496 */
                                  fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", i , c , s );
                                  fprintf (stdout , "tuple inside maybe: Just tuple: int, char, short = (%d, %c, %d)\n", ii , cc , ss );
                              });

                    }

            }

    }
    { /* cicili#Let504 */
        const __auto_type __h_data502  = ((struct __ciciliS_506 ){ 5060, Just_char ('M')});
        const __auto_type __h_match501_1_arg  = (__h_data502 . __h_1_mem );
        // ----------
        if ((__h_match501_1_arg . __h_ctor ) ==  __h_Nothing_char_t  )
            fprintf (stdout , "maybe inside tuple: Nothing\n");
        else
            { /* cicili#Let517 */
                const __auto_type i  = (__h_data502 . __h_0_mem );
                const __auto_type __h_match515_1_arg  = (__h_data502 . __h_1_mem );
                const __auto_type c  = (((__h_match515_1_arg . __h_data ). Just_char ). __h_0_mem );
                // ----------
                if (((__h_match515_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  >  'L' ) )
                    fprintf (stdout , "maybe inside tuple: (c > L) int, Just char: = (%d, %c)\n", i , c );
                else
                    { /* cicili#Let526 */
                        const __auto_type t  = __h_data502 ;
                        const __auto_type __h_match524_1_arg  = (t . __h_1_mem );
                        const __auto_type c  = (((__h_match524_1_arg . __h_data ). Just_char ). __h_0_mem );
                        // ----------
                        if (((__h_match524_1_arg . __h_ctor ) ==  __h_Just_char_t  ) &&  (c  <  'L' ) )
                            { /* cicili#Let533 */
                                const __auto_type i  = (t . __h_0_mem );
                                const __auto_type __h_match531_1_arg  = (t . __h_1_mem );
                                // ----------
                                if ((__h_match531_1_arg . __h_ctor ) ==  __h_Just_char_t  )
                                    fprintf (stdout , "maybe inside tuple: (c < L) int, Just char: = (%d, %c)\n", i , c );

                            }

                    }

            }

    }
}
