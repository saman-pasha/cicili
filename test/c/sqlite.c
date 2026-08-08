#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sqlite3.h>
int bad  = 0;
void check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    printf ("ok   %-38s %lld\n", what , got );
  else
    { /* block140 */
      printf ("FAIL %-38s got %lld want %lld\n", what , got , want );
      (++bad );
    }
}
void check_str (const char * what , const char * got , const char * want ) {
  if (0 ==  strcmp (got , want ) )
    printf ("ok   %-38s %s\n", what , got );
  else
    { /* block146 */
      printf ("FAIL %-38s got '%s' want '%s'\n", what , got , want );
      (++bad );
    }
}
int main () {
  check ("libversion is not empty", ((long long)(strlen (sqlite3_libversion ()) >  0 )), 1);
  { /* let150 */
    sqlite3 * db  = NULL ;
    // ----------
    check ("opened", sqlite3_open (":memory:", (&db )), SQLITE_OK );
    check ("handle is not null", ((long long)(db  !=  NULL  )), 1);
    check ("create table", sqlite3_exec (db , "CREATE TABLE t (id INTEGER PRIMARY KEY, name TEXT, score REAL)", NULL , NULL , NULL ), SQLITE_OK );
    check ("insert ada", ({ /* progn157 */
        ({ /* letn159 */
          sqlite3_stmt * sq_stmt_155  = NULL ;
          int sq_rc_156  = 0;
          // ----------
          sq_rc_156  = sqlite3_prepare_v2 (db , "INSERT INTO t (name, score) VALUES (?, ?)", -1, (&sq_stmt_155 ), NULL );
          if (sq_rc_156  ==  SQLITE_OK  )
            { /* block163 */
              sqlite3_bind_text (sq_stmt_155 , 1, "ada", -1, SQLITE_TRANSIENT );
              sqlite3_bind_double (sq_stmt_155 , 2, 99.5);
              sq_rc_156  = sqlite3_step (sq_stmt_155 );
              if (sq_rc_156  ==  SQLITE_DONE  )
                sq_rc_156  = SQLITE_OK ;
            }
          sqlite3_finalize (sq_stmt_155 );
          sq_rc_156 ;
        });
      }), SQLITE_OK );
    check ("insert grace", ({ /* progn171 */
        ({ /* letn173 */
          sqlite3_stmt * sq_stmt_169  = NULL ;
          int sq_rc_170  = 0;
          // ----------
          sq_rc_170  = sqlite3_prepare_v2 (db , "INSERT INTO t (name, score) VALUES (?, ?)", -1, (&sq_stmt_169 ), NULL );
          if (sq_rc_170  ==  SQLITE_OK  )
            { /* block177 */
              sqlite3_bind_text (sq_stmt_169 , 1, "grace", -1, SQLITE_TRANSIENT );
              sqlite3_bind_double (sq_stmt_169 , 2, 98.25);
              sq_rc_170  = sqlite3_step (sq_stmt_169 );
              if (sq_rc_170  ==  SQLITE_DONE  )
                sq_rc_170  = SQLITE_OK ;
            }
          sqlite3_finalize (sq_stmt_169 );
          sq_rc_170 ;
        });
      }), SQLITE_OK );
    check ("insert nobody", ({ /* progn185 */
        ({ /* letn187 */
          sqlite3_stmt * sq_stmt_183  = NULL ;
          int sq_rc_184  = 0;
          // ----------
          sq_rc_184  = sqlite3_prepare_v2 (db , "INSERT INTO t (name, score) VALUES (?, ?)", -1, (&sq_stmt_183 ), NULL );
          if (sq_rc_184  ==  SQLITE_OK  )
            { /* block191 */
              sqlite3_bind_null (sq_stmt_183 , 1);
              sqlite3_bind_double (sq_stmt_183 , 2, 0.0);
              sq_rc_184  = sqlite3_step (sq_stmt_183 );
              if (sq_rc_184  ==  SQLITE_DONE  )
                sq_rc_184  = SQLITE_OK ;
            }
          sqlite3_finalize (sq_stmt_183 );
          sq_rc_184 ;
        });
      }), SQLITE_OK );
    check ("three rows inserted", sqlite3_last_insert_rowid (db ), 3);
    { /* let195 */
      int rows  = 0;
      long long id_sum  = 0;
      double score_sum  = 0.0;
      // ----------
      check ("query ran", ({ /* progn200 */
          ({ /* letn202 */
            sqlite3_stmt * sq_stmt_198  = NULL ;
            int sq_rc_199  = 0;
            // ----------
            sq_rc_199  = sqlite3_prepare_v2 (db , "SELECT id, name, score FROM t WHERE id <= ? ORDER BY id", -1, (&sq_stmt_198 ), NULL );
            if (sq_rc_199  ==  SQLITE_OK  )
              { /* block206 */
                sqlite3_bind_int (sq_stmt_198 , 1, 2);
                while (1) {
                    sq_rc_199  = sqlite3_step (sq_stmt_198 );
                    if (sq_rc_199  !=  SQLITE_ROW  )
                      break ;
                    { /* let212 */
                      long long id  = sqlite3_column_int64 (sq_stmt_198 , 0);
                      const char * name  = ((const char *)sqlite3_column_text (sq_stmt_198 , 1));
                      double score  = sqlite3_column_double (sq_stmt_198 , 2);
                      // ----------
                      (++rows );
                      id_sum  += id  ;
                      score_sum  += score  ;
                      if (rows  ==  1 )
                        check_str ("first row name", name , "ada");
                    }
                }
                if (sq_rc_199  ==  SQLITE_DONE  )
                  sq_rc_199  = SQLITE_OK ;
              }
            sqlite3_finalize (sq_stmt_198 );
            sq_rc_199 ;
          });
        }), SQLITE_OK );
      check ("two rows matched", rows , 2);
      check ("ids summed", id_sum , 3);
      check ("scores summed x100", ((long long)(0.5 +  (100.0 *  score_sum  ) )), 19775);
    }
    { /* let218 */
      int nulls  = 0;
      // ----------
      ({ /* progn223 */
        ({ /* letn225 */
          sqlite3_stmt * sq_stmt_221  = NULL ;
          int sq_rc_222  = 0;
          // ----------
          sq_rc_222  = sqlite3_prepare_v2 (db , "SELECT name FROM t ORDER BY id", -1, (&sq_stmt_221 ), NULL );
          if (sq_rc_222  ==  SQLITE_OK  )
            { /* block229 */
              while (1) {
                  sq_rc_222  = sqlite3_step (sq_stmt_221 );
                  if (sq_rc_222  !=  SQLITE_ROW  )
                    break ;
                  { /* let235 */
                    const char * name  = ((const char *)sqlite3_column_text (sq_stmt_221 , 0));
                    // ----------
                    if (name  ==  NULL  )
                      (++nulls );
                  }
              }
              if (sq_rc_222  ==  SQLITE_DONE  )
                sq_rc_222  = SQLITE_OK ;
            }
          sqlite3_finalize (sq_stmt_221 );
          sq_rc_222 ;
        });
      });
      check ("one name was NULL", nulls , 1);
    }
    check ("syntax error is a code", ((long long)(({ /* progn244 */
          ({ /* letn246 */
            sqlite3_stmt * sq_stmt_242  = NULL ;
            int sq_rc_243  = 0;
            // ----------
            sq_rc_243  = sqlite3_prepare_v2 (db , "SELECT FROM WHERE", -1, (&sq_stmt_242 ), NULL );
            if (sq_rc_243  ==  SQLITE_OK  )
              { /* block250 */
                sq_rc_243  = sqlite3_step (sq_stmt_242 );
                if (sq_rc_243  ==  SQLITE_DONE  )
                  sq_rc_243  = SQLITE_OK ;
              }
            sqlite3_finalize (sq_stmt_242 );
            sq_rc_243 ;
          });
        }) !=  SQLITE_OK  )), 1);
    check ("and the message says so", ((long long)(strlen (sqlite3_errmsg (db )) >  0 )), 1);
    check ("constraint is a code", ((long long)(({ /* progn258 */
          ({ /* letn260 */
            sqlite3_stmt * sq_stmt_256  = NULL ;
            int sq_rc_257  = 0;
            // ----------
            sq_rc_257  = sqlite3_prepare_v2 (db , "INSERT INTO t (id, name) VALUES (?, ?)", -1, (&sq_stmt_256 ), NULL );
            if (sq_rc_257  ==  SQLITE_OK  )
              { /* block264 */
                sqlite3_bind_int (sq_stmt_256 , 1, 1);
                sqlite3_bind_text (sq_stmt_256 , 2, "duplicate", -1, SQLITE_TRANSIENT );
                sq_rc_257  = sqlite3_step (sq_stmt_256 );
                if (sq_rc_257  ==  SQLITE_DONE  )
                  sq_rc_257  = SQLITE_OK ;
              }
            sqlite3_finalize (sq_stmt_256 );
            sq_rc_257 ;
          });
        }) !=  SQLITE_OK  )), 1);
    check ("closed", sqlite3_close_v2 (db ), SQLITE_OK );
  }
  if (bad  ==  0 )
    printf ("sqlite: all ok\n");
  else
    printf ("sqlite: %d FAILED\n", bad );
  return bad ;
}
