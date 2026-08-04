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
typedef struct bthead_int_int_6 {
  size_t n ;
  pair_int_int items [((2 *  6 ) -  1 )];
} bthead_int_int_6;
typedef struct btnode_int_int_6 {
  bthead_int_int_6 head ;
  bthead_int_int_6 * kids [(2 *  6 )];
} btnode_int_int_6;
typedef struct btree_int_int_6 {
  bthead_int_int_6 * restrict root ;
  size_t height ;
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
size_t height_btree_int_int_6 (btree_int_int_6 * restrict tree );
bool balanced_btree_int_int_6 (btree_int_int_6 * restrict tree );
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
bthead_int_int_6 * restrict newleaf_btree_int_int_6 () {
  { /* let236 */
    bthead_int_int_6 * restrict leaf  = malloc (sizeof(bthead_int_int_6 ));
    // ----------
    (leaf -> n) = 0;
    return leaf ;
  }
}
bthead_int_int_6 * restrict newnode_btree_int_int_6 () {
  { /* let245 */
    btnode_int_int_6 * restrict node  = malloc (sizeof(btnode_int_int_6 ));
    // ----------
    ((node -> head). n) = 0;
    memset ((node -> kids), 0, ((2 *  6 ) *  sizeof(bthead_int_int_6 (*)) ));
    return (&(node -> head));
  }
}
void freeall_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level ) {
  if (h )
    { /* block258 */
      if (level  >  0 )
        { /* block263 */
          { /* let265 */
            btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
            // ----------
            for (size_t i  = 0; (i  <=  (h -> n) ); (++i )) {
                { /* let272 */
                  bthead_int_int_6 * restrict kid  = (in -> kids)[i ];
                  // ----------
                  if (kid )
                    { /* block278 */
                      freeall_btree_int_int_6 (kid , (level  -  1 ));
                    }
                }
            }
          }
        }
      free (h );
    }
}
void free_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  if ((tree -> root))
    { /* block291 */
      freeall_btree_int_int_6 ((tree -> root), (tree -> height));
    }
  (tree -> root) = NULL ;
  (tree -> height) = 0;
  (tree -> len) = 0;
}
void free_btree_int_int_6_pointer (btree_int_int_6 ** tree ) {
  free_btree_int_int_6 ((*tree ));
}
btree_int_int_6 new_btree_int_int_6 () {
  return ((btree_int_int_6){ NULL , 0, 0});
}
size_t order_btree_int_int_6 () {
  return (2 *  6 );
}
size_t len_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  return (tree -> len);
}
size_t height_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  return (tree -> height);
}
bool proof_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level ) {
  if (level  ==  0 )
    { /* block316 */
      return true ;
    }
  { /* let318 */
    btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
    // ----------
    for (size_t i  = 0; (i  <=  (h -> n) ); (++i )) {
        { /* let325 */
          bthead_int_int_6 * restrict kid  = (in -> kids)[i ];
          // ----------
          if (!kid )
            { /* block331 */
              return false ;
            }
          if (!proof_btree_int_int_6 (kid , (level  -  1 )))
            { /* block337 */
              return false ;
            }
        }
    }
  }
  return true ;
}
bool balanced_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  if (!(tree -> root))
    { /* block345 */
      return ((tree -> height) ==  0 );
    }
  return proof_btree_int_int_6 ((tree -> root), (tree -> height));
}
Maybe_ref_pair_int_int search_btree_int_int_6 (btree_int_int_6 * restrict tree , int key ) {
  { /* let352 */
    bthead_int_int_6 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    while (h ) {
        { /* let357 */
          size_t i  = 0;
          // ----------
          while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
              (++i );
          }
          if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
            { /* block364 */
              return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  i  )});
            }
          if (level  ==  0 )
            { /* block370 */
              return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
            }
          { /* let373 */
            btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
            // ----------
            h  = (in -> kids)[i ];
          }
          level  = (level  -  1 );
        }
    }
    return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
  }
}
Maybe_ref_pair_int_int min_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  { /* let382 */
    bthead_int_int_6 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    if (!h )
      { /* block388 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((level  >  0 )) {
        { /* let393 */
          btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
          // ----------
          h  = (in -> kids)[0];
          level  = (level  -  1 );
        }
    }
    if ((h -> n) ==  0 )
      { /* block400 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  0 )});
  }
}
Maybe_ref_pair_int_int max_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  { /* let408 */
    bthead_int_int_6 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    if (!h )
      { /* block414 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((level  >  0 )) {
        { /* let419 */
          btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
          // ----------
          h  = (in -> kids)[(h -> n)];
          level  = (level  -  1 );
        }
    }
    if ((h -> n) ==  0 )
      { /* block426 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  ((h -> n) -  1 ) )});
  }
}
void walk_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level , void (*callback) (pair_int_int * restrict item )) {
  if (h )
    { /* block438 */
      if (level  ==  0 )
        for (size_t i  = 0; (i  <  (h -> n) ); (++i )) {
            callback (((h -> items) +  i  ));
        }
      else
        { /* let446 */
          btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
          // ----------
          for (size_t i  = 0; (i  <  (h -> n) ); (++i )) {
              { /* block453 */
                walk_btree_int_int_6 ((in -> kids)[i ], (level  -  1 ), callback );
                callback (((h -> items) +  i  ));
              }
          }
          walk_btree_int_int_6 ((in -> kids)[(h -> n)], (level  -  1 ), callback );
        }
    }
}
void traverse_btree_int_int_6 (btree_int_int_6 * restrict tree , void (*callback) (pair_int_int * restrict item )) {
  walk_btree_int_int_6 ((tree -> root), (tree -> height), callback );
}
void split_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at , size_t klevel ) {
  { /* let466 */
    bthead_int_int_6 * restrict full  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    // ----------
    { /* let470 */
      bthead_int_int_6 * restrict half  = (((klevel  ==  0 )) ? newleaf_btree_int_int_6 () : newnode_btree_int_int_6 ());
      // ----------
      (half -> n) = (6 -  1 );
      memcpy ((half -> items), ((full -> items) +  6 ), ((6 -  1 ) *  sizeof(pair_int_int ) ));
      if (klevel  >  0 )
        { /* block479 */
          { /* let481 */
            btnode_int_int_6 * restrict fin  = ((btnode_int_int_6 *)full );
            btnode_int_int_6 * restrict hin  = ((btnode_int_int_6 *)half );
            // ----------
            memcpy ((hin -> kids), ((fin -> kids) +  6 ), (6 *  sizeof(bthead_int_int_6 (*)) ));
          }
        }
      (full -> n) = (6 -  1 );
      memmove (((parent -> kids) +  (at  +  2 ) ), ((parent -> kids) +  (at  +  1 ) ), (((ph -> n) -  at  ) *  sizeof(bthead_int_int_6 (*)) ));
      { /* let489 */
        bthead_int_int_6 ** kslot  = ((parent -> kids) +  (at  +  1 ) );
        // ----------
        (*kslot ) = half ;
      }
      memmove (((ph -> items) +  (at  +  1 ) ), ((ph -> items) +  at  ), (((ph -> n) -  at  ) *  sizeof(pair_int_int ) ));
      { /* let493 */
        pair_int_int * restrict up  = ((ph -> items) +  at  );
        pair_int_int * restrict mid  = ((full -> items) +  (6 -  1 ) );
        // ----------
        (*up ) = (*mid );
      }
      (ph -> n) = ((ph -> n) +  1 );
    }
  }
}
bool insertNonfull_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level , int key , int val ) {
  { /* let500 */
    size_t i  = 0;
    // ----------
    while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
      { /* block507 */
        return false ;
      }
    if (level  ==  0 )
      { /* block512 */
        { /* block514 */
          if (i  <  (h -> n) )
            { /* block519 */
              memmove (((h -> items) +  (i  +  1 ) ), ((h -> items) +  i  ), (((h -> n) -  i  ) *  sizeof(pair_int_int ) ));
            }
          { /* let522 */
            pair_int_int * restrict slot  = ((h -> items) +  i  );
            // ----------
            (slot -> key) = key ;
            (slot -> val) = val ;
          }
          (h -> n) = ((h -> n) +  1 );
          return true ;
        }
      }
    { /* let525 */
      btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
      // ----------
      { /* let529 */
        bthead_int_int_6 * restrict child  = (in -> kids)[i ];
        // ----------
        if ((child -> n) ==  ((2 *  6 ) -  1 ) )
          { /* block535 */
            { /* block537 */
              split_btree_int_int_6 (in , i , (level  -  1 ));
              if (((h -> items)[i ]. key) ==  key  )
                { /* block543 */
                  return false ;
                }
              if (((h -> items)[i ]. key) <  key  )
                { /* block548 */
                  (++i );
                }
            }
          }
      }
      return insertNonfull_btree_int_int_6 ((in -> kids)[i ], (level  -  1 ), key , val );
    }
    return false ;
  }
}
Either_BTREE_ERR_size_t insert_btree_int_int_6 (btree_int_int_6 * restrict tree , int key , int val ) {
  if (!(tree -> root))
    { /* block558 */
      (tree -> root) = newleaf_btree_int_int_6 ();
      (tree -> height) = 0;
    }
  if (((tree -> root)-> n) ==  ((2 *  6 ) -  1 ) )
    { /* block564 */
      { /* let566 */
        bthead_int_int_6 * restrict fh  = newnode_btree_int_int_6 ();
        // ----------
        { /* let570 */
          btnode_int_int_6 * restrict fresh  = ((btnode_int_int_6 *)fh );
          // ----------
          { /* let574 */
            bthead_int_int_6 ** kslot  = ((fresh -> kids) +  0 );
            // ----------
            (*kslot ) = (tree -> root);
          }
          split_btree_int_int_6 (fresh , 0, (tree -> height));
        }
        (tree -> root) = fh ;
        (tree -> height) = ((tree -> height) +  1 );
      }
    }
  if (!insertNonfull_btree_int_int_6 ((tree -> root), (tree -> height), key , val ))
    { /* block582 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_DUPLICATE_KEY });
    }
  (tree -> len) = ((tree -> len) +  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
void merge_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at , size_t klevel ) {
  { /* let589 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    bthead_int_int_6 * restrict left  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict right  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let594 */
      pair_int_int * restrict down  = ((left -> items) +  (6 -  1 ) );
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      // ----------
      (*down ) = (*sep );
    }
    memcpy (((left -> items) +  6 ), (right -> items), ((right -> n) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block602 */
        { /* let604 */
          btnode_int_int_6 * restrict lin  = ((btnode_int_int_6 *)left );
          btnode_int_int_6 * restrict rin  = ((btnode_int_int_6 *)right );
          // ----------
          memcpy (((lin -> kids) +  6 ), (rin -> kids), (((right -> n) +  1 ) *  sizeof(bthead_int_int_6 (*)) ));
        }
      }
    (left -> n) = (6 +  (right -> n) );
    memmove (((ph -> items) +  at  ), ((ph -> items) +  (at  +  1 ) ), ((((ph -> n) -  at  ) -  1 ) *  sizeof(pair_int_int ) ));
    memmove (((parent -> kids) +  (at  +  1 ) ), ((parent -> kids) +  (at  +  2 ) ), ((((ph -> n) -  at  ) -  1 ) *  sizeof(bthead_int_int_6 (*)) ));
    (ph -> n) = ((ph -> n) -  1 );
    free (right );
  }
}
void borrowLeft_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at , size_t klevel ) {
  { /* let618 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    bthead_int_int_6 * restrict child  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict sib  = (parent -> kids)[(at  -  1 )];
    // ----------
    memmove (((child -> items) +  1 ), (child -> items), ((child -> n) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block627 */
        { /* let629 */
          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)child );
          // ----------
          memmove (((cin -> kids) +  1 ), (cin -> kids), (((child -> n) +  1 ) *  sizeof(bthead_int_int_6 (*)) ));
        }
      }
    { /* let634 */
      pair_int_int * restrict head  = ((child -> items) +  0 );
      pair_int_int * restrict sep  = ((ph -> items) +  (at  -  1 ) );
      // ----------
      (*head ) = (*sep );
    }
    if (klevel  >  0 )
      { /* block641 */
        { /* let643 */
          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)child );
          btnode_int_int_6 * restrict sin  = ((btnode_int_int_6 *)sib );
          // ----------
          { /* let649 */
            bthead_int_int_6 ** kslot  = ((cin -> kids) +  0 );
            // ----------
            (*kslot ) = (sin -> kids)[(sib -> n)];
          }
        }
      }
    { /* let652 */
      pair_int_int * restrict sep  = ((ph -> items) +  (at  -  1 ) );
      pair_int_int * restrict tail  = ((sib -> items) +  ((sib -> n) -  1 ) );
      // ----------
      (*sep ) = (*tail );
    }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
void borrowRight_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at , size_t klevel ) {
  { /* let659 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    bthead_int_int_6 * restrict child  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict sib  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let664 */
      pair_int_int * restrict tail  = ((child -> items) +  (child -> n) );
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      // ----------
      (*tail ) = (*sep );
    }
    if (klevel  >  0 )
      { /* block671 */
        { /* let673 */
          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)child );
          btnode_int_int_6 * restrict sin  = ((btnode_int_int_6 *)sib );
          // ----------
          { /* let679 */
            bthead_int_int_6 ** kslot  = ((cin -> kids) +  ((child -> n) +  1 ) );
            // ----------
            (*kslot ) = (sin -> kids)[0];
          }
        }
      }
    { /* let682 */
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      pair_int_int * restrict head  = ((sib -> items) +  0 );
      // ----------
      (*sep ) = (*head );
    }
    memmove ((sib -> items), ((sib -> items) +  1 ), (((sib -> n) -  1 ) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block690 */
        { /* let692 */
          btnode_int_int_6 * restrict sin  = ((btnode_int_int_6 *)sib );
          // ----------
          memmove ((sin -> kids), ((sin -> kids) +  1 ), ((sib -> n) *  sizeof(bthead_int_int_6 (*)) ));
        }
      }
    (child -> n) = ((child -> n) +  1 );
    (sib -> n) = ((sib -> n) -  1 );
  }
}
size_t fill_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at , size_t klevel ) {
  { /* let700 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    // ----------
    if (at  >  0 )
      { /* block706 */
        { /* let708 */
          bthead_int_int_6 * restrict lsib  = (parent -> kids)[(at  -  1 )];
          // ----------
          if ((lsib -> n) >=  6 )
            { /* block714 */
              { /* block716 */
                borrowLeft_btree_int_int_6 (parent , at , klevel );
                return at ;
              }
            }
        }
      }
    if (at  <  (ph -> n) )
      { /* block722 */
        { /* let724 */
          bthead_int_int_6 * restrict rsib  = (parent -> kids)[(at  +  1 )];
          // ----------
          if ((rsib -> n) >=  6 )
            { /* block730 */
              { /* block732 */
                borrowRight_btree_int_int_6 (parent , at , klevel );
                return at ;
              }
            }
        }
      }
    if (at  <  (ph -> n) )
      { /* block737 */
        merge_btree_int_int_6 (parent , at , klevel );
        return at ;
      }
    else
      { /* block741 */
        merge_btree_int_int_6 (parent , (at  -  1 ), klevel );
        return (at  -  1 );
      }
  }
}
bool del_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level , int key ) {
  { /* let747 */
    size_t i  = 0;
    // ----------
    while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
      { /* block754 */
        { /* block756 */
          if (level  ==  0 )
            { /* block761 */
              { /* block763 */
                memmove (((h -> items) +  i  ), ((h -> items) +  (i  +  1 ) ), ((((h -> n) -  i  ) -  1 ) *  sizeof(pair_int_int ) ));
                (h -> n) = ((h -> n) -  1 );
                return true ;
              }
            }
          { /* let766 */
            btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
            // ----------
            { /* let770 */
              bthead_int_int_6 * restrict lkid  = (in -> kids)[i ];
              // ----------
              if ((lkid -> n) >=  6 )
                { /* block776 */
                  { /* let778 */
                    bthead_int_int_6 * restrict cur  = (in -> kids)[i ];
                    size_t cl  = (level  -  1 );
                    // ----------
                    while ((cl  >  0 )) {
                        { /* let783 */
                          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)cur );
                          // ----------
                          cur  = (cin -> kids)[(cur -> n)];
                          cl  = (cl  -  1 );
                        }
                    }
                    { /* let787 */
                      pair_int_int pred  = (cur -> items)[((cur -> n) -  1 )];
                      // ----------
                      { /* let790 */
                        pair_int_int * restrict slot  = ((h -> items) +  i  );
                        // ----------
                        (*slot ) = pred ;
                      }
                      return del_btree_int_int_6 ((in -> kids)[i ], (level  -  1 ), (pred . key));
                    }
                  }
                }
            }
            { /* let794 */
              bthead_int_int_6 * restrict rkid  = (in -> kids)[(i  +  1 )];
              // ----------
              if ((rkid -> n) >=  6 )
                { /* block800 */
                  { /* let802 */
                    bthead_int_int_6 * restrict cur  = (in -> kids)[(i  +  1 )];
                    size_t cl  = (level  -  1 );
                    // ----------
                    while ((cl  >  0 )) {
                        { /* let807 */
                          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)cur );
                          // ----------
                          cur  = (cin -> kids)[0];
                          cl  = (cl  -  1 );
                        }
                    }
                    { /* let811 */
                      pair_int_int succ  = (cur -> items)[0];
                      // ----------
                      { /* let814 */
                        pair_int_int * restrict slot  = ((h -> items) +  i  );
                        // ----------
                        (*slot ) = succ ;
                      }
                      return del_btree_int_int_6 ((in -> kids)[(i  +  1 )], (level  -  1 ), (succ . key));
                    }
                  }
                }
            }
            merge_btree_int_int_6 (in , i , (level  -  1 ));
            return del_btree_int_int_6 ((in -> kids)[i ], (level  -  1 ), key );
          }
        }
      }
    if (level  ==  0 )
      { /* block823 */
        return false ;
      }
    { /* let825 */
      btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
      // ----------
      { /* let829 */
        bthead_int_int_6 * restrict kid  = (in -> kids)[i ];
        // ----------
        if ((kid -> n) <  6 )
          { /* block835 */
            i  = fill_btree_int_int_6 (in , i , (level  -  1 ));
          }
      }
      return del_btree_int_int_6 ((in -> kids)[i ], (level  -  1 ), key );
    }
    return false ;
  }
}
Either_BTREE_ERR_size_t delete_btree_int_int_6 (btree_int_int_6 * restrict tree , int key ) {
  if (!(tree -> root))
    { /* block846 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (!del_btree_int_int_6 ((tree -> root), (tree -> height), key ))
    { /* block853 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (((tree -> root)-> n) ==  0 )
    { /* block859 */
      { /* let861 */
        bthead_int_int_6 * restrict old  = (tree -> root);
        // ----------
        if ((tree -> height) ==  0 )
          (tree -> root) = NULL ;
        else
          { /* let867 */
            btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)old );
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
#endif /* __BTREE_IMPL__int_int_6__H_ */ 
long long ms_now () {
  { /* let875 */
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
  ({ /* letn885 */
    btree_int_int_6 tr  __attribute__((__cleanup__(free_btree_int_int_6 ))) = new_btree_int_int_6 ();
    // ----------
    reseed ();
    { /* let888 */
      int64_t ok  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let893 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let898 */
              Either_BTREE_ERR_size_t match897  = insert_btree_int_int_6 ((&tr ), key , (key  +  1 ));
              // ----------
              if ((match897 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let902 */
                    size_t n  = (((match897 . data). right). value);
                    // ----------
                    ok  += ((int64_t)n ) ;
                  }
              }
              else if ((match897 . ctor) ==  LEFT_CTOR  ) {
                  { /* let905 */
                    BTREE_ERR e  = (((match897 . data). left). error);
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
    { /* let908 */
      int64_t hit  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let913 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let918 */
              Maybe_ref_pair_int_int match917  = search_btree_int_int_6 ((&tr ), key );
              // ----------
              if ((match917 . ctor) ==  JUST_CTOR  ) {
                  { /* let922 */
                    pair_int_int * restrict p  = (((match917 . data). just). value);
                    // ----------
                    hit  += (p -> val) ;
                  }
              }
              else if ((match917 . ctor) ==  NOTHING_CTOR  ) {
                  ((void)0);
              }
            }
          }
      }
      printf ("  (search checksum: %lld)\n", hit );
      printf ("  search %d keys: %lld ms\n", N , (ms_now () -  t0  ));
    }
    { /* let925 */
      long long t0  = ms_now ();
      // ----------
      sink  = 0;
      traverse_btree_int_int_6 ((&tr ), tally );
      printf ("  (traverse checksum: %lld)\n", sink );
      printf ("  traverse in order: %lld ms\n", (ms_now () -  t0  ));
    }
    reseed ();
    { /* let928 */
      int64_t gone  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let933 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let938 */
              Either_BTREE_ERR_size_t match937  = delete_btree_int_int_6 ((&tr ), key );
              // ----------
              if ((match937 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let942 */
                    size_t n  = (((match937 . data). right). value);
                    // ----------
                    { /* block944 */
                      ((void)n );
                      gone  += 1 ;
                    }
                  }
              }
              else if ((match937 . ctor) ==  LEFT_CTOR  ) {
                  { /* let947 */
                    BTREE_ERR e  = (((match937 . data). left). error);
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
