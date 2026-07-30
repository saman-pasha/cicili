#ifndef __TEST_C_SHARED_H__
#define __TEST_C_SHARED_H__
typedef int Weight ;
typedef enum Level {
  LOW = 1,
  MID,
  HIGH
} Level;
typedef struct Parcel {
  int id ;
  Weight weight ;
} Parcel;
Parcel parcel_make (int id , Weight w );
Weight parcel_total (const Parcel * ps , int n );
typedef struct __ciciliS_parcel_split_ {
  Weight half ;
  Weight rest ;
} __ciciliS_parcel_split_;
struct __ciciliS_parcel_split_ parcel_split (Weight w );
#endif /* __TEST_C_SHARED_H__ */ 
