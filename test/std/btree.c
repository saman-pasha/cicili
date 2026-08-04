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
typedef struct bthead_int_int_3 {
  size_t n ;
  pair_int_int items [((2 *  3 ) -  1 )];
} bthead_int_int_3;
typedef struct btnode_int_int_3 {
  bthead_int_int_3 head ;
  bthead_int_int_3 * kids [(2 *  3 )];
} btnode_int_int_3;
typedef struct btree_int_int_3 {
  bthead_int_int_3 * restrict root ;
  size_t height ;
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
size_t height_btree_int_int_3 (btree_int_int_3 * restrict tree );
bool balanced_btree_int_int_3 (btree_int_int_3 * restrict tree );
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
bthead_int_int_3 * restrict newleaf_btree_int_int_3 () {
  { /* let235 */
    bthead_int_int_3 * restrict leaf  = malloc (sizeof(bthead_int_int_3 ));
    // ----------
    (leaf -> n) = 0;
    return leaf ;
  }
}
bthead_int_int_3 * restrict newnode_btree_int_int_3 () {
  { /* let244 */
    btnode_int_int_3 * restrict node  = malloc (sizeof(btnode_int_int_3 ));
    // ----------
    ((node -> head). n) = 0;
    memset ((node -> kids), 0, ((2 *  3 ) *  sizeof(bthead_int_int_3 (*)) ));
    return (&(node -> head));
  }
}
void freeall_btree_int_int_3 (bthead_int_int_3 * restrict h , size_t level ) {
  if (h )
    { /* block257 */
      if (level  >  0 )
        { /* block262 */
          { /* let264 */
            btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
            // ----------
            for (size_t i  = 0; (i  <=  (h -> n) ); (++i )) {
                { /* let271 */
                  bthead_int_int_3 * restrict kid  = (in -> kids)[i ];
                  // ----------
                  if (kid )
                    { /* block277 */
                      freeall_btree_int_int_3 (kid , (level  -  1 ));
                    }
                }
            }
          }
        }
      free (h );
    }
}
void free_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  if ((tree -> root))
    { /* block290 */
      freeall_btree_int_int_3 ((tree -> root), (tree -> height));
    }
  (tree -> root) = NULL ;
  (tree -> height) = 0;
  (tree -> len) = 0;
}
void free_btree_int_int_3_pointer (btree_int_int_3 ** tree ) {
  free_btree_int_int_3 ((*tree ));
}
btree_int_int_3 new_btree_int_int_3 () {
  return ((btree_int_int_3){ NULL , 0, 0});
}
size_t order_btree_int_int_3 () {
  return (2 *  3 );
}
size_t len_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  return (tree -> len);
}
size_t height_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  return (tree -> height);
}
bool proof_btree_int_int_3 (bthead_int_int_3 * restrict h , size_t level ) {
  if (level  ==  0 )
    { /* block315 */
      return true ;
    }
  { /* let317 */
    btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
    // ----------
    for (size_t i  = 0; (i  <=  (h -> n) ); (++i )) {
        { /* let324 */
          bthead_int_int_3 * restrict kid  = (in -> kids)[i ];
          // ----------
          if (!kid )
            { /* block330 */
              return false ;
            }
          if (!proof_btree_int_int_3 (kid , (level  -  1 )))
            { /* block336 */
              return false ;
            }
        }
    }
  }
  return true ;
}
bool balanced_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  if (!(tree -> root))
    { /* block344 */
      return ((tree -> height) ==  0 );
    }
  return proof_btree_int_int_3 ((tree -> root), (tree -> height));
}
Maybe_ref_pair_int_int search_btree_int_int_3 (btree_int_int_3 * restrict tree , int key ) {
  { /* let351 */
    bthead_int_int_3 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    while (h ) {
        { /* let356 */
          size_t i  = 0;
          // ----------
          while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
              (++i );
          }
          if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
            { /* block363 */
              return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  i  )});
            }
          if (level  ==  0 )
            { /* block369 */
              return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
            }
          { /* let372 */
            btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
            // ----------
            h  = (in -> kids)[i ];
          }
          level  = (level  -  1 );
        }
    }
    return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
  }
}
Maybe_ref_pair_int_int min_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  { /* let381 */
    bthead_int_int_3 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    if (!h )
      { /* block387 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((level  >  0 )) {
        { /* let392 */
          btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
          // ----------
          h  = (in -> kids)[0];
          level  = (level  -  1 );
        }
    }
    if ((h -> n) ==  0 )
      { /* block399 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  0 )});
  }
}
Maybe_ref_pair_int_int max_btree_int_int_3 (btree_int_int_3 * restrict tree ) {
  { /* let407 */
    bthead_int_int_3 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    if (!h )
      { /* block413 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((level  >  0 )) {
        { /* let418 */
          btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
          // ----------
          h  = (in -> kids)[(h -> n)];
          level  = (level  -  1 );
        }
    }
    if ((h -> n) ==  0 )
      { /* block425 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  ((h -> n) -  1 ) )});
  }
}
void walk_btree_int_int_3 (bthead_int_int_3 * restrict h , size_t level , void (*callback) (pair_int_int * restrict item )) {
  if (h )
    { /* block437 */
      if (level  ==  0 )
        for (size_t i  = 0; (i  <  (h -> n) ); (++i )) {
            callback (((h -> items) +  i  ));
        }
      else
        { /* let445 */
          btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
          // ----------
          for (size_t i  = 0; (i  <  (h -> n) ); (++i )) {
              { /* block452 */
                walk_btree_int_int_3 ((in -> kids)[i ], (level  -  1 ), callback );
                callback (((h -> items) +  i  ));
              }
          }
          walk_btree_int_int_3 ((in -> kids)[(h -> n)], (level  -  1 ), callback );
        }
    }
}
void traverse_btree_int_int_3 (btree_int_int_3 * restrict tree , void (*callback) (pair_int_int * restrict item )) {
  walk_btree_int_int_3 ((tree -> root), (tree -> height), callback );
}
void split_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at , size_t klevel ) {
  { /* let465 */
    bthead_int_int_3 * restrict full  = (parent -> kids)[at ];
    bthead_int_int_3 * restrict ph  = (&(parent -> head));
    // ----------
    { /* let469 */
      bthead_int_int_3 * restrict half  = (((klevel  ==  0 )) ? newleaf_btree_int_int_3 () : newnode_btree_int_int_3 ());
      // ----------
      (half -> n) = (3 -  1 );
      memcpy ((half -> items), ((full -> items) +  3 ), ((3 -  1 ) *  sizeof(pair_int_int ) ));
      if (klevel  >  0 )
        { /* block478 */
          { /* let480 */
            btnode_int_int_3 * restrict fin  = ((btnode_int_int_3 *)full );
            btnode_int_int_3 * restrict hin  = ((btnode_int_int_3 *)half );
            // ----------
            memcpy ((hin -> kids), ((fin -> kids) +  3 ), (3 *  sizeof(bthead_int_int_3 (*)) ));
          }
        }
      (full -> n) = (3 -  1 );
      memmove (((parent -> kids) +  (at  +  2 ) ), ((parent -> kids) +  (at  +  1 ) ), (((ph -> n) -  at  ) *  sizeof(bthead_int_int_3 (*)) ));
      { /* let488 */
        bthead_int_int_3 ** kslot  = ((parent -> kids) +  (at  +  1 ) );
        // ----------
        (*kslot ) = half ;
      }
      memmove (((ph -> items) +  (at  +  1 ) ), ((ph -> items) +  at  ), (((ph -> n) -  at  ) *  sizeof(pair_int_int ) ));
      { /* let492 */
        pair_int_int * restrict up  = ((ph -> items) +  at  );
        pair_int_int * restrict mid  = ((full -> items) +  (3 -  1 ) );
        // ----------
        (*up ) = (*mid );
      }
      (ph -> n) = ((ph -> n) +  1 );
    }
  }
}
bool insertNonfull_btree_int_int_3 (bthead_int_int_3 * restrict h , size_t level , int key , int val ) {
  { /* let499 */
    size_t i  = 0;
    // ----------
    while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
      { /* block506 */
        return false ;
      }
    if (level  ==  0 )
      { /* block511 */
        { /* block513 */
          if (i  <  (h -> n) )
            { /* block518 */
              memmove (((h -> items) +  (i  +  1 ) ), ((h -> items) +  i  ), (((h -> n) -  i  ) *  sizeof(pair_int_int ) ));
            }
          { /* let521 */
            pair_int_int * restrict slot  = ((h -> items) +  i  );
            // ----------
            (slot -> key) = key ;
            (slot -> val) = val ;
          }
          (h -> n) = ((h -> n) +  1 );
          return true ;
        }
      }
    { /* let524 */
      btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
      // ----------
      { /* let528 */
        bthead_int_int_3 * restrict child  = (in -> kids)[i ];
        // ----------
        if ((child -> n) ==  ((2 *  3 ) -  1 ) )
          { /* block534 */
            { /* block536 */
              split_btree_int_int_3 (in , i , (level  -  1 ));
              if (((h -> items)[i ]. key) ==  key  )
                { /* block542 */
                  return false ;
                }
              if (((h -> items)[i ]. key) <  key  )
                { /* block547 */
                  (++i );
                }
            }
          }
      }
      return insertNonfull_btree_int_int_3 ((in -> kids)[i ], (level  -  1 ), key , val );
    }
    return false ;
  }
}
Either_BTREE_ERR_size_t insert_btree_int_int_3 (btree_int_int_3 * restrict tree , int key , int val ) {
  if (!(tree -> root))
    { /* block557 */
      (tree -> root) = newleaf_btree_int_int_3 ();
      (tree -> height) = 0;
    }
  if (((tree -> root)-> n) ==  ((2 *  3 ) -  1 ) )
    { /* block563 */
      { /* let565 */
        bthead_int_int_3 * restrict fh  = newnode_btree_int_int_3 ();
        // ----------
        { /* let569 */
          btnode_int_int_3 * restrict fresh  = ((btnode_int_int_3 *)fh );
          // ----------
          { /* let573 */
            bthead_int_int_3 ** kslot  = ((fresh -> kids) +  0 );
            // ----------
            (*kslot ) = (tree -> root);
          }
          split_btree_int_int_3 (fresh , 0, (tree -> height));
        }
        (tree -> root) = fh ;
        (tree -> height) = ((tree -> height) +  1 );
      }
    }
  if (!insertNonfull_btree_int_int_3 ((tree -> root), (tree -> height), key , val ))
    { /* block581 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_DUPLICATE_KEY });
    }
  (tree -> len) = ((tree -> len) +  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
void merge_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at , size_t klevel ) {
  { /* let588 */
    bthead_int_int_3 * restrict ph  = (&(parent -> head));
    bthead_int_int_3 * restrict left  = (parent -> kids)[at ];
    bthead_int_int_3 * restrict right  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let593 */
      pair_int_int * restrict down  = ((left -> items) +  (3 -  1 ) );
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      // ----------
      (*down ) = (*sep );
    }
    memcpy (((left -> items) +  3 ), (right -> items), ((right -> n) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block601 */
        { /* let603 */
          btnode_int_int_3 * restrict lin  = ((btnode_int_int_3 *)left );
          btnode_int_int_3 * restrict rin  = ((btnode_int_int_3 *)right );
          // ----------
          memcpy (((lin -> kids) +  3 ), (rin -> kids), (((right -> n) +  1 ) *  sizeof(bthead_int_int_3 (*)) ));
        }
      }
    (left -> n) = (3 +  (right -> n) );
    memmove (((ph -> items) +  at  ), ((ph -> items) +  (at  +  1 ) ), ((((ph -> n) -  at  ) -  1 ) *  sizeof(pair_int_int ) ));
    memmove (((parent -> kids) +  (at  +  1 ) ), ((parent -> kids) +  (at  +  2 ) ), ((((ph -> n) -  at  ) -  1 ) *  sizeof(bthead_int_int_3 (*)) ));
    (ph -> n) = ((ph -> n) -  1 );
    free (right );
  }
}
void borrowLeft_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at , size_t klevel ) {
  { /* let617 */
    bthead_int_int_3 * restrict ph  = (&(parent -> head));
    bthead_int_int_3 * restrict child  = (parent -> kids)[at ];
    bthead_int_int_3 * restrict sib  = (parent -> kids)[(at  -  1 )];
    // ----------
    memmove (((child -> items) +  1 ), (child -> items), ((child -> n) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block626 */
        { /* let628 */
          btnode_int_int_3 * restrict cin  = ((btnode_int_int_3 *)child );
          // ----------
          memmove (((cin -> kids) +  1 ), (cin -> kids), (((child -> n) +  1 ) *  sizeof(bthead_int_int_3 (*)) ));
        }
      }
    { /* let633 */
      pair_int_int * restrict head  = ((child -> items) +  0 );
      pair_int_int * restrict sep  = ((ph -> items) +  (at  -  1 ) );
      // ----------
      (*head ) = (*sep );
    }
    if (klevel  >  0 )
      { /* block640 */
        { /* let642 */
          btnode_int_int_3 * restrict cin  = ((btnode_int_int_3 *)child );
          btnode_int_int_3 * restrict sin  = ((btnode_int_int_3 *)sib );
          // ----------
          { /* let648 */
            bthead_int_int_3 ** kslot  = ((cin -> kids) +  0 );
            // ----------
            (*kslot ) = (sin -> kids)[(sib -> n)];
          }
        }
      }
    { /* let651 */
      pair_int_int * restrict sep  = ((ph -> items) +  (at  -  1 ) );
      pair_int_int * restrict tail  = ((sib -> items) +  ((sib -> n) -  1 ) );
      // ----------
      (*sep ) = (*tail );
    }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
void borrowRight_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at , size_t klevel ) {
  { /* let658 */
    bthead_int_int_3 * restrict ph  = (&(parent -> head));
    bthead_int_int_3 * restrict child  = (parent -> kids)[at ];
    bthead_int_int_3 * restrict sib  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let663 */
      pair_int_int * restrict tail  = ((child -> items) +  (child -> n) );
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      // ----------
      (*tail ) = (*sep );
    }
    if (klevel  >  0 )
      { /* block670 */
        { /* let672 */
          btnode_int_int_3 * restrict cin  = ((btnode_int_int_3 *)child );
          btnode_int_int_3 * restrict sin  = ((btnode_int_int_3 *)sib );
          // ----------
          { /* let678 */
            bthead_int_int_3 ** kslot  = ((cin -> kids) +  ((child -> n) +  1 ) );
            // ----------
            (*kslot ) = (sin -> kids)[0];
          }
        }
      }
    { /* let681 */
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      pair_int_int * restrict head  = ((sib -> items) +  0 );
      // ----------
      (*sep ) = (*head );
    }
    memmove ((sib -> items), ((sib -> items) +  1 ), (((sib -> n) -  1 ) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block689 */
        { /* let691 */
          btnode_int_int_3 * restrict sin  = ((btnode_int_int_3 *)sib );
          // ----------
          memmove ((sin -> kids), ((sin -> kids) +  1 ), ((sib -> n) *  sizeof(bthead_int_int_3 (*)) ));
        }
      }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
size_t fill_btree_int_int_3 (btnode_int_int_3 * restrict parent , size_t at , size_t klevel ) {
  { /* let699 */
    bthead_int_int_3 * restrict ph  = (&(parent -> head));
    // ----------
    if (at  >  0 )
      { /* block705 */
        { /* let707 */
          bthead_int_int_3 * restrict lsib  = (parent -> kids)[(at  -  1 )];
          // ----------
          if ((lsib -> n) >=  3 )
            { /* block713 */
              { /* block715 */
                borrowLeft_btree_int_int_3 (parent , at , klevel );
                return at ;
              }
            }
        }
      }
    if (at  <  (ph -> n) )
      { /* block721 */
        { /* let723 */
          bthead_int_int_3 * restrict rsib  = (parent -> kids)[(at  +  1 )];
          // ----------
          if ((rsib -> n) >=  3 )
            { /* block729 */
              { /* block731 */
                borrowRight_btree_int_int_3 (parent , at , klevel );
                return at ;
              }
            }
        }
      }
    if (at  <  (ph -> n) )
      { /* block736 */
        merge_btree_int_int_3 (parent , at , klevel );
        return at ;
      }
    else
      { /* block740 */
        merge_btree_int_int_3 (parent , (at  -  1 ), klevel );
        return (at  -  1 );
      }
  }
}
bool del_btree_int_int_3 (bthead_int_int_3 * restrict h , size_t level , int key ) {
  { /* let746 */
    size_t i  = 0;
    // ----------
    while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
      { /* block753 */
        { /* block755 */
          if (level  ==  0 )
            { /* block760 */
              { /* block762 */
                memmove (((h -> items) +  i  ), ((h -> items) +  (i  +  1 ) ), ((((h -> n) -  i  ) -  1 ) *  sizeof(pair_int_int ) ));
                (h -> n) = ((h -> n) -  1 );
                return true ;
              }
            }
          { /* let765 */
            btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
            // ----------
            { /* let769 */
              bthead_int_int_3 * restrict lkid  = (in -> kids)[i ];
              // ----------
              if ((lkid -> n) >=  3 )
                { /* block775 */
                  { /* let777 */
                    bthead_int_int_3 * restrict cur  = (in -> kids)[i ];
                    size_t cl  = (level  -  1 );
                    // ----------
                    while ((cl  >  0 )) {
                        { /* let782 */
                          btnode_int_int_3 * restrict cin  = ((btnode_int_int_3 *)cur );
                          // ----------
                          cur  = (cin -> kids)[(cur -> n)];
                          cl  = (cl  -  1 );
                        }
                    }
                    { /* let786 */
                      pair_int_int pred  = (cur -> items)[((cur -> n) -  1 )];
                      // ----------
                      { /* let789 */
                        pair_int_int * restrict slot  = ((h -> items) +  i  );
                        // ----------
                        (*slot ) = pred ;
                      }
                      return del_btree_int_int_3 ((in -> kids)[i ], (level  -  1 ), (pred . key));
                    }
                  }
                }
            }
            { /* let793 */
              bthead_int_int_3 * restrict rkid  = (in -> kids)[(i  +  1 )];
              // ----------
              if ((rkid -> n) >=  3 )
                { /* block799 */
                  { /* let801 */
                    bthead_int_int_3 * restrict cur  = (in -> kids)[(i  +  1 )];
                    size_t cl  = (level  -  1 );
                    // ----------
                    while ((cl  >  0 )) {
                        { /* let806 */
                          btnode_int_int_3 * restrict cin  = ((btnode_int_int_3 *)cur );
                          // ----------
                          cur  = (cin -> kids)[0];
                          cl  = (cl  -  1 );
                        }
                    }
                    { /* let810 */
                      pair_int_int succ  = (cur -> items)[0];
                      // ----------
                      { /* let813 */
                        pair_int_int * restrict slot  = ((h -> items) +  i  );
                        // ----------
                        (*slot ) = succ ;
                      }
                      return del_btree_int_int_3 ((in -> kids)[(i  +  1 )], (level  -  1 ), (succ . key));
                    }
                  }
                }
            }
            merge_btree_int_int_3 (in , i , (level  -  1 ));
            return del_btree_int_int_3 ((in -> kids)[i ], (level  -  1 ), key );
          }
        }
      }
    if (level  ==  0 )
      { /* block822 */
        return false ;
      }
    { /* let824 */
      btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)h );
      // ----------
      { /* let828 */
        bthead_int_int_3 * restrict kid  = (in -> kids)[i ];
        // ----------
        if ((kid -> n) <  3 )
          { /* block834 */
            i  = fill_btree_int_int_3 (in , i , (level  -  1 ));
          }
      }
      return del_btree_int_int_3 ((in -> kids)[i ], (level  -  1 ), key );
    }
    return false ;
  }
}
Either_BTREE_ERR_size_t delete_btree_int_int_3 (btree_int_int_3 * restrict tree , int key ) {
  if (!(tree -> root))
    { /* block845 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (!del_btree_int_int_3 ((tree -> root), (tree -> height), key ))
    { /* block852 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (((tree -> root)-> n) ==  0 )
    { /* block858 */
      { /* let860 */
        bthead_int_int_3 * restrict old  = (tree -> root);
        // ----------
        if ((tree -> height) ==  0 )
          (tree -> root) = NULL ;
        else
          { /* let866 */
            btnode_int_int_3 * restrict in  = ((btnode_int_int_3 *)old );
            // ----------
            (tree -> root) = (in -> kids)[0];
            (tree -> height) = ((tree -> height) -  1 );
          }
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
    { /* block876 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block879 */
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
    { /* block886 */
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
long long unbalanced (btree_int_int_3 * restrict tree ) {
  return ((balanced_btree_int_int_3 (tree )) ? 0 : 1);
}
uint32_t state  = 2463534242;
uint32_t nextrand () {
  state  = (state  ^  (state  <<  13 ) );
  state  = (state  ^  (state  >>  17 ) );
  state  = (state  ^  (state  <<  5 ) );
  return state ;
}
void __ciciliL_1129 (int ** present ) {
  free (((void *)(*present )));
}
int main () {
  { /* let897 */
    int bad  = 0;
    // ----------
    ({ /* letn901 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      bad  += check ("order is 2t", order_btree_int_int_3 (), 6) ;
      bad  += check ("empty len", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("empty height", height_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("search of empty", ({ /* letn913 */
            Maybe_ref_pair_int_int matchn912  = search_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn912 . ctor) ==  JUST_CTOR  )) ? ({ /* letn915 */
                pair_int_int * restrict p  = (((matchn912 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn917 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min of empty", ({ /* letn923 */
            Maybe_ref_pair_int_int matchn922  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn922 . ctor) ==  JUST_CTOR  )) ? ({ /* letn925 */
                pair_int_int * restrict p  = (((matchn922 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn927 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete from empty", ({ /* letn933 */
            Either_BTREE_ERR_size_t matchn932  = delete_btree_int_int_3 ((&tr ), 1);
            // ----------
            ((((matchn932 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn935 */
                size_t n  = (((matchn932 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn937 */
                BTREE_ERR e  = (((matchn932 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* let946 */
            Either_BTREE_ERR_size_t match945  = insert_btree_int_int_3 ((&tr ), i , (i  *  10 ));
            // ----------
            if ((match945 . ctor) ==  RIGHT_CTOR  ) {
                { /* let950 */
                  size_t n  = (((match945 . data). right). value);
                  // ----------
                  ((void)n );
                }
            }
            else if ((match945 . ctor) ==  LEFT_CTOR  ) {
                { /* let953 */
                  BTREE_ERR e  = (((match945 . data). left). error);
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
      bad  += check ("leaves all at height", unbalanced ((&tr )), 0) ;
      bad  += check ("height is 3", height_btree_int_int_3 ((&tr )), 3) ;
      bad  += check ("search hit", ({ /* letn963 */
            Maybe_ref_pair_int_int matchn962  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn962 . ctor) ==  JUST_CTOR  )) ? ({ /* letn965 */
                pair_int_int * restrict p  = (((matchn962 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn967 */
                -1;
              }));
          }), 420) ;
      bad  += check ("search miss", ({ /* letn973 */
            Maybe_ref_pair_int_int matchn972  = search_btree_int_int_3 ((&tr ), 101);
            // ----------
            ((((matchn972 . ctor) ==  JUST_CTOR  )) ? ({ /* letn975 */
                pair_int_int * restrict p  = (((matchn972 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn977 */
                -1;
              }));
          }), -1) ;
      bad  += check ("min", ({ /* letn983 */
            Maybe_ref_pair_int_int matchn982  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn982 . ctor) ==  JUST_CTOR  )) ? ({ /* letn985 */
                pair_int_int * restrict p  = (((matchn982 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn987 */
                -1;
              }));
          }), 1) ;
      bad  += check ("max", ({ /* letn993 */
            Maybe_ref_pair_int_int matchn992  = max_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn992 . ctor) ==  JUST_CTOR  )) ? ({ /* letn995 */
                pair_int_int * restrict p  = (((matchn992 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn997 */
                -1;
              }));
          }), 100) ;
      { /* let1003 */
        Maybe_ref_pair_int_int match1002  = search_btree_int_int_3 ((&tr ), 42);
        // ----------
        if ((match1002 . ctor) ==  JUST_CTOR  ) {
            { /* let1007 */
              pair_int_int * restrict p  = (((match1002 . data). just). value);
              // ----------
              ((*p ). val) = 4242;
            }
        }
        else if ((match1002 . ctor) ==  NOTHING_CTOR  ) {
            (++bad );
        }
      }
      bad  += check ("wrote through the maybe", ({ /* letn1014 */
            Maybe_ref_pair_int_int matchn1013  = search_btree_int_int_3 ((&tr ), 42);
            // ----------
            ((((matchn1013 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1016 */
                pair_int_int * restrict p  = (((matchn1013 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn1018 */
                -1;
              }));
          }), 4242) ;
      bad  += check ("duplicate key", ({ /* letn1024 */
            Either_BTREE_ERR_size_t matchn1023  = insert_btree_int_int_3 ((&tr ), 42, 1);
            // ----------
            ((((matchn1023 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1026 */
                size_t n  = (((matchn1023 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn1028 */
                BTREE_ERR e  = (((matchn1023 . data). left). error);
                // ----------
                ((long long)e );
              }));
          }), 1) ;
      bad  += check ("len unchanged by dup", len_btree_int_int_3 ((&tr )), 100) ;
      bad  += check ("delete returns new len", ({ /* letn1036 */
            Either_BTREE_ERR_size_t matchn1035  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn1035 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1038 */
                size_t n  = (((matchn1035 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn1040 */
                BTREE_ERR e  = (((matchn1035 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 99) ;
      bad  += check ("deleted key is gone", ({ /* letn1046 */
            Maybe_ref_pair_int_int matchn1045  = search_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn1045 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1048 */
                pair_int_int * restrict p  = (((matchn1045 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn1050 */
                -1;
              }));
          }), -1) ;
      bad  += check ("delete missing key", ({ /* letn1056 */
            Either_BTREE_ERR_size_t matchn1055  = delete_btree_int_int_3 ((&tr ), 50);
            // ----------
            ((((matchn1055 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1058 */
                size_t n  = (((matchn1055 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn1060 */
                BTREE_ERR e  = (((matchn1055 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), -2) ;
      bad  += check ("still in order", ({ /* progn1062 */
            audit ((&tr ));
            disorder ;
          }), 0) ;
      bad  += check ("count after delete", audit ((&tr )), 99) ;
      bad  += check ("still balanced", unbalanced ((&tr )), 0) ;
      for (int i  = 1; (i  <=  100 ); (++i )) {
          { /* block1067 */
            { /* let1073 */
              Either_BTREE_ERR_size_t match1072  = delete_btree_int_int_3 ((&tr ), i );
              // ----------
              if ((match1072 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let1077 */
                    size_t n  = (((match1072 . data). right). value);
                    // ----------
                    ((void)n );
                  }
              }
              else if ((match1072 . ctor) ==  LEFT_CTOR  ) {
                  { /* let1080 */
                    BTREE_ERR e  = (((match1072 . data). left). error);
                    // ----------
                    ((void)e );
                  }
              }
            }
            if (unbalanced ((&tr )) !=  0 )
              { /* block1085 */
                (++bad );
              }
          }
      }
      bad  += check ("len after draining", len_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("audit after draining", audit ((&tr )), 0) ;
      bad  += check ("height after draining", height_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("min of drained", ({ /* letn1095 */
            Maybe_ref_pair_int_int matchn1094  = min_btree_int_int_3 ((&tr ));
            // ----------
            ((((matchn1094 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1097 */
                pair_int_int * restrict p  = (((matchn1094 . data). just). value);
                // ----------
                ((long long)((*p ). key));
              }) : ({ /* progn1099 */
                -1;
              }));
          }), -1) ;
      bad  += check ("reinsert after drain", ({ /* letn1105 */
            Either_BTREE_ERR_size_t matchn1104  = insert_btree_int_int_3 ((&tr ), 7, 77);
            // ----------
            ((((matchn1104 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1107 */
                size_t n  = (((matchn1104 . data). right). value);
                // ----------
                ((long long)n );
              }) : ({ /* letn1109 */
                BTREE_ERR e  = (((matchn1104 . data). left). error);
                // ----------
                (-((long long)e ));
              }));
          }), 1) ;
      bad  += check ("height back to 0", height_btree_int_int_3 ((&tr )), 0) ;
      bad  += check ("reinserted value", ({ /* letn1117 */
            Maybe_ref_pair_int_int matchn1116  = search_btree_int_int_3 ((&tr ), 7);
            // ----------
            ((((matchn1116 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1119 */
                pair_int_int * restrict p  = (((matchn1116 . data). just). value);
                // ----------
                ((long long)((*p ). val));
              }) : ({ /* progn1121 */
                -1;
              }));
          }), 77) ;
    });
    ({ /* letn1125 */
      btree_int_int_3 tr  __attribute__((__cleanup__(free_btree_int_int_3 ))) = new_btree_int_int_3 ();
      // ----------
      { /* let1128 */
        int * present  __attribute__((__cleanup__(__ciciliL_1129 ))) = ((int *)calloc (4096, sizeof(int)));
        int live  = 0;
        int mismatch  = 0;
        int skewed  = 0;
        // ----------
        for (int step  = 0; (step  <  N  ); (++step )) {
            { /* let1135 */
              int key  = ((int)(nextrand () %  4096 ));
              // ----------
              if (nextrand () %  2 )
                { /* let1139 */
                  int ok  = ({ /* letn1144 */
                    Either_BTREE_ERR_size_t matchn1143  = insert_btree_int_int_3 ((&tr ), key , (key  *  3 ));
                    // ----------
                    ((((matchn1143 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1146 */
                        size_t n  = (((matchn1143 . data). right). value);
                        // ----------
                        ({ /* progn1148 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn1150 */
                        BTREE_ERR e  = (((matchn1143 . data). left). error);
                        // ----------
                        ({ /* progn1152 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block1155 */
                    if (ok  !=  ((present [key ]) ? 0 : 1) )
                      { /* block1160 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1165 */
                        { /* block1167 */
                          present [key ] = 1;
                          (++live );
                        }
                      }
                  }
                }
              else
                { /* let1170 */
                  int ok  = ({ /* letn1175 */
                    Either_BTREE_ERR_size_t matchn1174  = delete_btree_int_int_3 ((&tr ), key );
                    // ----------
                    ((((matchn1174 . ctor) ==  RIGHT_CTOR  )) ? ({ /* letn1177 */
                        size_t n  = (((matchn1174 . data). right). value);
                        // ----------
                        ({ /* progn1179 */
                          ((void)n );
                          1;
                        });
                      }) : ({ /* letn1181 */
                        BTREE_ERR e  = (((matchn1174 . data). left). error);
                        // ----------
                        ({ /* progn1183 */
                          ((void)e );
                          0;
                        });
                      }));
                  });
                  // ----------
                  { /* block1186 */
                    if (ok  !=  present [key ] )
                      { /* block1191 */
                        (++mismatch );
                      }
                    if (ok )
                      { /* block1196 */
                        { /* block1198 */
                          present [key ] = 0;
                          (--live );
                        }
                      }
                  }
                }
              if ((step  %  256 ) ==  0 )
                { /* block1203 */
                  if (unbalanced ((&tr )) !=  0 )
                    { /* block1208 */
                      (++skewed );
                    }
                }
            }
        }
        bad  += check ("random: no wrong verdicts", mismatch , 0) ;
        bad  += check ("random: len agrees", len_btree_int_int_3 ((&tr )), live ) ;
        bad  += check ("random: traverse agrees", audit ((&tr )), live ) ;
        bad  += check ("random: still sorted", disorder , 0) ;
        bad  += check ("random: never skewed", skewed , 0) ;
        bad  += check ("random: balanced at end", unbalanced ((&tr )), 0) ;
        { /* let1212 */
          int missing  = 0;
          int extra  = 0;
          // ----------
          for (int i  = 0; (i  <  4096 ); (++i )) {
              { /* let1217 */
                int found  = ({ /* letn1222 */
                  Maybe_ref_pair_int_int matchn1221  = search_btree_int_int_3 ((&tr ), i );
                  // ----------
                  ((((matchn1221 . ctor) ==  JUST_CTOR  )) ? ({ /* letn1224 */
                      pair_int_int * restrict p  = (((matchn1221 . data). just). value);
                      // ----------
                      ({ /* progn1226 */
                        ((void)p );
                        1;
                      });
                    }) : ({ /* progn1228 */
                      0;
                    }));
                });
                // ----------
                { /* block1231 */
                  if (present [i ] &&  (!found ) )
                    { /* block1236 */
                      (++missing );
                    }
                  if ((!present [i ]) &&  found  )
                    { /* block1241 */
                      (++extra );
                    }
                }
              }
          }
          bad  += check ("random: none missing", missing , 0) ;
          bad  += check ("random: none extra", extra , 0) ;
        }
        for (int i  = 0; (i  <  4096 ); (++i )) {
            { /* let1250 */
              Either_BTREE_ERR_size_t match1249  = delete_btree_int_int_3 ((&tr ), i );
              // ----------
              if ((match1249 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let1254 */
                    size_t n  = (((match1249 . data). right). value);
                    // ----------
                    ((void)n );
                  }
              }
              else if ((match1249 . ctor) ==  LEFT_CTOR  ) {
                  { /* let1257 */
                    BTREE_ERR e  = (((match1249 . data). left). error);
                    // ----------
                    ((void)e );
                  }
              }
            }
        }
        bad  += check ("random: drained len", len_btree_int_int_3 ((&tr )), 0) ;
        bad  += check ("random: drained height", height_btree_int_int_3 ((&tr )), 0) ;
      }
    });
    if (bad  ==  0 )
      printf ("btree: all ok\n");
    else
      printf ("btree: %d FAILED\n", bad );
    return bad ;
  }
}
