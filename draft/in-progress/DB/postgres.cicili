;;;; PostgresDB Macro
;;;; This macro generates a PostgreSQL integration layer for Cicili.
;;;; It builds a struct with a PGconn pointer plus error fields and provides
;;;; methods for connecting, closing, executing, and querying using libpq.

(DEFMACRO PostgresDB (path name step members-body header-body source-body)
  (LET ((header-file (STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.h" path name)))
        (guard-label (INTERN (STRING-UPCASE (FORMAT NIL "CICILI_~A_H_" name))))
        (source-file (STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.c" path name))))
    `(cicili
       (header ,header-file ()
         (guard ,guard-label
           (include <libpq-fe.h>)
           (include <stdlib.h>)
           (include <string.h>)
           ;; Define the PostgresDB struct.
           (struct ,name
             (member PGconn * conn)
             (member int lastError)
             (member char * lastErrorMessage)
             ,@members-body)
           (decl)
           ;; new: Connect to PostgreSQL using the provided connection string.
           (func ,(make-method-name name 'new) ((const char * connString)) (out ,name *))
           (decl)
           ;; close: Closes the connection and frees the struct.
           (func ,(make-method-name name 'close) ((,name * self)))
           (decl)
           ;; exec: Executes a non-query SQL command; returns an error code.
           (func ,(make-method-name name 'exec) ((,name * self) (const char * sql)) (out int))
           (decl)
           ;; query: Executes a SQL SELECT query and returns the first column of the first row.
           (func ,(make-method-name name 'query) ((,name * self) (const char * sql)) (out char *))
           ,@header-body))
       
       (source ,source-file (:std #t :compile #t :link #t)
         (include <libpq-fe.h> <stdlib.h> <string.h> ,header-file)
         
         ;; new: Connect to PostgreSQL
         (func ,(make-method-name name 'new) ((const char * connString)) (out ,name *)
           (let ((,name * db . (malloc (sizeof ,name))))
             (set ($ db conn) (PQconnectdb connString))
             (if (!= (PQstatus ($ db conn)) CONNECTION_OK)
                 (begin
                   (set ($ db lastError) 1)
                   (set ($ db lastErrorMessage) strdup(PQerrorMessage ($ db conn)))
                   (return db)))
             (set ($ db lastError) 0)
             (set ($ db lastErrorMessage) NULL)
             (return db)))
         
         ;; close: Closes the connection using PQfinish and frees the struct.
         (func ,(make-method-name name 'close) ((,name * self))
           (if ($ self conn)
               (PQfinish ($ self conn)))
           (free self))
         
         ;; exec: Executes a non-query SQL command.
         (func ,(make-method-name name 'exec) ((,name * self) (const char * sql)) (out int)
           (let ((PGresult * res . PQexec ($ self conn) sql))
             (set ($ self lastErrorMessage) strdup(PQerrorMessage ($ self conn)))
             (int status . PQresultStatus res)
             (PQclear res)
             (set ($ self lastError) (if (or (== status PGRES_COMMAND_OK) (== status PGRES_TUPLES_OK)) 0 1))
             (return ($ self lastError))))
         
         ;; query: Executes a SQL SELECT query and returns the first column of the first row.
         (func ,(make-method-name name 'query) ((,name * self) (const char * sql)) (out char *)
           (let ((PGresult * res . PQexec ($ self conn) sql))
                 (int tuples . PQntuples res))
             (if (or (== PQresultStatus res PGRES_FATAL_ERROR)
                     (== PQresultStatus res PGRES_NONFATAL_ERROR))
                 (begin
                   (set ($ self lastErrorMessage) strdup(PQerrorMessage ($ self conn)))
                   (PQclear res)
                   (return NULL)))
             (if (> tuples 0)
                 (let ((char * value . strdup(PQgetvalue res 0 0)))
                   (PQclear res)
                   (return value))
                 (begin
                   (PQclear res)
                   (return NULL)))))
         
         ,@source-body)
       )
    ))
