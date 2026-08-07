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
  union { /* ciciliUnion116 */
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
  union { /* ciciliUnion137 */
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
  { /* let238 */
    bthead_int_int_6 * restrict leaf  = malloc (sizeof(bthead_int_int_6 ));
    // ----------
    (leaf -> n) = 0;
    return leaf ;
  }
}
bthead_int_int_6 * restrict newnode_btree_int_int_6 () {
  { /* let247 */
    btnode_int_int_6 * restrict node  = malloc (sizeof(btnode_int_int_6 ));
    // ----------
    ((node -> head). n) = 0;
    memset ((node -> kids), 0, ((2 *  6 ) *  sizeof(bthead_int_int_6 (*)) ));
    return (&(node -> head));
  }
}
void freeall_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level ) {
  if (h )
    { /* block260 */
      if (level  >  0 )
        { /* block265 */
          { /* let267 */
            btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
            // ----------
            for (size_t i  = 0; (i  <=  (h -> n) ); (++i )) {
                { /* let274 */
                  bthead_int_int_6 * restrict kid  = (in -> kids)[i ];
                  // ----------
                  if (kid )
                    { /* block280 */
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
    { /* block293 */
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
    { /* block318 */
      return true ;
    }
  { /* let320 */
    btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
    // ----------
    for (size_t i  = 0; (i  <=  (h -> n) ); (++i )) {
        { /* let327 */
          bthead_int_int_6 * restrict kid  = (in -> kids)[i ];
          // ----------
          if (!kid )
            { /* block333 */
              return false ;
            }
          if (!proof_btree_int_int_6 (kid , (level  -  1 )))
            { /* block339 */
              return false ;
            }
        }
    }
  }
  return true ;
}
bool balanced_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  if (!(tree -> root))
    { /* block347 */
      return ((tree -> height) ==  0 );
    }
  return proof_btree_int_int_6 ((tree -> root), (tree -> height));
}
Maybe_ref_pair_int_int search_btree_int_int_6 (btree_int_int_6 * restrict tree , int key ) {
  { /* let354 */
    bthead_int_int_6 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    while (h ) {
        { /* let359 */
          size_t i  = 0;
          // ----------
          while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
              (++i );
          }
          if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
            { /* block366 */
              return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  i  )});
            }
          if (level  ==  0 )
            { /* block372 */
              return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
            }
          { /* let375 */
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
  { /* let384 */
    bthead_int_int_6 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    if (!h )
      { /* block390 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((level  >  0 )) {
        { /* let395 */
          btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
          // ----------
          h  = (in -> kids)[0];
          level  = (level  -  1 );
        }
    }
    if ((h -> n) ==  0 )
      { /* block402 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  0 )});
  }
}
Maybe_ref_pair_int_int max_btree_int_int_6 (btree_int_int_6 * restrict tree ) {
  { /* let410 */
    bthead_int_int_6 * restrict h  = (tree -> root);
    size_t level  = (tree -> height);
    // ----------
    if (!h )
      { /* block416 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    while ((level  >  0 )) {
        { /* let421 */
          btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
          // ----------
          h  = (in -> kids)[(h -> n)];
          level  = (level  -  1 );
        }
    }
    if ((h -> n) ==  0 )
      { /* block428 */
        return ((Maybe_ref_pair_int_int){ .ctor = NOTHING_CTOR });
      }
    return ((Maybe_ref_pair_int_int){ .ctor = JUST_CTOR , .data.just.value = ((h -> items) +  ((h -> n) -  1 ) )});
  }
}
void walk_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level , void (*callback) (pair_int_int * restrict item )) {
  if (h )
    { /* block440 */
      if (level  ==  0 )
        for (size_t i  = 0; (i  <  (h -> n) ); (++i )) {
            callback (((h -> items) +  i  ));
        }
      else
        { /* let448 */
          btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
          // ----------
          for (size_t i  = 0; (i  <  (h -> n) ); (++i )) {
              { /* block455 */
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
  { /* let468 */
    bthead_int_int_6 * restrict full  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    // ----------
    { /* let472 */
      bthead_int_int_6 * restrict half  = (((klevel  ==  0 )) ? newleaf_btree_int_int_6 () : newnode_btree_int_int_6 ());
      // ----------
      (half -> n) = (6 -  1 );
      memcpy ((half -> items), ((full -> items) +  6 ), ((6 -  1 ) *  sizeof(pair_int_int ) ));
      if (klevel  >  0 )
        { /* block481 */
          { /* let483 */
            btnode_int_int_6 * restrict fin  = ((btnode_int_int_6 *)full );
            btnode_int_int_6 * restrict hin  = ((btnode_int_int_6 *)half );
            // ----------
            memcpy ((hin -> kids), ((fin -> kids) +  6 ), (6 *  sizeof(bthead_int_int_6 (*)) ));
          }
        }
      (full -> n) = (6 -  1 );
      memmove (((parent -> kids) +  (at  +  2 ) ), ((parent -> kids) +  (at  +  1 ) ), (((ph -> n) -  at  ) *  sizeof(bthead_int_int_6 (*)) ));
      { /* let491 */
        bthead_int_int_6 ** kslot  = ((parent -> kids) +  (at  +  1 ) );
        // ----------
        (*kslot ) = half ;
      }
      memmove (((ph -> items) +  (at  +  1 ) ), ((ph -> items) +  at  ), (((ph -> n) -  at  ) *  sizeof(pair_int_int ) ));
      { /* let495 */
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
  { /* let502 */
    size_t i  = 0;
    // ----------
    while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
      { /* block509 */
        return false ;
      }
    if (level  ==  0 )
      { /* block514 */
        { /* block516 */
          if (i  <  (h -> n) )
            { /* block521 */
              memmove (((h -> items) +  (i  +  1 ) ), ((h -> items) +  i  ), (((h -> n) -  i  ) *  sizeof(pair_int_int ) ));
            }
          { /* let524 */
            pair_int_int * restrict slot  = ((h -> items) +  i  );
            // ----------
            (slot -> key) = key ;
            (slot -> val) = val ;
          }
          (h -> n) = ((h -> n) +  1 );
          return true ;
        }
      }
    { /* let527 */
      btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
      // ----------
      { /* let531 */
        bthead_int_int_6 * restrict child  = (in -> kids)[i ];
        // ----------
        if ((child -> n) ==  ((2 *  6 ) -  1 ) )
          { /* block537 */
            { /* block539 */
              split_btree_int_int_6 (in , i , (level  -  1 ));
              if (((h -> items)[i ]. key) ==  key  )
                { /* block545 */
                  return false ;
                }
              if (((h -> items)[i ]. key) <  key  )
                { /* block550 */
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
    { /* block560 */
      (tree -> root) = newleaf_btree_int_int_6 ();
      (tree -> height) = 0;
    }
  if (((tree -> root)-> n) ==  ((2 *  6 ) -  1 ) )
    { /* block566 */
      { /* let568 */
        bthead_int_int_6 * restrict fh  = newnode_btree_int_int_6 ();
        // ----------
        { /* let572 */
          btnode_int_int_6 * restrict fresh  = ((btnode_int_int_6 *)fh );
          // ----------
          { /* let576 */
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
    { /* block584 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_DUPLICATE_KEY });
    }
  (tree -> len) = ((tree -> len) +  1 );
  return ((Either_BTREE_ERR_size_t){ .ctor = RIGHT_CTOR , .data.right.value = (tree -> len)});
}
void merge_btree_int_int_6 (btnode_int_int_6 * restrict parent , size_t at , size_t klevel ) {
  { /* let591 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    bthead_int_int_6 * restrict left  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict right  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let596 */
      pair_int_int * restrict down  = ((left -> items) +  (6 -  1 ) );
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      // ----------
      (*down ) = (*sep );
    }
    memcpy (((left -> items) +  6 ), (right -> items), ((right -> n) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block604 */
        { /* let606 */
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
  { /* let620 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    bthead_int_int_6 * restrict child  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict sib  = (parent -> kids)[(at  -  1 )];
    // ----------
    memmove (((child -> items) +  1 ), (child -> items), ((child -> n) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block629 */
        { /* let631 */
          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)child );
          // ----------
          memmove (((cin -> kids) +  1 ), (cin -> kids), (((child -> n) +  1 ) *  sizeof(bthead_int_int_6 (*)) ));
        }
      }
    { /* let636 */
      pair_int_int * restrict head  = ((child -> items) +  0 );
      pair_int_int * restrict sep  = ((ph -> items) +  (at  -  1 ) );
      // ----------
      (*head ) = (*sep );
    }
    if (klevel  >  0 )
      { /* block643 */
        { /* let645 */
          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)child );
          btnode_int_int_6 * restrict sin  = ((btnode_int_int_6 *)sib );
          // ----------
          { /* let651 */
            bthead_int_int_6 ** kslot  = ((cin -> kids) +  0 );
            // ----------
            (*kslot ) = (sin -> kids)[(sib -> n)];
          }
        }
      }
    { /* let654 */
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
  { /* let661 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    bthead_int_int_6 * restrict child  = (parent -> kids)[at ];
    bthead_int_int_6 * restrict sib  = (parent -> kids)[(at  +  1 )];
    // ----------
    { /* let666 */
      pair_int_int * restrict tail  = ((child -> items) +  (child -> n) );
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      // ----------
      (*tail ) = (*sep );
    }
    if (klevel  >  0 )
      { /* block673 */
        { /* let675 */
          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)child );
          btnode_int_int_6 * restrict sin  = ((btnode_int_int_6 *)sib );
          // ----------
          { /* let681 */
            bthead_int_int_6 ** kslot  = ((cin -> kids) +  ((child -> n) +  1 ) );
            // ----------
            (*kslot ) = (sin -> kids)[0];
          }
        }
      }
    { /* let684 */
      pair_int_int * restrict sep  = ((ph -> items) +  at  );
      pair_int_int * restrict head  = ((sib -> items) +  0 );
      // ----------
      (*sep ) = (*head );
    }
    memmove ((sib -> items), ((sib -> items) +  1 ), (((sib -> n) -  1 ) *  sizeof(pair_int_int ) ));
    if (klevel  >  0 )
      { /* block692 */
        { /* let694 */
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
  { /* let702 */
    bthead_int_int_6 * restrict ph  = (&(parent -> head));
    // ----------
    if (at  >  0 )
      { /* block708 */
        { /* let710 */
          bthead_int_int_6 * restrict lsib  = (parent -> kids)[(at  -  1 )];
          // ----------
          if ((lsib -> n) >=  6 )
            { /* block716 */
              { /* block718 */
                borrowLeft_btree_int_int_6 (parent , at , klevel );
                return at ;
              }
            }
        }
      }
    if (at  <  (ph -> n) )
      { /* block724 */
        { /* let726 */
          bthead_int_int_6 * restrict rsib  = (parent -> kids)[(at  +  1 )];
          // ----------
          if ((rsib -> n) >=  6 )
            { /* block732 */
              { /* block734 */
                borrowRight_btree_int_int_6 (parent , at , klevel );
                return at ;
              }
            }
        }
      }
    if (at  <  (ph -> n) )
      { /* block739 */
        merge_btree_int_int_6 (parent , at , klevel );
        return at ;
      }
    else
      { /* block743 */
        merge_btree_int_int_6 (parent , (at  -  1 ), klevel );
        return (at  -  1 );
      }
  }
}
bool del_btree_int_int_6 (bthead_int_int_6 * restrict h , size_t level , int key ) {
  { /* let749 */
    size_t i  = 0;
    // ----------
    while (((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) <  key  ) )) {
        (++i );
    }
    if ((i  <  (h -> n) ) &&  (((h -> items)[i ]. key) ==  key  ) )
      { /* block756 */
        { /* block758 */
          if (level  ==  0 )
            { /* block763 */
              { /* block765 */
                memmove (((h -> items) +  i  ), ((h -> items) +  (i  +  1 ) ), ((((h -> n) -  i  ) -  1 ) *  sizeof(pair_int_int ) ));
                (h -> n) = ((h -> n) -  1 );
                return true ;
              }
            }
          { /* let768 */
            btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
            // ----------
            { /* let772 */
              bthead_int_int_6 * restrict lkid  = (in -> kids)[i ];
              // ----------
              if ((lkid -> n) >=  6 )
                { /* block778 */
                  { /* let780 */
                    bthead_int_int_6 * restrict cur  = (in -> kids)[i ];
                    size_t cl  = (level  -  1 );
                    // ----------
                    while ((cl  >  0 )) {
                        { /* let785 */
                          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)cur );
                          // ----------
                          cur  = (cin -> kids)[(cur -> n)];
                          cl  = (cl  -  1 );
                        }
                    }
                    { /* let789 */
                      pair_int_int pred  = (cur -> items)[((cur -> n) -  1 )];
                      // ----------
                      { /* let792 */
                        pair_int_int * restrict slot  = ((h -> items) +  i  );
                        // ----------
                        (*slot ) = pred ;
                      }
                      return del_btree_int_int_6 ((in -> kids)[i ], (level  -  1 ), (pred . key));
                    }
                  }
                }
            }
            { /* let796 */
              bthead_int_int_6 * restrict rkid  = (in -> kids)[(i  +  1 )];
              // ----------
              if ((rkid -> n) >=  6 )
                { /* block802 */
                  { /* let804 */
                    bthead_int_int_6 * restrict cur  = (in -> kids)[(i  +  1 )];
                    size_t cl  = (level  -  1 );
                    // ----------
                    while ((cl  >  0 )) {
                        { /* let809 */
                          btnode_int_int_6 * restrict cin  = ((btnode_int_int_6 *)cur );
                          // ----------
                          cur  = (cin -> kids)[0];
                          cl  = (cl  -  1 );
                        }
                    }
                    { /* let813 */
                      pair_int_int succ  = (cur -> items)[0];
                      // ----------
                      { /* let816 */
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
      { /* block825 */
        return false ;
      }
    { /* let827 */
      btnode_int_int_6 * restrict in  = ((btnode_int_int_6 *)h );
      // ----------
      { /* let831 */
        bthead_int_int_6 * restrict kid  = (in -> kids)[i ];
        // ----------
        if ((kid -> n) <  6 )
          { /* block837 */
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
    { /* block848 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (!del_btree_int_int_6 ((tree -> root), (tree -> height), key ))
    { /* block855 */
      return ((Either_BTREE_ERR_size_t){ .ctor = LEFT_CTOR , .data.left.error = BT_NOT_FOUND });
    }
  if (((tree -> root)-> n) ==  0 )
    { /* block861 */
      { /* let863 */
        bthead_int_int_6 * restrict old  = (tree -> root);
        // ----------
        if ((tree -> height) ==  0 )
          (tree -> root) = NULL ;
        else
          { /* let869 */
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
  { /* let877 */
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
  ({ /* letn887 */
    btree_int_int_6 tr  __attribute__((__cleanup__(free_btree_int_int_6 ))) = new_btree_int_int_6 ();
    // ----------
    reseed ();
    { /* let890 */
      int64_t ok  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let895 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let900 */
              Either_BTREE_ERR_size_t match899  = insert_btree_int_int_6 ((&tr ), key , (key  +  1 ));
              // ----------
              if ((match899 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let904 */
                    size_t n  = (((match899 . data). right). value);
                    // ----------
                    ok  += ((int64_t)n ) ;
                  }
              }
              else if ((match899 . ctor) ==  LEFT_CTOR  ) {
                  { /* let907 */
                    BTREE_ERR e  = (((match899 . data). left). error);
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
    { /* let910 */
      int64_t hit  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let915 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let920 */
              Maybe_ref_pair_int_int match919  = search_btree_int_int_6 ((&tr ), key );
              // ----------
              if ((match919 . ctor) ==  JUST_CTOR  ) {
                  { /* let924 */
                    pair_int_int * restrict p  = (((match919 . data). just). value);
                    // ----------
                    hit  += (p -> val) ;
                  }
              }
              else if ((match919 . ctor) ==  NOTHING_CTOR  ) {
                  ((void)0);
              }
            }
          }
      }
      printf ("  (search checksum: %lld)\n", hit );
      printf ("  search %d keys: %lld ms\n", N , (ms_now () -  t0  ));
    }
    { /* let927 */
      long long t0  = ms_now ();
      // ----------
      sink  = 0;
      traverse_btree_int_int_6 ((&tr ), tally );
      printf ("  (traverse checksum: %lld)\n", sink );
      printf ("  traverse in order: %lld ms\n", (ms_now () -  t0  ));
    }
    reseed ();
    { /* let930 */
      int64_t gone  = 0;
      long long t0  = ms_now ();
      // ----------
      for (int i  = 0; (i  <  N  ); (++i )) {
          { /* let935 */
            int key  = ((int)(nextrand () &  MASK  ));
            // ----------
            { /* let940 */
              Either_BTREE_ERR_size_t match939  = delete_btree_int_int_6 ((&tr ), key );
              // ----------
              if ((match939 . ctor) ==  RIGHT_CTOR  ) {
                  { /* let944 */
                    size_t n  = (((match939 . data). right). value);
                    // ----------
                    { /* block946 */
                      ((void)n );
                      gone  += 1 ;
                    }
                  }
              }
              else if ((match939 . ctor) ==  LEFT_CTOR  ) {
                  { /* let949 */
                    BTREE_ERR e  = (((match939 . data). left). error);
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
