;;;; Cicili declarations for <sys/types.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/posix/sys-types.lisp")
;;;; Requires in target: (include <sys/types.h>)  or  (:std #t)
;;;;
;;;; Only the scalar POSIX typedefs are declared here. time_t belongs to
;;;; time.lisp and size_t belongs to stddef.lisp; both are deliberately not
;;;; repeated here.

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- types ----
     (typedef long   ssize_t)      ; signed byte count, LP64
     (typedef long   off_t)        ; file offset, LP64
     (typedef int    pid_t)        ; process id
     (typedef uint   uid_t)        ; user id
     (typedef uint   gid_t)        ; group id
     (typedef uint   mode_t)       ; file mode
     (typedef ulong  dev_t)        ; device id, mainstream Linux LP64
     (typedef ulong  ino_t)        ; inode number, LP64
     (typedef ulong  nlink_t)      ; link count, LP64
     (typedef long   blksize_t)    ; block size for filesystem I/O
     (typedef long   blkcnt_t)     ; number of blocks
     (typedef int    id_t)         ; general-purpose id
     (typedef int    key_t)        ; IPC key
     (typedef long   suseconds_t)  ; signed microseconds
     (typedef uint   useconds_t)   ; unsigned microseconds
     (typedef ulong  fsblkcnt_t)   ; filesystem block count
     (typedef ulong  fsfilcnt_t)   ; filesystem file count
     ))
