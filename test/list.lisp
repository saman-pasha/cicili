(source "list.c" (:std #t :compile #t :link #t)
        (struct CharList
          (member char arr [8]))

        (main*
         (let ((CharList fi . '{ "abcdefgh" })
               (CharList se . '{ "ijklmnop" }))
           (set ($ fi arr) "qrst")
           (set fi se)
           (format #t "%.*s\n" (cast int (sizeof ($ fi arr))) ($ fi arr)))))
