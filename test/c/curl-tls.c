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
int ports_free () {
  { /* let151 */
    char cmd [512];
    // ----------
    snprintf (cmd , sizeof(cmd), "python3 -c \"import socket, sys\nfor p in (18443, 18444):\n    try:\n        socket.create_connection(('127.0.0.1', p), 0.25).close(); sys.exit(1)\n    except OSError:\n        pass\nsys.exit(0)\"");
    return (((0 ==  system (cmd ) )) ? 1 : 0);
  }
}
int start_server () {
  { /* let154 */
    char cmd [2048];
    // ----------
    snprintf (cmd , sizeof(cmd), "cat > %s/serve.py <<'PYEOF'\nimport http.server, ssl\nsrv = http.server.HTTPServer(('127.0.0.1', 18443), http.server.SimpleHTTPRequestHandler)\nctx = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)\nctx.load_cert_chain('%s', '%s/key.pem')\nsrv.socket = ctx.wrap_socket(srv.socket, server_side=True)\nsrv.serve_forever()\nPYEOF\ncd %s && exec python3 serve.py >/dev/null 2>&1 & echo $! > %s/pid\ncd %s && exec python3 -m http.server 18444 --bind 127.0.0.1 >/dev/null 2>&1 & echo $! > %s/pid2", DIR , CERT , DIR , DIR , DIR , DIR , DIR );
    if (0 !=  system (cmd ) )
      return 0;
    { /* let158 */
      char wait [1024];
      // ----------
      snprintf (wait , sizeof(wait), "cat > %s/wait.py <<'PYEOF'\nimport socket, sys, time\nfor port in (18443, 18444):\n    for _ in range(40):\n        try:\n            socket.create_connection(('127.0.0.1', port), 0.25).close()\n            break\n        except OSError:\n            time.sleep(0.25)\n    else:\n        sys.exit(1)\nsys.exit(0)\nPYEOF\npython3 %s/wait.py", DIR , DIR );
      return (((0 ==  system (wait ) )) ? 1 : 0);
    }
  }
}
void stop_server () {
  { /* let161 */
    char cmd [1024];
    // ----------
    snprintf (cmd , sizeof(cmd), "kill $(cat %s/pid) $(cat %s/pid2) 2>/dev/null; rm -rf %s; python3 -c \"import socket, time\nfor _ in range(40):\n    try:\n        socket.create_connection(('127.0.0.1', 18443), 0.25).close(); time.sleep(0.25)\n    except OSError:\n        break\"", DIR , DIR , DIR );
    system (cmd );
  }
}
int have (const char * tool ) {
  { /* let164 */
    char cmd [256];
    // ----------
    snprintf (cmd , sizeof(cmd), "command -v %s >/dev/null 2>&1", tool );
    return (((0 ==  system (cmd ) )) ? 1 : 0);
  }
}
int main () {
  check ("this libcurl was built with TLS", ((long long)(0 !=  (({ /* progn170 */
          ({ /* letn172 */
            struct curl_version_info_data * cu_ver_169  = curl_version_info (CURLVERSION_NOW );
            // ----------
            (cu_ver_169 -> features);
          });
        }) &  CURL_VERSION_SSL  ) )), 1);
  printf ("     backend: %s\n", ({ /* progn176 */
      ({ /* letn178 */
        struct curl_version_info_data * cu_ver_175  = curl_version_info (CURLVERSION_NOW );
        // ----------
        (cu_ver_175 -> ssl_version);
      });
    }));
  if (NULL  !=  strstr (({ /* progn182 */
        ({ /* letn184 */
          struct curl_version_info_data * cu_ver_181  = curl_version_info (CURLVERSION_NOW );
          // ----------
          (cu_ver_181 -> ssl_version);
        });
      }), "SecureTransport") )
    { /* block188 */
      printf ("skip -- this is Apple's SecureTransport libcurl, which ignores CURLOPT_CAINFO; brew install curl\n");
      return 0;
    }
  if ((0 ==  have ("openssl") ) ||  (0 ==  have ("python3") ) )
    { /* block192 */
      printf ("skip -- openssl and python3 are needed to raise a TLS server\n");
      return 0;
    }
  if (0 ==  ports_free () )
    { /* block196 */
      printf ("skip -- 127.0.0.1:18443 or :18444 is already taken (a server left behind? kill it)\n");
      return 0;
    }
  if (0 ==  make_cert () )
    { /* block200 */
      printf ("skip -- could not make a self-signed certificate\n");
      return 0;
    }
  if (0 ==  start_server () )
    { /* block204 */
      printf ("skip -- nothing came up on 127.0.0.1:18443\n");
      stop_server ();
      return 0;
    }
  curl_global_init (CURL_GLOBAL_DEFAULT );
  ({ /* progn207 */
    ({ /* letn209 */
      CURL * h  = curl_easy_init ();
      // ----------
      { /* let211 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("an untrusted certificate is refused", ((long long)({ /* progn216 */
            ({ /* letn218 */
              int cu_rc_214  = 0;
              // ----------
              cu_rc_214  = ({ /* progn220 */
                    ({ /* letn222 */
                      int cu_rc_215  = 0;
                      // ----------
                      if (cu_rc_215  ==  CURLE_OK  )
                        cu_rc_215  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_215  ==  CURLE_OK  )
                        cu_rc_215  = ({ /* progn228 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_215  ==  CURLE_OK  )
                        cu_rc_215  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_215 ;
                    });
                  });
              if (cu_rc_214  ==  CURLE_OK  )
                cu_rc_214  = curl_easy_perform (h );
              cu_rc_214 ;
            });
          })), ((long long)CURLE_PEER_FAILED_VERIFICATION ));
        check ("and nothing was written", ((long long)(body . len)), 0);
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let236 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("trusting it, the transfer succeeds", ((long long)({ /* progn241 */
            ({ /* letn243 */
              int cu_rc_239  = 0;
              // ----------
              cu_rc_239  = ({ /* progn245 */
                    ({ /* letn247 */
                      int cu_rc_240  = 0;
                      // ----------
                      if (cu_rc_240  ==  CURLE_OK  )
                        cu_rc_240  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_240  ==  CURLE_OK  )
                        cu_rc_240  = ({ /* progn253 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_240  ==  CURLE_OK  )
                        cu_rc_240  = curl_easy_setopt (h , CURLOPT_CAINFO , ((const char *)CERT ));
                      if (cu_rc_240  ==  CURLE_OK  )
                        cu_rc_240  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_240 ;
                    });
                  });
              if (cu_rc_239  ==  CURLE_OK  )
                cu_rc_239  = curl_easy_perform (h );
              cu_rc_239 ;
            });
          })), 0);
        check_str ("and the body arrived", (body . data), BODY );
        { /* let262 */
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
          check ("scheme is https", ((long long)(0 ==  strcasecmp (s , "https") )), 1);
          check ("and the port is the one asked for", ((long long)port ), 18443);
        }
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let266 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("verification off accepts anything", ((long long)({ /* progn271 */
            ({ /* letn273 */
              int cu_rc_269  = 0;
              // ----------
              cu_rc_269  = ({ /* progn275 */
                    ({ /* letn277 */
                      int cu_rc_270  = 0;
                      // ----------
                      if (cu_rc_270  ==  CURLE_OK  )
                        cu_rc_270  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_270  ==  CURLE_OK  )
                        cu_rc_270  = ({ /* progn283 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_270  ==  CURLE_OK  )
                        cu_rc_270  = curl_easy_setopt (h , CURLOPT_SSL_VERIFYPEER , ((long)0));
                      if (cu_rc_270  ==  CURLE_OK  )
                        cu_rc_270  = curl_easy_setopt (h , CURLOPT_SSL_VERIFYHOST , ((long)0));
                      if (cu_rc_270  ==  CURLE_OK  )
                        cu_rc_270  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_270 ;
                    });
                  });
              if (cu_rc_269  ==  CURLE_OK  )
                cu_rc_269  = curl_easy_perform (h );
              cu_rc_269 ;
            });
          })), 0);
        check_str ("body still arrives", (body . data), BODY );
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let295 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("TLS 1.2 floor still connects", ((long long)({ /* progn300 */
            ({ /* letn302 */
              int cu_rc_298  = 0;
              // ----------
              cu_rc_298  = ({ /* progn304 */
                    ({ /* letn306 */
                      int cu_rc_299  = 0;
                      // ----------
                      if (cu_rc_299  ==  CURLE_OK  )
                        cu_rc_299  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                      if (cu_rc_299  ==  CURLE_OK  )
                        cu_rc_299  = ({ /* progn312 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_299  ==  CURLE_OK  )
                        cu_rc_299  = curl_easy_setopt (h , CURLOPT_CAINFO , ((const char *)CERT ));
                      if (cu_rc_299  ==  CURLE_OK  )
                        cu_rc_299  = curl_easy_setopt (h , CURLOPT_SSLVERSION , ((long)CURL_SSLVERSION_TLSv1_2 ));
                      if (cu_rc_299  ==  CURLE_OK  )
                        cu_rc_299  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_299 ;
                    });
                  });
              if (cu_rc_298  ==  CURLE_OK  )
                cu_rc_298  = curl_easy_perform (h );
              cu_rc_298 ;
            });
          })), 0);
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let324 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("a wrong public-key pin is refused", ((long long)(CURLE_OK  !=  ({ /* progn329 */
              ({ /* letn331 */
                int cu_rc_327  = 0;
                // ----------
                cu_rc_327  = ({ /* progn333 */
                      ({ /* letn335 */
                        int cu_rc_328  = 0;
                        // ----------
                        if (cu_rc_328  ==  CURLE_OK  )
                          cu_rc_328  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)URL ));
                        if (cu_rc_328  ==  CURLE_OK  )
                          cu_rc_328  = ({ /* progn341 */
                                curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                                curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                              });
                        if (cu_rc_328  ==  CURLE_OK  )
                          cu_rc_328  = curl_easy_setopt (h , CURLOPT_CAINFO , ((const char *)CERT ));
                        if (cu_rc_328  ==  CURLE_OK  )
                          cu_rc_328  = curl_easy_setopt (h , CURLOPT_PINNEDPUBLICKEY , ((const char *)"sha256//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA="));
                        if (cu_rc_328  ==  CURLE_OK  )
                          cu_rc_328  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                        cu_rc_328 ;
                      });
                    });
                if (cu_rc_327  ==  CURLE_OK  )
                  cu_rc_327  = curl_easy_perform (h );
                cu_rc_327 ;
              });
            }) )), 1);
        cu_buf_free ((&body ));
      }
      curl_easy_reset (h );
      { /* let353 */
        cu_buf body  = { NULL , 0};
        // ----------
        check ("plain HTTP to the same files", ((long long)({ /* progn358 */
            ({ /* letn360 */
              int cu_rc_356  = 0;
              // ----------
              cu_rc_356  = ({ /* progn362 */
                    ({ /* letn364 */
                      int cu_rc_357  = 0;
                      // ----------
                      if (cu_rc_357  ==  CURLE_OK  )
                        cu_rc_357  = curl_easy_setopt (h , CURLOPT_URL , ((const char *)"http://127.0.0.1:18444/payload"));
                      if (cu_rc_357  ==  CURLE_OK  )
                        cu_rc_357  = ({ /* progn370 */
                              curl_easy_setopt (h , CURLOPT_WRITEFUNCTION , cu_write );
                              curl_easy_setopt (h , CURLOPT_WRITEDATA , (&body ));
                            });
                      if (cu_rc_357  ==  CURLE_OK  )
                        cu_rc_357  = curl_easy_setopt (h , CURLOPT_TIMEOUT , ((long)10));
                      cu_rc_357 ;
                    });
                  });
              if (cu_rc_356  ==  CURLE_OK  )
                cu_rc_356  = curl_easy_perform (h );
              cu_rc_356 ;
            });
          })), 0);
        check_str ("and the body arrived over it", (body . data), BODY );
        { /* let377 */
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
