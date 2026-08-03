#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
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
#ifndef __BTREE__int_int_3__H_
#define __BTREE__int_int_3__H_
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
  union { /* ciciliUnion113 */
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
  union { /* ciciliUnion134 */
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
typedef struct btnode_int_int_3 btnode_int_int_3 ;
typedef struct btnode_int_int_3 {
  size_t n ;
  bool leaf ;
  pair_int_int items [((2 *  3 ) -  1 )];
  btnode_int_int_3 * kids [(2 *  3 )];
} btnode_int_int_3;
typedef struct btree_int_int_3 {
  btnode_int_int_3 * restrict root ;
  size_t len ;
} btree_int_int_3;
typedef int btree_int_int_3_key_t ;
typedef int btree_int_int_3_val_t ;
typedef pair_int_int btree_int_int_3_pair_t ;
typedef std_btree btree_int_int_3_type_t ;
void free_btree_int_int_3 (btree_int_int_3 * restrict tree );
void free_btree_int_int_3_pointer (btree_int_int_3 ** tree );
btree_int_int_3 new_btree_int_int_3 ();
size_t order_btree_int_int_3 ();
size_t len_btree_int_int_3 (btree_int_int_3 * restrict tree );
Maybe_ref_pair_int_int search_btree_int_int_3 (btree_int_int_3 * restrict tree , int key );
Maybe_ref_pair_int_int min_btree_int_int_3 (btree_int_int_3 * restrict tree );
Maybe_ref_pair_int_int max_btree_int_int_3 (btree_int_int_3 * restrict tree );
Either_BTREE_ERR_size_t insert_btree_int_int_3 (btree_int_int_3 * restrict tree , int key , int val );
Either_BTREE_ERR_size_t delete_btree_int_int_3 (btree_int_int_3 * restrict tree , int key );
void traverse_btree_int_int_3 (btree_int_int_3 * restrict tree , void (*callback) (pair_int_int * restrict item ));
#endif /* __BTREE__int_int_3__H_ */ 
#ifndef __BTREE_IMPL__int_int_3__H_
#define __BTREE_IMPL__int_int_3__H_
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
btnode_int_int_3 * restrict newnode_btree_int_int_3 (bool leaf ) {
  { /* let228 */
    btnode_int_int_3 * restrict node  = malloc (sizeof(btnode_int_int_3 ));
    // ----------
    (node -> n) = 0;
    (node -> leaf) = leaf ;
    if (!leaf )
      { /* block237 */
        memset ((node -> kids), 0, ((2 *  3 ) *  sizeof(btnode_int_int_3 (*)) ));
      }
    return node ;
  }
}
void freenode_btree_int_int_3 (btnode_int_int_3 * restrict node ) {
  if (node )
    { /* block246 */
      if (!(node -> leaf))
        { /* block251 */
          for (size_t i  = 0; (i  <=  (node -> n) ); (++i )) {
              { /* let256 */
                btnode_int_int_3 * restrict kid  = (node -> kids)[i ];
                // ----------
                if (kid )
                  { /* block262 */
                    freenode_btree_int_int_3 (kid );
                  }
              }
          }
        }
      free (node );
    }
}
__attribute__((weak)) void free_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  if ((tree -> root))
    { /* block275 */
      freenode_btree_int_int_3 ((tree -> root));
      (tree -> root) = NULL ;
      (tree -> len) = 0;
    }
}
__attribute__((weak)) void free_btree_int_int_3_pointer (btree_int_int_3 ** tree ) {
  free_btree_int_int_3 ((*tree ));
}
btree_int_int_3 new_btree_int_int_3 () {
  return ((btree_int_int_3){ NULL , 0});
}
size_t order_btree_int_int_3 () {
  return (2 *  3 );
}
size_t len_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  return (tree -> len);
}
Maybe_ref_pair_int_int search_btree_int_int_3 (btree_int_int_3 * restrict tree , int key ) {
  { /* let295 */
    btnode_int_int_3 * restrict node  = (tree -> root);
    // ----------
    while (node ) {
        { /* let300 */
          size_t i  = 0;
          // ----------
          while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
              (++i );
          }
          if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
            { /* block307 */
              return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  i  )});
            }
          if ((node -> leaf))
            { /* block313 */
              return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
            }
          node  = (node -> kids)[i ];
        }
    }
    return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
  }
}
Maybe_ref_pair_int_int min_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  { /* let321 */
    btnode_int_int_3 * restrict node  = (tree -> root);
    // ----------
    if (!node )
      { /* block327 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((!(node -> leaf))) {
        node  = (node -> kids)[0];
    }
    if ((node -> n) ==  0 )
      { /* block335 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  0 )});
  }
}
Maybe_ref_pair_int_int max_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  { /* let343 */
    btnode_int_int_3 * restrict node  = (tree -> root);
    // ----------
    if (!node )
      { /* block349 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((!(node -> leaf))) {
        node  = (node -> kids)[(node -> n)];
    }
    if ((node -> n) ==  0 )
      { /* block357 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  ((node -> n) -  1 ) )});
  }
}
void walk_btree_int_int_3 (btnode_int_int_3 * restrict node , void (*callback) (pair_int_int * restrict item )) {
  if (node )
    { /* block369 */
      for (size_t i  = 0; (i  <  (node -> n) ); (++i )) {
          { /* block374 */
            if (!(node -> leaf))
              { /* block379 */
                walk_btree_int_int_3 ((node -> kids)[i ], callback );
              }
            callback (((node -> items) +  i  ));
          }
      }
      if (!(node -> leaf))
        { /* block385 */
          walk_btree_int_int_3 ((node -> kids)[(node -> n)], callback );
        }
    }
}
void traverse_btree_int_int_3 (btree_int_int_3 * restrict tree , void (*callback) (pair_int_int * restrict item )) {
  walk_btree_int_int_3 ((tree -> root), callback );
}
void split_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let397 */
    btnode_int_int_3 * restrict full  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict half  = newnode_btree_int_int_3 (false );
    // ----------
    (half -> leaf) = (full -> leaf);
    (half -> n) = (3 -  1 );
    memcpy ((half -> items), ((full -> items) +  3 ), ((3 -  1 ) *  sizeof(pair_int_int ) ));
    if (!(full -> leaf))
      { /* block406 */
        memcpy ((half -> kids), ((full -> kids) +  3 ), (3 *  sizeof(btnode_int_int_3 (*)) ));
      }
    (full -> n) = (3 -  1 );
    memmove (((parent -> kids) +  (at  +  2 ) ), ((parent -> kids) +  (at  +  1 ) ), (((parent -> n) -  at  ) *  sizeof(btnode_int_int_3 (*)) ));
    { /* let410 */
      btnode_int_int_3 ** kslot  = ((parent -> kids) +  (at  +  1 ) );
      // ----------
      (*kslot ) = half ;
    }
    memmove (((parent -> items) +  (at  +  1 ) ), ((parent -> items) +  at  ), (((parent -> n) -  at  ) *  sizeof(pair_int_int ) ));
    { /* let414 */
      pair_int_int * restrict up  = ((parent -> items) +  at  );
      pair_int_int * restrict mid  = ((full -> items) +  (3 -  1 ) );
      // ----------
      (*up ) = (*mid );
    }
    (parent -> n) = ((parent -> n) +  1 );
  }
}
bool insertNonfull_btree_int_int_3 (btnode_int_int_3 * restrict node , int key , int val ) {
  { /* let421 */
    size_t i  = 0;
    // ----------
    while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
      { /* block428 */
        return false ;
      }
    if ((node -> leaf))
      { /* block433 */
        { /* block435 */
          if (i  <  (node -> n) )
            { /* block440 */
              memmove (((node -> items) +  (i  +  1 ) ), ((node -> items) +  i  ), (((node -> n) -  i  ) *  sizeof(pair_int_int ) ));
            }
          { /* let443 */
            pair_int_int * restrict slot  = ((node -> items) +  i  );
            // ----------
            (slot -> key) = key ;
            (slot -> val) = val ;
          }
          (node -> n) = ((node -> n) +  1 );
          return true ;
        }
      }
    { /* let446 */
      btnode_int_int_3 * restrict child  = (node -> kids)[i ];
      // ----------
      if ((child -> n) ==  ((2 *  3 ) -  1 ) )
        { /* block452 */
          { /* block454 */
            split_btree_int_int_3 (node , i );
            if (((node -> items)[i ]. key) ==  key  )
              { /* block460 */
                return false ;
              }
            if (((node -> items)[i ]. key) <  key  )
              { /* block465 */
                (++i );
              }
          }
        }
    }
    return insertNonfull_btree_int_int_3 ((node -> kids)[i ], key , val );
  }
}
Either_BTREE_ERR_size_t insert_btree_int_int_3 (btree_int_int_3 * restrict tree , int key , int val ) {
  if (!(tree -> root))
    { /* block475 */
      (tree -> root) = newnode_btree_int_int_3 (true );
    }
  if (((tree -> root)-> n) ==  ((2 *  3 ) -  1 ) )
    { /* block481 */
      { /* let483 */
        btnode_int_int_3 * restrict fresh  = newnode_btree_int_int_3 (false );
        // ----------
        { /* let487 */
          btnode_int_int_3 ** kslot  = ((fresh -> kids) +  0 );
          // ----------
          (*kslot ) = (tree -> root);
        }
        (tree -> root) = fresh ;
        split_btree_int_int_3 (fresh , 0);
      }
    }
  if (!insertNonfull_btree_int_int_3 ((tree -> root), key , val ))
    { /* block495 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_DUPLICATE_KEY });
    }
  (tree -> len) = ((tree -> len) +  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
void merge_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let502 */
    btnode_int_int_3 * restrict left  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict right  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let506 */
      pair_int_int * restrict down  = ((left -> items) +  (3 -  1 ) );
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      // ----------
      (*down ) = (*sep );
    }
    memcpy (((left -> items) +  3 ), (right -> items), ((right -> n) *  sizeof(pair_int_int ) ));
    if (!(left -> leaf))
      { /* block514 */
        memcpy (((left -> kids) +  3 ), (right -> kids), (((right -> n) +  1 ) *  sizeof(btnode_int_int_3 (*)) ));
      }
    (left -> n) = (3 +  (right -> n) );
    memmove (((parent -> items) +  at  ), ((parent -> items) +  (at  +  1 ) ), ((((parent -> n) -  at  ) -  1 ) *  sizeof(pair_int_int ) ));
    memmove (((parent -> kids) +  (at  +  1 ) ), ((parent -> kids) +  (at  +  2 ) ), ((((parent -> n) -  at  ) -  1 ) *  sizeof(btnode_int_int_3 (*)) ));
    (parent -> n) = ((parent -> n) -  1 );
    free (right );
  }
}
void borrowLeft_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let524 */
    btnode_int_int_3 * restrict child  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict sib  = (parent -> kids)[(at  -  1 )];
    // ----------
    memmove (((child -> items) +  1 ), (child -> items), ((child -> n) *  sizeof(pair_int_int ) ));
    if (!(child -> leaf))
      { /* block532 */
        memmove (((child -> kids) +  1 ), (child -> kids), (((child -> n) +  1 ) *  sizeof(btnode_int_int_3 (*)) ));
      }
    { /* let535 */
      pair_int_int * restrict head  = ((child -> items) +  0 );
      pair_int_int * restrict sep  = ((parent -> items) +  (at  -  1 ) );
      // ----------
      (*head ) = (*sep );
    }
    if (!(child -> leaf))
      { /* block542 */
        { /* let544 */
          btnode_int_int_3 ** kslot  = ((child -> kids) +  0 );
          // ----------
          (*kslot ) = (sib -> kids)[(sib -> n)];
        }
      }
    { /* let547 */
      pair_int_int * restrict sep  = ((parent -> items) +  (at  -  1 ) );
      pair_int_int * restrict tail  = ((sib -> items) +  ((sib -> n) -  1 ) );
      // ----------
      (*sep ) = (*tail );
    }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
void borrowRight_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let554 */
    btnode_int_int_3 * restrict child  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict sib  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let558 */
      pair_int_int * restrict tail  = ((child -> items) +  (child -> n) );
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      // ----------
      (*tail ) = (*sep );
    }
    if (!(child -> leaf))
      { /* block565 */
        { /* let567 */
          btnode_int_int_3 ** kslot  = ((child -> kids) +  ((child -> n) +  1 ) );
          // ----------
          (*kslot ) = (sib -> kids)[0];
        }
      }
    { /* let570 */
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      pair_int_int * restrict head  = ((sib -> items) +  0 );
      // ----------
      (*sep ) = (*head );
    }
    memmove ((sib -> items), ((sib -> items) +  1 ), (((sib -> n) -  1 ) *  sizeof(pair_int_int ) ));
    if (!(sib -> leaf))
      { /* block578 */
        memmove ((sib -> kids), ((sib -> kids) +  1 ), ((sib -> n) *  sizeof(btnode_int_int_3 (*)) ));
      }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
size_t fill_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  if (at  >  0 )
    { /* block587 */
      { /* let589 */
        btnode_int_int_3 * restrict lsib  = (parent -> kids)[(at  -  1 )];
        // ----------
        if ((lsib -> n) >=  3 )
          { /* block595 */
            { /* block597 */
              borrowLeft_btree_int_int_3 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block603 */
      { /* let605 */
        btnode_int_int_3 * restrict rsib  = (parent -> kids)[(at  +  1 )];
        // ----------
        if ((rsib -> n) >=  3 )
          { /* block611 */
            { /* block613 */
              borrowRight_btree_int_int_3 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block618 */
      merge_btree_int_int_3 (parent , at );
      return at ;
    }
  else
    { /* block622 */
      merge_btree_int_int_3 (parent , (at  -  1 ));
      return (at  -  1 );
    }
}
bool del_btree_int_int_3 (btnode_int_int_3 * restrict node , int key ) {
  { /* let628 */
    size_t i  = 0;
    // ----------
    while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
      { /* block635 */
        { /* block637 */
          if ((node -> leaf))
            { /* block642 */
              { /* block644 */
                memmove (((node -> items) +  i  ), ((node -> items) +  (i  +  1 ) ), ((((node -> n) -  i  ) -  1 ) *  sizeof(pair_int_int ) ));
                (node -> n) = ((node -> n) -  1 );
                return true ;
              }
            }
          { /* let647 */
            btnode_int_int_3 * restrict lkid  = (node -> kids)[i ];
            // ----------
            if ((lkid -> n) >=  3 )
              { /* block653 */
                { /* let655 */
                  btnode_int_int_3 * restrict cur  = (node -> kids)[i ];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[(cur -> n)];
                  }
                  { /* let660 */
                    pair_int_int pred  = (cur -> items)[((cur -> n) -  1 )];
                    // ----------
                    { /* let663 */
                      pair_int_int * restrict slot  = ((node -> items) +  i  );
                      // ----------
                      (*slot ) = pred ;
                    }
                    return del_btree_int_int_3 ((node -> kids)[i ], (pred . key));
                  }
                }
              }
          }
          { /* let667 */
            btnode_int_int_3 * restrict rkid  = (node -> kids)[(i  +  1 )];
            // ----------
            if ((rkid -> n) >=  3 )
              { /* block673 */
                { /* let675 */
                  btnode_int_int_3 * restrict cur  = (node -> kids)[(i  +  1 )];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[0];
                  }
                  { /* let680 */
                    pair_int_int succ  = (cur -> items)[0];
                    // ----------
                    { /* let683 */
                      pair_int_int * restrict slot  = ((node -> items) +  i  );
                      // ----------
                      (*slot ) = succ ;
                    }
                    return del_btree_int_int_3 ((node -> kids)[(i  +  1 )], (succ . key));
                  }
                }
              }
          }
          merge_btree_int_int_3 (node , i );
          return del_btree_int_int_3 ((node -> kids)[i ], key );
        }
      }
    if ((node -> leaf))
      { /* block692 */
        return false ;
      }
    { /* let694 */
      btnode_int_int_3 * restrict kid  = (node -> kids)[i ];
      // ----------
      if ((kid -> n) <  3 )
        { /* block700 */
          i  = fill_btree_int_int_3 (node , i );
        }
    }
    return del_btree_int_int_3 ((node -> kids)[i ], key );
  }
}
Either_BTREE_ERR_size_t delete_btree_int_int_3 (btree_int_int_3 * restrict tree , int key ) {
  if (!(tree -> root))
    { /* block711 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (!del_btree_int_int_3 ((tree -> root), key ))
    { /* block718 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (((tree -> root)-> n) ==  0 )
    { /* block724 */
      { /* let726 */
        btnode_int_int_3 * restrict old  = (tree -> root);
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
#endif /* __BTREE_IMPL__int_int_3__H_ */ 
int N  = 20000;
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block738 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block741 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int seen  = 0;
int last  = -1;
int disorder  = 0;
int64_t keysum  = 0;
void visit (pair_int_int * restrict item ) {
  (++seen );
  if ((item -> key) <=  last  )
    { /* block748 */
      (++disorder );
    }
  last  = (item -> key);
  keysum  += (item -> key) ;
}
int audit (btree_int_int_3 * restrict tree ) {
  seen  = 0;
  last  = -1;
  disorder  = 0;
  keysum  = 0;
  traverse_btree_int_int_3 (tree , visit );
  return seen ;
}
uint32_t state  = 2463534242;
uint32_t nextrand () {
  state  = (state  ^  (state  <<  13 ) );
  state  = (state  ^  (state  >>  17 ) );
  state  = (state  ^  (state  <<  5 ) );
  return state ;
}
void __ciciliL_973 (int ** present ) {
  free (((void *)(*present )));
}
int main () {
  { /* let756 */
    int bad  = 0;
    // ----------
    ({ /* letn760 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      bad  += check ("order is 2t", order_btree_int_int_3 (), 6) ;
      bad  += check ("empty len", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("search of empty", ({ /* letn770 */
            Maybe_ref_pair_int_int matchn769  = search_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn769 . ctor) ==  JUST_CTOR  )) ? ({ /* letn772 */
                pair_int_int * restrict p  = (((matchn769 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn774 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min of empty", ({ /* letn780 */
            Maybe_ref_pair_int_int matchn779  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn779 . ctor) ==  JUST_CTOR  )) ? ({ /* letn782 */
                pair_int_int * restrict p  = (((matchn779 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn784 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete from empty", ({ /* letn790 */
            Either_BTREE_ERR_size_t matchn789  = delete_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn789 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn792 */
                size_t n  = (((matchn789 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn794 */
                BTREE_ERR e  = (((matchn789 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* let803 */
            Either_BTREE_ERR_size_t match802  = insert_btree_int_int_3 ((&tr ), i , (i  *  10 ));
            // ----------
            if ((match802 . ctor) ==  RIGHT_CTOR  ) {
                { /* let807 */
                  size_t n  = (((match802 . data). right). value);
                  // ----------
                  ((void)n );
                }
            }
            else if ((match802 . ctor) ==  LEFT_CTOR  ) {
                { /* let810 */
                  BTREE_ERR e  = (((match802 . data). left). error);
                  // ----------
                  bad  += check ("insert failed", ((long long)e ), 0) ;
                }
            }
          }
      }
      bad  += check ("len after 100", len_btree_int_int_3 ((&tr )), 100) ;
      bad  += check ("traverse count", audit ((&tr )), 100) ;
      bad  += check ("traverse in order", disorder , 0) ;
      bad  += check ("traverse key sum", keysum , 5050) ;
      bad  += check ("search hit", ({ /* letn818 */
            Maybe_ref_pair_int_int matchn817  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn817 . ctor) ==  JUST_CTOR  )) ? ({ /* letn820 */
                pair_int_int * restrict p  = (((matchn817 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn822 */
                -1;
              }));
          }), 420) ;
      bad  += check ("search miss", ({ /* letn828 */
            Maybe_ref_pair_int_int matchn827  = search_btree_int_int_3 ((&tr ), 101);
            // ----------
            ((((matchn827 . ctor) ==  JUST_CTOR  )) ? ({ /* letn830 */
                pair_int_int * restrict p  = (((matchn827 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn832 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min", ({ /* letn838 */
            Maybe_ref_pair_int_int matchn837  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn837 . ctor) ==  JUST_CTOR  )) ? ({ /* letn840 */
                pair_int_int * restrict p  = (((matchn837 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn842 */
                -1;
              }));
          }), 1) ;
      bad  += check ("max", ({ /* letn848 */
            Maybe_ref_pair_int_int matchn847  = max_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn847 . ctor) ==  JUST_CTOR  )) ? ({ /* letn850 */
                pair_int_int * restrict p  = (((matchn847 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn852 */
                -1;
              }));
          }), 100) ;
      { /* let858 */
        Maybe_ref_pair_int_int match857  = search_btree_int_int_3 ((&tr ), 42);
        // ----------
        if ((match857 . ctor) ==  JUST_CTOR  ) {
            { /* let862 */
              pair_int_int * restrict p  = (((match857 . data). just). value);
              // ----------
              ((*p ). val) = 4242;
            }
        }
        else if ((match857 . ctor) ==  NOTHING_CTOR  ) {
            (++bad );
        }
      }
      bad  += check ("wrote through the maybe", ({ /* letn869 */
            Maybe_ref_pair_int_int matchn868  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn868 . ctor) ==  JUST_CTOR  )) ? ({ /* letn871 */
                pair_int_int * restrict p  = (((matchn868 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn873 */
                -1;
              }));
          }), 4242) ;
      bad  += check ("duplicate key", ({ /* letn879 */
            Either_BTREE_ERR_size_t matchn878  = insert_btree_int_int_3 ((&tr ), 42, 1);
            // ----------
            ((((matchn878 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn881 */
                size_t n  = (((matchn878 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn883 */
                BTREE_ERR e  = (((matchn878 . data). left). error);
                // ----------
                ((long long)e );
              }));
          }), 1) ;
      bad  += check ("len unchanged by dup", len_btree_int_int_3 ((&tr )), 100) ;
      bad  += check ("delete returns new len", ({ /* letn891 */
            Either_BTREE_ERR_size_t matchn890  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn890 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn893 */
                size_t n  = (((matchn890 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn895 */
                BTREE_ERR e  = (((matchn890 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 99) ;
      bad  += check ("deleted key is gone", ({ /* letn901 */
            Maybe_ref_pair_int_int matchn900  = search_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn900 . ctor) ==  JUST_CTOR  )) ? ({ /* letn903 */
                pair_int_int * restrict p  = (((matchn900 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn905 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete missing key", ({ /* letn911 */
            Either_BTREE_ERR_size_t matchn910  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn910 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn913 */
                size_t n  = (((matchn910 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn915 */
                BTREE_ERR e  = (((matchn910 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      bad  += check ("still in order", ({ /* progn917 */
            audit ((&tr ));
            disorder ;
          }), 0) ;
      bad  += check ("count after delete", audit ((&tr )), 99) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* let926 */
            Either_BTREE_ERR_size_t match925  = delete_btree_int_int_3 ((&tr ), i );
            // ----------
            if ((match925 . ctor) ==  RIGHT_CTOR  ) {
                { /* let930 */
                  size_t n  = (((match925 . data). right). value);
                  // ----------
                  ((void)n );
                }
            }
            else if ((match925 . ctor) ==  LEFT_CTOR  ) {
                { /* let933 */
                  BTREE_ERR e  = (((match925 . data). left). error);
                  // ----------
                  ((void)e );
                }
            }
          }
      }
      bad  += check ("len after draining", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("audit after draining", audit ((&tr )), 0) ;
      bad  += check ("min of drained", ({ /* letn941 */
            Maybe_ref_pair_int_int matchn940  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn940 . ctor) ==  JUST_CTOR  )) ? ({ /* letn943 */
                pair_int_int * restrict p  = (((matchn940 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn945 */
                -1;
              }));
          }), -1) ;
      bad  += check ("reinsert after drain", ({ /* letn951 */
            Either_BTREE_ERR_size_t matchn950  = insert_btree_int_int_3 ((&tr ), 7, 77);
            // ----------
            ((((matchn950 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn953 */
                size_t n  = (((matchn950 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn955 */
                BTREE_ERR e  = (((matchn950 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 1) ;
      bad  += check ("reinserted value", ({ /* letn961 */
            Maybe_ref_pair_int_int matchn960  = search_btree_int_int_3 ((&tr ), 7);
            // ----------
            ((((matchn960 . ctor) ==  JUST_CTOR  )) ? ({ /* letn963 */
                pair_int_int * restrict p  = (((matchn960 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn965 */
                -1;
              }));
          }), 77) ;
    });
    ({ /* letn969 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      { /* let972 */
        int * present  __attribute__((__cleanup__(__ciciliL_973 ))) = ((int *)calloc (4096, sizeof(int)));
        int live  = 0;
        int mismatch  = 0;
        // ----------
        for (int step  = 0; (step  <  N  ); (++step )) {
            { /* let979 */
              int key  = ((int)(nextrand () %  4096 ));
              // ----------
              if (nextrand () %  2 )
                { /* let983 */
                  int ok  = ({ /* letn988 */
                    Either_BTREE_ERR_size_t matchn987  = insert_btree_int_int_3 ((&tr ), key , (key  *  3 ));
                    // ----------
                    ((((matchn987 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn990 */
                        size_t n  = (((matchn987 . data). right). value);
                        // ----------
                        ({ /* progn992 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn994 */
                        BTREE_ERR e  = (((matchn987 . data). left). error);
                        // ----------
                        ({ /* progn996 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block999 */
                    if (ok  !=  ((present [key ]) ? 0 : 1) )
                      { /* block1004 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1009 */
                        { /* block1011 */
                          present [key ] = 1;
                          (++live );
                        }
                      }
                  }
                }
              else
                { /* let1014 */
                  int ok  = ({ /* letn1019 */
                    Either_BTREE_ERR_size_t matchn1018  = delete_btree_int_int_3 ((&tr ), key );
                    // ----------
                    ((((matchn1018 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1021 */
                        size_t n  = (((matchn1018 . data). right). value);
                        // ----------
                        ({ /* progn1023 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn1025 */
                        BTREE_ERR e  = (((matchn1018 . data). left). error);
                        // ----------
                        ({ /* progn1027 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block1030 */
                    if (ok  !=  present [key ] )
                      { /* block1035 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1040 */
                        { /* block1042 */
                          present [key ] = 0;
                          (--live );
                        }
                      }
                  }
                }
            }
        }
        bad  += check ("random: no wrong verdicts", mismatch , 0) ;
        bad  += check ("random: len agrees", len_btree_int_int_3 ((&tr )), live ) ;
        bad  += check ("random: traverse agrees", audit ((&tr )), live ) ;
        bad  += check ("random: still sorted", disorder , 0) ;
        { /* let1046 */
          int missing  = 0;
          int extra  = 0;
          // ----------
          for (int i  = 0; (i  <  4096 ); (++i )) {
              { /* let1051 */
                int found  = ({ /* letn1056 */
                  Maybe_ref_pair_int_int matchn1055  = search_btree_int_int_3 ((&tr ), i );
                  // ----------
                  ((((matchn1055 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1058 */
                      pair_int_int * restrict p  = (((matchn1055 . data). just). value);
                      // ----------
                      ({ /* progn1060 */
                        ((void)p );
                        1;
                      });
                    }) : ({ /* progn1062 */
                      0;
                    }));
                });
                // ----------
                { /* block1065 */
                  if (present [i ] &&  (!found ) )
                    { /* block1070 */
                      (++missing );
                    }
                  if ((!present [i ]) &&  found  )
                    { /* block1075 */
                      (++extra );
                    }
                }
              }
          }
          bad  += check ("random: none missing", missing , 0) ;
          bad  += check ("random: none extra", extra , 0) ;
        }
      }
    });
    if (bad  ==  0 )
      printf ("btree: all ok\n");
    else
      printf ("btree: %d FAILED\n", bad );
    return bad ;
  }
}
