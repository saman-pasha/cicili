;; My Cicili for a List
;; each List must be defined by this generic
(generic decl-List (type a)
         
         (decl-class (List type)
           (= Empty (<> Empty a))
           (= Cons  (<> Cons a)
              (a head)
              (type tail))
           ;; functions can accept an instance or not,
           ;; with any name
           ;; at any position in parameter list
           ;; they will be accessed with '\.' 'selector' operator
           ;; selector finds the path to the function
           ;; selected function could be called then
           ;; ((\. nth list-instance) 0 alist)
           (func next   ((type list)) (out type))
           (func nth    ((int index) (type list)) (out (<> Maybe a)))
           (func head   ((type list)) (out (<> Maybe a)))
           (func drop   ((int index) (type list)) (out type))
           (func tail   ((type list)) (out type))
           (func len    ((type list)) (out int))
           (func hasLen ((type list) (int desired)) (out int))
           (func take   ((int len) (type list)) (out type))
           (func last   ((type list)) (out type))
           (func push   ((a item) (type list)) (out type))
           (func append ((type llist) (type rlist)) (out type))
           (func show   ((type list))))

         (decl) (func (<> new type Pure) ((const a * buf) (int len)) (out type))
         (decl) (func (<> new type Wrap) ((const a item)) (out type))
         
         ) ; decl-List

(generic impl-List (type a fmt)

         (impl-class (List type)
           (= Empty (<> Empty a))
           (= Cons  (<> Cons a)
              (a head)
              (type tail))
           
           (func next ((type list))
                 (out type)
                 (return
                   (match list
                     (* Cons _ tail tail)
                     (default ((<> Empty a))))))
           
           (func nth ((int index) (type list))
                 (out (<> Maybe a))
                 (return
                   (match list
                     (* Cons head tail
                        (case (== index 0) ((<> Just a) head)
                              otherwise    ((\. nth list) (-- index) tail)))
                     (default ((<> Nothing a))))))

           (func head ((type list))
                 (out (<> Maybe a))
                 (return ((\. nth list) 0 list)))

           (func drop ((int index) (type list))
                 (out type)
                 (return
                   (case (== index 0) list
                         otherwise    (match list
                                        (* Cons _ tail ((\. drop list) (-- index) tail))
                                        (default ((<> Empty a)))))))
           
           (func tail ((type list))
                 (out type)
                 (return ((\. drop list) 0 list)))
           
           (func len ((type list))
                 (out int)
                 (return (match list
                           (* Cons _ tail (+ 1 ((\. len list) tail)))
                           (default 0))))

           (func hasLen ((type list) (int desired))
                 (out int)
                 (return (match list
                           (* Cons _ tail
                              (case (== desired 1) 1
                                    otherwise      (+ 1 ((\. hasLen list) tail (-- desired)))))
                           (default 0))))

           (func take ((int len) (type list))
                 (out type)
                 (return (match list
                           (* Cons head tail => (> len 0)
                              ((\. push list) head ((\. take list) (-- len) tail)))
                           (default ((<> Empty a))))))

           
           (func last ((type list))
                 (out type)
                 (return (match list
                           (* Cons _ tail
                              (match tail
                                (* Empty list)
                                (default ((\. last list) tail))))
                           (default list))))

           (func push ((a item) (type list))
                 (out type)
                 (return ((<> Cons a) item list)))

           ;; appends second list at the end of first list and returns the first list
           ;; no copy
           (func append ((type llist) (type rlist))
                 (out type)
                 (return (letin* ((last ((\. last llist) llist)))
                           (match last
                             (* Cons _ tail
                                (progn
                                  ((<> free type) (aof tail))
                                  (set ($ (-> last __h_data) Cons __h_1_mem) rlist)
                                  llist))
                             (default rlist)))))

           (func show ((type list))
                 (io list
                   (* Cons head tail
                      (block
                          (io tail
                            (* Cons
                               (block
                                   (fmt head)
                                 (putchar #\Space)))
                            (default (fmt head)))
                        ((<> show type) tail)))))

           ;; destructor
           ;; no parameter list
           ;; 'this' points to current instance
           (free (io this
                   (* Cons head tail
                      (block (printf "destructuring List: %p, " this)
                        (fmt head)
                        (putchar #\Newline)
                        ((<> free type) (aof tail))
                        (free this)))
                   (default (free this))))) ; Empty is pointer too

         (func (<> new type Pure) ((const a * buf) (int len))
               (out type)
               (if (null buf)
                   (return ((<> Empty a)))
                   (let ((a item . #'(cof buf)))
                     (if (== len 0)
                         (return ((<> Empty a)))
                         (return ((<> Cons a) item ((<> new type Pure) (++ buf) (-- len))))))))

         ;; for single element list
         (func (<> new type Wrap) ((const a item))
               (out type)
               (return ((<> Cons a) item ((<> Empty a)))))
         
         ) ; impl-List

(generic import-List (ctor type a)

         (import-class (List type)
           (= Empty (<> Empty a))
           (= Cons  (<> Cons a)
              (a head)
              (type tail)))
         
         (DEFMACRO ctor (buf &OPTIONAL len)
           (IF len
               `((<> new type Pure) ,buf ,len)
               (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
                   `((<> new type Pure) (cast (const a []) ,buf) ,(LENGTH (CADR buf)))
                   (ERROR (FORMAT NIL "new^List len required for dynamic array input: ~A" buf)))))

         ) ; import-List
