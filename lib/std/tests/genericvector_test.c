#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "./../Vector/cicili_borrowablevector.h"
void BorrowableVector_m_borrow_int (BorrowableVector * this , size_t index , void (*borrower) (size_t index , const int * value )) {
  borrower (index , ((const int *)(&(this ->arr )[index ])));
}
void BorrowableVector_m_iterBorrow_int (BorrowableVector * this , void (*borrower) (size_t index , const int * value )) {
  { /* cicili#Let191 */
    const typeof((this ->arr )[0]) * item  = (this ->arr );
    for (int index  = 0; (index  <  (this ->len ) ); (++item ), (++index )) {
      borrower (index , ((const int *)item ));
    } 
  }
}
void BorrowableVector_m_borrowMut_int (BorrowableVector * this , size_t index , void (*borrower) (size_t index , int * value )) {
  borrower (index , ((int *)(&(this ->arr )[index ])));
}
void BorrowableVector_m_iterBorrowMut_int (BorrowableVector * this , void (*borrower) (size_t index , int * value )) {
  { /* cicili#Let201 */
    typeof((this ->arr )[0]) * item  = (this ->arr );
    for (int index  = 0; (index  <  (this ->len ) ); (++item ), (++index )) {
      borrower (index , ((int *)item ));
    } 
  }
}

static void __ciciliL_210 (int *** arr ) {
  free (((void *)(*arr )));
}
static void __ciciliL_212 (BorrowableVector ** vector ) {
  BorrowableVector_m_free((*vector ));
}
static void __ciciliL_216 (size_t index , int * value ) {
  (*value ) = 3;
}
static void __ciciliL_219 (size_t index , const int * value ) {
  fprintf (stdout , "the borrowed index: %lu, the borrowed value: %d\n", index , (*value ));
}
static void __ciciliL_224 (size_t index , int * value ) {
  (*value ) = 12;
}
static void __ciciliL_227 (size_t index , const int * value ) {
  fprintf (stdout , "the borrowed index: %lu, the borrowed value: %d\n", index , (*value ));
}
int main () {
  { /* cicili#Let209 */
    int ** arr  __attribute__((__cleanup__(__ciciliL_210 ))) = ((int **)calloc (6, sizeof(int)));
    BorrowableVector * vector  __attribute__((__cleanup__(__ciciliL_212 ))) = BorrowableVector_s_newFromArray(((void **)arr ), 6);
    BorrowableVector_m_iterBorrowMut_int(vector , __ciciliL_216 );
    BorrowableVector_m_iterBorrow_int(vector , __ciciliL_219 );
    BorrowableVector_m_borrowMut_int(vector , 2, __ciciliL_224 );
    BorrowableVector_m_borrow_int(vector , 2, __ciciliL_227 );
  }
}

