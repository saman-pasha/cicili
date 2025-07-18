
(header "tdb.h" ()
        (guard __TDB_H__
          (module tdb
            
            (var const u8 SCALEOF_NIL)
            (var const u8 SCALEOF_ATOMIC)
            (var const u8 SCALEOF_BYTE)
            (var const u8 SCALEOF_WORD)
            (var const u8 SCALEOF_DWORD)
            
            (var const u8 MODELOF_NIL)
            (var const u8 MODELOF_SIGNED)
            (var const u8 MODELOF_UNSIGNED)
            (var const u8 MODELOF_DECIMAL)
            
            (var const u8 TYPEOF_NIL)
            (var const u8 TYPEOF_BYTE)
            (var const u8 TYPEOF_WORD)
            (var const u8 TYPEOF_DWORD)
            (var const u8 TYPEOF_QWORD)
            (var const u8 TYPEOF_XWORD)
            (var const u8 TYPEOF_YWORD)
            (var const u8 TYPEOF_ZWORD)

            (var const u8 SIZEOF_NIL)
            (var const u8 SIZEOF_BYTE)
            (var const u8 SIZEOF_WORD)
            (var const u8 SIZEOF_DWORD)
            (var const u8 SIZEOF_QWORD)
            (var const u8 SIZEOF_XWORD)
            (var const u8 SIZEOF_YWORD)
            (var const u8 SIZEOF_ZWORD)
            
            (var const u8 NIL)
            (var const u8 BOOL)
            (var const u8 CHAR)
            (var const u8 BYTE)
            (var const u8 UBYTE)
            (var const u8 SHORT)
            (var const u8 USHORT)
            (var const u8 INT)
            (var const u8 UINT)
            (var const u8 LONG)
            (var const u8 ULONG)
            (var const u8 FLOAT)
            (var const u8 DOUBLE)
            (var const u8 REAL)
            (var const u8 TIMESTAMP)
            (var const u8 STRING)
            (var const u8 TEXT)
            (var const u8 VECTOR)
            
            )))

(source "tdb.c" (:compile #t)
        (include <stdlib.h>)
        (include <stdio.h>)
        (include <math.h>)
        (include <string.h>)
        
        (module tdb

          (var const u8 SCALEOF_NIL    . 0x00)
          (var const u8 SCALEOF_ATOMIC . 0x20)
          (var const u8 SCALEOF_BYTE   . 0x40)
          (var const u8 SCALEOF_WORD   . 0x60)
          (var const u8 SCALEOF_DWORD  . 0x80)
          
          (var const u8 MODELOF_NIL      . 0x00)
          (var const u8 MODELOF_SIGNED   . 0x08)
          (var const u8 MODELOF_UNSIGNED . 0x10)
          (var const u8 MODELOF_DECIMAL  . 0x18)
          
          (var const u8 TYPEOF_NIL   . 0x00)
          (var const u8 TYPEOF_BYTE  . 0x01)
          (var const u8 TYPEOF_WORD  . 0x02)
          (var const u8 TYPEOF_DWORD . 0x03)
          (var const u8 TYPEOF_QWORD . 0x04)
          (var const u8 TYPEOF_XWORD . 0x05)
          (var const u8 TYPEOF_YWORD . 0x06)
          (var const u8 TYPEOF_ZWORD . 0x07)

          (var const u8 SIZEOF_NIL   . 0x00)
          (var const u8 SIZEOF_BYTE  . 0x01)
          (var const u8 SIZEOF_WORD  . 0x02)
          (var const u8 SIZEOF_DWORD . 0x04)
          (var const u8 SIZEOF_QWORD . 0x08)
          (var const u8 SIZEOF_XWORD . 0x10)
          (var const u8 SIZEOF_YWORD . 0x20)
          (var const u8 SIZEOF_ZWORD . 0x40)

          (var const u8 NIL        . #'(bitor SCALEOF_NIL    MODELOF_NIL      TYPEOF_NIL))
          (var const u8 BOOL       . #'(bitor SCALEOF_ATOMIC MODELOF_SIGNED   TYPEOF_BYTE))
          (var const u8 CHAR       . #'(bitor SCALEOF_ATOMIC MODELOF_SIGNED   TYPEOF_BYTE))
          (var const u8 BYTE       . #'(bitor SCALEOF_ATOMIC MODELOF_SIGNED   TYPEOF_BYTE))
          (var const u8 UBYTE      . #'(bitor SCALEOF_ATOMIC MODELOF_UNSIGNED TYPEOF_BYTE))
          (var const u8 SHORT      . #'(bitor SCALEOF_ATOMIC MODELOF_SIGNED   TYPEOF_WORD))
          (var const u8 USHORT     . #'(bitor SCALEOF_ATOMIC MODELOF_UNSIGNED TYPEOF_WORD))
          (var const u8 INT        . #'(bitor SCALEOF_ATOMIC MODELOF_SIGNED   TYPEOF_DWORD))
          (var const u8 UINT       . #'(bitor SCALEOF_ATOMIC MODELOF_UNSIGNED TYPEOF_DWORD))
          (var const u8 LONG       . #'(bitor SCALEOF_ATOMIC MODELOF_SIGNED   TYPEOF_QWORD))
          (var const u8 ULONG      . #'(bitor SCALEOF_ATOMIC MODELOF_UNSIGNED TYPEOF_QWORD))
          (var const u8 FLOAT      . #'(bitor SCALEOF_ATOMIC MODELOF_DECIMAL  TYPEOF_DWORD))
          (var const u8 DOUBLE     . #'(bitor SCALEOF_ATOMIC MODELOF_DECIMAL  TYPEOF_QWORD))
          (var const u8 REAL       . #'(bitor SCALEOF_ATOMIC MODELOF_DECIMAL  TYPEOF_XWORD))
          (var const u8 TIMESTAMP  . #'(bitor SCALEOF_ATOMIC MODELOF_SIGNED   TYPEOF_QWORD))
          (var const u8 STRING     . #'(bitor SCALEOF_BYTE   MODELOF_SIGNED   TYPEOF_BYTE))
          (var const u8 TEXT       . #'(bitor SCALEOF_WORD   MODELOF_SIGNED   TYPEOF_BYTE))
          (var const u8 BYTEVECTOR . #'(bitor SCALEOF_DWORD  MODELOF_UNSIGNED TYPEOF_BYTE))
          (var const u8 INTVECTOR  . #'(bitor SCALEOF_DWORD  MODELOF_SIGNED   TYPEOF_DWORD))

          (func SCALEOF ((u8 tdb)) (out const i64)
                (return (bitand tdb SCALEOF_NIL)))

          (func MODELOF ((u8 tdb)) (out const i64)
                (return (bitand tdb MODELOF_DECIMAL)))
          
          (func TYPEOF ((u8 tdb)) (out const i64)
                (return (bitand tdb TYPEOF_ZWORD)))

          (func SIZEOF ((u8 tdb)) (out const i64)
                (return (pow 2 (- (bitand tdb TYPEOF_ZWORD) 1))))

          ;; Type Name, C Type, Type Descriptor Byte, Format Specifier
          (generic __OBJECT_G__ (N TY TDB FS)
                   (struct N
                     (member TY m_payload))

                   (func (N . tdb) () (out const u8)
                         (return TDB))

                   (generic __OBJECT_FMT_G__ (WR)
                            (method (N . (<> fmt WR)) ((WR * writer))
                                    `(IF (EQL 'WR 'FILE)
                                         '(fprintf writer FS ($ this m_payload))
                                         (IF (EQL 'WR 'char)
                                             '(memcpy writer (aof ($ this m_payload)) (SIZEOF (-> N tdb)))
                                             (ERROR (FORMAT NIL "unsupported writer for ~A fmt ~A" 'N 'WR)))))
                            ) ; end fmt generic
                   ) ; end generic

          ;; use and unuse modules
          (__OBJECT_G__ Int int INT "%d")
          (__OBJECT_FMT_G__ FILE)
          (__OBJECT_FMT_G__ char)

          )          
        )
        
