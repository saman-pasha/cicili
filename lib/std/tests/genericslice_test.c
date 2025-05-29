#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_borrowableslice.h"
void BorrowableSlice_m_borrow_int (BorrowableSlice * this , size_t index , void (*borrower) (size_t index , const int * value )) {
  borrower (index , ((const int *)(&(this ->arr )[index ])));
}
void BorrowableSlice_m_iterBorrow_int (BorrowableSlice * this , void (*borrower) (size_t index , const int * value )) {
  { /* cicili#Let109 */
    const typeof((this ->arr )[0]) * item  = (this ->arr );
    for (int index  = 0; (index  <  (this ->len ) ); (++item ), (++index )) {
      borrower (index , ((const int *)item ));
    } 
  }
}
void BorrowableSlice_m_borrowMut_int (BorrowableSlice * this , size_t index , void (*borrower) (size_t index , int * value )) {
  borrower (index , ((int *)(&(this ->arr )[index ])));
}
void BorrowableSlice_m_iterBorrowMut_int (BorrowableSlice * this , void (*borrower) (size_t index , int * value )) {
  { /* cicili#Let119 */
    typeof((this ->arr )[0]) * item  = (this ->arr );
    for (int index  = 0; (index  <  (this ->len ) ); (++item ), (++index )) {
      borrower (index , ((int *)item ));
    } 
  }
}

static void __ciciliL_128 (int *** arr ) {
  free (((void *)(*arr )));
}
static void __ciciliL_130 (BorrowableSlice ** slice ) {
  BorrowableSlice_m_free((*slice ));
}
static void __ciciliL_134 (size_t index , const int * value ) {
  fprintf (stdout , "the borrowed index: %lu, the borrowed value: %d\n", index , (*value ));
}
static void __ciciliL_139 (size_t index , int * value ) {
  (*value ) = 3;
}
static void __ciciliL_142 (size_t index , const int * value ) {
  fprintf (stdout , "the borrowed index: %lu, the borrowed value: %d\n", index , (*value ));
}
static void __ciciliL_147 (size_t index , int * value ) {
  (*value ) = 12;
}
static void __ciciliL_150 (size_t index , const int * value ) {
  fprintf (stdout , "the borrowed index: %lu, the borrowed value: %d\n", index , (*value ));
}
int main () {
  { /* cicili#Let127 */
    int ** arr  __attribute__((__cleanup__(__ciciliL_128 ))) = ((int **)calloc (6, sizeof(int *)));
    BorrowableSlice * slice  __attribute__((__cleanup__(__ciciliL_130 ))) = BorrowableSlice_s_newFromArray(((void **)arr ), 6);
    BorrowableSlice_m_iterBorrow_int(slice , __ciciliL_134 );
    BorrowableSlice_m_iterBorrowMut_int(slice , __ciciliL_139 );
    BorrowableSlice_m_iterBorrow_int(slice , __ciciliL_142 );
    BorrowableSlice_m_borrowMut_int(slice , 2, __ciciliL_147 );
    BorrowableSlice_m_borrow_int(slice , 2, __ciciliL_150 );
  }
}

