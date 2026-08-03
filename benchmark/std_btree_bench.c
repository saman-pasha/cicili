#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
int N  = 1000000;
int MASK  = 1048575;
#ifndef __BTREE_H_
#define __BTREE_H_
typedef enum BTREE_ERR {
  BT_OK = 0,
  BT_DUPLICATE_KEY,
  BT_NOT_FOUND
} BTREE_ERR;
typedef struct std_btree std_btree ;
#endif /* __BTREE_H_ */ 
#ifndef __BTREE_PAIR__int_int__H_
#define __BTREE_PAIR__int_int__H_
typedef struct pair_int_int {
  int key ;
  int val ;
} pair_int_int;
#endif /* __BTREE_PAIR__int_int__H_ */ 
#ifndef __BTREE__int_int_6__H_
#define __BTREE__int_int_6__H_
#ifndef __MAYBE_H_
#define __MAYBE_H_
typedef enum MAYBE_CTOR {
  NOTHING_CTOR = 0,
  JUST_CTOR
} MAYBE_CTOR;
typedef struct NothingT {
  char _unused ;
} NothingT;
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_H_ */ 
#ifndef __MAYBE__ref_pair_int_int__H_
#define __MAYBE__ref_pair_int_int__H_
typedef struct JustT_ref_pair_int_int {
  pair_int_int * restrict value ;
} JustT_ref_pair_int_int;
typedef struct Maybe_ref_pair_int_int {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion114 */
    JustT_ref_pair_int_int just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_pair_int_int;
typedef std_maybe Maybe_ref_pair_int_int_type_t ;
Maybe_ref_pair_int_int just_ref_pair_int_int (pair_int_int * restrict value );
Maybe_ref_pair_int_int nothing_ref_pair_int_int ();
#endif /* __MAYBE__ref_pair_int_int__H_ */ 
#ifndef __EITHER_H_
#define __EITHER_H_
typedef enum EITHER_CTOR {
  LEFT_CTOR = 0,
  RIGHT_CTOR
} EITHER_CTOR;
typedef struct std_either std_either ;
#endif /* __EITHER_H_ */ 
#ifndef __EITHER_LEFT__BTREE_ERR__H_
#define __EITHER_LEFT__BTREE_ERR__H_
typedef struct LeftT_BTREE_ERR {
  BTREE_ERR error ;
} LeftT_BTREE_ERR;
#endif /* __EITHER_LEFT__BTREE_ERR__H_ */ 
#ifndef __EITHER_RIGHT__size_t__H_
#define __EITHER_RIGHT__size_t__H_
typedef struct RightT_size_t {
  size_t value ;
} RightT_size_t;
#endif /* __EITHER_RIGHT__size_t__H_ */ 
#ifndef __EITHER__BTREE_ERR_size_t__H_
#define __EITHER__BTREE_ERR_size_t__H_
typedef struct Either_BTREE_ERR_size_t {
  EITHER_CTOR ctor ;
  union { /* ciciliUnion135 */
    RightT_size_t right ;
    LeftT_BTREE_ERR left ;
  } data ;
} Either_BTREE_ERR_size_t;
typedef size_t Either_BTREE_ERR_size_t_right_t ;
typedef BTREE_ERR Either_BTREE_ERR_size_t_left_t ;
typedef std_either Either_BTREE_ERR_size_t_type_t ;
Either_BTREE_ERR_size_t right_BTREE_ERR_size_t (size_t value );
Either_BTREE_ERR_size_t left_BTREE_ERR_size_t (BTREE_ERR error );
#endif /* __EITHER__BTREE_ERR_size_t__H_ */ 
typedef struct btnode_int_int_6 btnode_int_int_6 ;
typedef struct btnode_int_int_6 {
  size_t n ;
  bool leaf ;
  pair_int_int items [((2 *  6 ) -  1 )];
  btnode_int_int_6 * kids [(2 *  6 )];
} btnode_int_int_6;
typedef struct btree_int_int_6 {
  btnode_int_int_6 * restrict root ;
  size_t len ;
} btree_int_int_6;
typedef int btree_int_int_6_key_t ;
typedef int btree_int_int_6_val_t ;
typedef pair_int_int btree_int_int_6_pair_t ;
typedef std_btree btree_int_int_6_type_t ;
void free_btree_int_int_6 (btree_int_int_6 * restrict tree );
void free_btree_int_int_6_pointer (btree_int_int_6 ** tree );
btree_int_int_6 new_btree_int_int_6 ();
size_t order_btree_int_int_6 ();
size_t len_btree_int_int_6 (btree_int_int_6 * restrict tree );
Maybe_ref_pair_int_int search_btree_int_int_6 (btree_int_int_6 * restrict tree , int key );
Maybe_ref_pair_int_int min_btree_int_int_6 (btree_int_int_6 * restrict tree );
Maybe_ref_pair_int_int max_btree_int_int_6 (btree_int_int_6 * restrict tree );
Either_BTREE_ERR_size_t insert_btree_int_int_6 (btree_int_int_6 * restrict tree , int key , int val );
Either_BTREE_ERR_size_t delete_btree_int_int_6 (btree_int_int_6 * restrict tree , int key );
void traverse_btree_int_int_6 (btree_int_int_6 * restrict tree , void (*callback) (pair_int_int * restrict item ));
#endif /* __BTREE__int_int_6__H_ */ 
#ifndef __BTREE_IMPL__int_int_6__H_
#define __BTREE_IMPL__int_int_6__H_
#ifndef __MAYBE_IMPL__ref_pair_int_int__H_
#define __MAYBE_IMPL__ref_pair_int_int__H_
Maybe_ref_pair_int_int just_ref_pair_int_int (pair_int_int * restrict value ) {
  return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_pair_int_int nothing_ref_pair_int_int () {
  return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_pair_int_int__H_ */ 
#ifndef __EITHER_IMPL__BTREE_ERR_size_t__H_
#define __EITHER_IMPL__BTREE_ERR_size_t__H_
__attribute__((weak)) Either_BTREE_ERR_size_t right_BTREE_ERR_size_t (size_t value ) {
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = value });
}
__attribute__((weak)) Either_BTREE_ERR_size_t left_BTREE_ERR_size_t (BTREE_ERR error ) {
  return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = error });
}
#endif /* __EITHER_IMPL__BTREE_ERR_size_t__H_ */ 
btnode_int_int_6 * restrict newnode_btree_int_int_6 (bool leaf ) {
  { /* let229 */
    btnode_int_int_6 * restrict node  = malloc (sizeof(btnode_int_int_6 ));
    // ----------
    (node -> n) = 0;
    (node -> leaf) = leaf ;
    if (!leaf )
      { /* block238 */
        memset ((node -> kids), 0, ((2 *  6 ) *  sizeof(btnode_int_int_6 (*)) ));
      }
    return node ;
  }
}
void freenode_btree_int_int_6 (btnode_int_int_6 * restrict node ) {
  if (node )
    { /* block247 */
      if (!(node -> leaf))
        { /* block252 */
          for (size_t i  = 0; (i  <=  (node -> n) ); (++i )) {
              if ((node -> kids)[i ])
                { /* block260 */
                  freenode_btree_int_int_6 ((node -> kids)[i ]);
                }
          }
        }
      free (node );
    }
}
__attribute__((weak)) void free_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  if ((tree -> root))
    { /* block273 */
      freenode_btree_int_int_6 ((tree -> root));
      (tree -> root) = NULL ;
      (tree -> len) = 0;
    }
}
__attribute__((weak)) void free_btree_int_int_6_pointer (btree_int_int_6 ** tree ) {
  free_btree_int_int_6 ((*tree ));
}
btree_int_int_6 new_btree_int_int_6 () {
  return ((btree_int_int_6){ NULL , 0});
}
size_t order_btree_int_int_6 () {
  return (2 *  6 );
}
size_t len_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  return (tree -> len);
}
Maybe_ref_pair_int_int search_btree_int_int_6 (btree_int_int_6 * restrict tree , int key ) {
  { /* let293 */
    btnode_int_int_6 * restrict node  = (tree -> root);
    // ----------
    while (node ) {
        { /* let298 */
          size_t i  = 0;
          // ----------
          while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
              (++i );
          }
          if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
            { /* block305 */
              return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  i  )});
            }
          if ((node -> leaf))
            { /* block311 */
              return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
            }
          node  = (node -> kids)[i ];
        }
    }
    return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
  }
}
Maybe_ref_pair_int_int min_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  { /* let319 */
    btnode_int_int_6 * restrict node  = (tree -> root);
    // ----------
    if (!node )
      { /* block325 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((!(node -> leaf))) {
        node  = (node -> kids)[0];
    }
    if ((node -> n) ==  0 )
      { /* block333 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  0 )});
  }
}
Maybe_ref_pair_int_int max_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  { /* let341 */
    btnode_int_int_6 * restrict node  = (tree -> root);
    // ----------
    if (!node )
      { /* block347 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((!(node -> leaf))) {
        node  = (node -> kids)[(node -> n)];
    }
    if ((node -> n) ==  0 )
      { /* block355 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  ((node -> n) -  1 ) )});
  }
}
void walk_btree_int_int_6 (btnode_int_int_6 * restrict node , void (*callback) (pair_int_int * restrict item )) {
  if (node )
    { /* block367 */
      for (size_t i  = 0; (i  <  (node -> n) ); (++i )) {
          { /* block372 */
            if (!(node -> leaf))
              { /* block377 */
                walk_btree_int_int_6 ((node -> kids)[i ], callback );
              }
            callback (((node -> items) +  i  ));
          }
      }
      if (!(node -> leaf))
        { /* block383 */
          walk_btree_int_int_6 ((node -> kids)[(node -> n)], callback );
        }
    }
}
void traverse_btree_int_int_6 (btree_int_int_6 * restrict tree , void (*callback) (pair_int_int * restrict item )) {
  walk_btree_int_int_6 ((tree -> root), callback );
}
void split_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at ) {
  { /* let395 */
    btnode_int_int_6 * restrict full  = (parent -> kids)[at ];
    btnode_int_int_6 * restrict half  = newnode_btree_int_int_6 (false );
    // ----------
    (half -> leaf) = (full -> leaf);
    (half -> n) = (6 -  1 );
    memcpy ((half -> items), ((full -> items) +  6 ), ((6 -  1 ) *  sizeof(pair_int_int ) ));
    if (!(full -> leaf))
      { /* block404 */
        memcpy ((half -> kids), ((full -> kids) +  6 ), (6 *  sizeof(btnode_int_int_6 (*)) ));
      }
    (full -> n) = (6 -  1 );
    memmove (((parent -> kids) +  (at  +  2 ) ), ((parent -> kids) +  (at  +  1 ) ), (((parent -> n) -  at  ) *  sizeof(btnode_int_int_6 (*)) ));
    { /* let408 */
      btnode_int_int_6 ** kslot  = ((parent -> kids) +  (at  +  1 ) );
      // ----------
      (*kslot ) = half ;
    }
    memmove (((parent -> items) +  (at  +  1 ) ), ((parent -> items) +  at  ), (((parent -> n) -  at  ) *  sizeof(pair_int_int ) ));
    { /* let412 */
      pair_int_int * restrict up  = ((parent -> items) +  at  );
      pair_int_int * restrict mid  = ((full -> items) +  (6 -  1 ) );
      // ----------
      (*up ) = (*mid );
    }
    (parent -> n) = ((parent -> n) +  1 );
  }
}
bool insertNonfull_btree_int_int_6 (btnode_int_int_6 * restrict node , int key , int val ) {
  { /* let419 */
    size_t i  = 0;
    // ----------
    while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
      { /* block426 */
        return false ;
      }
    if ((node -> leaf))
      { /* block431 */
        { /* block433 */
          if (i  <  (node -> n) )
            { /* block438 */
              memmove (((node -> items) +  (i  +  1 ) ), ((node -> items) +  i  ), (((node -> n) -  i  ) *  sizeof(pair_int_int ) ));
            }
          { /* let441 */
            pair_int_int * restrict slot  = ((node -> items) +  i  );
            // ----------
            (slot -> key) = key ;
            (slot -> val) = val ;
          }
          (node -> n) = ((node -> n) +  1 );
          return true ;
        }
      }
    { /* let444 */
      btnode_int_int_6 * restrict child  = (node -> kids)[i ];
      // ----------
      if ((child -> n) ==  ((2 *  6 ) -  1 ) )
        { /* block450 */
          { /* block452 */
            split_btree_int_int_6 (node , i );
            if (((node -> items)[i ]. key) ==  key  )
              { /* block458 */
                return false ;
              }
            if (((node -> items)[i ]. key) <  key  )
              { /* block463 */
                (++i );
              }
          }
        }
    }
    return insertNonfull_btree_int_int_6 ((node -> kids)[i ], key , val );
  }
}
Either_BTREE_ERR_size_t insert_btree_int_int_6 (btree_int_int_6 * restrict tree , int key , int val ) {
  if (!(tree -> root))
    { /* block473 */
      (tree -> root) = newnode_btree_int_int_6 (true );
    }
  if (((tree -> root)-> n) ==  ((2 *  6 ) -  1 ) )
    { /* block479 */
      { /* let481 */
        btnode_int_int_6 * restrict fresh  = newnode_btree_int_int_6 (false );
        // ----------
        { /* let485 */
          btnode_int_int_6 ** kslot  = ((fresh -> kids) +  0 );
          // ----------
          (*kslot ) = (tree -> root);
        }
        (tree -> root) = fresh ;
        split_btree_int_int_6 (fresh , 0);
      }
    }
  if (!insertNonfull_btree_int_int_6 ((tree -> root), key , val ))
    { /* block493 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_DUPLICATE_KEY });
    }
  (tree -> len) = ((tree -> len) +  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
void merge_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at ) {
  { /* let500 */
    btnode_int_int_6 * restrict left  = (parent -> kids)[at ];
    btnode_int_int_6 * restrict right  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let504 */
      pair_int_int * restrict down  = ((left -> items) +  (6 -  1 ) );
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      // ----------
      (*down ) = (*sep );
    }
    memcpy (((left -> items) +  6 ), (right -> items), ((right -> n) *  sizeof(pair_int_int ) ));
    if (!(left -> leaf))
      { /* block512 */
        memcpy (((left -> kids) +  6 ), (right -> kids), (((right -> n) +  1 ) *  sizeof(btnode_int_int_6 (*)) ));
      }
    (left -> n) = (6 +  (right -> n) );
    memmove (((parent -> items) +  at  ), ((parent -> items) +  (at  +  1 ) ), ((((parent -> n) -  at  ) -  1 ) *  sizeof(pair_int_int ) ));
    memmove (((parent -> kids) +  (at  +  1 ) ), ((parent -> kids) +  (at  +  2 ) ), ((((parent -> n) -  at  ) -  1 ) *  sizeof(btnode_int_int_6 (*)) ));
    (parent -> n) = ((parent -> n) -  1 );
    free (right );
  }
}
void borrowLeft_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at ) {
  { /* let522 */
    btnode_int_int_6 * restrict child  = (parent -> kids)[at ];
    btnode_int_int_6 * restrict sib  = (parent -> kids)[(at  -  1 )];
    // ----------
    memmove (((child -> items) +  1 ), (child -> items), ((child -> n) *  sizeof(pair_int_int ) ));
    if (!(child -> leaf))
      { /* block530 */
        memmove (((child -> kids) +  1 ), (child -> kids), (((child -> n) +  1 ) *  sizeof(btnode_int_int_6 (*)) ));
      }
    { /* let533 */
      pair_int_int * restrict head  = ((child -> items) +  0 );
      pair_int_int * restrict sep  = ((parent -> items) +  (at  -  1 ) );
      // ----------
      (*head ) = (*sep );
    }
    if (!(child -> leaf))
      { /* block540 */
        { /* let542 */
          btnode_int_int_6 ** kslot  = ((child -> kids) +  0 );
          // ----------
          (*kslot ) = (sib -> kids)[(sib -> n)];
        }
      }
    { /* let545 */
      pair_int_int * restrict sep  = ((parent -> items) +  (at  -  1 ) );
      pair_int_int * restrict tail  = ((sib -> items) +  ((sib -> n) -  1 ) );
      // ----------
      (*sep ) = (*tail );
    }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
void borrowRight_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at ) {
  { /* let552 */
    btnode_int_int_6 * restrict child  = (parent -> kids)[at ];
    btnode_int_int_6 * restrict sib  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let556 */
      pair_int_int * restrict tail  = ((child -> items) +  (child -> n) );
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      // ----------
      (*tail ) = (*sep );
    }
    if (!(child -> leaf))
      { /* block563 */
        { /* let565 */
          btnode_int_int_6 ** kslot  = ((child -> kids) +  ((child -> n) +  1 ) );
          // ----------
          (*kslot ) = (sib -> kids)[0];
        }
      }
    { /* let568 */
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      pair_int_int * restrict head  = ((sib -> items) +  0 );
      // ----------
      (*sep ) = (*head );
    }
    memmove ((sib -> items), ((sib -> items) +  1 ), (((sib -> n) -  1 ) *  sizeof(pair_int_int ) ));
    if (!(sib -> leaf))
      { /* block576 */
        memmove ((sib -> kids), ((sib -> kids) +  1 ), ((sib -> n) *  sizeof(btnode_int_int_6 (*)) ));
      }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
size_t fill_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at ) {
  if (at  >  0 )
    { /* block585 */
      { /* let587 */
        btnode_int_int_6 * restrict lsib  = (parent -> kids)[(at  -  1 )];
        // ----------
        if ((lsib -> n) >=  6 )
          { /* block593 */
            { /* block595 */
              borrowLeft_btree_int_int_6 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block601 */
      { /* let603 */
        btnode_int_int_6 * restrict rsib  = (parent -> kids)[(at  +  1 )];
        // ----------
        if ((rsib -> n) >=  6 )
          { /* block609 */
            { /* block611 */
              borrowRight_btree_int_int_6 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block616 */
      merge_btree_int_int_6 (parent , at );
      return at ;
    }
  else
    { /* block620 */
      merge_btree_int_int_6 (parent , (at  -  1 ));
      return (at  -  1 );
    }
}
bool del_btree_int_int_6 (btnode_int_int_6 * restrict node , int key ) {
  { /* let626 */
    size_t i  = 0;
    // ----------
    while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
      { /* block633 */
        { /* block635 */
          if ((node -> leaf))
            { /* block640 */
              { /* block642 */
                memmove (((node -> items) +  i  ), ((node -> items) +  (i  +  1 ) ), ((((node -> n) -  i  ) -  1 ) *  sizeof(pair_int_int ) ));
                (node -> n) = ((node -> n) -  1 );
                return true ;
              }
            }
          { /* let645 */
            btnode_int_int_6 * restrict lkid  = (node -> kids)[i ];
            // ----------
            if ((lkid -> n) >=  6 )
              { /* block651 */
                { /* let653 */
                  btnode_int_int_6 * restrict cur  = (node -> kids)[i ];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[(cur -> n)];
                  }
                  { /* let658 */
                    pair_int_int pred  = (cur -> items)[((cur -> n) -  1 )];
                    // ----------
                    { /* let661 */
                      pair_int_int * restrict slot  = ((node -> items) +  i  );
                      // ----------
                      (*slot ) = pred ;
                    }
                    return del_btree_int_int_6 ((node -> kids)[i ], (pred . key));
                  }
                }
              }
          }
          { /* let665 */
            btnode_int_int_6 * restrict rkid  = (node -> kids)[(i  +  1 )];
            // ----------
            if ((rkid -> n) >=  6 )
              { /* block671 */
                { /* let673 */
                  btnode_int_int_6 * restrict cur  = (node -> kids)[(i  +  1 )];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[0];
                  }
                  { /* let678 */
                    pair_int_int succ  = (cur -> items)[0];
                    // ----------
                    { /* let681 */
                      pair_int_int * restrict slot  = ((node -> items) +  i  );
                      // ----------
                      (*slot ) = succ ;
                    }
                    return del_btree_int_int_6 ((node -> kids)[(i  +  1 )], (succ . key));
                  }
                }
              }
          }
          merge_btree_int_int_6 (node , i );
          return del_btree_int_int_6 ((node -> kids)[i ], key );
        }
      }
    if ((node -> leaf))
      { /* block690 */
        return false ;
      }
    { /* let692 */
      btnode_int_int_6 * restrict kid  = (node -> kids)[i ];
      // ----------
      if ((kid -> n) <  6 )
        { /* block698 */
          i  = fill_btree_int_int_6 (node , i );
        }
    }
    return del_btree_int_int_6 ((node -> kids)[i ], key );
  }
}
Either_BTREE_ERR_size_t delete_btree_int_int_6 (btree_int_int_6 * restrict tree , int key ) {
  if (!(tree -> root))
    { /* block709 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (!del_btree_int_int_6 ((tree -> root), key ))
    { /* block716 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (((tree -> root)-> n) ==  0 )
    { /* block722 */
      { /* let724 */
        btnode_int_int_6 * restrict old  = (tree -> root);
        // ----------
        if ((old -> leaf))
          (tree -> root) = NULL ;
        else
          (tree -> root) = (old -> kids)[0];
        free (old );
      }
    }
  (tree -> len) = ((tree -> len) -  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
#endif /* __BTREE_IMPL__int_int_6__H_ */ 
long long ms_now () {
  { /* let734 */
    struct timespec ts ;
    // ----------
    timespec_get ((&ts ), TIME_UTC );
    return ((((long long)(ts . tv_sec)) *  1000 ) +  ((ts . tv_nsec) /  1000000 ) );
  }
  return 0;
}
uint32_t state  = 2463534242;
void reseed () {
  state  = 2463534242;
}
uint32_t nextrand () {
  state  = (state  ^  (state  <<  13 ) );
  state  = (state  ^  (state  >>  17 ) );
  state  = (state  ^  (state  <<  5 ) );
  return state ;
}
int64_t sink  = 0;
void tally (pair_int_int * restrict item ) {
  sink  += (item -> val) ;
}
int main () {
  printf ("Cicili lib/std btree -- %d operations per row, t=6 (11 pairs a node)\n\n", N );
  ({ /* letn744 */
    btree_int_int_6 tr  __attribute__((__cleanup__(free_btree_int_int_6 ))) = new_btree_int_int_6 ();
    // ----------
    reseed ();
    { /* let747 */
      int64_t ok  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let752 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let757 */
              Either_BTREE_ERR_size_t match756  = insert_btree_int_int_6 ((&tr ), key , (key  +  1 ));
              // ----------
              if ((match756 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let761 */
                    size_t n  = (((match756 . data). right). value);
                    // ----------
                    ok  += ((int64_t)n ) ;
                  }
              }
              else if ((match756 . ctor) ==  LEFT_CTOR  ) {
                  { /* let764 */
                    BTREE_ERR e  = (((match756 . data). left). error);
                    // ----------
                    ((void)e );
                  }
              }
            }
          }
      }
      printf ("  (insert checksum: %lld)\n", ok );
      printf ("  insert %d keys: %lld ms\n", N , (ms_now () -  t0  ));
    }
    printf ("  distinct keys stored: %zu\n", len_btree_int_int_6 ((&tr )));
    reseed ();
    { /* let767 */
      int64_t hit  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let772 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let777 */
              Maybe_ref_pair_int_int match776  = search_btree_int_int_6 ((&tr ), key );
              // ----------
              if ((match776 . ctor) ==  JUST_CTOR  ) {
                  { /* let781 */
                    pair_int_int * restrict p  = (((match776 . data). just). value);
                    // ----------
                    hit  += (p -> val) ;
                  }
              }
              else if ((match776 . ctor) ==  NOTHING_CTOR  ) {
                  ((void)0);
              }
            }
          }
      }
      printf ("  (search checksum: %lld)\n", hit );
      printf ("  search %d keys: %lld ms\n", N , (ms_now () -  t0  ));
    }
    { /* let784 */
      long long t0  = ms_now ();
      // ----------
      sink  = 0;
      traverse_btree_int_int_6 ((&tr ), tally );
      printf ("  (traverse checksum: %lld)\n", sink );
      printf ("  traverse in order: %lld ms\n", (ms_now () -  t0  ));
    }
    reseed ();
    { /* let787 */
      int64_t gone  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let792 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let797 */
              Either_BTREE_ERR_size_t match796  = delete_btree_int_int_6 ((&tr ), key );
              // ----------
              if ((match796 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let801 */
                    size_t n  = (((match796 . data). right). value);
                    // ----------
                    { /* block803 */
                      ((void)n );
                      gone  += 1 ;
                    }
                  }
              }
              else if ((match796 . ctor) ==  LEFT_CTOR  ) {
                  { /* let806 */
                    BTREE_ERR e  = (((match796 . data). left). error);
                    // ----------
                    ((void)e );
                  }
              }
            }
          }
      }
      printf ("  (delete checksum: %lld)\n", gone );
      printf ("  delete %d keys: %lld ms\n", N , (ms_now () -  t0  ));
    }
    printf ("  left after delete: %zu\n", len_btree_int_int_6 ((&tr )));
  });
  return 0;
}
