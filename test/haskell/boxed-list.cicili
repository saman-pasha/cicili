
(source "boxed_list.c"
  (make :std #t :haskell #t :compile #t :link "-lboxed_list.o -o main")

  (@define __Maybe_int__H_IMPL__)
  
  (decl-BoxedList   BoxedList^int int)
  (impl-BoxedList   BoxedList^int int (\\ -f -v (fprintf -f "%d" -v)) " ")
  (import-BoxedList BoxedList^int int new^BoxedList^int)
  
  (func main () (out int)
        ;; test BoxedList
        (where ((lst (<> BoxedList int))
                (showl (\\ -l ((<> show BoxedList int) stdout -l))))
          (letin ((l00 ((<> BoxedNil int)))
                  (l01 ((<> new lst) '{ 1 2 3 4 5 6 7 }))
                  (l02 ((<> head lst) l01))
                  (l03 ((<> nth lst)  2 l01))
                  (l04 ((<> nth lst)  5 l01))
                  (l15 ((<> nthcdr lst) 4 l01))
                  (l05 ((<> tail lst) l01))
                  (l06 ((<> drop lst) 3 l01))
                  (l07 ((<> init lst) l01))
                  (l08 ((<> last lst) l01))
                  (l09 ((<> take lst) 0 l01))
                  (l10 ((<> take lst) 3 l01))
                  (l11 ((<> take lst) 10 l01))
                  (l12 ((<> push lst) 0 l01))
                  (l13 ((<> append lst)  l06 l01))
                  (l14 ((<> reverse lst) l01))
                  (l16 ((<> insert lst) l01 8 l15))
                  (l17 ((<> insert lst) l00 8 l15))
                  (l18 ((<> insert lst) l01 8 l00))
                  ;; analyzer alive pointer error
                  ;; (l18 ((<> insert lst) l01 8 ((<> clone Box lst) l00)))
                  (l19 ((<> delete lst) l01 l15))
                  (l20 ((<> delete lst) l16 l15))
                  (l21 ((<> replace lst) l01 9 l15))
                  (l22 ((<> replace lst) l16 9 l15))
                  (l23 ((<> insertAt  lst) l01 9 5))
                  (l24 ((<> deleteAt  lst) l23 5))
                  (l25 ((<> replaceAt lst) l24 9 5))
                  ) ; decls
            (format #t "testing list operations over %s\n" (symbol-name BoxedList^int))
            
            (printf "l01: ")
            (showl l01)
            (putchar #\Newline)
            
            (printf "length of l01: %d\n" ((<> len lst) l01))
            (printf "has length of l01: %d\n" ((<> hasLen lst) l01 7))
            
            (io l02
              (Just elm (printf "head elem of l01: %d\n" elm))
              (default (printf "couldn't find head elem in l01\n")))
            (io l03
              (Just elm (printf "3th elem of l01: %d\n" elm))
              (default (printf "couldn't find 3th elem in l01\n")))
            (io l04
              (Just elm (printf "6th elem of l01: %d\n" elm))
              (default (printf "couldn't find 6th elem in l01\n")))

            (printf "l15: 5th nthcdr of l01: ")
            (showl l15)
            (putchar #\Newline)

            (printf "tail of l01: ")
            (showl l05)
            (putchar #\Newline)

            (printf "l06: drop 3 elems from l01: ")
            (showl l06)
            (putchar #\Newline)

            (printf "init of l01: ")
            (showl l07)
            (putchar #\Newline)

            (printf "last of l01: ")
            (showl l08)
            (putchar #\Newline)

            (printf "take 0 from l01: ")
            (showl l09)
            (putchar #\Newline)

            (printf "take 3 from l01: ")
            (showl l10)
            (putchar #\Newline)

            (printf "take 10 from l01: ")
            (showl l11)
            (putchar #\Newline)

            ;; test wheather push keeps the origin list alive even l01 is freed
            ;; (io l01
            ;;   (Hold _ countPtr
            ;;         (printf "count after pushed with clone: %d\n" (cof countPtr))))
            ;; ((<> free Box BoxedList^int) (aof l01))
            ;; (io l01
            ;;   (Hold _ countPtr
            ;;         (printf "count after free origin list: %d\n" (cof countPtr))))
            (printf "push 0 to l01: ")
            (showl l12)
            (putchar #\Newline)

            ;; ((<> free Box BoxedList^int) (aof l01))
            (printf "append l06 to l01: ")
            (showl l13)
            (putchar #\Newline)

            (printf "reverse of l01: ")
            (showl l14)
            (putchar #\Newline)

            (printf "l16: an 8 digit inserted at 5th nthcdr of l01: ")
            (showl l16)
            (putchar #\Newline)
            
            (printf "an 8 digit inserted after nil list: ")
            (showl l17)
            (putchar #\Newline)
            
            (printf "an 8 digit inserted at nil cursor (push back): ")
            (showl l18)
            (putchar #\Newline)
            
            (printf "delete 5 from origin list: ")
            (showl l19)
            (putchar #\Newline)
            
            (printf "l20: delete 5 from shared element in other produced list l16: ")
            (showl l20)
            (putchar #\Newline)
            
            (printf "replace 5 in origin list with 9: ")
            (showl l21)
            (putchar #\Newline)
            
            (printf "replace 5 in shared element in other produced list with 9 l16: ")
            (showl l22)
            (putchar #\Newline)

            (printf "insert 9 by index: ")
            (showl l23)
            (putchar #\Newline)
            
            (printf "delete 6th from shared element in other produced list by index: ")
            (showl l24)
            (putchar #\Newline)
            
            (printf "replace 6th in shared element in other produced list with 9 by index: ")
            (showl l25)
            (putchar #\Newline)

            ))

        ;; test List
        (where ((lst (<> List int))
                (showl (\\ -l ((<> show List int) stdout -l))))
          (letin ((* l00 ((<> Nil int)))
                  (* l01 ((<> new lst) '{ 1 2 3 4 5 6 7 }))
                  (l02 ((<> head lst) l01))
                  (l03 ((<> nth lst)  2 l01))
                  (l04 ((<> nth lst)  5 l01))
                  (* l15 ((<> nthcdr lst) 4 l01))
                  (* l05 ((<> tail lst) l01))
                  (* l06 ((<> drop lst) 3 l01))
                  (* l07 ((<> init lst) l01))
                  (* l08 ((<> last lst) l01))
                  (* l09 ((<> take lst) 0 l01))
                  (* l10 ((<> take lst) 3 l01))
                  (* l11 ((<> take lst) 10 l01))
                  (* l12 ((<> push lst) 0 l01))
                  (* l13 ((<> append lst)  l06 l01))
                  (* l14 ((<> reverse lst) l01))
                  (* l16 ((<> insert lst) l01 8 l15))
                  (* l17 ((<> insert lst) l00 8 l15))
                  (* l18 ((<> insert lst) l01 8 l00))
                  (* l19 ((<> delete lst) l01 l15))
                  (* l20 ((<> delete lst) l16 ((<> nthcdr lst) 5 l16)))
                  (* l21 ((<> replace lst) l01 9 l15))
                  (* l22 ((<> replace lst) l16 9 ((<> nthcdr lst) 5 l16)))
                  (* l23 ((<> insertAt  lst) l01 9 5))
                  (* l24 ((<> deleteAt  lst) l23 5))
                  (* l25 ((<> replaceAt lst) l24 9 5))
                  ) ; decls
            (format #t "testing list operations over %s\n" (symbol-name List^int))
            
            (printf "l01: ")
            (showl l01)
            (putchar #\Newline)
            
            (printf "length of l01: %d\n" ((<> len lst) l01))
            (printf "has length of l01: %d\n" ((<> hasLen lst) l01 7))
            
            (io l02
              (Just elm (printf "head elem of l01: %d\n" elm))
              (default (printf "couldn't find head elem in l01\n")))
            (io l03
              (Just elm (printf "3th elem of l01: %d\n" elm))
              (default (printf "couldn't find 3th elem in l01\n")))
            (io l04
              (Just elm (printf "6th elem of l01: %d\n" elm))
              (default (printf "couldn't find 6th elem in l01\n")))

            (printf "l15: 5th nthcdr of l01: ")
            (showl l15)
            (putchar #\Newline)

            (printf "tail of l01: ")
            (showl l05)
            (putchar #\Newline)

            (printf "l06: drop 3 elems from l01: ")
            (showl l06)
            (putchar #\Newline)

            (printf "init of l01: ")
            (showl l07)
            (putchar #\Newline)

            (printf "last of l01: ")
            (showl l08)
            (putchar #\Newline)

            (printf "take 0 from l01: ")
            (showl l09)
            (putchar #\Newline)

            (printf "take 3 from l01: ")
            (showl l10)
            (putchar #\Newline)

            (printf "take 10 from l01: ")
            (showl l11)
            (putchar #\Newline)

            (printf "push 0 to l01: ")
            (showl l12)
            (putchar #\Newline)

            ;; ((<> free List^int) (aof l01))
            (printf "append l06 to l01: ")
            (showl l13)
            (putchar #\Newline)

            (printf "reverse of l01: ")
            (showl l14)
            (putchar #\Newline)

            (printf "l16: an 8 digit inserted at 5th nthcdr of l01: ")
            (showl l16)
            (putchar #\Newline)
            
            (printf "an 8 digit inserted after nil list: ")
            (showl l17)
            (putchar #\Newline)
            
            (printf "an 8 digit inserted at nil cursor (push back): ")
            (showl l18)
            (putchar #\Newline)
            
            (printf "delete 5 from origin list: ")
            (showl l19)
            (putchar #\Newline)

            ;; the result is different from BoxedList
            ;; l16 is created from insert call so in List operations l16 is a new list
            ;; but in BoxedList operations l16 has a reference to 5th nthcdr cursor
            ;; so it needs to fins nthcdr again in new List l16 or use tail recursion
            (printf "l20: delete 5 from shared element in other produced list l16: ")
            (showl l20)
            (putchar #\Newline)
            
            (printf "replace 5 in origin list with 9: ")
            (showl l21)
            (putchar #\Newline)
            
            (printf "replace 5 in shared element in other produced list with 9 l16: ")
            (showl l22)
            (putchar #\Newline)

            (printf "insert 9 by index: ")
            (showl l23)
            (putchar #\Newline)
            
            (printf "delete 6th from shared element in other produced list by index: ")
            (showl l24)
            (putchar #\Newline)
            
            (printf "replace 6th in shared element in other produced list with 9 by index: ")
            (showl l25)
            (putchar #\Newline)

            )) ; letin

        ;; usefull to check which pointers were allocated
        ;; --analyze will print only unallocated pointers
        ;; otherwise is not needed to show stack
        ;; (__h_stack_show)
        
        ) ; main

  ) ; "list.c"
