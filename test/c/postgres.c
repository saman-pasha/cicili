#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <libpq-fe.h>
int bad  = 0;
void check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    printf ("ok   %-38s %lld\n", what , got );
  else
    { /* block129 */
      printf ("FAIL %-38s got %lld want %lld\n", what , got , want );
      (++bad );
    }
}
void check_str (const char * what , const char * got , const char * want ) {
  if (0 ==  strcmp (got , want ) )
    printf ("ok   %-38s %s\n", what , got );
  else
    { /* block135 */
      printf ("FAIL %-38s got '%s' want '%s'\n", what , got , want );
      (++bad );
    }
}
int main () {
  { /* let139 */
    PGconn * db  = NULL ;
    // ----------
    if (({ /* progn142 */
          db  = PQconnectdb ("");
          (((db  ==  NULL  )) ? CONNECTION_BAD  : PQstatus (db ));
        }) !=  CONNECTION_OK  )
      { /* block146 */
        printf ("SKIP no PostgreSQL server: %s\n", PQerrorMessage (db ));
        PQfinish (db );
        return 0;
      }
    check ("connected", ((long long)(PQstatus (db ) ==  CONNECTION_OK  )), 1);
    check ("server version", ((long long)(PQserverVersion (db ) >  0 )), 1);
    check ("create table", ({ /* progn152 */
        ({ /* letn154 */
          PGresult * pg_res_150  = PQexec (db , "CREATE TEMPORARY TABLE t (id serial PRIMARY KEY, name text, score real)");
          int pg_st_151  = 0;
          // ----------
          pg_st_151  = PQresultStatus (pg_res_150 );
          PQclear (pg_res_150 );
          pg_st_151 ;
        });
      }), PGRES_COMMAND_OK );
    check ("insert ada", ({ /* progn160 */
        ({ /* letn162 */
          int pg_st_158  = 0;
          // ----------
          { /* let164 */
            const char * pg_vals_159 [] = { "ada", "99.5"};
            // ----------
            ({ /* letn166 */
              PGresult * pg_res_157  = PQexecParams (db , "INSERT INTO t (name, score) VALUES ($1, $2)", 2, NULL , pg_vals_159 , NULL , NULL , 0);
              // ----------
              pg_st_158  = PQresultStatus (pg_res_157 );
              PQclear (pg_res_157 );
            });
          }
          pg_st_158 ;
        });
      }), PGRES_COMMAND_OK );
    check ("insert grace", ({ /* progn172 */
        ({ /* letn174 */
          int pg_st_170  = 0;
          // ----------
          { /* let176 */
            const char * pg_vals_171 [] = { "grace", "98.25"};
            // ----------
            ({ /* letn178 */
              PGresult * pg_res_169  = PQexecParams (db , "INSERT INTO t (name, score) VALUES ($1, $2)", 2, NULL , pg_vals_171 , NULL , NULL , 0);
              // ----------
              pg_st_170  = PQresultStatus (pg_res_169 );
              PQclear (pg_res_169 );
            });
          }
          pg_st_170 ;
        });
      }), PGRES_COMMAND_OK );
    check ("insert null", ({ /* progn184 */
        ({ /* letn186 */
          int pg_st_182  = 0;
          // ----------
          { /* let188 */
            const char * pg_vals_183 [] = { "0"};
            // ----------
            ({ /* letn190 */
              PGresult * pg_res_181  = PQexecParams (db , "INSERT INTO t (name, score) VALUES (NULL, $1)", 1, NULL , pg_vals_183 , NULL , NULL , 0);
              // ----------
              pg_st_182  = PQresultStatus (pg_res_181 );
              PQclear (pg_res_181 );
            });
          }
          pg_st_182 ;
        });
      }), PGRES_COMMAND_OK );
    check ("insert a quote", ({ /* progn196 */
        ({ /* letn198 */
          int pg_st_194  = 0;
          // ----------
          { /* let200 */
            const char * pg_vals_195 [] = { "o'brien'); DROP TABLE t; --", "1"};
            // ----------
            ({ /* letn202 */
              PGresult * pg_res_193  = PQexecParams (db , "INSERT INTO t (name, score) VALUES ($1, $2)", 2, NULL , pg_vals_195 , NULL , NULL , 0);
              // ----------
              pg_st_194  = PQresultStatus (pg_res_193 );
              PQclear (pg_res_193 );
            });
          }
          pg_st_194 ;
        });
      }), PGRES_COMMAND_OK );
    { /* let204 */
      int rows  = 0;
      long long id_sum  = 0;
      double score_sum  = 0.0;
      // ----------
      check ("query ran", ({ /* progn212 */
          ({ /* letn214 */
            int pg_st_208  = 0;
            // ----------
            { /* let216 */
              const char * pg_vals_211 [] = { "2"};
              // ----------
              ({ /* letn218 */
                PGresult * pg_res_207  = PQexecParams (db , "SELECT id, name, score FROM t WHERE id <= $1 ORDER BY id", 1, NULL , pg_vals_211 , NULL , NULL , 0);
                // ----------
                pg_st_208  = PQresultStatus (pg_res_207 );
                if (pg_st_208  ==  PGRES_TUPLES_OK  )
                  { /* let222 */
                    int pg_n_210  = PQntuples (pg_res_207 );
                    // ----------
                    for (int pg_row_209  = 0; (pg_row_209  <  pg_n_210  ); (++pg_row_209 )) {
                        { /* let227 */
                          int id  = atoi (PQgetvalue (pg_res_207 , pg_row_209 , 0));
                          const char * name  = PQgetvalue (pg_res_207 , pg_row_209 , 1);
                          double score  = atof (PQgetvalue (pg_res_207 , pg_row_209 , 2));
                          // ----------
                          (++rows );
                          id_sum  += id  ;
                          score_sum  += score  ;
                          if (rows  ==  1 )
                            check_str ("first row name", name , "ada");
                        }
                    }
                  }
                PQclear (pg_res_207 );
              });
            }
            pg_st_208 ;
          });
        }), PGRES_TUPLES_OK );
      check ("two rows matched", rows , 2);
      check ("ids summed", id_sum , 3);
      check ("scores summed x100", ((long long)(0.5 +  (100.0 *  score_sum  ) )), 19775);
    }
    { /* let231 */
      int total  = 0;
      // ----------
      ({ /* progn239 */
        ({ /* letn241 */
          int pg_st_235  = 0;
          // ----------
          { /* let243 */
            const char * pg_vals_238 [] = { NULL };
            // ----------
            ({ /* letn245 */
              PGresult * pg_res_234  = PQexecParams (db , "SELECT count(*) FROM t", 0, NULL , pg_vals_238 , NULL , NULL , 0);
              // ----------
              pg_st_235  = PQresultStatus (pg_res_234 );
              if (pg_st_235  ==  PGRES_TUPLES_OK  )
                { /* let249 */
                  int pg_n_237  = PQntuples (pg_res_234 );
                  // ----------
                  for (int pg_row_236  = 0; (pg_row_236  <  pg_n_237  ); (++pg_row_236 )) {
                      { /* let254 */
                        int n  = atoi (PQgetvalue (pg_res_234 , pg_row_236 , 0));
                        // ----------
                        total  = n ;
                      }
                  }
                }
              PQclear (pg_res_234 );
            });
          }
          pg_st_235 ;
        });
      });
      check ("four rows, table intact", total , 4);
    }
    { /* let256 */
      int found  = 0;
      // ----------
      ({ /* progn264 */
        ({ /* letn266 */
          int pg_st_260  = 0;
          // ----------
          { /* let268 */
            const char * pg_vals_263 [] = { "o'brien%"};
            // ----------
            ({ /* letn270 */
              PGresult * pg_res_259  = PQexecParams (db , "SELECT name FROM t WHERE name LIKE $1", 1, NULL , pg_vals_263 , NULL , NULL , 0);
              // ----------
              pg_st_260  = PQresultStatus (pg_res_259 );
              if (pg_st_260  ==  PGRES_TUPLES_OK  )
                { /* let274 */
                  int pg_n_262  = PQntuples (pg_res_259 );
                  // ----------
                  for (int pg_row_261  = 0; (pg_row_261  <  pg_n_262  ); (++pg_row_261 )) {
                      { /* let279 */
                        const char * name  = PQgetvalue (pg_res_259 , pg_row_261 , 0);
                        // ----------
                        (++found );
                        check_str ("the quote came back whole", name , "o'brien'); DROP TABLE t; --");
                      }
                  }
                }
              PQclear (pg_res_259 );
            });
          }
          pg_st_260 ;
        });
      });
      check ("and matched once", found , 1);
    }
    { /* let281 */
      int nulls  = 0;
      int empties  = 0;
      // ----------
      ({ /* progn289 */
        ({ /* letn291 */
          int pg_st_285  = 0;
          // ----------
          { /* let293 */
            const char * pg_vals_288 [] = { NULL };
            // ----------
            ({ /* letn295 */
              PGresult * pg_res_284  = PQexecParams (db , "SELECT name FROM t ORDER BY id", 0, NULL , pg_vals_288 , NULL , NULL , 0);
              // ----------
              pg_st_285  = PQresultStatus (pg_res_284 );
              if (pg_st_285  ==  PGRES_TUPLES_OK  )
                { /* let299 */
                  int pg_n_287  = PQntuples (pg_res_284 );
                  // ----------
                  for (int pg_row_286  = 0; (pg_row_286  <  pg_n_287  ); (++pg_row_286 )) {
                      { /* let304 */
                        const char * name  = PQgetvalue (pg_res_284 , pg_row_286 , 0);
                        int isnull  = PQgetisnull (pg_res_284 , pg_row_286 , 0);
                        // ----------
                        if (isnull )
                          (++nulls );
                        if ((!isnull ) &&  (0 ==  strlen (name ) ) )
                          (++empties );
                      }
                  }
                }
              PQclear (pg_res_284 );
            });
          }
          pg_st_285 ;
        });
      });
      check ("one name was NULL", nulls , 1);
      check ("and none were empty text", empties , 0);
    }
    check ("syntax error is a status", ((long long)(({ /* progn313 */
          ({ /* letn315 */
            PGresult * pg_res_311  = PQexec (db , "SELECT FROM WHERE");
            int pg_st_312  = 0;
            // ----------
            pg_st_312  = PQresultStatus (pg_res_311 );
            PQclear (pg_res_311 );
            pg_st_312 ;
          });
        }) !=  PGRES_TUPLES_OK  )), 1);
    check ("and the message says so", ((long long)(strlen (PQerrorMessage (db )) >  0 )), 1);
    check ("select is TUPLES_OK", ({ /* progn321 */
        ({ /* letn323 */
          PGresult * pg_res_319  = PQexec (db , "SELECT 1");
          int pg_st_320  = 0;
          // ----------
          pg_st_320  = PQresultStatus (pg_res_319 );
          PQclear (pg_res_319 );
          pg_st_320 ;
        });
      }), PGRES_TUPLES_OK );
    check ("command is COMMAND_OK", ({ /* progn328 */
        ({ /* letn330 */
          PGresult * pg_res_326  = PQexec (db , "CREATE TEMPORARY TABLE t2 (a int)");
          int pg_st_327  = 0;
          // ----------
          pg_st_327  = PQresultStatus (pg_res_326 );
          PQclear (pg_res_326 );
          pg_st_327 ;
        });
      }), PGRES_COMMAND_OK );
    PQfinish (db );
  }
  if (bad  ==  0 )
    printf ("postgres: all ok\n");
  else
    printf ("postgres: %d FAILED\n", bad );
  return bad ;
}
