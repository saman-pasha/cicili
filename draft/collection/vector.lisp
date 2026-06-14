;;;; Vector Safe
(import "draft/io/stringbuffer.lisp")

;; each Vector must be defined by this generic
(generic decl-Vector
  (type a)
  
  ;; dependencies
  (decl-Maybe a)
  (decl-StringBuffer a)

  (decl-box (Vector type)
    (= Buffer (<> Buffer a) ((<> StringBuffer a) buffer))
    (= Slice  (<> Slice a)  (type vector) (int cursor) (int size))
    (= None   (<> None a))
    (func nth     ((int index) (type vector)) (out (<> Maybe a)))
    (func head    ((type list)) (out (<> Maybe a)))
    (func drop    ((int index) (type vector)) (out type))
    (func tail    ((type vector)) (out type))
    (func len     ((type vector)) (out int))
    (func hasLen  ((type vector) (int desired)) (out int))
    (func init    ((type vector)) (out type))
    (func last    ((type vector)) (out type))
    (func take    ((int len) (type vector)) (out type))
    (func push    ((a item) (type vector)) (out type))
    (func append  ((type lvector) (type rvector)) (out type))
    (func reverse ((type vector)) (out type))
    (func insertAt  ((type vector) (a item) (int index)) (out type))
    (func deleteAt  ((type vector) (int index)) (out type))
    (func replaceAt ((type vector) (a item) (int index)) (out type))
    (func copy    ((type vector)) (out type))
    (func show    ((CFile file) (type vector)) (out int))
    (func wrap    ((const a item)) (out type))
    (func toArray ((type vector)) (out a *))
    (func pureCapacity ((int capacity) (int step)) (out type))
    (func pure         ((int step)) (out type))
    ) ; decl-box

  (decl-Maybe type)
  
  ) ; decl-Vector

(generic impl-Vector
  (type
   a
   fmt  ; a reducible function ((FILE * file) (Vector vector))
   sep
   nullt)

  ;; dependencies
  (impl-Maybe a)
  (impl-StringBuffer a)

  ;; private constants
  (var bool (<> null_terminated type) . (QUASIQUOTE 'nullt)) ; inside generic default atom values should set with ` or QUASIQUOTE 

  (impl-box (Vector type)
    (= Buffer (<> Buffer a) ((<> StringBuffer a) buffer))
    (= Slice  (<> Slice a)  (type vector) (int cursor) (int size))
    (= None   (<> None a))

    (func nth ((int index) (type vector))
          (out (<> Maybe a))
          (return (match# vector
                    (dead ((<> Nothing a)))
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated buffer cursor
                                 (case (and (>= index 0) (< index cursor)) ((<> Just a) (cof (+ buffer index)))
                                       otherwise ((<> Nothing a))))
                       (default ((<> Nothing a))))
                    (* Slice vector cursor size
                       (case (and (>= index 0) (< index size)) ((<> nth type) (+ cursor index) vector)
                             otherwise ((<> Nothing a))))
                    (default ((<> Nothing a))))))

    (func head ((type vector))
          (out (<> Maybe a))
          (return (match# vector
                    (dead ((<> Nothing a)))
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated buffer cursor
                                 (case (> cursor 0) ((<> Just a) (cof buffer))
                                       otherwise ((<> Nothing a))))
                       (default ((<> Nothing a))))
                    (* Slice vector cursor
                       ((<> nth type) cursor vector))
                    (default ((<> Nothing a))))))
    
    (func drop ((int len) (type vector))
          (out type)
          (return (match# vector
                    (dead ((<> None a)))
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated _buffer cursor
                                 (case (<= len 0)     ((<> Slice a) ((<> clone Box Vector a) vector) 0 cursor)
                                       (< len cursor) ((<> Slice a) ((<> clone Box Vector a) vector) len (- cursor len))
                                       otherwise      ((<> Slice a) ((<> clone Box Vector a) vector) 0 0)))
                       (default ((<> Slice a) ((<> clone Box Vector a) vector) 0 0)))
                    (* Slice vec cursor ((<> drop Vector a) (+ cursor len) vec))
                    (default ((<> clone Box Vector a) vector)))))

    (func tail ((type vector))
          (out type)
          (return ((<> drop Vector a) 1 vector)))

    (func len ((type vector))
          (out int)
          (return (match# vector
                    (dead 0)
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated _buffer cursor cursor)
                       (default 0))
                    (* Slice _vector _cursor size size)
                    (default 0))))
    
    (func hasLen ((type vector) (int desired))
          (out int)
          (return (letn ((int len . #'((<> len Vector a) vector)))
                    (case (<= len desired) len
                          otherwise desired))))

    (func init ((type vector))
          (out type)
          (return (match# vector
                    (dead ((<> None a)))
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated _buffer cursor ((<> Slice a) ((<> clone Box Vector a) vector) 0 (- cursor 1)))
                       (default ((<> None a))))
                    (* Slice vec cursor size ((<> Slice a) ((<> clone Box Vector a) vec) cursor (- size 1)))
                    (default ((<> clone Box Vector a) vector)))))

    (func last ((type vector))
          (out type)
          (return (match# vector
                    (dead ((<> None a)))
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated _buffer cursor ((<> Slice a) ((<> clone Box Vector a) vector) (- cursor 1) 1))
                       (default ((<> None a))))
                    (* Slice vec _cursor size ((<> Slice a) ((<> clone Box Vector a) vec) (- size 1) 1))
                    (default ((<> clone Box Vector a) vector)))))

    (func take ((int len) (type vector))
          (out type)
          (return (match# vector
                    (dead ((<> None a)))
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated _buffer cursor
                                 (case (<= len 0)     ((<> Slice a) ((<> clone Box Vector a) vector) 0 0)
                                       (< len cursor) ((<> Slice a) ((<> clone Box Vector a) vector) 0 len)
                                       otherwise      ((<> Slice a) ((<> clone Box Vector a) vector) 0 0)))
                       (default ((<> Slice a) ((<> clone Box Vector a) vector) 0 0)))
                    (* Slice vec _cursor size
                       (case (<= len 0)   ((<> Slice a) ((<> clone Box Vector a) vec) 0 0)
                             (< len size) ((<> Slice a) ((<> clone Box Vector a) vec) 0 len)
                             otherwise    ((<> Slice a) ((<> clone Box Vector a) vec) 0 0)))
                    (default ((<> clone Box Vector a) vector)))))

    ;; any push makes all related variables and slices out of order
    (func push ((a item) (type vector))
          (out type)
          (return (match# vector
                    (dead ((<> None a)))
                    (* Buffer sb (progn (io ((<> take Box Vector a) (aof vector))
                                          (Just ptr (free ptr))) ; make it out of order
                                        ((<> Buffer a) ((<> put StringBuffer a) sb item))))
                    ;; COW pattern copy-on-write for Slices
                    (* Slice vec cur size (match# vec
                                            (dead ((<> None a)))
                                            (* Buffer sbs ((<> Buffer a) ((<> put StringBuffer a)
                                                                          ((<> copySlice StringBuffer a) sbs cur size)
                                                                          item)))
                                            (* Slice veci ((<> push type) item veci)) ; E
                                            (default ((<> clone Box Vector a) vec))))
                    (default ((<> clone Box Vector a) vector)))))
    
    ;; any append makes all related variables and slices out of order
    (func append ((type lvector) (type rvector))
          (out type)
          (return (match# lvector
                    (dead ((<> None a)))
                    (* Buffer sb (progn (io ((<> take Box Vector a) (aof lvector))
                                          (Just ptr (free ptr))) ; make it out of order
                                        ((<> Buffer a) ((<> print StringBuffer a) sb
                                                        ((<> toArray type) rvector)
                                                        ((<> len type) rvector)))))
                    ;; COW pattern copy-on-write for Slices
                    (* Slice vec cur size (match# vec
                                            (dead ((<> None a)))
                                            (* Buffer sbs ((<> Buffer a) ((<> print StringBuffer a)
                                                                          ((<> copySlice StringBuffer a) sbs cur size)
                                                                          ((<> toArray type) rvector)
                                                                          ((<> len type) rvector))))
                                            (* Slice veci ((<> append type) veci rvector)) ; E
                                            (default ((<> clone Box Vector a) vec))))
                    (default ((<> clone Box Vector a) lvector)))))

    (func reverse ((type vector))
          (out type)
          (return (match# vector
                    (dead ((<> None a)))
                    (* Buffer sb -> sb
                       (Buffered buffer cursor size step
                                 (letn ((a tmp))
                                   (io ((<> take Box Vector a) (aof vector))
                                     (Just ptr (free ptr))) ; make it out of order
                                   (for ((int i . 0) (j . cursor)) (< i (/ cursor 2)) ((++ i) (-- j))
                                        (set tmp                      (cof (+ buffer i))
                                             (cof (+ buffer i))       (cof (+ buffer (- j 1)))
                                             (cof (+ buffer (- j 1))) tmp))
                                   ((<> Buffer a) ((<> MakeStringBuffer a) buffer cursor size step))))
                       (NullTerminated buffer cursor size step
                                       (letn ((a tmp))
                                         (io ((<> take Box Vector a) (aof vector))
                                           (Just ptr (free ptr))); make it out of order
                                         (for ((int i . 0) (j . cursor)) (< i (/ cursor 2)) ((++ i) (-- j))
                                              (set tmp                      (cof (+ buffer i))
                                                   (cof (+ buffer i))       (cof (+ buffer (- j 1)))
                                                   (cof (+ buffer (- j 1))) tmp))
                                         ((<> Buffer a) ((<> MakeNullTerminatedBuffer a) buffer cursor size step))))
                       (default ((<> clone Box Vector a) vector)))
                    ;; COW pattern copy-on-write for Slices
                    (* Slice vec cur size (match# vec
                                            (dead ((<> None a)))
                                            (* Buffer sbs ((<> reverse type)
                                                           ((<> Buffer a) ((<> copySlice StringBuffer a) sbs cur size))))
                                            (* Slice veci ((<> reverse type) veci)) ; E
                                            (default ((<> clone Box Vector a) vec))))
                    (default ((<> clone Box Vector a) vector)))))
    
    (func insertAt ((type vector) (a item) (int index))
          (out type)
          (return (match# vector
                    (dead ((<> clone Box Vector a) vector))
                    (* Buffer sb (letn (((<> StringBuffer a) new_sb . #'((<> put StringBuffer a) sb item)))
                                   (io ((<> take Box Vector a) (aof vector))
                                     (Just ptr (free ptr))) ; make it out of order
                                   (match new_sb
                                     (Buffered ~ NullTerminated buffer cursor
                                               (progn
                                                 (for ((int i . #'(- cursor 1))) (> i index) ((-- i))
                                                      (set (cof (+ buffer i)) (cof (+ buffer (- i 1)))))
                                                 (set (cof (+ buffer index)) item)
                                                 ((<> Buffer a) new_sb)))
                                     (default ((<> clone Box Vector a) vector)))))
                    ;; COW pattern copy-on-write for Slices
                    (* Slice vec cur size (match# vec
                                            (dead ((<> clone Box Vector a) vector))
                                            (* Buffer sbs -> sbs
                                               (Buffered buffer _cursor _size step
                                                         (case (< index size)
                                                               (letn (((<> StringBuffer a) new_sb .
                                                                       #'((<> newCapacity StringBuffer a) (+ size 1) step #f)))
                                                                 ((<> Buffer a)
                                                                  ((<> print StringBuffer a)
                                                                   ((<> put StringBuffer a)
                                                                    ((<> print StringBuffer a) new_sb (+ buffer cur) index)
                                                                    item)
                                                                   (+ buffer cur index) (- size index))))
                                                               otherwise vec))
                                               (NullTerminated buffer _cursor _size step
                                                               (case (< index size)
                                                                     (letn (((<> StringBuffer a) new_sb .
                                                                             #'((<> newCapacity StringBuffer a) (+ size 1) step #t)))
                                                                       ((<> Buffer a)
                                                                        ((<> print StringBuffer a)
                                                                         ((<> put StringBuffer a)
                                                                          ((<> print StringBuffer a) new_sb (+ buffer cur) index)
                                                                          item)
                                                                         (+ buffer cur index) (- size index))))
                                                                     otherwise vec))
                                               (default vec))
                                            (* Slice veci curi ((<> insertAt type) veci item (+ cur curi index))) ; E
                                            (default ((<> clone Box Vector a) vec))))
                    (default ((<> clone Box Vector a) vector)))))
    
    (func deleteAt ((type vector) (int index))
          (out type)
          (return (match# vector
                    (dead ((<> clone Box Vector a) vector))
                    (* Buffer sb (progn
                                   (io ((<> take Box Vector a) (aof vector))
                                     (Just ptr (free ptr))) ; make it out of order
                                   (match sb
                                     (Buffered buffer cursor size step
                                               (progn
                                                 (for ((int i . index)) (< i cursor) ((++ i))
                                                      (set (cof (+ buffer i)) (cof (+ buffer (+ i 1)))))
                                                 ((<> Buffer a)
                                                  ((<> MakeStringBuffer a) buffer (- cursor 1) size step))))
                                     (NullTerminated buffer cursor size step
                                                     (progn
                                                       (for ((int i . index)) (<= i cursor) ((++ i))
                                                            (set (cof (+ buffer i)) (cof (+ buffer (+ i 1)))))
                                                       ((<> Buffer a)
                                                        ((<> MakeNullTerminatedBuffer a) buffer (- cursor 1) size step))))
                                     (default ((<> clone Box Vector a) vector)))))
                    ;; COW pattern copy-on-write for Slices
                    (* Slice vec cur size (match# vec
                                            (dead ((<> clone Box Vector a) vector))
                                            (* Buffer sbs -> sbs
                                               (Buffered buffer _cursor _size step
                                                         (case (< index size)
                                                               (letn (((<> StringBuffer a) new_sb .
                                                                       #'((<> newCapacity StringBuffer a) (- size 1) step #f)))
                                                                 ((<> Buffer a)
                                                                  ((<> print StringBuffer a)
                                                                   ((<> print StringBuffer a) new_sb (+ buffer cur) index)
                                                                   (+ buffer cur index 1) (- size index 1))))
                                                               otherwise vec))
                                               (NullTerminated buffer _cursor _size step
                                                               (case (< index size)
                                                                     (letn (((<> StringBuffer a) new_sb .
                                                                             #'((<> newCapacity StringBuffer a) (- size 1) step #t)))
                                                                       ((<> Buffer a)
                                                                        ((<> print StringBuffer a)
                                                                         ((<> print StringBuffer a) new_sb (+ buffer cur) index)
                                                                         (+ buffer cur index 1) (- size index 1))))
                                                                     otherwise vec))
                                               (default vec))
                                            (* Slice veci curi ((<> deleteAt type) veci (+ cur curi index))) ; E
                                            (default ((<> clone Box Vector a) vec))))
                    (default ((<> clone Box Vector a) vector)))))

    (func replaceAt ((type vector) (a item) (int index))
          (out type)
          (return (match# vector
                    (dead ((<> clone Box Vector a) vector))
                    (* Buffer sb (progn
                                   (io ((<> take Box Vector a) (aof vector))
                                     (Just ptr (free ptr))) ; make it out of order
                                   (match sb
                                     (Buffered ~ NullTerminated buffer cursor
                                               (case (< index cursor)
                                                     (progn
                                                       (set (cof (+ buffer index)) item)
                                                       ((<> Buffer a) sb))
                                                     otherwise ((<> Buffer a) sb)))
                                     (default ((<> clone Box Vector a) vector)))))
                    ;; COW pattern copy-on-write for Slices
                    (* Slice vec cur size (match# vec
                                            (dead ((<> clone Box Vector a) vector))
                                            (* Buffer sbs -> sbs
                                               (Buffered buffer _cursor _size step
                                                         (case (< index size)
                                                               (letn (((<> StringBuffer a) new_sb .
                                                                       #'((<> newCapacity StringBuffer a) size step #f)))
                                                                 ((<> Buffer a)
                                                                  ((<> print StringBuffer a)
                                                                   ((<> put StringBuffer a)
                                                                    ((<> print StringBuffer a) new_sb (+ buffer cur) index)
                                                                    item)
                                                                   (+ buffer cur index 1) (- size index 1))))
                                                               otherwise vec))
                                               (NullTerminated buffer _cursor _size step
                                                               (case (< index size)
                                                                     (letn (((<> StringBuffer a) new_sb .
                                                                             #'((<> newCapacity StringBuffer a) size step #t)))
                                                                       ((<> Buffer a)
                                                                        ((<> print StringBuffer a)
                                                                         ((<> put StringBuffer a)
                                                                          ((<> print StringBuffer a) new_sb (+ buffer cur) index)
                                                                          item)
                                                                         (+ buffer cur index 1) (- size index 1))))
                                                                     otherwise vec))
                                               (default vec))
                                            (* Slice veci curi ((<> replaceAt type) veci item (+ cur curi index))) ; E
                                            (default ((<> clone Box Vector a) vec))))
                    (default ((<> clone Box Vector a) vector)))))
    
    (func copy ((type vector))
          (out type)
          (return (match# vector
                    (dead ((<> None a)))
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated ((<> Buffer a) ((<> copy StringBuffer a) sb)))
                       (default ((<> None a))))
                    (* Slice vec cur size
                       (match# vec
                         (dead ((<> None a)))
                         (* Buffer sbs -> sbs
                            (Buffered ~ NullTerminated ((<> Buffer a) ((<> copySlice StringBuffer a) sbs cur size)))
                            (default ((<> None a))))
                         (* Slice veci ((<> copy type) veci))
                         (default ((<> None a)))))
                    (default ((<> None a))))))
    
    (func show ((CFile file) (type vector))
          (out int)

          (auto) (decl) (func show_ ((int index) (type vector)) (out int))
          
          (func showWithSize ((int index) (int size) (type vector))
                (out int)
                (return (match# vector
                          (dead 0)
                          (* Buffer sb -> sb
                             (Buffered ~ NullTerminated buffer
                                       (letn ((int sum . 0))
                                         (for ((int counter . index)) (< counter (+ size index)) ((++ counter))
                                              (set sum (+ sum
                                                          ($> fmt file (cof (+ buffer counter)))
                                                          (? (< counter (- (+ size index) 1)) (printf "%s" sep) 0))))
                                         sum))
                             (default 0))
                          (* Slice vector cursor size (showWithSize (+ cursor index) size vector))
                          (default 0))))

          (func show_ ((int index) (type vector))
                (out int)
                (return (match# vector
                          (dead 0)
                          (* Buffer sb -> sb
                             (Buffered ~ NullTerminated buffer cursor
                                       (letn ((int sum . 0))
                                         (for ((int counter . index)) (< counter cursor) ((++ counter))
                                              (set sum (+ sum
                                                          ($> fmt file (cof (+ buffer counter)))
                                                          (? (< counter (- cursor 1)) (printf "%s" sep) 0))))
                                         sum))
                             (default 0))
                          (* Slice vector cursor size (showWithSize (+ cursor index) size vector))
                          (default 0))))

          (return (show_ 0 vector)))

    (func wrap ((const a item))
          (out type)
          (return (letin ((new_vec ((<> pureCapacity type) 16 16)))
                    ((<> push type) item new_vec))))

    (func toArray ((type vector))
          (out a *)
          (return (match# vector
                    (dead nil)
                    (* Buffer sb -> sb
                       (Buffered ~ NullTerminated buffer buffer)
                       (default nil))
                    (* Slice vector cursor (match# vector
                                             (dead nil)
                                             (* Buffer sbs -> sbs
                                                (Buffered ~ NullTerminated buffer (+ buffer cursor))
                                                (default nil))
                                             (* Slice vec cur (+ ((<> toArray type) vec) cur))
                                             (default nil)))
                    (default nil))))

    (func pureCapacity ((int capacity) (int step))
          (out type)
          (return ((<> Buffer a) ((<> newCapacity StringBuffer a) capacity step (<> null_terminated type)))))

    (func pure ((int step))
          (out type)
          (return ((<> pureCapacity type) step step)))

    (free
      (io this
        (* Buffer sb ((<> free StringBuffer a) (aof sb)))
        (* Slice vector ((<> free Box Vector a) (aof vector))))
      (free this))
    
    ) ; impl-box

  (impl-Maybe type)
  
  ) ; impl-Vector

(generic import-Vector
  (type
   a
   ctor)

  ;; dependencies
  (import-Maybe a)
  (import-StringBuffer a)

  (import-box (Vector type)
    (= Buffer (<> Buffer a) ((<> StringBuffer a) buffer))
    (= Slice  (<> Slice a)  (type vector) (int cursor) (int size))
    (= None   (<> None a)))

  (DEFMACRO ctor (buf &OPTIONAL len)
    (LET ((len len)
          (buf-name (GENSYM "tmp_buf")))
      (IF len
          `(letn (((<> StringBuffer a) ,buf-name . (FUNCTION ((<> newCapacity StringBuffer a)
                                                              ,len 16 (<> null_terminated type)))))
             ((<> Buffer a) ((<> print StringBuffer a) ,buf-name ,buf ,len)))
          (IF (STRINGP buf)
              `(letn (((<> StringBuffer a) ,buf-name . (FUNCTION ((<> newCapacity StringBuffer a)
                                                                  ,(LENGTH buf) 16 (<> null_terminated type)))))
                 ((<> Buffer a) ((<> print StringBuffer a) ,buf-name ,buf ,(LENGTH buf))))
              (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
                  `(letn (((<> StringBuffer a) ,buf-name . (FUNCTION ((<> newCapacity StringBuffer a)
                                                                      ,(LENGTH buf) 16 (<> null_terminated type)))))
                     ((<> Buffer a) ((<> print StringBuffer a) ,buf-name (cast (const a []) ,buf) ,(LENGTH (CADR buf)))))
                  (ERROR (FORMAT NIL "new^Vector len required for dynamic array input: ~A" buf)))))))

  (import-Maybe type)

  ) ; import-Vector
