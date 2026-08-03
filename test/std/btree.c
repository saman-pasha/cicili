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
              if ((node -> kids)[i ])
                { /* block259 */
                  freenode_btree_int_int_3 ((node -> kids)[i ]);
                }
          }
        }
      free (node );
    }
}
__attribute__((weak)) void free_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  if ((tree -> root))
    { /* block272 */
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
  { /* let292 */
    btnode_int_int_3 * restrict node  = (tree -> root);
    // ----------
    while (node ) {
        { /* let297 */
          size_t i  = 0;
          // ----------
          while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
              (++i );
          }
          if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
            { /* block304 */
              return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  i  )});
            }
          if ((node -> leaf))
            { /* block310 */
              return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
            }
          node  = (node -> kids)[i ];
        }
    }
    return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
  }
}
Maybe_ref_pair_int_int min_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  { /* let318 */
    btnode_int_int_3 * restrict node  = (tree -> root);
    // ----------
    if (!node )
      { /* block324 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((!(node -> leaf))) {
        node  = (node -> kids)[0];
    }
    if ((node -> n) ==  0 )
      { /* block332 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  0 )});
  }
}
Maybe_ref_pair_int_int max_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  { /* let340 */
    btnode_int_int_3 * restrict node  = (tree -> root);
    // ----------
    if (!node )
      { /* block346 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((!(node -> leaf))) {
        node  = (node -> kids)[(node -> n)];
    }
    if ((node -> n) ==  0 )
      { /* block354 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((node -> items) +  ((node -> n) -  1 ) )});
  }
}
void walk_btree_int_int_3 (btnode_int_int_3 * restrict node , void (*callback) (pair_int_int * restrict item )) {
  if (node )
    { /* block366 */
      for (size_t i  = 0; (i  <  (node -> n) ); (++i )) {
          { /* block371 */
            if (!(node -> leaf))
              { /* block376 */
                walk_btree_int_int_3 ((node -> kids)[i ], callback );
              }
            callback (((node -> items) +  i  ));
          }
      }
      if (!(node -> leaf))
        { /* block382 */
          walk_btree_int_int_3 ((node -> kids)[(node -> n)], callback );
        }
    }
}
void traverse_btree_int_int_3 (btree_int_int_3 * restrict tree , void (*callback) (pair_int_int * restrict item )) {
  walk_btree_int_int_3 ((tree -> root), callback );
}
void split_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let394 */
    btnode_int_int_3 * restrict full  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict half  = newnode_btree_int_int_3 (false );
    // ----------
    (half -> leaf) = (full -> leaf);
    (half -> n) = (3 -  1 );
    memcpy ((half -> items), ((full -> items) +  3 ), ((3 -  1 ) *  sizeof(pair_int_int ) ));
    if (!(full -> leaf))
      { /* block403 */
        memcpy ((half -> kids), ((full -> kids) +  3 ), (3 *  sizeof(btnode_int_int_3 (*)) ));
      }
    (full -> n) = (3 -  1 );
    memmove (((parent -> kids) +  (at  +  2 ) ), ((parent -> kids) +  (at  +  1 ) ), (((parent -> n) -  at  ) *  sizeof(btnode_int_int_3 (*)) ));
    { /* let407 */
      btnode_int_int_3 ** kslot  = ((parent -> kids) +  (at  +  1 ) );
      // ----------
      (*kslot ) = half ;
    }
    memmove (((parent -> items) +  (at  +  1 ) ), ((parent -> items) +  at  ), (((parent -> n) -  at  ) *  sizeof(pair_int_int ) ));
    { /* let411 */
      pair_int_int * restrict up  = ((parent -> items) +  at  );
      pair_int_int * restrict mid  = ((full -> items) +  (3 -  1 ) );
      // ----------
      (*up ) = (*mid );
    }
    (parent -> n) = ((parent -> n) +  1 );
  }
}
bool insertNonfull_btree_int_int_3 (btnode_int_int_3 * restrict node , int key , int val ) {
  { /* let418 */
    size_t i  = 0;
    // ----------
    while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
      { /* block425 */
        return false ;
      }
    if ((node -> leaf))
      { /* block430 */
        { /* block432 */
          if (i  <  (node -> n) )
            { /* block437 */
              memmove (((node -> items) +  (i  +  1 ) ), ((node -> items) +  i  ), (((node -> n) -  i  ) *  sizeof(pair_int_int ) ));
            }
          { /* let440 */
            pair_int_int * restrict slot  = ((node -> items) +  i  );
            // ----------
            (slot -> key) = key ;
            (slot -> val) = val ;
          }
          (node -> n) = ((node -> n) +  1 );
          return true ;
        }
      }
    { /* let443 */
      btnode_int_int_3 * restrict child  = (node -> kids)[i ];
      // ----------
      if ((child -> n) ==  ((2 *  3 ) -  1 ) )
        { /* block449 */
          { /* block451 */
            split_btree_int_int_3 (node , i );
            if (((node -> items)[i ]. key) ==  key  )
              { /* block457 */
                return false ;
              }
            if (((node -> items)[i ]. key) <  key  )
              { /* block462 */
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
    { /* block472 */
      (tree -> root) = newnode_btree_int_int_3 (true );
    }
  if (((tree -> root)-> n) ==  ((2 *  3 ) -  1 ) )
    { /* block478 */
      { /* let480 */
        btnode_int_int_3 * restrict fresh  = newnode_btree_int_int_3 (false );
        // ----------
        { /* let484 */
          btnode_int_int_3 ** kslot  = ((fresh -> kids) +  0 );
          // ----------
          (*kslot ) = (tree -> root);
        }
        (tree -> root) = fresh ;
        split_btree_int_int_3 (fresh , 0);
      }
    }
  if (!insertNonfull_btree_int_int_3 ((tree -> root), key , val ))
    { /* block492 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_DUPLICATE_KEY });
    }
  (tree -> len) = ((tree -> len) +  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
void merge_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let499 */
    btnode_int_int_3 * restrict left  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict right  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let503 */
      pair_int_int * restrict down  = ((left -> items) +  (3 -  1 ) );
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      // ----------
      (*down ) = (*sep );
    }
    memcpy (((left -> items) +  3 ), (right -> items), ((right -> n) *  sizeof(pair_int_int ) ));
    if (!(left -> leaf))
      { /* block511 */
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
  { /* let521 */
    btnode_int_int_3 * restrict child  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict sib  = (parent -> kids)[(at  -  1 )];
    // ----------
    memmove (((child -> items) +  1 ), (child -> items), ((child -> n) *  sizeof(pair_int_int ) ));
    if (!(child -> leaf))
      { /* block529 */
        memmove (((child -> kids) +  1 ), (child -> kids), (((child -> n) +  1 ) *  sizeof(btnode_int_int_3 (*)) ));
      }
    { /* let532 */
      pair_int_int * restrict head  = ((child -> items) +  0 );
      pair_int_int * restrict sep  = ((parent -> items) +  (at  -  1 ) );
      // ----------
      (*head ) = (*sep );
    }
    if (!(child -> leaf))
      { /* block539 */
        { /* let541 */
          btnode_int_int_3 ** kslot  = ((child -> kids) +  0 );
          // ----------
          (*kslot ) = (sib -> kids)[(sib -> n)];
        }
      }
    { /* let544 */
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
  { /* let551 */
    btnode_int_int_3 * restrict child  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict sib  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let555 */
      pair_int_int * restrict tail  = ((child -> items) +  (child -> n) );
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      // ----------
      (*tail ) = (*sep );
    }
    if (!(child -> leaf))
      { /* block562 */
        { /* let564 */
          btnode_int_int_3 ** kslot  = ((child -> kids) +  ((child -> n) +  1 ) );
          // ----------
          (*kslot ) = (sib -> kids)[0];
        }
      }
    { /* let567 */
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      pair_int_int * restrict head  = ((sib -> items) +  0 );
      // ----------
      (*sep ) = (*head );
    }
    memmove ((sib -> items), ((sib -> items) +  1 ), (((sib -> n) -  1 ) *  sizeof(pair_int_int ) ));
    if (!(sib -> leaf))
      { /* block575 */
        memmove ((sib -> kids), ((sib -> kids) +  1 ), ((sib -> n) *  sizeof(btnode_int_int_3 (*)) ));
      }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
size_t fill_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  if (at  >  0 )
    { /* block584 */
      { /* let586 */
        btnode_int_int_3 * restrict lsib  = (parent -> kids)[(at  -  1 )];
        // ----------
        if ((lsib -> n) >=  3 )
          { /* block592 */
            { /* block594 */
              borrowLeft_btree_int_int_3 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block600 */
      { /* let602 */
        btnode_int_int_3 * restrict rsib  = (parent -> kids)[(at  +  1 )];
        // ----------
        if ((rsib -> n) >=  3 )
          { /* block608 */
            { /* block610 */
              borrowRight_btree_int_int_3 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block615 */
      merge_btree_int_int_3 (parent , at );
      return at ;
    }
  else
    { /* block619 */
      merge_btree_int_int_3 (parent , (at  -  1 ));
      return (at  -  1 );
    }
}
bool del_btree_int_int_3 (btnode_int_int_3 * restrict node , int key ) {
  { /* let625 */
    size_t i  = 0;
    // ----------
    while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
      { /* block632 */
        { /* block634 */
          if ((node -> leaf))
            { /* block639 */
              { /* block641 */
                memmove (((node -> items) +  i  ), ((node -> items) +  (i  +  1 ) ), ((((node -> n) -  i  ) -  1 ) *  sizeof(pair_int_int ) ));
                (node -> n) = ((node -> n) -  1 );
                return true ;
              }
            }
          { /* let644 */
            btnode_int_int_3 * restrict lkid  = (node -> kids)[i ];
            // ----------
            if ((lkid -> n) >=  3 )
              { /* block650 */
                { /* let652 */
                  btnode_int_int_3 * restrict cur  = (node -> kids)[i ];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[(cur -> n)];
                  }
                  { /* let657 */
                    pair_int_int pred  = (cur -> items)[((cur -> n) -  1 )];
                    // ----------
                    { /* let660 */
                      pair_int_int * restrict slot  = ((node -> items) +  i  );
                      // ----------
                      (*slot ) = pred ;
                    }
                    return del_btree_int_int_3 ((node -> kids)[i ], (pred . key));
                  }
                }
              }
          }
          { /* let664 */
            btnode_int_int_3 * restrict rkid  = (node -> kids)[(i  +  1 )];
            // ----------
            if ((rkid -> n) >=  3 )
              { /* block670 */
                { /* let672 */
                  btnode_int_int_3 * restrict cur  = (node -> kids)[(i  +  1 )];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[0];
                  }
                  { /* let677 */
                    pair_int_int succ  = (cur -> items)[0];
                    // ----------
                    { /* let680 */
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
      { /* block689 */
        return false ;
      }
    { /* let691 */
      btnode_int_int_3 * restrict kid  = (node -> kids)[i ];
      // ----------
      if ((kid -> n) <  3 )
        { /* block697 */
          i  = fill_btree_int_int_3 (node , i );
        }
    }
    return del_btree_int_int_3 ((node -> kids)[i ], key );
  }
}
Either_BTREE_ERR_size_t delete_btree_int_int_3 (btree_int_int_3 * restrict tree , int key ) {
  if (!(tree -> root))
    { /* block708 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (!del_btree_int_int_3 ((tree -> root), key ))
    { /* block715 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (((tree -> root)-> n) ==  0 )
    { /* block721 */
      { /* let723 */
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
    { /* block735 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block738 */
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
    { /* block745 */
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
void __ciciliL_970 (int ** present ) {
  free (((void *)(*present )));
}
int main () {
  { /* let753 */
    int bad  = 0;
    // ----------
    ({ /* letn757 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      bad  += check ("order is 2t", order_btree_int_int_3 (), 6) ;
      bad  += check ("empty len", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("search of empty", ({ /* letn767 */
            Maybe_ref_pair_int_int matchn766  = search_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn766 . ctor) ==  JUST_CTOR  )) ? ({ /* letn769 */
                pair_int_int * restrict p  = (((matchn766 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn771 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min of empty", ({ /* letn777 */
            Maybe_ref_pair_int_int matchn776  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn776 . ctor) ==  JUST_CTOR  )) ? ({ /* letn779 */
                pair_int_int * restrict p  = (((matchn776 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn781 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete from empty", ({ /* letn787 */
            Either_BTREE_ERR_size_t matchn786  = delete_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn786 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn789 */
                size_t n  = (((matchn786 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn791 */
                BTREE_ERR e  = (((matchn786 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* let800 */
            Either_BTREE_ERR_size_t match799  = insert_btree_int_int_3 ((&tr ), i , (i  *  10 ));
            // ----------
            if ((match799 . ctor) ==  RIGHT_CTOR  ) {
                { /* let804 */
                  size_t n  = (((match799 . data). right). value);
                  // ----------
                  ((void)n );
                }
            }
            else if ((match799 . ctor) ==  LEFT_CTOR  ) {
                { /* let807 */
                  BTREE_ERR e  = (((match799 . data). left). error);
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
      bad  += check ("search hit", ({ /* letn815 */
            Maybe_ref_pair_int_int matchn814  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn814 . ctor) ==  JUST_CTOR  )) ? ({ /* letn817 */
                pair_int_int * restrict p  = (((matchn814 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn819 */
                -1;
              }));
          }), 420) ;
      bad  += check ("search miss", ({ /* letn825 */
            Maybe_ref_pair_int_int matchn824  = search_btree_int_int_3 ((&tr ), 101);
            // ----------
            ((((matchn824 . ctor) ==  JUST_CTOR  )) ? ({ /* letn827 */
                pair_int_int * restrict p  = (((matchn824 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn829 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min", ({ /* letn835 */
            Maybe_ref_pair_int_int matchn834  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn834 . ctor) ==  JUST_CTOR  )) ? ({ /* letn837 */
                pair_int_int * restrict p  = (((matchn834 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn839 */
                -1;
              }));
          }), 1) ;
      bad  += check ("max", ({ /* letn845 */
            Maybe_ref_pair_int_int matchn844  = max_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn844 . ctor) ==  JUST_CTOR  )) ? ({ /* letn847 */
                pair_int_int * restrict p  = (((matchn844 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn849 */
                -1;
              }));
          }), 100) ;
      { /* let855 */
        Maybe_ref_pair_int_int match854  = search_btree_int_int_3 ((&tr ), 42);
        // ----------
        if ((match854 . ctor) ==  JUST_CTOR  ) {
            { /* let859 */
              pair_int_int * restrict p  = (((match854 . data). just). value);
              // ----------
              ((*p ). val) = 4242;
            }
        }
        else if ((match854 . ctor) ==  NOTHING_CTOR  ) {
            (++bad );
        }
      }
      bad  += check ("wrote through the maybe", ({ /* letn866 */
            Maybe_ref_pair_int_int matchn865  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn865 . ctor) ==  JUST_CTOR  )) ? ({ /* letn868 */
                pair_int_int * restrict p  = (((matchn865 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn870 */
                -1;
              }));
          }), 4242) ;
      bad  += check ("duplicate key", ({ /* letn876 */
            Either_BTREE_ERR_size_t matchn875  = insert_btree_int_int_3 ((&tr ), 42, 1);
            // ----------
            ((((matchn875 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn878 */
                size_t n  = (((matchn875 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn880 */
                BTREE_ERR e  = (((matchn875 . data). left). error);
                // ----------
                ((long long)e );
              }));
          }), 1) ;
      bad  += check ("len unchanged by dup", len_btree_int_int_3 ((&tr )), 100) ;
      bad  += check ("delete returns new len", ({ /* letn888 */
            Either_BTREE_ERR_size_t matchn887  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn887 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn890 */
                size_t n  = (((matchn887 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn892 */
                BTREE_ERR e  = (((matchn887 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 99) ;
      bad  += check ("deleted key is gone", ({ /* letn898 */
            Maybe_ref_pair_int_int matchn897  = search_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn897 . ctor) ==  JUST_CTOR  )) ? ({ /* letn900 */
                pair_int_int * restrict p  = (((matchn897 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn902 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete missing key", ({ /* letn908 */
            Either_BTREE_ERR_size_t matchn907  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn907 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn910 */
                size_t n  = (((matchn907 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn912 */
                BTREE_ERR e  = (((matchn907 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      bad  += check ("still in order", ({ /* progn914 */
            audit ((&tr ));
            disorder ;
          }), 0) ;
      bad  += check ("count after delete", audit ((&tr )), 99) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* let923 */
            Either_BTREE_ERR_size_t match922  = delete_btree_int_int_3 ((&tr ), i );
            // ----------
            if ((match922 . ctor) ==  RIGHT_CTOR  ) {
                { /* let927 */
                  size_t n  = (((match922 . data). right). value);
                  // ----------
                  ((void)n );
                }
            }
            else if ((match922 . ctor) ==  LEFT_CTOR  ) {
                { /* let930 */
                  BTREE_ERR e  = (((match922 . data). left). error);
                  // ----------
                  ((void)e );
                }
            }
          }
      }
      bad  += check ("len after draining", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("audit after draining", audit ((&tr )), 0) ;
      bad  += check ("min of drained", ({ /* letn938 */
            Maybe_ref_pair_int_int matchn937  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn937 . ctor) ==  JUST_CTOR  )) ? ({ /* letn940 */
                pair_int_int * restrict p  = (((matchn937 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn942 */
                -1;
              }));
          }), -1) ;
      bad  += check ("reinsert after drain", ({ /* letn948 */
            Either_BTREE_ERR_size_t matchn947  = insert_btree_int_int_3 ((&tr ), 7, 77);
            // ----------
            ((((matchn947 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn950 */
                size_t n  = (((matchn947 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn952 */
                BTREE_ERR e  = (((matchn947 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 1) ;
      bad  += check ("reinserted value", ({ /* letn958 */
            Maybe_ref_pair_int_int matchn957  = search_btree_int_int_3 ((&tr ), 7);
            // ----------
            ((((matchn957 . ctor) ==  JUST_CTOR  )) ? ({ /* letn960 */
                pair_int_int * restrict p  = (((matchn957 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn962 */
                -1;
              }));
          }), 77) ;
    });
    ({ /* letn966 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      { /* let969 */
        int * present  __attribute__((__cleanup__(__ciciliL_970 ))) = ((int *)calloc (4096, sizeof(int)));
        int live  = 0;
        int mismatch  = 0;
        // ----------
        for (int step  = 0; (step  <  N  ); (++step )) {
            { /* let976 */
              int key  = ((int)(nextrand () %  4096 ));
              // ----------
              if (nextrand () %  2 )
                { /* let980 */
                  int ok  = ({ /* letn985 */
                    Either_BTREE_ERR_size_t matchn984  = insert_btree_int_int_3 ((&tr ), key , (key  *  3 ));
                    // ----------
                    ((((matchn984 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn987 */
                        size_t n  = (((matchn984 . data). right). value);
                        // ----------
                        ({ /* progn989 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn991 */
                        BTREE_ERR e  = (((matchn984 . data). left). error);
                        // ----------
                        ({ /* progn993 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block996 */
                    if (ok  !=  ((present [key ]) ? 0 : 1) )
                      { /* block1001 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1006 */
                        { /* block1008 */
                          present [key ] = 1;
                          (++live );
                        }
                      }
                  }
                }
              else
                { /* let1011 */
                  int ok  = ({ /* letn1016 */
                    Either_BTREE_ERR_size_t matchn1015  = delete_btree_int_int_3 ((&tr ), key );
                    // ----------
                    ((((matchn1015 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1018 */
                        size_t n  = (((matchn1015 . data). right). value);
                        // ----------
                        ({ /* progn1020 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn1022 */
                        BTREE_ERR e  = (((matchn1015 . data). left). error);
                        // ----------
                        ({ /* progn1024 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block1027 */
                    if (ok  !=  present [key ] )
                      { /* block1032 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1037 */
                        { /* block1039 */
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
        { /* let1043 */
          int missing  = 0;
          int extra  = 0;
          // ----------
          for (int i  = 0; (i  <  4096 ); (++i )) {
              { /* let1048 */
                int found  = ({ /* letn1053 */
                  Maybe_ref_pair_int_int matchn1052  = search_btree_int_int_3 ((&tr ), i );
                  // ----------
                  ((((matchn1052 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1055 */
                      pair_int_int * restrict p  = (((matchn1052 . data). just). value);
                      // ----------
                      ({ /* progn1057 */
                        ((void)p );
                        1;
                      });
                    }) : ({ /* progn1059 */
                      0;
                    }));
                });
                // ----------
                { /* block1062 */
                  if (present [i ] &&  (!found ) )
                    { /* block1067 */
                      (++missing );
                    }
                  if ((!present [i ]) &&  found  )
                    { /* block1072 */
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
