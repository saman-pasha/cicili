(source "app.c" (:std #t :compile #t :link "-lfcgi html css js -o cicili_web_server")
  (include "html.h")
  (include "css.h")
  (include "js.h")
  (include <fcgiapp.h>)
  (include <time.h>)

  ;; Define Cicili Web Kit Sample Endpoints
  (node "/"
    ;; Homepage with JavaScript making an AJAX POST call to the echo endpoint
    (GET "/" ()
      (render_html 
        (html
          (head
            (title "Welcome to Cicili Web!")
            (style
              (css-rule "body" :color "black" :background "#f0f0f0" :font-size "16px")
              (css-class "header" :color "blue" :font-size "24px" :margin "10px")))
          (body
            (div :id "main" :class "container"
              (h1 "Lisp-Powered Web Framework!")
              (p "This page is dynamically generated with Cicili macros.")
              (a "/about" "Learn more"))
            (js
              (function sendData ()
                (var xhr "new XMLHttpRequest()")
                (.open xhr "POST" "/echo" "true")
                (.setRequestHeader xhr "'Content-Type', 'application/x-www-form-urlencoded'")
                (set (.onreadystatechange xhr)
                     (function ()
                       (if (== (.readyState xhr) 4)
                           (if (== (.status xhr) 200)
                               (.alert window (.responseText xhr))))))
                (.send xhr "'data=HelloEcho'")))
            (script "sendData();"))))))

    ;; About Page
    (GET "/about" ()
      (render_html 
        (html
          (head
            (title "About Cicili Web Kit")
            (style
              (css-rule "body" :color "black")
              (css-class "content" :font-size "18px" :margin "20px")))
          (body
            (div :class "content"
              (h1 "About This Project")
              (p "This is a demonstration of Lisp-powered HTML, CSS, and JavaScript generation.")
              (a "/" "Back to Home"))))))

    ;; POST Echo Endpoint: Receives posted data and prints it back with server time
    (POST "/echo" (("data" post_data "No data provided"))
      (let ((char* content-length-str . #'(FCGX_GetParam "CONTENT_LENGTH" ($ req envp)))
            (int content-length . 0))
        (when content-length-str
          (set content-length (atoi content-length-str)))
        (let ((char request_data [1024]))
          (when (> content-length 1024)
            (set content-length 1023))
          (set content-length (FCGX_GetStr request_data content-length ($ req in)))
          (when (== (strlen post_data) 0)
            (strcpy post_data request_data))  ;; Ensure `post_data` gets assigned correctly
          ;; Prepare current server time
          (let ((char time_buffer [64])
                (time_t now . #'(time NULL))
                (struct tm * time_info . #'(localtime now)))
            (strftime time_buffer 64 "%Y-%m-%d %H:%M:%S" time_info)
            (render_html
              (html
                (head (title "Echo Response"))
                (body
                  (h1 "Echo Response")
                  (p (concat "Received data: " post_data))
                  (p (concat "Server time: " time_buffer))
                  (a "/" "Back to Home"))))))))

    ;; JavaScript Demo Endpoint
    (GET "/js-demo" ()
      (render_js 
        (js
          (function helloWorld ()
            (return "'Hello from JavaScript!'")))))

    ;; CSS Demo Endpoint
    (GET "/styles.css" ()
      (render_css 
        (style
          (css-rule "body" :background "#ffffff" :color "black" :font-size "16px")
          (css-class "button" :background "blue" :color "white" :padding "10px" :border "none"))))))
