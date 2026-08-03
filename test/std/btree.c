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
  btnode_int_int_3 * restrict kids [(2 *  3 )];
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
        memset (((void *)(node -> kids)), 0, ((2 *  3 ) *  sizeof(btnode_int_int_3 (*)) ));
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
        memcpy (((void *)(half -> kids)), ((void *)((full -> kids) +  3 )), (3 *  sizeof(btnode_int_int_3 (*)) ));
      }
    (full -> n) = (3 -  1 );
    memmove (((void *)((parent -> kids) +  (at  +  2 ) )), ((void *)((parent -> kids) +  (at  +  1 ) )), (((parent -> n) -  at  ) *  sizeof(btnode_int_int_3 (*)) ));
    { /* let407 */
      btnode_int_int_3 ** kslot  = ((btnode_int_int_3 **)((parent -> kids) +  (at  +  1 ) ));
      // ----------
      (*kslot ) = half ;
    }
    memmove (((parent -> items) +  (at  +  1 ) ), ((parent -> items) +  at  ), (((parent -> n) -  at  ) *  sizeof(pair_int_int ) ));
    { /* let412 */
      pair_int_int * restrict up  = ((parent -> items) +  at  );
      pair_int_int * restrict mid  = ((full -> items) +  (3 -  1 ) );
      // ----------
      (*up ) = (*mid );
    }
    (parent -> n) = ((parent -> n) +  1 );
  }
}
bool insertNonfull_btree_int_int_3 (btnode_int_int_3 * restrict node , int key , int val ) {
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
      btnode_int_int_3 * restrict child  = (node -> kids)[i ];
      // ----------
      if ((child -> n) ==  ((2 *  3 ) -  1 ) )
        { /* block450 */
          { /* block452 */
            split_btree_int_int_3 (node , i );
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
    return insertNonfull_btree_int_int_3 ((node -> kids)[i ], key , val );
  }
}
Either_BTREE_ERR_size_t insert_btree_int_int_3 (btree_int_int_3 * restrict tree , int key , int val ) {
  if (!(tree -> root))
    { /* block473 */
      (tree -> root) = newnode_btree_int_int_3 (true );
    }
  if (((tree -> root)-> n) ==  ((2 *  3 ) -  1 ) )
    { /* block479 */
      { /* let481 */
        btnode_int_int_3 * restrict fresh  = newnode_btree_int_int_3 (false );
        // ----------
        { /* let485 */
          btnode_int_int_3 ** kslot  = ((btnode_int_int_3 **)((fresh -> kids) +  0 ));
          // ----------
          (*kslot ) = (tree -> root);
        }
        (tree -> root) = fresh ;
        split_btree_int_int_3 (fresh , 0);
      }
    }
  if (!insertNonfull_btree_int_int_3 ((tree -> root), key , val ))
    { /* block494 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_DUPLICATE_KEY });
    }
  (tree -> len) = ((tree -> len) +  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
void merge_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let501 */
    btnode_int_int_3 * restrict left  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict right  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let505 */
      pair_int_int * restrict down  = ((left -> items) +  (3 -  1 ) );
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      // ----------
      (*down ) = (*sep );
    }
    memcpy (((left -> items) +  3 ), (right -> items), ((right -> n) *  sizeof(pair_int_int ) ));
    if (!(left -> leaf))
      { /* block513 */
        memcpy (((void *)((left -> kids) +  3 )), ((void *)(right -> kids)), (((right -> n) +  1 ) *  sizeof(btnode_int_int_3 (*)) ));
      }
    (left -> n) = (3 +  (right -> n) );
    memmove (((parent -> items) +  at  ), ((parent -> items) +  (at  +  1 ) ), ((((parent -> n) -  at  ) -  1 ) *  sizeof(pair_int_int ) ));
    memmove (((void *)((parent -> kids) +  (at  +  1 ) )), ((void *)((parent -> kids) +  (at  +  2 ) )), ((((parent -> n) -  at  ) -  1 ) *  sizeof(btnode_int_int_3 (*)) ));
    (parent -> n) = ((parent -> n) -  1 );
    free (right );
  }
}
void borrowLeft_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  { /* let523 */
    btnode_int_int_3 * restrict child  = (parent -> kids)[at ];
    btnode_int_int_3 * restrict sib  = (parent -> kids)[(at  -  1 )];
    // ----------
    memmove (((child -> items) +  1 ), (child -> items), ((child -> n) *  sizeof(pair_int_int ) ));
    if (!(child -> leaf))
      { /* block531 */
        memmove (((void *)((child -> kids) +  1 )), ((void *)(child -> kids)), (((child -> n) +  1 ) *  sizeof(btnode_int_int_3 (*)) ));
      }
    { /* let534 */
      pair_int_int * restrict head  = ((child -> items) +  0 );
      pair_int_int * restrict sep  = ((parent -> items) +  (at  -  1 ) );
      // ----------
      (*head ) = (*sep );
    }
    if (!(child -> leaf))
      { /* block541 */
        { /* let543 */
          btnode_int_int_3 ** kslot  = ((btnode_int_int_3 **)((child -> kids) +  0 ));
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
          btnode_int_int_3 ** kslot  = ((btnode_int_int_3 **)((child -> kids) +  ((child -> n) +  1 ) ));
          // ----------
          (*kslot ) = (sib -> kids)[0];
        }
      }
    { /* let571 */
      pair_int_int * restrict sep  = ((parent -> items) +  at  );
      pair_int_int * restrict head  = ((sib -> items) +  0 );
      // ----------
      (*sep ) = (*head );
    }
    memmove ((sib -> items), ((sib -> items) +  1 ), (((sib -> n) -  1 ) *  sizeof(pair_int_int ) ));
    if (!(sib -> leaf))
      { /* block579 */
        memmove (((void *)(sib -> kids)), ((void *)((sib -> kids) +  1 )), ((sib -> n) *  sizeof(btnode_int_int_3 (*)) ));
      }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
size_t fill_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at ) {
  if (at  >  0 )
    { /* block588 */
      { /* let590 */
        btnode_int_int_3 * restrict lsib  = (parent -> kids)[(at  -  1 )];
        // ----------
        if ((lsib -> n) >=  3 )
          { /* block596 */
            { /* block598 */
              borrowLeft_btree_int_int_3 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block604 */
      { /* let606 */
        btnode_int_int_3 * restrict rsib  = (parent -> kids)[(at  +  1 )];
        // ----------
        if ((rsib -> n) >=  3 )
          { /* block612 */
            { /* block614 */
              borrowRight_btree_int_int_3 (parent , at );
              return at ;
            }
          }
      }
    }
  if (at  <  (parent -> n) )
    { /* block619 */
      merge_btree_int_int_3 (parent , at );
      return at ;
    }
  else
    { /* block623 */
      merge_btree_int_int_3 (parent , (at  -  1 ));
      return (at  -  1 );
    }
}
bool del_btree_int_int_3 (btnode_int_int_3 * restrict node , int key ) {
  { /* let629 */
    size_t i  = 0;
    // ----------
    while (((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (node -> n) ) &&  (((node -> items)[i ]. key) ==  key  ) )
      { /* block636 */
        { /* block638 */
          if ((node -> leaf))
            { /* block643 */
              { /* block645 */
                memmove (((node -> items) +  i  ), ((node -> items) +  (i  +  1 ) ), ((((node -> n) -  i  ) -  1 ) *  sizeof(pair_int_int ) ));
                (node -> n) = ((node -> n) -  1 );
                return true ;
              }
            }
          { /* let648 */
            btnode_int_int_3 * restrict lkid  = (node -> kids)[i ];
            // ----------
            if ((lkid -> n) >=  3 )
              { /* block654 */
                { /* let656 */
                  btnode_int_int_3 * restrict cur  = (node -> kids)[i ];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[(cur -> n)];
                  }
                  { /* let661 */
                    pair_int_int pred  = (cur -> items)[((cur -> n) -  1 )];
                    // ----------
                    { /* let664 */
                      pair_int_int * restrict slot  = ((node -> items) +  i  );
                      // ----------
                      (*slot ) = pred ;
                    }
                    return del_btree_int_int_3 ((node -> kids)[i ], (pred . key));
                  }
                }
              }
          }
          { /* let668 */
            btnode_int_int_3 * restrict rkid  = (node -> kids)[(i  +  1 )];
            // ----------
            if ((rkid -> n) >=  3 )
              { /* block674 */
                { /* let676 */
                  btnode_int_int_3 * restrict cur  = (node -> kids)[(i  +  1 )];
                  // ----------
                  while ((!(cur -> leaf))) {
                      cur  = (cur -> kids)[0];
                  }
                  { /* let681 */
                    pair_int_int succ  = (cur -> items)[0];
                    // ----------
                    { /* let684 */
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
      { /* block693 */
        return false ;
      }
    { /* let695 */
      btnode_int_int_3 * restrict kid  = (node -> kids)[i ];
      // ----------
      if ((kid -> n) <  3 )
        { /* block701 */
          i  = fill_btree_int_int_3 (node , i );
        }
    }
    return del_btree_int_int_3 ((node -> kids)[i ], key );
  }
}
Either_BTREE_ERR_size_t delete_btree_int_int_3 (btree_int_int_3 * restrict tree , int key ) {
  if (!(tree -> root))
    { /* block712 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (!del_btree_int_int_3 ((tree -> root), key ))
    { /* block719 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (((tree -> root)-> n) ==  0 )
    { /* block725 */
      { /* let727 */
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
    { /* block739 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block742 */
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
    { /* block749 */
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
void __ciciliL_974 (int ** present ) {
  free (((void *)(*present )));
}
int main () {
  { /* let757 */
    int bad  = 0;
    // ----------
    ({ /* letn761 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      bad  += check ("order is 2t", order_btree_int_int_3 (), 6) ;
      bad  += check ("empty len", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("search of empty", ({ /* letn771 */
            Maybe_ref_pair_int_int matchn770  = search_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn770 . ctor) ==  JUST_CTOR  )) ? ({ /* letn773 */
                pair_int_int * restrict p  = (((matchn770 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn775 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min of empty", ({ /* letn781 */
            Maybe_ref_pair_int_int matchn780  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn780 . ctor) ==  JUST_CTOR  )) ? ({ /* letn783 */
                pair_int_int * restrict p  = (((matchn780 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn785 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete from empty", ({ /* letn791 */
            Either_BTREE_ERR_size_t matchn790  = delete_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn790 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn793 */
                size_t n  = (((matchn790 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn795 */
                BTREE_ERR e  = (((matchn790 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* let804 */
            Either_BTREE_ERR_size_t match803  = insert_btree_int_int_3 ((&tr ), i , (i  *  10 ));
            // ----------
            if ((match803 . ctor) ==  RIGHT_CTOR  ) {
                { /* let808 */
                  size_t n  = (((match803 . data). right). value);
                  // ----------
                  ((void)n );
                }
            }
            else if ((match803 . ctor) ==  LEFT_CTOR  ) {
                { /* let811 */
                  BTREE_ERR e  = (((match803 . data). left). error);
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
      bad  += check ("search hit", ({ /* letn819 */
            Maybe_ref_pair_int_int matchn818  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn818 . ctor) ==  JUST_CTOR  )) ? ({ /* letn821 */
                pair_int_int * restrict p  = (((matchn818 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn823 */
                -1;
              }));
          }), 420) ;
      bad  += check ("search miss", ({ /* letn829 */
            Maybe_ref_pair_int_int matchn828  = search_btree_int_int_3 ((&tr ), 101);
            // ----------
            ((((matchn828 . ctor) ==  JUST_CTOR  )) ? ({ /* letn831 */
                pair_int_int * restrict p  = (((matchn828 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn833 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min", ({ /* letn839 */
            Maybe_ref_pair_int_int matchn838  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn838 . ctor) ==  JUST_CTOR  )) ? ({ /* letn841 */
                pair_int_int * restrict p  = (((matchn838 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn843 */
                -1;
              }));
          }), 1) ;
      bad  += check ("max", ({ /* letn849 */
            Maybe_ref_pair_int_int matchn848  = max_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn848 . ctor) ==  JUST_CTOR  )) ? ({ /* letn851 */
                pair_int_int * restrict p  = (((matchn848 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn853 */
                -1;
              }));
          }), 100) ;
      { /* let859 */
        Maybe_ref_pair_int_int match858  = search_btree_int_int_3 ((&tr ), 42);
        // ----------
        if ((match858 . ctor) ==  JUST_CTOR  ) {
            { /* let863 */
              pair_int_int * restrict p  = (((match858 . data). just). value);
              // ----------
              ((*p ). val) = 4242;
            }
        }
        else if ((match858 . ctor) ==  NOTHING_CTOR  ) {
            (++bad );
        }
      }
      bad  += check ("wrote through the maybe", ({ /* letn870 */
            Maybe_ref_pair_int_int matchn869  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn869 . ctor) ==  JUST_CTOR  )) ? ({ /* letn872 */
                pair_int_int * restrict p  = (((matchn869 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn874 */
                -1;
              }));
          }), 4242) ;
      bad  += check ("duplicate key", ({ /* letn880 */
            Either_BTREE_ERR_size_t matchn879  = insert_btree_int_int_3 ((&tr ), 42, 1);
            // ----------
            ((((matchn879 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn882 */
                size_t n  = (((matchn879 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn884 */
                BTREE_ERR e  = (((matchn879 . data). left). error);
                // ----------
                ((long long)e );
              }));
          }), 1) ;
      bad  += check ("len unchanged by dup", len_btree_int_int_3 ((&tr )), 100) ;
      bad  += check ("delete returns new len", ({ /* letn892 */
            Either_BTREE_ERR_size_t matchn891  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn891 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn894 */
                size_t n  = (((matchn891 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn896 */
                BTREE_ERR e  = (((matchn891 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 99) ;
      bad  += check ("deleted key is gone", ({ /* letn902 */
            Maybe_ref_pair_int_int matchn901  = search_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn901 . ctor) ==  JUST_CTOR  )) ? ({ /* letn904 */
                pair_int_int * restrict p  = (((matchn901 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn906 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete missing key", ({ /* letn912 */
            Either_BTREE_ERR_size_t matchn911  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn911 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn914 */
                size_t n  = (((matchn911 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn916 */
                BTREE_ERR e  = (((matchn911 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      bad  += check ("still in order", ({ /* progn918 */
            audit ((&tr ));
            disorder ;
          }), 0) ;
      bad  += check ("count after delete", audit ((&tr )), 99) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* let927 */
            Either_BTREE_ERR_size_t match926  = delete_btree_int_int_3 ((&tr ), i );
            // ----------
            if ((match926 . ctor) ==  RIGHT_CTOR  ) {
                { /* let931 */
                  size_t n  = (((match926 . data). right). value);
                  // ----------
                  ((void)n );
                }
            }
            else if ((match926 . ctor) ==  LEFT_CTOR  ) {
                { /* let934 */
                  BTREE_ERR e  = (((match926 . data). left). error);
                  // ----------
                  ((void)e );
                }
            }
          }
      }
      bad  += check ("len after draining", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("audit after draining", audit ((&tr )), 0) ;
      bad  += check ("min of drained", ({ /* letn942 */
            Maybe_ref_pair_int_int matchn941  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn941 . ctor) ==  JUST_CTOR  )) ? ({ /* letn944 */
                pair_int_int * restrict p  = (((matchn941 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn946 */
                -1;
              }));
          }), -1) ;
      bad  += check ("reinsert after drain", ({ /* letn952 */
            Either_BTREE_ERR_size_t matchn951  = insert_btree_int_int_3 ((&tr ), 7, 77);
            // ----------
            ((((matchn951 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn954 */
                size_t n  = (((matchn951 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn956 */
                BTREE_ERR e  = (((matchn951 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 1) ;
      bad  += check ("reinserted value", ({ /* letn962 */
            Maybe_ref_pair_int_int matchn961  = search_btree_int_int_3 ((&tr ), 7);
            // ----------
            ((((matchn961 . ctor) ==  JUST_CTOR  )) ? ({ /* letn964 */
                pair_int_int * restrict p  = (((matchn961 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn966 */
                -1;
              }));
          }), 77) ;
    });
    ({ /* letn970 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      { /* let973 */
        int * present  __attribute__((__cleanup__(__ciciliL_974 ))) = ((int *)calloc (4096, sizeof(int)));
        int live  = 0;
        int mismatch  = 0;
        // ----------
        for (int step  = 0; (step  <  N  ); (++step )) {
            { /* let980 */
              int key  = ((int)(nextrand () %  4096 ));
              // ----------
              if (nextrand () %  2 )
                { /* let984 */
                  int ok  = ({ /* letn989 */
                    Either_BTREE_ERR_size_t matchn988  = insert_btree_int_int_3 ((&tr ), key , (key  *  3 ));
                    // ----------
                    ((((matchn988 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn991 */
                        size_t n  = (((matchn988 . data). right). value);
                        // ----------
                        ({ /* progn993 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn995 */
                        BTREE_ERR e  = (((matchn988 . data). left). error);
                        // ----------
                        ({ /* progn997 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block1000 */
                    if (ok  !=  ((present [key ]) ? 0 : 1) )
                      { /* block1005 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1010 */
                        { /* block1012 */
                          present [key ] = 1;
                          (++live );
                        }
                      }
                  }
                }
              else
                { /* let1015 */
                  int ok  = ({ /* letn1020 */
                    Either_BTREE_ERR_size_t matchn1019  = delete_btree_int_int_3 ((&tr ), key );
                    // ----------
                    ((((matchn1019 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1022 */
                        size_t n  = (((matchn1019 . data). right). value);
                        // ----------
                        ({ /* progn1024 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn1026 */
                        BTREE_ERR e  = (((matchn1019 . data). left). error);
                        // ----------
                        ({ /* progn1028 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block1031 */
                    if (ok  !=  present [key ] )
                      { /* block1036 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1041 */
                        { /* block1043 */
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
        { /* let1047 */
          int missing  = 0;
          int extra  = 0;
          // ----------
          for (int i  = 0; (i  <  4096 ); (++i )) {
              { /* let1052 */
                int found  = ({ /* letn1057 */
                  Maybe_ref_pair_int_int matchn1056  = search_btree_int_int_3 ((&tr ), i );
                  // ----------
                  ((((matchn1056 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1059 */
                      pair_int_int * restrict p  = (((matchn1056 . data). just). value);
                      // ----------
                      ({ /* progn1061 */
                        ((void)p );
                        1;
                      });
                    }) : ({ /* progn1063 */
                      0;
                    }));
                });
                // ----------
                { /* block1066 */
                  if (present [i ] &&  (!found ) )
                    { /* block1071 */
                      (++missing );
                    }
                  if ((!present [i ]) &&  found  )
                    { /* block1076 */
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
