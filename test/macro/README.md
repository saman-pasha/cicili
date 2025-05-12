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
