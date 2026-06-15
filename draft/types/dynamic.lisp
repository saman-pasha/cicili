
(import "draft/collection/btree.lisp")
(import "draft/io/stringbuffer.lisp")

(header "dynamic.h"
  ()

  ;; forward declaration for list and b-tree
  (typedef (struct (<> class List DynamicType)) * (<> List DynamicType))
  (typedef (struct (<> class BTree CStr DynamicType)) * (<> BTree CStr DynamicType))

  (decl-box DynamicType
    (= String  (<> Dynamic String)  (String data))
    (= Integer (<> Dynamic Integer) (i64    data))
    (= Float   (<> Dynamic Float)   (real   data))
    (= Boolean (<> Dynamic Boolean) (Bool   data))
    (= List    (<> Dynamic List)    ((<> List DynamicType) data) (CStr xml_name))
    (= Object  (<> Dynamic Object)  ((<> BTree CStr DynamicType) data))
    (= Null    (<> Dynamic Null))
    ;; error reason should be aloocated string, will be always deallocated
    (= Error   (<> Dynamic Error)   (CStr reason))
    (= Thunk   (<> Dynamic Thunk)   (DynamicType args) (func fptr ((DynamicType params)) (out DynamicType)))
    (func parseJson ((CFile file)) (out DynamicType))
    (func toJson    ((CFile file) (DynamicType dt)) (out int))
    (func toXml     ((CFile file) (CStr root) (DynamicType dt)) (out int))
    (func search    ((DynamicType dt) (CStr path)) (out DynamicType))
    (func force     ((DynamicType thunk)) (out DynamicType))
    (func show      ((CFile file) (DynamicType dt)) (out size_t)))
    
  ;; dependencies
  (decl-List (<> List DynamicType) DynamicType)
  (decl-B-Tree (<> BTree CStr DynamicType) CStr DynamicType)

  (decl-StringBuffer char)

  ) ; dynamic.h

(source "dynamic.c"
  (make :std #t
        :haskell #t
        :compile #t
        :link #f)

  (include "dynamic.h")
  (include <limits.h>)

  (impl-StringBuffer char)

  (impl-box DynamicType
    (= String  (<> Dynamic String)  (String data))
    (= Integer (<> Dynamic Integer) (i64    data))
    (= Float   (<> Dynamic Float)   (real   data))
    (= Boolean (<> Dynamic Boolean) (Bool   data))
    (= List    (<> Dynamic List)    ((<> List DynamicType) data) (CStr xml_name))
    (= Object  (<> Dynamic Object)  ((<> BTree CStr DynamicType) data))
    (= Null    (<> Dynamic Null))
    ;; error reason should be aloocated string, will be always deallocated
    (= Error   (<> Dynamic Error)   (CStr reason))
    (= Thunk   (<> Dynamic Thunk)   (DynamicType args) (func fptr ((DynamicType params)) (out DynamicType)))

    (func parseJson ((CFile file))
          (out DynamicType)

          (func _parseJson ((CFile file) (bool hadItem))
                (out DynamicType)
                ;; trace
                ;; (printf "\nparseJson\n")
                
                (where ((new  ((<> new StringBuffer char) 16 #t))
                        (put  (\\ -ch (set sb ((<> put StringBuffer char) sb -ch))))
                        (derr (\\ -fmt ((<> Dynamic Error)
                                        (letn ((char * reason . nil))
                                          (asprintf (aof reason) -fmt buffer counter)
                                          reason)))))
                  (let ((size_t counter . 0)
                        (char cursor . #\Null)
                        ((<> StringBuffer char) sb . #'new)
                        (bool in_string  . false)
                        (bool in_integer . false)
                        (bool in_float   . false)
                        (bool in_symbol  . false)
                        ) ; vars

                    (while true
                      (++ counter)
                      (set cursor (fgetc file))
                      (when (!= (feof file) 0) (set cursor #\Null))

                      ;; trace
                      ;; (fputc cursor stdout)
                      
                      (switch cursor
                        ;; null acts like eof
                        (case #\Null (fclose file))
                        ;; separator
                        (case #\])
                        (case #\})
                        (case #\,)
                        (case #\:)
                        ;; whitespace characters
                        (case #\Linefeed)
                        (case #\Return)
                        (case #\Space)
                        (case #\Tab)
                        (case #\Page
                          (if in_string
                              (put cursor)
                              (block (when (or (== cursor #\]) (== cursor #\})) (ungetc cursor file))
                                (if in_integer
                                    (io sb
                                      (NullTerminated buffer
                                        (let ((char * endptr)
                                              (i64 value))
                                          (set sb new)
                                          (set in_integer false)
                                          (set value (strtoll buffer (aof endptr) 10))
                                          (if (== (cof endptr) #\Null)
                                              (return ((<> Dynamic Integer) value))
                                              (return (derr "Parse Json: wrong integer value: '%s' at position: %d")))))
                                      (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer")))))
                                    (if in_float
                                        (io sb
                                          (NullTerminated buffer
                                            (let ((char * endptr)
                                                  (real value))
                                              (set sb new)
                                              (set in_float false)
                                              (set value (strtold buffer (aof endptr)))
                                              (if (== (cof endptr) #\Null)
                                                  (return ((<> Dynamic Float) value))
                                                  (return (derr "Parse Json: wrong floating point value: '%s' at position: %d")))))
                                          (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer")))))
                                        (if in_symbol
                                            (io sb
                                              (NullTerminated buffer len
                                                         (block (set sb new)
                                                           (set in_symbol false)
                                                           (if (== (strncmp buffer "true" len) 0)
                                                               (return ((<> Dynamic Boolean) (True)))
                                                               (if (== (strncmp buffer "false" len) 0)
                                                                   (return ((<> Dynamic Boolean) (False)))
                                                                   (if (== (strncmp buffer "null" len) 0)
                                                                       (return ((<> Dynamic Null)))
                                                                       (return (derr "Parse Json: unknown symbol: '%s' at position: %d")))))))
                                              (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer")))))
                                            (if (or (== cursor #\]) (== cursor #\}) (== cursor #\,) (== cursor #\:))
                                                (if (and hadItem (or (== cursor #\,) (== cursor #\:)))
                                                    (break)
                                                    (io sb
                                                      (NullTerminated buffer
                                                        (block (put cursor)
                                                          (return (derr "Parse Json: unmatched symbol: '%s' at position: %d"))))
                                                      (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer"))))))))))))
                          (break))
                        ;; brackets
                        (case #\[
                          (if in_string
                              (put cursor)
                              (let (((<> List DynamicType) stack . #'((<> Nil DynamicType))))
                                (while true
                                  ;; trace
                                  ;; (printf "\nStack: ")
                                  ;; (show^List^DynamicType stdout stack)
                                  ;; (putchar #\Newline)
                                  
                                  (let ((DynamicType dt_item . #'(_parseJson file true)))
                                    (io# dt_item
                                      (dead (return ((<> Dynamic Error) (strdup "Parse Json: null pointer"))))
                                      (* Error reason (if (== (strncmp reason "Parse Json: unmatched symbol" 28) 0)
                                                          (let ((char sym . #'(cof (+ reason 31))))
                                                            (if (== sym #\])
                                                                (block (fgetc file)
                                                                  (return ((<> Dynamic List) ((<> reverse List DynamicType) stack) "item")))
                                                                (return dt_item))) ; propagate error
                                                          (return dt_item))) ; propagate error
                                      (default
                                          (let ((char end . #'(fgetc file)))
                                            (set stack ((<> Cons DynamicType) dt_item stack))
                                            (if (== cursor #\])
                                                (return ((<> Dynamic List) ((<> reverse List DynamicType) stack) "item"))
                                                (block (ungetc end file))))))))))
                          (break))
                        (case #\{
                          (if in_string
                              (put cursor)
                              (let ((size_t counter . 0)
                                    ((<> List CStr) stackKeys . #'((<> Nil CStr)))
                                    ((<> List DynamicType) stackVals . #'((<> Nil DynamicType))))
                                (while true
                                  (++ counter)
                                  ;; trace
                                  ;; (printf "\nStack Keys: ")
                                  ;; (show^List^CStr stdout stackKeys)
                                  ;; (printf "\nStack Vals: ")
                                  ;; (show^List^DynamicType stdout stackVals)
                                  ;; (putchar #\Newline)
                                  
                                  (let ((DynamicType dt_item . #'(_parseJson file true)))
                                    (io# dt_item
                                      (dead (return ((<> Dynamic Error) (strdup "Parse Json: null pointer"))))
                                      (* Error reason
                                         (if (== (strncmp reason "Parse Json: unmatched symbol" 28) 0)
                                             (let ((char sym . #'(cof (+ reason 31))))
                                               (if (== sym #\})
                                                   (block (fgetc file)
                                                     (return (match ((<> fromLists BTree CStr DynamicType)
                                                                     ((<> reverse List CStr) stackKeys)
                                                                     ((<> reverse List DynamicType) stackVals))
                                                               (Right tree ((<> Dynamic Object) tree))
                                                               ;; tree error
                                                               (default (match sb
                                                                          (NullTerminated buffer
                                                                            (progn
                                                                              (put cursor)
                                                                              (derr "Parse Json: object creation of '%s' at position: %d")))
                                                                          (default ((<> Dynamic Error)
                                                                                    (strdup "Parse Json: no buffer"))))))))
                                                   (return dt_item))) ; propagate error
                                             (return dt_item))) ; propagate error
                                      (default
                                          (let ((char end . #'(fgetc file)))
                                            (if (== (% counter 2) 1)
                                                (io# dt_item
                                                  (* String key (set stackKeys ((<> Cons CStr)
                                                                                ((<> toArray List char) (cast List^char key) #\Null)
                                                                                stackKeys)))
                                                  (default (return (match sb
                                                                     (NullTerminated buffer
                                                                       (progn
                                                                         (put cursor)
                                                                         (derr "Parse Json: object creation of '%s' at position: %d")))
                                                                     (default ((<> Dynamic Error) (strdup "Parse Json: no buffer")))))))
                                                (set stackVals ((<> Cons DynamicType) dt_item stackVals)))
                                            (if (== cursor #\})
                                                (return (match ((<> fromLists BTree CStr DynamicType)
                                                                ((<> reverse List CStr) stackKeys)
                                                                ((<> reverse List DynamicType) stackVals))
                                                          (Right tree ((<> Dynamic Object) tree))
                                                          ;; tree error
                                                          (default (match sb
                                                                     (NullTerminated buffer
                                                                       (progn
                                                                         (put cursor)
                                                                         (derr "Parse Json: object creation of '%s' at position: %d")))
                                                                     (default ((<> Dynamic Error) (strdup "Parse Json: no buffer")))))))
                                                (block (ungetc end file))))))))))
                          (break))
                        (case #\"
                          (when in_string
                            (io sb
                              (NullTerminated buffer len
                                         (block (set sb new)
                                           (set in_string false)
                                           (return ((<> Dynamic String) (pure^String buffer len)))))
                              (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer"))))))
                          (set in_string true)
                          (break))
                        (case #\.
                          (if in_string
                              (put cursor)
                              (if in_integer
                                  (block (put cursor)
                                    (set in_integer false)
                                    (set in_float true))
                                  (block (put cursor)
                                    (io sb
                                      (NullTerminated buffer (return (derr "Parse Json: invalid floating point: '%s' at position: %d")))
                                      (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer"))))))))
                          (break))
                        ;; ranges
                        (default
                            ;; digits
                            (if (and (>= cursor 48) (<= cursor 57))
                                (if in_string
                                    (put cursor)
                                    (if in_symbol
                                        (put cursor)
                                        (if in_integer
                                            (put cursor)
                                            (if in_float
                                                (put cursor)
                                                (block (put cursor)
                                                  (set in_integer true))))))
                                ;; alphabets
                                (if (or (== cursor #\_) (and (>= cursor 65) (<= cursor 90)) (and (>= cursor 97) (<= cursor 122)))
                                    (if in_string
                                        (put cursor)
                                        ;; symbols
                                        (if (and (not in_integer) (not in_float))
                                            (block (put cursor)
                                              (set in_symbol true))
                                            (block (put cursor)
                                              (io sb
                                                (NullTerminated buffer
                                                  (return (derr "Parse Json: wrong integer definition: '%s' at position: %d")))
                                                (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer"))))))))
                                    ;; all other characters
                                    (if in_string
                                        (put cursor)
                                        (block (put cursor)
                                          (io sb
                                            (NullTerminated buffer
                                              (return (derr "Parse Json: invalid character outside string quotation: '%s' at position: %d")))
                                            (default (return ((<> Dynamic Error) (strdup "Parse Json: no buffer")))))))))
                          (break)
                          ) ; default
                        )

                      (when (== cursor #\Null) (return ((<> Dynamic Error) (strdup "Parse Json: EOF")))))))
                (return ((<> Dynamic Error) (strdup "Parse Json: nothing to read")))) ; _parseJson

          (return (_parseJson file false)))
    
    (func toJson ((CFile file) (DynamicType dt))
          (out size_t)
          
          (func listToJson (((<> List DynamicType) list))
                (out size_t)
                (return (match list
                          (* Cons head tail
                             (+ ((<> toJson DynamicType) file head)                                
                                (match tail
                                  (* Cons (fprintf file ","))
                                  (default 0))
                                (listToJson tail)))
                          (default (fprintf file "]")))))

          (func objectToJson (((<> BTree CStr DynamicType) tree))
                (out size_t)
                (return (letn ((size_t counter . #'(fprintf file "{")))
                          ((<> traverse BTree CStr DynamicType)
                           tree
                           '(closure (((<> BTree CStr DynamicType pair_t) item) (Bool hasNext))
                             (set counter
                               (+ counter
                                  (match item
                                    ((\, key value)
                                     (+ (fprintf file "\"%s\":" key)
                                        ((<> toJson DynamicType) file value)
                                        (match hasNext
                                          (True (fprintf file ","))
                                          (default 0))))
                                    (default 0))))))
                          (+ counter (fprintf file "}")))))
          
          (return (match# dt
                    (dead (fprintf file "nothing"))
                    (* String  data (+ (fprintf file "\"")
                                       (show^String file data)
                                       (fprintf file "\"")))
                    (* Integer data (fprintf file "%llu" data))
                    (* Float   data (fprintf file "%Lf" data))
                    (* Boolean data (match data
                                      (True (fprintf file "true"))
                                      (default (fprintf file "false"))))
                    (* List    data (+ (fprintf file "[")
                                       (listToJson data)))
                    (* Object  data (objectToJson data))
                    (* Error   data (fprintf file "DynamicType Error: %s" data))
                    (default   (fprintf file "null")))))

    (func toXml ((CFile file) (CStr root) (DynamicType dt))
          (out size_t)

          (auto) (decl) (func objectToXml ((CStr key) ((<> BTree CStr DynamicType) tree)) (out size_t))
          (auto) (decl) (func toXml_ ((CStr key) (DynamicType dt)) (out size_t))
          
          (func listToXml ((CStr key) (CStr xml_name) ((<> List DynamicType) list))
                (out size_t)
                (return (match list
                          (* Cons head tail
                             (+ (match# head
                                  (dead 0)
                                  (* Object data (objectToXml xml_name data))
                                  (default (+ (fprintf file "<%s>" xml_name)
                                              (toXml_ xml_name head)
                                              (fprintf file "</%s>" xml_name))))
                                (listToXml key xml_name tail)))
                          (default 0))))

          (func objectToXml ((CStr key) ((<> BTree CStr DynamicType) tree))
                (out size_t)
                (return
                  (+ (fprintf file "<%s " key)
                     (letn ((size_t counter . 0))
                       ((<> traverse BTree CStr DynamicType)
                        tree
                        '(closure (((<> BTree CStr DynamicType pair_t) item) (Bool hasNext))
                          (set counter
                            (+ counter
                               (match item
                                 ((\, key value) -># value
                                  (dead 0)
                                  (* String data (+ (fprintf file "%s=" key)
                                                    (fprintf file "\"")
                                                    (show^String file data)
                                                    (fprintf file "\"")))
                                  (* List   0)
                                  (* Object 0)
                                  (default (+ (fprintf file "%s=\"" key)
                                              (toXml_ key value)
                                              (fprintf file "\""))))
                                 (default 0))
                               (fprintf file " ")))))
                       counter)
                     (fprintf file ">")
                     (letn ((size_t counter . 0))
                       ((<> traverse BTree CStr DynamicType)
                        tree
                        '(closure (((<> BTree CStr DynamicType pair_t) item) (Bool hasNext))
                          (set counter
                            (+ counter
                               (match item
                                 ((\, key value) -># value
                                  (dead 0)
                                  (* List   data xml_name (+ (fprintf file "<%s>" key)
                                                             (listToXml key xml_name data)
                                                             (fprintf file "</%s>" key)))
                                  (* Object data (objectToXml key data))
                                  (default 0))
                                 (default 0))))))
                       counter)
                     (fprintf file "</%s>" key))))

          (func toXml_ ((CStr key) (DynamicType dt))
                (out size_t)
                (return (match# dt
                          (dead (fprintf file "nothing"))
                          (* String  data (+ (fprintf file "\"")
                                             (show^String file data)
                                             (fprintf file "\"")))
                          (* Integer data (fprintf file "%llu" data))
                          (* Float   data (fprintf file "%Lf" data))
                          (* Boolean data (match data
                                            (True (fprintf file "true"))
                                            (default (fprintf file "false"))))
                          (* List    data xml_name (+ (fprintf file "<%s>" key)
                                                      (listToXml key xml_name data)
                                                      (fprintf file "</%s>" key)))
                          (* Object  data (objectToXml key data))
                          (* Error   data (fprintf file "DynamicType Error: %s" data))
                          (default (fprintf file "null")))))
          
          (return (toXml_ root dt)))
    
    (func search ((DynamicType dt) (CStr path))
          (out DynamicType)
          (return (letn ((char script [256] . '{ 0 })
                         (size_t counter . 0)
                         (char * cursor . path))
                    (for () (!= (cof cursor) #\Null) ((++ cursor))
                         (if (== (cof cursor) #\/)
                             (break)
                             (set (nth (1+ counter) script) (cof cursor))))
                    (case (== cursor path) dt
                          otherwise (match# dt
                                      (dead ((<> Dynamic Error)
                                             (letn ((char * reason . nil))
                                               (asprintf (aof reason) "Search: '%s' is not scriptable" "nothing")
                                               reason)))
                                      (* String data <!> (and (> counter 0) (== (cof cursor) #\Null))
                                         (letin* ((index (atoi script))
                                                  (witem ((<> nth String) index data)))
                                           (match witem
                                             (Just item ((<> Dynamic String) ((<> pure String) (aof item) 1)))
                                             (default ((<> Dynamic Error)
                                                       (letn ((char * reason . nil)
                                                              (defer #t) (char * objStr . #'($> showAsString (<> show DynamicType) dt)))
                                                         (asprintf (aof reason) "Search: '%s' doesn't have '%d' element(s)" objStr (+ index 1))
                                                         reason))))))
                                      (* List data
                                         (letin* ((index (atoi script))
                                                  (witem ((<> nth List DynamicType) index data)))
                                           (match witem
                                             (Just item ((<> search DynamicType) item (? (== (cof cursor) #\Null) cursor (++ cursor))))
                                             (default ((<> Dynamic Error)
                                                       (letn ((char * reason . nil)
                                                              (defer #t) (char * objStr . #'($> showAsString (<> show DynamicType) dt)))
                                                         (asprintf (aof reason) "Search: '%s' doesn't have '%d' element(s)" objStr (+ index 1))
                                                         reason))))))
                                      (* Object data
                                         (letin* ((witem ((<> search BTree CStr DynamicType) data script)))
                                           (match witem
                                             (Just (\, _ value) ((<> search DynamicType)
                                                                 value (? (== (cof cursor) #\Null) cursor (++ cursor))))
                                             (default ((<> Dynamic Error)
                                                       (letn ((char * reason . nil)
                                                              (defer #t) (char * objStr . #'($> showAsString (<> show DynamicType) dt)))
                                                         (asprintf (aof reason) "Search: '%s' doesn't have '%s' key" objStr script)
                                                         reason))))))
                                      (default ((<> Dynamic Error)
                                                (letn ((char * reason . nil)
                                                       (defer #t) (char * objStr . #'($> showAsString (<> show DynamicType) dt)))
                                                  (asprintf (aof reason) "Search: '%s' is not scriptable with path: '%s'" objStr script)
                                                  reason))))))))
    
    (func force ((DynamicType thunk))
          (out DynamicType)
          (return (match# thunk
                    (dead ((<> Dynamic Error) (strdup "force dead thunk")))
                    (* Thunk args fptr (fptr args))
                    (default ((<> Dynamic Error)
                              (letn ((char * reason . nil)
                                     (defer #t) (char * objStr . #'($> showAsString (<> show DynamicType) thunk)))
                                (asprintf (aof reason) "DynamicType: '%s' is not a thunk to be forced" objStr)
                                reason))))))

    (func show ((CFile file) (DynamicType dt))
          (out size_t)
          (return (match# dt
                    (dead (fprintf file "nil"))
                    (* String  data (+ (fprintf file "\"")
                                       (show^String file data)
                                       (fprintf file "\"")))
                    (* Integer data (fprintf file "%llu" data))
                    (* Float   data (fprintf file "%Lf" data))
                    (* Boolean data (match data
                                      (True (fprintf file "#t"))
                                      (default (fprintf file "#f"))))
                    (* List    data ((<> show List DynamicType) file data))
                    (* Object  data ((<> show BTree CStr DynamicType) file data))
                    (* Error   data (fprintf file "DynamicType Error: %s" data))
                    (* Thunk   args fptr (+ (fprintf file "<Thunk: ")
                                            ((<> show DynamicType) file args)
                                            (fprintf file " 0x%zx>" (cast size_t fptr))))
                    (default (fprintf file "nil")))))

    (free (syslog! (printf "DynamicType free!"))
      (io this
        (* String data (free^String (aof data)))
        (* List   data ((<> free List DynamicType) (aof data)))
        (* Object data ((<> free BTree CStr DynamicType) (aof data)))
        (* Error  data (free data))
        (* Thunk  args ((<> free Box DynamicType) (aof args))))
      (free this))

    ) ; impl-box

  ;; dependencies
  (impl-List (<> List DynamicType) DynamicType (\\ -f -v ((<> show DynamicType) -f -v)) " ")

  (static)
  (func compareKey ((CStr lkey) (CStr rkey))
        (out Ordering)
        (return (letn ((int res . #'(strcmp lkey rkey)))
                  (case (<  res 0) (LT)
                        (== res 0) (EQ)
                        otherwise  (GT)))))
  
  (fn showItem -file -item
      (match -item
        ((\, key value) (+ (fprintf -file "(\"%s\": " key)
                           ((<> show DynamicType) -file value)
                           (fprintf -file ")")))
        (default 0)))

  (impl-B-Tree (<> BTree CStr DynamicType)
    CStr
    DynamicType
    3
    compareKey
    (\\ -file -key (fprintf -file "\"%s\"" -key))
    showItem)
  
  ) ; dynamic.c
