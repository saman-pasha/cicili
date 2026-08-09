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
  { /* let123 */
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
const char * DIR  = "/tmp/cicili-curl-tls";
const char * CERT  = "/tmp/cicili-curl-tls/cert.pem";
const char * URL  = "https://localhost:18443/payload";
const char * BODY  = "tls payload\n";
void check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    printf ("ok   %-46s %lld\n", what , got );
  else
    { /* block135 */
      printf ("FAIL %-46s got %lld want %lld\n", what , got , want );
      (++bad );
    }
}
void check_str (const char * what , const char * got , const char * want ) {
  if ((got  !=  NULL  ) &&  (0 ==  strcmp (got , want ) ) )
    printf ("ok   %-46s %s\n", what , what );
  else
    { /* block141 */
      printf ("FAIL %-46s got '%s' want '%s'\n", what , (((got  ==  NULL  )) ? "(null)" : got ), want );
      (++bad );
    }
}
int make_cert () {
  { /* let144 */
    char cmd [1024];
    // ----------
    snprintf (cmd , sizeof(cmd), "mkdir -p %s 2>/dev/null", DIR );
    if (0 !=  system (cmd ) )
      return 0;
    snprintf (cmd , sizeof(cmd), "openssl req -x509 -newkey rsa:2048 -keyout %s/key.pem -out %s -days 1 -nodes -subj /CN=localhost -addext subjectAltName=DNS:localhost,IP:127.0.0.1 >/dev/null 2>&1", DIR , CERT );
    if (0 !=  system (cmd ) )
      return 0;
    snprintf (cmd , sizeof(cmd), "printf '%s' > %s/payload", BODY , DIR );
    return (((0 ==  system (cmd ) )) ? 1 : 0);
  }
}
int start_server () {
  { /* let151 */
    char cmd [2048];
    // ----------
    snprintf (cmd , sizeof(cmd), "cat > %s/serve.py <<'PYEOF'\nimport http.server, ssl\nsrv = http.server.HTTPServer(('127.0.0.1', 18443), http.server.SimpleHTTPRequestHandler)\nctx = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)\nctx.load_cert_chain('%s', '%s/key.pem')\nsrv.socket = ctx.wrap_socket(srv.socket, server_side=True)\nsrv.serve_forever()\nPYEOF\ncd %s && python3 serve.py >/dev/null 2>&1 & echo $! > %s/pid\ncd %s && python3 -m http.server 18444 --bind 127.0.0.1 >/dev/null 2>&1 & echo $! > %s/pid2", DIR , CERT , DIR , DIR , DIR , DIR , DIR );
    if (0 !=  system (cmd ) )
      return 0;
    { /* let155 */
      char wait [1024];
      // ----------
      snprintf (wait , sizeof(wait), "cat > %s/wait.py <<'PYEOF'\nimport socket, sys, time\nfor port in (18443, 18444):\n    for _ in range(40):\n        try:\n            socket.create_connection(('127.0.0.1', port), 0.25).close()\n            break\n        except OSError:\n            time.sleep(0.25)\n    else:\n        sys.exit(1)\nsys.exit(0)\nPYEOF\npython3 %s/wait.py", DIR , DIR );
      return (((0 ==  system (wait ) )) ? 1 : 0);
    }
  }
}
void stop_server () {
  { /* let158 */
    char cmd [512];
    // ----------
    snprintf (cmd , sizeof(cmd), "kill $(cat %s/pid) $(cat %s/pid2) 2>/dev/null; rm -rf %s", DIR , DIR , DIR );
    system (cmd );
  }
}
int have (const char * tool ) {
  { /* let161 */
    char cmd [256];
    // ----------
    snprintf (cmd , sizeof(cmd), "command -v %s >/dev/null 2>&1", tool );
    return (((0 ==  system (cmd ) )) ? 1 : 0);
  }
}
int main () {
  check ("this libcurl was built with TLS", ((long long)(0 !=  (({ /* progn167 */
          ({ /* letn169 */
            struct curl_version_info_data * cu_ver_166  = curl_version_info (CURLVERSION_NOW );
            // ----------
            (cu_ver_166 -> features);
          });
        }) &  CURL_VERSION_SSL  ) )), 1);
  printf ("     backend: %s\n", ({ /* progn173 */
      ({ /* letn175 */
        struct curl_version_info_data * cu_ver_172  = curl_version_info (CURLVERSION_NOW );
        // ----------
        (cu_ver_172 -> ssl_version);
      });
    }));
  if ((0 ==  have ("openssl") ) ||  (0 ==  have ("python3") ) )
    { /* block179 */
      printf ("skip -- openssl and python3 are needed to raise a TLS server\n");
      return 0;
    }
  if (0 ==  make_cert () )
    { /* block183 */
      printf ("skip -- could not make a self-signed certificate\n");
      return 0;
    }
  if (0 ==  start_server () )
    { /* block187 */
      printf ("skip -- nothing came up on 127.0.0.1:18443\n");
      stop_server ();
      return 0;
    }
  curl_global_init (CURL_GLOBAL_DEFAULT );
  ({ /* progn190 */
    ({ /* letn192 */
      CURL * h  = curl_easy_init ();
      // ----------
      { /* let194 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("an untrusted certificate is refused", ((long long)({ /* progn199 */
            ({ /* letn201 */
              int cu_rc_197  = 0;
              // ----------
              cu_rc_197  = ({ /* progn203 */
                    ({ /* letn205 */
                      int cu_rc_198  = 0;
                      // ----------
                      if (cu_rc_198  ==  CURLE_OK  )
                        cu_rc_198  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_198  ==  CURLE_OK  )
                        cu_rc_198  = ({ /* progn211 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_198  ==  CURLE_OK  )
                        cu_rc_198  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_198 ;
                    });
                  });
              if (cu_rc_197  ==  CURLE_OK  )
                cu_rc_197  = curl_easy_perform (h );
              cu_rc_197 ;
            });
          })), ((long long)CURLE_PEER_FAILED_VERIFICATION ));
        check ("and nothing was written", ((long long)(body . len)), 0);
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let219 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("trusting it, the transfer succeeds", ((long long)({ /* progn224 */
            ({ /* letn226 */
              int cu_rc_222  = 0;
              // ----------
              cu_rc_222  = ({ /* progn228 */
                    ({ /* letn230 */
                      int cu_rc_223  = 0;
                      // ----------
                      if (cu_rc_223  ==  CURLE_OK  )
                        cu_rc_223  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_223  ==  CURLE_OK  )
                        cu_rc_223  = ({ /* progn236 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_223  ==  CURLE_OK  )
                        cu_rc_223  = curl_easy_setopt (h , CURLOPT_CAINFO , ((const char *)CERT ));
                      if (cu_rc_223  ==  CURLE_OK  )
                        cu_rc_223  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_223 ;
                    });
                  });
              if (cu_rc_222  ==  CURLE_OK  )
                cu_rc_222  = curl_easy_perform (h );
              cu_rc_222 ;
            });
          })), 0);
        check_str ("and the body arrived", (body . data), BODY );
        { /* let245 */
          long code  = 0;
          double tls  = 0.0;
          double total  = 0.0;
          double conn  = 0.0;
          long vr  = 0;
          char * s  = ((char *)NULL );
          long port  = 0;
          // ----------
          curl_easy_getinfo (h , CURLINFO_RESPONSE_CODE , (&code ));
          curl_easy_getinfo (h , CURLINFO_APPCONNECT_TIME , (&tls ));
          curl_easy_getinfo (h , CURLINFO_TOTAL_TIME , (&total ));
          curl_easy_getinfo (h , CURLINFO_CONNECT_TIME , (&conn ));
          curl_easy_getinfo (h , CURLINFO_SSL_VERIFYRESULT , (&vr ));
          curl_easy_getinfo (h , CURLINFO_SCHEME , (&s ));
          curl_easy_getinfo (h , CURLINFO_PRIMARY_PORT , (&port ));
          check ("HTTP 200", ((long long)code ), 200);
          check ("the TLS handshake has a time", ((long long)(tls  >  0.0 )), 1);
          check ("handshake lands between connect and done", ((long long)((tls  >=  conn  ) &&  (tls  <=  total  ) )), 1);
          check ("verify-result is clean", ((long long)vr ), 0);
          check_str ("scheme is HTTPS", s , "HTTPS");
          check ("and the port is the one asked for", ((long long)port ), 18443);
        }
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let249 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("verification off accepts anything", ((long long)({ /* progn254 */
            ({ /* letn256 */
              int cu_rc_252  = 0;
              // ----------
              cu_rc_252  = ({ /* progn258 */
                    ({ /* letn260 */
                      int cu_rc_253  = 0;
                      // ----------
                      if (cu_rc_253  ==  CURLE_OK  )
                        cu_rc_253  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_253  ==  CURLE_OK  )
                        cu_rc_253  = ({ /* progn266 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_253  ==  CURLE_OK  )
                        cu_rc_253  = curl_easy_setopt (h , CURLOPT_SSL_VERIFYPEER , ((long)0));
                      if (cu_rc_253  ==  CURLE_OK  )
                        cu_rc_253  = curl_easy_setopt (h , CURLOPT_SSL_VERIFYHOST , ((long)0));
                      if (cu_rc_253  ==  CURLE_OK  )
                        cu_rc_253  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_253 ;
                    });
                  });
              if (cu_rc_252  ==  CURLE_OK  )
                cu_rc_252  = curl_easy_perform (h );
              cu_rc_252 ;
            });
          })), 0);
        check_str ("body still arrives", (body . data), BODY );
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let278 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("TLS 1.2 floor still connects", ((long long)({ /* progn283 */
            ({ /* letn285 */
              int cu_rc_281  = 0;
              // ----------
              cu_rc_281  = ({ /* progn287 */
                    ({ /* letn289 */
                      int cu_rc_282  = 0;
                      // ----------
                      if (cu_rc_282  ==  CURLE_OK  )
                        cu_rc_282  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_282  ==  CURLE_OK  )
                        cu_rc_282  = ({ /* progn295 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_282  ==  CURLE_OK  )
                        cu_rc_282  = curl_easy_setopt (h , CURLOPT_CAINFO , ((const char *)CERT ));
                      if (cu_rc_282  ==  CURLE_OK  )
                        cu_rc_282  = curl_easy_setopt (h , CURLOPT_SSLVERSION , ((long)CURL_SSLVERSION_TLSv1_2 ));
                      if (cu_rc_282  ==  CURLE_OK  )
                        cu_rc_282  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_282 ;
                    });
                  });
              if (cu_rc_281  ==  CURLE_OK  )
                cu_rc_281  = curl_easy_perform (h );
              cu_rc_281 ;
            });
          })), 0);
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let307 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("a wrong public-key pin is refused", ((long long)(CURLE_OK  !=  ({ /* progn312 */
              ({ /* letn314 */
                int cu_rc_310  = 0;
                // ----------
                cu_rc_310  = ({ /* progn316 */
                      ({ /* letn318 */
                        int cu_rc_311  = 0;
                        // ----------
                        if (cu_rc_311  ==  CURLE_OK  )
                          cu_rc_311  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                        if (cu_rc_311  ==  CURLE_OK  )
                          cu_rc_311  = ({ /* progn324 */
                                curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                                curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                              });
                        if (cu_rc_311  ==  CURLE_OK  )
                          cu_rc_311  = curl_easy_setopt (h , CURLOPT_CAINFO , ((const char *)CERT ));
                        if (cu_rc_311  ==  CURLE_OK  )
                          cu_rc_311  = curl_easy_setopt (h , CURLOPT_PINNEDPUBLICKEY , ((const char *)"sha256//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="));
                        if (cu_rc_311  ==  CURLE_OK  )
                          cu_rc_311  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                        cu_rc_311 ;
                      });
                    });
                if (cu_rc_310  ==  CURLE_OK  )
                  cu_rc_310  = curl_easy_perform (h );
                cu_rc_310 ;
              });
            }) )), 1);
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let336 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("plain HTTP to the same files", ((long long)({ /* progn341 */
            ({ /* letn343 */
              int cu_rc_339  = 0;
              // ----------
              cu_rc_339  = ({ /* progn345 */
                    ({ /* letn347 */
                      int cu_rc_340  = 0;
                      // ----------
                      if (cu_rc_340  ==  CURLE_OK  )
                        cu_rc_340  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)"http://127.0.0.1:18444/payload"));
                      if (cu_rc_340  ==  CURLE_OK  )
                        cu_rc_340  = ({ /* progn353 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_340  ==  CURLE_OK  )
                        cu_rc_340  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_340 ;
                    });
                  });
              if (cu_rc_339  ==  CURLE_OK  )
                cu_rc_339  = curl_easy_perform (h );
              cu_rc_339 ;
            });
          })), 0);
        check_str ("and the body arrived over it", (body . data), BODY );
        { /* let360 */
          double tls  = 0.0;
          double conn  = 0.0;
          // ----------
          curl_easy_getinfo (h , CURLINFO_APPCONNECT_TIME , (&tls ));
          curl_easy_getinfo (h , CURLINFO_CONNECT_TIME , (&conn ));
          check ("it connected", ((long long)(conn  >  0.0 )), 1);
          check ("and shook no hands", ((long long)(tls  ==  0.0 )), 1);
        }
        cu_buf_free ((&body ));
      }
      curl_easy_cleanup (h );
    });
  });
  curl_global_cleanup ();
  stop_server ();
  if (bad  ==  0 )
    printf ("\ncurl over TLS: all ok\n");
  else
    printf ("\ncurl over TLS: %d FAILED\n", bad );
  return bad ;
}
