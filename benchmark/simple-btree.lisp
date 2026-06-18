
;;; BTree with List vs BTree with BoxedList

(import "draft/collection/btree.lisp")

(source "simple_btree.c"
  (make :std #t
        :haskell #t
        :compile #t
        :link "simple_btree.o -o simple_btree")

  (include <time.h>)

  ;; Define a simple User type, contains name and salary
  ;; id is not included in User type, chosen as key
  (typedef (Tuple (<> Cell String) int) User)

  (func compareKey ((int lkey) (int rkey))
        (out Ordering)
        (return (case (<  lkey rkey) (LT)
                      (== lkey rkey) (EQ)
                      otherwise      (GT))))

  ;; reducible functions, curry form call
  (fn showKey -file -key
      (fprintf -file "%d" -key))

  (fn showValue -file -u
      (match -u
        ((\, wname salary)
         (match ((<> get Cell String) wname)
           (Just name (+ (fprintf -file "('")
                         (show^String -file name)
                         (fprintf -file "', %d)" salary)))
           (default (fprintf -file "item is deleted in another version!"))))
        (default 0)))
  
  (fn showItem -file -item
      (match -item
        ((\, id (\, wname salary)) (match ((<> get Cell String) wname)
                                     (Just name (+ (fprintf -file "(%d, '" id)
                                                   (show^String -file name)
                                                   (fprintf -file "', %d)" salary)))
                                     (default (fprintf -file "%d, but item is deleted in another version!" id))))
        (default 0)))

  (decl-List List^User User)
  (impl-List List^User User showValue " ")

  (generic tree-type
    (3t) ; 3t is BTree^int^User type
    
    (decl-B-Tree 3t ; 3t is BTree^int^User type
      ;;   item : (Tuple int User)
      int       ; int  : key type, user id
      User)     ; User : value type
    
    (impl-B-Tree 3t ; 3t is BTree^int^User type
      ;;    item : (Tuple int User)
      int        ; int  : key type, user id
      User       ; User : value type
      5          ; m    : order (degree)
      compareKey ; key comparision function
      showKey    ; show key function
      showItem)  ; show item function
    
    (func insertMany ((3t * pwtree) (int from) (int to))
          (let ((char keyStr [10]))
            (for ((int i . from)) (<= i to) ((++ i))
                 (sprintf keyStr "%d" i)
                 (let ((String name . #'(letin ((* r1 (new^String^Const "User "))
                                                (* r2 (new^String^Const keyStr)))
                                          (append^String r1 r2))))
                   
                   (io ((<> insert 3t) (cof pwtree) i (cast User '{ ((<> new Cell String) name) (+ i 2000) }))
                     (Right new_tree (block
                                       ;; (format #t "Inserted: %d, " i)
                                       ;; (show^String stdout name)
                                       ;; (putchar #\Newline)
                                       ((<> free 3t) pwtree)
                                       (set (cof pwtree) new_tree)))

                     (Left err ;; redirects stdout to stderr
                           (error! (printf "Error during insertion: ")
                                   ((<> show 3t Error) err)
                                   (putchar #\Newline)
                                   (exit -1))))

                   ))))

    (func deleteMany ((3t * pwtree) (int from) (int to))
          ;; callback to release item resources
          (let ((auto item_deallocator . '(lambda (((<> 3t pair_t) item))
                                           (io item
                                             ((\, _key (\, wname)) (block
                                                                     ;; (printf "Deleted: %d, " key)
                                                                     ;; (io ((<> get Cell String) wname)
                                                                     ;;   (Just name (show^String stdout name)))
                                                                     ;;  (putchar #\Newline)
                                                                     ((<> free Cell String) (aof wname))))))))            

            (for ((int i . from)) (<= i to) ((++ i))
                 (io ((<> delete 3t) (cof pwtree) i item_deallocator)
                   (Right new_tree (block
                                     ((<> free 3t) pwtree)
                                     (set (cof pwtree) new_tree)))
                   (Left err (error! (printf "Error during deletion: ")
                                     ((<> show 3t Error) err)
                                     (putchar #\Newline)
                                     (exit -1))))

               )))

    (func searchMany ((3t * pwtree) (int from) (int to))
          (for ((int i . from)) (<= i to) ((++ i))
               (io ((<> search 3t) (cof pwtree) i)
                 (Just _item (block
                               ;; (format #t "Search Found: " )
                               ;; ($> showItem stdout item)
                               ;; (putchar #\Newline)
                               ))
                 (Nothing (error!
                            ;; (printf "Search Not Found: %d" i)
                            ;; (putchar #\Newline)
                            ))))
          ) ; searchMany

    ;; 1 Writer, 4 Reader
    (func main ()
          (format #t "Single-thread pure functional manipulation of '%s' type into and from '%s' structure using '%s' key type.\n"
                  (symbol-name User) (symbol-name 3t) (symbol-name int))

          (let ((auto start . #'(time nil))
                (3t wtree . #'((<> Leaf 3t) ((<> Nil 3t pair_t))))
                (3t * pwtree . #'(aof wtree))
                ) ; decls

            (for ((int counter . 0)) (< counter 1000) ()
                 (insertMany pwtree 1   250)              
                 (insertMany pwtree 501 750)
                 (insertMany pwtree 251 500)
                 (insertMany pwtree 751 1000)
                 
                 (searchMany pwtree 1   250)
                 (searchMany pwtree 501 750)
                 (searchMany pwtree 251 500)
                 (searchMany pwtree 751 1000)

                 (deleteMany pwtree 1   250)
                 (deleteMany pwtree 501 750)
                 (deleteMany pwtree 251 500)
                 (deleteMany pwtree 751 1000)

                 (printf "Epoch %d\n" (++ counter))
                 ) ; for

            ((<> free 3t) pwtree)
            (format #t "Done\n")
            (format #t "%lu seconds elapsed\n" (cast ulong (- (time nil) start)))
            )) ; main
    
    ) ; tree-type
  
  (tree-type (<> BTree int User)) ; use 3t to avoid using BTree^int^User type name too many times
  
  ) ; btree.c
