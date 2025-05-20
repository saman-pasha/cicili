(import "cicili_postgresdb.h" ())

(PostgresDB "" PostgresDB dummy () () ())

(IN-PACKAGE :CL-USER)

(func main () (out int)
  (let ((PostgresDB * db . (-> PostgresDB new "host=localhost dbname=test user=postgres password=secret")))
    (if (-> db exec "CREATE TABLE IF NOT EXISTS test (id SERIAL PRIMARY KEY, name VARCHAR(50));")
        (format #t "Command executed successfully.\n")
        (format #t "Error: %s\n" ($ db lastErrorMessage)))
    
    (let ((char * result . (-> db query "SELECT name FROM test LIMIT 1;")))
      (if result
          (format #t "Query result: %s\n" result)
          (format #t "No result returned.\n")))
    
    (-> db close)
    (return 0)))
