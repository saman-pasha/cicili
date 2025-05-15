# Tutorial: Building and Extending the FastCGI Cicili Web Server

This tutorial is intended for developers who want to understand, modify, and extend the FastCGI web server implemented in Cicili. We’ll walk through the code’s architecture, explain how each part works, and show you how to add your own routes using the provided macros and functions.

---

## 1. Overview and Architecture

The project is split into two main files:
- **`webserver.h`** – Contains structure definitions, global variable declarations, and function prototypes.
- **`webserver.c`** – Contains macro definitions, routing logic, FastCGI integration, and the server loop.

**Key Concepts:**
- **Route Structure:** Each route is represented by a structure with fields for the HTTP method, URL path, the main handler, and optional pre‑ and post‑handler functions.
- **Global Route Storage:** Routes are stored in an array (`routesList`) with a counter (`routesCount`), allowing the server to dispatch incoming requests based on matching URIs.
- **Macro System:** Several macros are defined to simplify route registration:
  - **`copy-all-route-params`:** Automatically copies parameters from the FastCGI environment, using `strdup` and auto‑defer to free memory.
  - **`basic-route`:** The lowest‑level macro that creates a route using explicit pre‑ and post‑handlers, plus the parameter copying.
  - **`route`:** A simplified macro for standalone routes that default to no pre‑ or post‑handlers.
  - **`node`:** A macro that groups a set of routes under a common URL prefix and supplies default pre‑ and post‑handlers for all routes in that group.

---

## 2. Understanding the Code

### 2.1 Route Structure (`webserver.h`)
The `Route` structure is defined to include:
- **`method`**: A string (e.g., `"GET"`, `"POST"`) representing the HTTP method.
- **`path`**: The URL path to match.
- **`handler`**: The main function to process the request.
- **`pre_handler` and `post_handler`**: Optional functions that run before and after the main handler.

These allow you to customize processing at multiple stages (e.g., for logging or authentication).

### 2.2 Global Route Storage
Routes are stored globally:
- `routesList` points to an array of `Route` structures.
- `routesCount` tracks how many routes are registered.  
The function `register_route` takes a `Route` instance and appends it to the storage array.

### 2.3 Router Functions (`webserver.c`)
- **`process_routes`**: Iterates over the stored routes to find one whose path matches the request URI (using `strcmp`). When a route is found, it calls the route’s handler (which, if defined, calls its pre‑handler first and post‑handler afterward).

### 2.4 Macro System
#### **copy-all-route-params**
- **Purpose:**  
  To hide the boilerplate of fetching a parameter via `FCGX_GetParam`, copying its value with `strdup`, and ensuring that memory is freed automatically.
- **How It Works:**  
  For each parameter pair (like `(userId uid)`) it produces a binding such that:
  - It runs `FCGX_GetParam` to fetch the value.
  - It calls `strdup` on the value if it exists.
  - It uses `(defer #t)` to register that pointer for automatic cleanup when the scope exits.
  
Developers can simply specify a list of pairs in a route and not worry about writing duplicate code for parameter copying.

#### **basic-route Macro**
- **Purpose:**  
  To construct a complete `Route` record with all required fields and automatically inject the parameter-copying bindings into the handler’s scope.
- **Usage:**  
  It accepts parameters for the HTTP method, route path, parameter list, a pre‑handler, and a post‑handler, plus the main handler body.

#### **route Macro**
- **Purpose:**  
  To provide a simple interface for registering routes that do not need extra pre‑ or post‑processing.
- **Usage:**  
  When you use `route`, the pre‑ and post‑handlers are automatically set to `nil`.

#### **node Macro**
- **Purpose:**  
  To group routes under a common URL prefix and supply default pre‑ and post‑handlers for all routes within that group.
- **Usage:**  
  You supply a node setup function name, a prefix (e.g. `"/api"`), and default handlers. All routes within this node have their paths prefixed with the given string and automatically use the node-level handlers.

---

## 3. How to Extend the Code

### 3.1 Adding an Individual Route
To add a new standalone route (with no special pre‑ or post‑handlers):
```lisp
(route GET "/newpage" nil
  (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
  (FCGX_PutS "This is a new page!\n" ($ req out)))
```
Simply call the `route` macro with the HTTP method, path, and a `nil` parameter list (if no parameters are needed).

### 3.2 Adding a Node (Grouped Routes)
If you have a set of similar endpoints, create a node:
```lisp
(node setup_custom_routes "/custom" 
  '(lambda ((FCGX_Request * req)) (format #t "Entering Custom route\n"))
  '(lambda ((FCGX_Request * req)) (format #t "Exiting Custom route\n"))
  (route GET "/info" ((param info))
    (if info
        (format #t "Custom Info: %s\n" info)
        (format #t "No info provided!\n"))
    (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
    (FCGX_PutS "Custom Info route\n" ($ req out)))
  (route POST "/upload" ((file data))
    ;; Handler code for file uploads...
    ))
```
This node will group routes under `/custom` (so the route paths become `/custom/info` and `/custom/upload`), and each route automatically executes the node-level pre‑ and post‑handlers.

### 3.3 Parameter Management
When you define a route with parameters, the macro automatically copies each parameter. For example, in the route:
```lisp
(route GET "/list" ((userId uid))
  (if uid
      (format #t "API List: userId=%s\n" uid)
      (format #t "API List: no userId provided\n"))
  ...)
```
The macro converts the binding `(userId uid)` into code that:
- Calls `FCGX_GetParam "userId" ($ req envp)` to retrieve the parameter,
- Uses `strdup` to copy it,
- Registers the pointer for automatic cleanup via `(defer #t)`.

---

## 4. FastCGI Server Loop

At the bottom of the source file, the server loop:
- Initializes FastCGI with `FCGX_Init`.
- Opens a FastCGI socket.
- Repeatedly accepts incoming requests with `FCGX_Accept_r`.
- Dispatches requests to the appropriate route by matching the request URI in `process_routes`.

This loop runs indefinitely. You can modify the socket path or add additional logging as needed.

---

## 5. Summary

This tutorial has walked you through the key components of the FastCGI Cicili web server code:
- The architecture defined in `webserver.h` and `webserver.c`.
- The macro system for registering routes and grouping them into nodes.
- How parameters are safely copied and automatically freed using auto‑defer.
- How to add and extend routes to suit your application needs.

By following these steps, you should be able to understand the code, maintain it, and extend its functionality without having to repeatedly write boilerplate code.

Happy coding and extending your web server!

To install **libfcgi**, follow these steps based on your operating system:

### **Ubuntu / Debian**
1. Update your package list:
   ```bash
   sudo apt update
   ```
2. Install **libfcgi-dev**:
   ```bash
   sudo apt install libfcgi-dev
   ```

### **CentOS / RHEL**
1. Install **EPEL repository** (if not already installed):
   ```bash
   sudo yum install epel-release
   ```
2. Install **libfcgi**:
   ```bash
   sudo yum install fcgi-devel
   ```

### **macOS (Homebrew)**
1. Install **Homebrew** (if not installed):
   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```
2. Install **libfcgi**:
   ```bash
   brew install fcgi
   ```

### **Windows**
For Windows, you may need to build **libfcgi** manually:
1. Download the source from [FastCGI GitHub](https://github.com/FastCGI-Archives/fcgi2).
2. Use **CMake** or **MinGW** to compile and install.

Would you like help setting up a FastCGI server after installation? 😊
