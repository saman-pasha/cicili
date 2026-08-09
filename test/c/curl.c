#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <curl/curl.h>
typedef struct cu_buf {
  char * data ;
  size_t len ;
} cu_buf;
size_t cu_write (char * chunk , size_t size , size_t nmemb , void * user ) {
  { /* let122 */
    size_t add  = (size  *  nmemb  );
    cu_buf * b  = ((cu_buf *)user );
    char * grown  = NULL ;
    // ----------
    grown  = ((char *)realloc ((b -> data), ((b -> len) +  add  +  1 )));
    if (grown  ==  NULL  )
      return 0;
    (b -> data) = grown ;
    memcpy (((b -> data) +  (b -> len) ), chunk , add );
    (b -> len) += add  ;
    (b -> data)[(b -> len)] = '\0';
    return add ;
  }
}
void cu_buf_free (cu_buf * b ) {
  if ((b -> data) !=  NULL  )
    curl_free ((b -> data));
  (b -> data) = NULL ;
  (b -> len) = 0;
}
int bad  = 0;
const char * PAYLOAD  = "hello from a file url\n";
const char * PATH  = "/tmp/cicili-curl-test.txt";
const char * URL  = "file:///tmp/cicili-curl-test.txt";
void check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    printf ("ok   %-44s %lld\n", what , got );
  else
    { /* block134 */
      printf ("FAIL %-44s got %lld want %lld\n", what , got , want );
      (++bad );
    }
}
void check_str (const char * what , const char * got , const char * want ) {
  if ((got  !=  NULL  ) &&  (0 ==  strcmp (got , want ) ) )
    printf ("ok   %-44s %s\n", what , what );
  else
    { /* block140 */
      printf ("FAIL %-44s got '%s' want '%s'\n", what , (((got  ==  NULL  )) ? "(null)" : got ), want );
      (++bad );
    }
}
int write_payload () {
  { /* let143 */
    FILE * f  = fopen (PATH , "wb");
    // ----------
    if (f  ==  NULL  )
      return 0;
    fputs (PAYLOAD , f );
    fclose (f );
    return 1;
  }
}
int generated_has (const char * head , const char * tail ) {
  { /* let148 */
    FILE * f  = fopen ("curl.c", "rb");
    char * text  = NULL ;
    char * at  = NULL ;
    long size  = 0;
    int found  = 0;
    // ----------
    if (f  ==  NULL  )
      f  = fopen ("test/c/curl.c", "rb");
    if (f  ==  NULL  )
      return -1;
    fseek (f , 0, SEEK_END );
    size  = ftell (f );
    fseek (f , 0, SEEK_SET );
    text  = ((char *)malloc ((size  +  1 )));
    if (text  ==  NULL  )
      { /* block156 */
        fclose (f );
        return -1;
      }
    size  = ((long)fread (text , 1, size , f ));
    text [size ] = '\0';
    fclose (f );
    at  = strstr (text , head );
    while ((at  !=  NULL  )) {
        if (0 ==  strncmp ((at  +  strlen (head ) ), tail , strlen (tail )) )
          { /* block162 */
            found  = 1;
            break ;
          }
        at  = strstr ((at  +  1 ), head );
    }
    free (text );
    return found ;
  }
}
int main () {
  check ("curl_version is not empty", ((long long)(strlen (curl_version ()) >  0 )), 1);
  check ("wrote the payload file", ((long long)write_payload ()), 1);
  check ("global init", ((long long)curl_global_init (CURL_GLOBAL_DEFAULT )), 0);
  ({ /* progn168 */
    ({ /* letn170 */
      CURL * h  = curl_easy_init ();
      // ----------
      check ("handle is not null", ((long long)(h  !=  NULL  )), 1);
      { /* let172 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("get a file:// url", ((long long)({ /* progn177 */
            ({ /* letn179 */
              int cu_rc_175  = 0;
              // ----------
              cu_rc_175  = ({ /* progn181 */
                    ({ /* letn183 */
                      int cu_rc_176  = 0;
                      // ----------
                      if (cu_rc_176  ==  CURLE_OK  )
                        cu_rc_176  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_176  ==  CURLE_OK  )
                        cu_rc_176  = ({ /* progn189 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_176  ==  CURLE_OK  )
                        cu_rc_176  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_176 ;
                    });
                  });
              if (cu_rc_175  ==  CURLE_OK  )
                cu_rc_175  = curl_easy_perform (h );
              cu_rc_175 ;
            });
          })), 0);
        check ("body length matches the file", ((long long)(body . len)), ((long long)strlen (PAYLOAD )));
        check_str ("body bytes match the file", (body . data), PAYLOAD );
        { /* let196 */
          curl_off_t n  = 0;
          char * effective  = ((char *)NULL );
          // ----------
          curl_easy_getinfo (h , CURLINFO_SIZE_DOWNLOAD_T , (&n ));
          curl_easy_getinfo (h , CURLINFO_EFFECTIVE_URL , (&effective ));
          check ("size info matches the buffer", ((long long)n ), ((long long)(body . len)));
          check_str ("effective url is the one asked for", effective , URL );
        }
        check ("get again, appending", ((long long)({ /* progn201 */
            ({ /* letn203 */
              int cu_rc_199  = 0;
              // ----------
              cu_rc_199  = ({ /* progn205 */
                    ({ /* letn207 */
                      int cu_rc_200  = 0;
                      // ----------
                      if (cu_rc_200  ==  CURLE_OK  )
                        cu_rc_200  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_200  ==  CURLE_OK  )
                        cu_rc_200  = ({ /* progn213 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      cu_rc_200 ;
                    });
                  });
              if (cu_rc_199  ==  CURLE_OK  )
                cu_rc_199  = curl_easy_perform (h );
              cu_rc_199 ;
            });
          })), 0);
        check ("appended, not replaced", ((long long)(body . len)), ((long long)(2 *  strlen (PAYLOAD ) )));
        cu_buf_free ((&body ));
        check ("free zeroes the buffer", ((long long)(body . len)), 0);
        check ("free drops the bytes", ((long long)((body . data) ==  NULL  )), 1);
        check ("reused after free", ((long long)({ /* progn221 */
            ({ /* letn223 */
              int cu_rc_219  = 0;
              // ----------
              cu_rc_219  = ({ /* progn225 */
                    ({ /* letn227 */
                      int cu_rc_220  = 0;
                      // ----------
                      if (cu_rc_220  ==  CURLE_OK  )
                        cu_rc_220  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_220  ==  CURLE_OK  )
                        cu_rc_220  = ({ /* progn233 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      cu_rc_220 ;
                    });
                  });
              if (cu_rc_219  ==  CURLE_OK  )
                cu_rc_219  = curl_easy_perform (h );
              cu_rc_219 ;
            });
          })), 0);
        check ("and holds one copy again", ((long long)(body . len)), ((long long)strlen (PAYLOAD )));
        cu_buf_free ((&body ));
        cu_buf_free ((&body ));
        check ("freeing twice is harmless", ((long long)(body . len)), 0);
      }
      { /* let239 */
        cu_buf empty  = { NULL , 0};
        // ----------
        check ("a missing file is not CURLE_OK", ((long long)(CURLE_OK  !=  ({ /* progn244 */
              ({ /* letn246 */
                int cu_rc_242  = 0;
                // ----------
                cu_rc_242  = ({ /* progn248 */
                      ({ /* letn250 */
                        int cu_rc_243  = 0;
                        // ----------
                        if (cu_rc_243  ==  CURLE_OK  )
                          cu_rc_243  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)"file:///no/such/cicili/file"));
                        if (cu_rc_243  ==  CURLE_OK  )
                          cu_rc_243  = ({ /* progn256 */
                                curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                                curl_easy_setopt (h , CURLOPT_WRITEDATA , (&empty ));
                              });
                        cu_rc_243 ;
                      });
                    });
                if (cu_rc_242  ==  CURLE_OK  )
                  cu_rc_242  = curl_easy_perform (h );
                cu_rc_242 ;
              });
            }) )), 1);
        cu_buf_free ((&empty ));
        check ("an unknown scheme is UNSUPPORTED_PROTOCOL", ((long long)({ /* progn264 */
            ({ /* letn266 */
              int cu_rc_262  = 0;
              // ----------
              cu_rc_262  = ({ /* progn268 */
                    ({ /* letn270 */
                      int cu_rc_263  = 0;
                      // ----------
                      if (cu_rc_263  ==  CURLE_OK  )
                        cu_rc_263  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)"nosuchscheme://host/path"));
                      if (cu_rc_263  ==  CURLE_OK  )
                        cu_rc_263  = ({ /* progn276 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&empty ));
                            });
                      cu_rc_263 ;
                    });
                  });
              if (cu_rc_262  ==  CURLE_OK  )
                cu_rc_262  = curl_easy_perform (h );
              cu_rc_262 ;
            });
          })), ((long long)CURLE_UNSUPPORTED_PROTOCOL ));
        cu_buf_free ((&empty ));
      }
      check ("a rejected option answers its code", ((long long)(CURLE_OK  !=  curl_easy_setopt (h , 999999, ((long)1)) )), 1);
      curl_easy_reset (h );
      { /* let282 */
        cu_buf after  = { NULL , 0};
        // ----------
        check ("still usable after reset", ((long long)({ /* progn287 */
            ({ /* letn289 */
              int cu_rc_285  = 0;
              // ----------
              cu_rc_285  = ({ /* progn291 */
                    ({ /* letn293 */
                      int cu_rc_286  = 0;
                      // ----------
                      if (cu_rc_286  ==  CURLE_OK  )
                        cu_rc_286  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_286  ==  CURLE_OK  )
                        cu_rc_286  = ({ /* progn299 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&after ));
                            });
                      cu_rc_286 ;
                    });
                  });
              if (cu_rc_285  ==  CURLE_OK  )
                cu_rc_285  = curl_easy_perform (h );
              cu_rc_285 ;
            });
          })), 0);
        cu_buf_free ((&after ));
      }
      { /* let304 */
        struct curl_slist * hs  = NULL ;
        // ----------
        ({ /* progn308 */
          ({ /* letn310 */
            struct curl_slist * cu_hs_307  = NULL ;
            // ----------
            cu_hs_307  = curl_slist_append (hs , "Accept: application/json");
            if (cu_hs_307  !=  NULL  )
              hs  = cu_hs_307 ;
            cu_hs_307  = curl_slist_append (hs , "X-Cicili: 1");
            if (cu_hs_307  !=  NULL  )
              hs  = cu_hs_307 ;
            hs ;
          });
        });
        check ("a header list was built", ((long long)(hs  !=  NULL  )), 1);
        check ("setting it is accepted", ((long long)({ /* progn318 */
            ({ /* letn320 */
              int cu_rc_317  = 0;
              // ----------
              if (cu_rc_317  ==  CURLE_OK  )
                cu_rc_317  = curl_easy_setopt (h , CURLOPT_HTTPHEADER , hs );
              cu_rc_317 ;
            });
          })), ((long long)CURLE_OK ));
        ({ /* progn325 */
          curl_slist_free_all (hs );
          hs  = NULL ;
        });
        check ("free-headers nulls the list", ((long long)(hs  ==  NULL  )), 1);
      }
      { /* let327 */
        char * esc  = curl_easy_escape (h , "a b&c", 0);
        char * back  = NULL ;
        // ----------
        check_str ("escape percent-encodes", esc , "a%20b%26c");
        back  = curl_easy_unescape (h , esc , 0, NULL );
        check_str ("unescape is its inverse", back , "a b&c");
        curl_free (esc );
        curl_free (back );
      }
      check_str ("strerror of OK", curl_easy_strerror (CURLE_OK ), "No error");
      curl_easy_cleanup (h );
    });
  });
  check ("(timeout 10) reaches libcurl as (long)10", ((long long)generated_has ("CURLOPT_TIMEOUT , ((", "long)10)")), 1);
  check ("(url …) reaches libcurl as (const char *)", ((long long)generated_has ("CURLOPT_URL , ((", "const char *)")), 1);
  check ("(body b) sets the callback", ((long long)generated_has ("CURLOPT_WRITEFUNCTION , ", "cu_write")), 1);
  check ("(body b) sets its argument", ((long long)generated_has ("CURLOPT_WRITEDATA , (", "&body")), 1);
  curl_global_cleanup ();
  remove (PATH );
  if (bad  ==  0 )
    printf ("\ncurl: all ok\n");
  else
    printf ("\ncurl: %d FAILED\n", bad );
  return bad ;
}
