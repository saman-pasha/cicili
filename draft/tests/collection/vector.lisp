
(import "draft/collection/vector.lisp")

(source "vector.c"
  (make :std #t
        :haskell #t
        :compile #t
        :link #t)

  ;; prevent dependency repetition
  (@define __Maybe_int__H_IMPL__)
  (@define __Maybe_char__H_IMPL__)
  
  (decl-Vector Vector^int int)
  (impl-Vector Vector^int int (\\ -f -v (fprintf -f "%d" -v)) " " NIL)
  (import-Vector Vector^int int new^Vector^int)

  (decl-Vector Vector^char char)
  (impl-Vector Vector^char char (\\ -f -v (fprintf -f "%c" -v)) "" T)
  (import-Vector Vector^char char new^Vector^char)

  (main

    (letin (
            (v01 (pure^Vector^int 4))
            (v02 (pureCapacity^Vector^int 5 4))
            (v03 (new^Vector^int (cast (const int []) '{ 1 2 3 4 5 }) 5))
            (v04 (new^Vector^int '{ 1 2 3 4 5 6 7}))
            (v05 (new^Vector^char "abcdefghijk"))
            ;; Slice without clone is not safe
            ;; but can pass every where until referenced vector is alive and no need (letin) to destruct
            ;; use safe path with cloning or vector functions
            (v08 (Slice^int  ((<> clone Box Vector int)  v03) 2 2)) 
            (v09 (Slice^char ((<> clone Box Vector char) v05) 3 3))
            (v10 (tail^Vector^char v05))
            (v11 (drop^Vector^char 7 v05))
            (v12 (drop^Vector^char 12 v05))
            (v13 (drop^Vector^char 1 v11))
            (v14 (init^Vector^char v05))
            (v15 (init^Vector^char v14))
            (v18 (take^Vector^int 3 v03))
            (v19 (take^Vector^char 5 v05))
            (v20 (take^Vector^char 2 v19))
            (v50 (wrap^Vector^int 1000))
            ) ; decls

      (printf "v03: ")
      (show^Vector^int stdout v03)
      (putchar #\Newline)
      (printf "v05: ")
      (show^Vector^char stdout v05)
      (putchar #\Newline)

      (printf "length 5 of v03: %ld\n" (len^Vector^int v03))
      (printf "has length 6 of v05: %ld\n" (hasLen^Vector^char v05 6))
      (printf "has length 12 of v05: %ld\n" (hasLen^Vector^char v05 12))

      (where ((exit-status (\\ -status (block (printf "status: %d\n" -status)
                                              (exit EXIT_FAILURE)))))
        (block
          (io ((<> nth Vector int) 3 v03)
            (Just i (printf "4th int element of v03: %d\n" i))
            (default (exit-status -100)))
          (io ((<> nth Vector char) 5 v05)
            (Just c (printf "6th char element of v05: %c\n" c))
            (default (exit-status -101)))
          (io ((<> nth Vector char) 11 v05)
            (Nothing (printf "12th char element of v05: not found!\n"))
            (default (exit-status -102)))
          
          (io ((<> head Vector int) v08)
            (Just i (printf "head int element of v08: %d\n" i))
            (default (exit-status -103)))
          (io ((<> head Vector char) v09)
            (Just c (printf "head char element of v09: %c\n" c))
            (default (exit-status -104)))
          
          (printf "v08: ")
          (show^Vector^int stdout v08)
          (putchar #\Newline)
          (printf "v09: ")
          (show^Vector^char stdout v09)
          (putchar #\Newline)
          
          (io ((<> nth Vector int) 1 v08)
            (Just i (printf "2nd int element of v08: %d\n" i))
            (default (exit-status -105)))
          (io ((<> nth Vector char) 2 v09)
            (Just c (printf "3rd char element of v09: %c\n" c))
            (default (exit-status -106)))
          ;; referenced vector has element but slice has size limit, so not found
          (io ((<> nth Vector char) 3 v09)
            (Nothing (printf "4th char element of v09: not found!\n"))
            (default (exit-status -107)))

          ;; drop
          (io# v10
            (dead (exit-status -108))
            (* Slice (block (printf "tail v05: ")
                            (show^Vector^char stdout v10)
                            (putchar #\Newline)))
            (default (exit-status -109)))
          (io# v11
            (dead (exit-status -110))
            (* Slice (block (printf "v11: drop 7 v05: ")
                            (show^Vector^char stdout v11)
                            (putchar #\Newline)))
            (default (exit-status -111)))
          (io# v12
            (dead (exit-status -112))
            (* Slice (block (printf "drop 12 v05: Empty Slice")
                            (show^Vector^char stdout v12)
                            (putchar #\Newline)))
            (default (exit-status -113)))
          (io# v13
            (dead (exit-status -114))
            (* Slice (block (printf "drop 1 of Slice v11: ")
                            (show^Vector^char stdout v13)
                            (putchar #\Newline)))
            (default (exit-status -115)))
          ;; init
          (io# v14
            (dead (exit-status -116))
            (* Slice (block (printf "init of Slice v05: ")
                            (show^Vector^char stdout v14)
                            (putchar #\Newline)))
            (default (exit-status -117)))
          (io# v15
            (dead (exit-status -118))
            (* Slice (block (printf "init of init of Slice v05: ")
                            (show^Vector^char stdout v15)
                            (putchar #\Newline)))
            (default (exit-status -119)))
          ;; last
          (io (last^Vector^int v03)
            (Just la (printf "last of v03: %d\n" la))
            (default (exit-status -121)))
          (io (last^Vector^char v05)
            (Just la (printf "last of v05: %c\n" la))
            (default (exit-status -123)))
          ;; take
          (io# v18
            (dead (exit-status -124))
            (* Slice (block (printf "take 3 of v03: ")
                            (show^Vector^int stdout v18)
                            (putchar #\Newline)))
            (default (exit-status -125)))
          (io# v19
            (dead (exit-status -126))
            (* Slice (block (printf "take 5 of v05: ")
                            (show^Vector^char stdout v19)
                            (putchar #\Newline)))
            (default (exit-status -127)))
          (io# v20
            (dead (exit-status -128))
            (* Slice (block (printf "take 2 of take 5 of v05: ")
                            (show^Vector^char stdout v20)
                            (putchar #\Newline)))
            (default (exit-status -129)))
          ;; wrap
          (io# v50
            (dead (exit-status -300))
            (* Buffer (block (printf "wrap 1000 v50: ")
                             (show^Vector^int stdout v50)
                             (putchar #\Newline)))
            (default (exit-status -301)))
          
          ;; modification
          (letin (
                  (v033  (new^Vector^int  (cast (const int []) '{ 1 2 3 4 5 }) 5))
                  (v055  (new^Vector^char "abcdefghijk"))
                  (v21   (push^Vector^int  6 v033))
                  (v22   (push^Vector^char #\L v055))
                  (v23   (push^Vector^int  7 v08))   ; COW
                  (v24   (push^Vector^char #\M v09)) ; COW
                  (v0333 (new^Vector^int  (cast (const int []) '{ 1 2 3 }) 3))
                  (v0555 (new^Vector^char "abcdef"))
                  (v0444 (new^Vector^int  (cast (const int []) '{ 4 5 6 }) 3))
                  (v0666 (new^Vector^char "ghijkl"))
                  (v25   (append^Vector^int  v0333 v0444))
                  (v26   (append^Vector^char v0555 v0666))
                  (v27   (drop^Vector^int  1 v0444))
                  (v28   (drop^Vector^char 3 v0666))
                  (v29   (append^Vector^int  v27 v0444)) ; COW
                  (v30   (append^Vector^char v28 v0666)) ; COW
                  (v277  (drop^Vector^int  1 v0444))
                  (v288  (drop^Vector^char 3 v0666))
                  (vt1   (copy^Vector^int v0444))
                  (vt2   (copy^Vector^char v0666))
                  (v31   (reverse^Vector^int  vt1))
                  (v32   (reverse^Vector^char vt2))
                  (v33   (reverse^Vector^char v288)) ; COW
                  ) ; decls
            
            ;; push
            (io# v21
              (dead (exit-status -130))
              (* Buffer (block (printf "push 6 to v033: ")
                               (show^Vector^int stdout v21)
                               (putchar #\Newline)))
              (default (exit-status -131)))
            (io# v22
              (dead (exit-status -132))
              (* Buffer (block (printf "push L to v055: ")
                               (show^Vector^char stdout v22)
                               (putchar #\Newline)))
              (default (exit-status -133)))
            (io# v23
              (dead (exit-status -131))
              (* Buffer (block (printf "push 7 to Slice v08: ")
                               (show^Vector^int stdout v23)
                               (putchar #\Newline)))
              (default (exit-status -132)))
            (io# v24
              (dead (exit-status -133))
              (* Buffer (block (printf "push M to Slice v09: ")
                               (show^Vector^char stdout v24)
                               (putchar #\Newline)))
              (default (exit-status -134)))
            ;; append
            (io# v25
              (dead (exit-status -135))
              (* Buffer (block (printf "append v0333 to v0444: ")
                               (show^Vector^int stdout v25)
                               (putchar #\Newline)))
              (default (exit-status -136)))
            (io# v26
              (dead (exit-status -137))
              (* Buffer (block (printf "append v0555 to v0666: ")
                               (show^Vector^char stdout v26)
                               (putchar #\Newline)))
              (default (exit-status -138)))

            (printf "v27: ")
            (show^Vector^int stdout v27)
            (putchar #\Newline)
            (printf "v28: ")
            (show^Vector^char stdout v28)
            (putchar #\Newline)

            (io# v29
              (dead (exit-status -139))
              (* Buffer (block (printf "append v27 to v0444: ")
                               (show^Vector^int stdout v29)
                               (putchar #\Newline)))
              (default (exit-status -140)))
            (io# v30
              (dead (exit-status -141))
              (* Buffer (block (printf "append v28 to v0666: ")
                               (show^Vector^char stdout v30)
                               (putchar #\Newline)))
              (default (exit-status -142)))
            ;; reverse
            (io# v31
              (dead (exit-status -143))
              (* Buffer (block (printf "reverse v27: ")
                               (show^Vector^int stdout v31)
                               (putchar #\Newline)))
              (default (exit-status -144)))
            (io# v32
              (dead (exit-status -145))
              (* Buffer (block (printf "reverse v28: ")
                               (show^Vector^char stdout v32)
                               (putchar #\Newline)))
              (default (exit-status -146)))
            (io# v33
              (dead (exit-status -147))
              (* Buffer (block (printf "reverse Slice v288: ")
                               (show^Vector^char stdout v33)
                               (putchar #\Newline)))
              (default (exit-status -148)))            
            ) ; letin

          (letin (
                  (v033 (new^Vector^int  (cast (const int []) '{ 1 2 3 4 5 }) 5))
                  (v055 (new^Vector^char "abcdefghijk"))
                  (v211 (insertAt^Vector^int  v033 6   2))
                  (v222 (insertAt^Vector^char v055 #\L 3))
                  (v277 (drop^Vector^int  1 v211))
                  (v288 (drop^Vector^char 2 v222))
                  (v233 (insertAt^Vector^int  v277 7   2)) ; COW
                  (v244 (insertAt^Vector^char v288 #\M 3)) ; COW
                  (vt3  (copy^Vector^int  v233))
                  (vt4  (copy^Vector^char v244))
                  (v41  (deleteAt^Vector^int  vt3 3))
                  (v42  (deleteAt^Vector^char vt4 7))
                  (vt7  (drop^Vector^int  4 v233))
                  (vt8  (drop^Vector^char 5 v244))
                  (v43  (deleteAt^Vector^int  vt7 1)) ; COW
                  (v44  (deleteAt^Vector^char vt8 3)) ; COW
                  (vt5  (copy^Vector^int  v233))
                  (vt6  (copy^Vector^char v244))
                  (v45  (replaceAt^Vector^int  vt5 9   3))
                  (v46  (replaceAt^Vector^char vt6 #\K 7))
                  (vt9  (drop^Vector^int  4 v233))
                  (vt10 (drop^Vector^char 5 v244))
                  (v47  (replaceAt^Vector^int  vt9  9 1))   ; COW
                  (v48  (replaceAt^Vector^char vt10 #\K 3)) ; COW
                  (vt51  (copy^Vector^int  v233))
                  (vt61  (copy^Vector^char v244))
                  (v451  (resize^Vector^int  vt51 1))
                  (v461  (resize^Vector^char vt61 15))
                  (vt91  (drop^Vector^int  4 v233))
                  (vt101 (drop^Vector^char 5 v244))
                  (v471  (resize^Vector^int  vt91  1))  ; COW
                  (v481  (resize^Vector^char vt101 15)) ; COW
                  ) ; decls
            
            ;; insertAt
            (io# v211
              (dead (exit-status -149))
              (* Buffer (block (printf "insert 6 at 2 v033: ")
                               (show^Vector^int stdout v211)
                               (putchar #\Newline)))
              (default (exit-status -150)))
            (io# v222
              (dead (exit-status -151))
              (* Buffer (block (printf "insert L at 3 v055: ")
                               (show^Vector^char stdout v222)
                               (putchar #\Newline)))
              (default (exit-status -152)))
            (io# v233
              (dead (exit-status -153))
              (* Buffer (block (printf "insert 7 at 2 v277: ")
                               (show^Vector^int stdout v233)
                               (putchar #\Newline)))
              (default (exit-status -154)))
            (io# v244
              (dead (exit-status -155))
              (* Buffer (block (printf "insert M at 3 v288: ")
                               (show^Vector^char stdout v244)
                               (putchar #\Newline)))
              (default (exit-status -156)))
            ;; deleteAt
            (io# v41
              (dead (exit-status -157))
              (* Buffer (block (printf "delete at 3 from v233: ")
                               (show^Vector^int stdout v41)
                               (putchar #\Newline)))
              (default (exit-status -158)))
            (io# v42
              (dead (exit-status -159))
              (* Buffer (block (printf "delete at 7 from v244: ")
                               (show^Vector^char stdout v42)
                               (putchar #\Newline)))
              (default (exit-status -160)))
            (io# v43
              (dead (exit-status -161))
              (* Buffer (block (printf "delete at 1 from drop 4 v233: ")
                               (show^Vector^int stdout v43)
                               (putchar #\Newline)))
              (default (exit-status -162)))
            (io# v44
              (dead (exit-status -163))
              (* Buffer (block (printf "delete at 3 from drop 5 v244: ")
                               (show^Vector^char stdout v44)
                               (putchar #\Newline)))
              (default (exit-status -164)))
            ;; replaceAt
            (io# v45
              (dead (exit-status -165))
              (* Buffer (block (printf "replace 9 at 3 v233: ")
                               (show^Vector^int stdout v45)
                               (putchar #\Newline)))
              (default (exit-status -166)))
            (io# v46
              (dead (exit-status -167))
              (* Buffer (block (printf "replace K at 7 v244: ")
                               (show^Vector^char stdout v46)
                               (putchar #\Newline)))
              (default (exit-status -168)))
            (io# v47
              (dead (exit-status -169))
              (* Buffer (block (printf "replace at 1 of drop 4 v233: ")
                               (show^Vector^int stdout v47)
                               (putchar #\Newline)))
              (default (exit-status -170)))
            (io# v48
              (dead (exit-status -171))
              (* Buffer (block (printf "replace at 3 of drop 5 v244: ")
                               (show^Vector^char stdout v48)
                               (putchar #\Newline)))
              (default (exit-status -172)))
            ;; resize
            (io# v451
              (dead (exit-status -173))
              (* Buffer (block (printf "resize 1 v233: ")
                               (show^Vector^int stdout v451)
                               (putchar #\Newline)))
              (default (exit-status -174)))
            (io# v461
              (dead (exit-status -175))
              (* Buffer (block (printf "resize 15 v244: ")
                               (show^Vector^char stdout v461)
                               (putchar #\Newline)))
              (default (exit-status -176)))
            (io# v471
              (dead (exit-status -177))
              (* Buffer (block (printf "resize 1 of drop 4 v233: ")
                               (show^Vector^int stdout v471)
                               (putchar #\Newline)))
              (default (exit-status -178)))
            (io# v481
              (dead (exit-status -179))
              (* Buffer (block (printf "resize 15 of drop 5 v244: ")
                               (show^Vector^char stdout v481)
                               (putchar #\Newline)))
              (default (exit-status -180)))

            ;; iterator
            (letin ((sliceToSlice ((<> drop Vector^char) 2 v481)))
              (io ((<> iterator Vector^char) v481)
                ((\, begin end)
                 (block (printf "iterator begin: %s\n" begin)
                        (printf "iterator content: ")
                        (while (!= begin end)
                          (printf "%c" (cof begin))
                          (++ begin))
                        (printf "\n"))))
              (io ((<> iterator Vector^char) sliceToSlice)
                ((\, begin end)
                 (block (printf "iterator STS begin: %s\n" begin)
                        (printf "iterator STS content: ")
                        (while (!= begin end)
                          (printf "%c" (cof begin))
                          (++ begin))
                        (printf "\n")))))
            (iterate (beg end v211)
              (printf "%d" (cof beg))) ; cursor is beg
            (putchar #\Newline) 
            (iterate (beg end v222 :reverse T) ; cursor is end
              (printf "%c" (cof end)))
            (putchar #\Newline)
            
            ) ; letin
          
          )) ; where
      ) ; letin
    ) ; main
  ) ; vector.c


;; v03: 1 2 3 4 5
;; v05: abcdefghijk
;; length 5 of v03: 5
;; has length 6 of v05: 6
;; has length 12 of v05: 11
;; 4th int element of v03: 4
;; 6th char element of v05: f
;; 12th char element of v05: not found!
;; head int element of v08: 3
;; head char element of v09: d
;; v08: 3 4
;; v09: def
;; 2nd int element of v08: 4
;; 3rd char element of v09: f
;; 4th char element of v09: not found!
;; tail v05: bcdefghijk
;; v11: drop 7 v05: hijk
;; drop 12 v05: Empty Slice
;; drop 1 of Slice v11: ijk
;; init of Slice v05: abcdefghij
;; init of init of Slice v05: abcdefghi
;; last of v03: 5
;; last of v05: k
;; take 3 of v03: 1 2 3
;; take 5 of v05: abcde
;; take 2 of take 5 of v05: ab
;; wrap 1000 v50: 1000
;; push 6 to v033: 1 2 3 4 5 6
;; push L to v055: abcdefghijkL
;; push 7 to Slice v08: 3 4 7
;; push M to Slice v09: defM
;; append v0333 to v0444: 1 2 3 4 5 6
;; append v0555 to v0666: abcdefghijkl
;; v27: 5 6
;; v28: jkl
;; append v27 to v0444: 5 6 4 5 6
;; append v28 to v0666: jklghijkl
;; reverse v27: 6 5 4
;; reverse v28: lkjihg
;; reverse Slice v288: lkj
;; insert 6 at 2 v033: 1 2 6 3 4 5
;; insert L at 3 v055: abcLdefghijk
;; insert 7 at 2 v277: 2 6 7 3 4 5
;; insert M at 3 v288: cLdMefghijk
;; delete at 3 from v233: 2 6 7 4 5
;; delete at 7 from v244: cLdMefgijk
;; delete at 1 from drop 4 v233: 4
;; delete at 3 from drop 5 v244: fghjk
;; replace 9 at 3 v233: 2 6 7 9 4 5
;; replace K at 7 v244: cLdMefgKijk
;; replace at 1 of drop 4 v233: 4 9
;; replace at 3 of drop 5 v244: fghKjk
;; resize 1 v233: 2
;; resize 15 v244: cLdMefghijk
;; resize 1 of drop 4 v233: 4
;; resize 15 of drop 5 v244: fghijk
;; iterator begin: fghijk
;; iterator content: fghijk
;; iterator STS begin: hijk
;; iterator STS content: hijk
;; 263450
;; kjihgfedLcba
