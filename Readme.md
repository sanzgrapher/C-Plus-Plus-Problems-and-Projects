# Welcome to C++
C++ is a popular cross-platform language that can be used to create high-performance applications - operating systems, browsers, video-games, art applications and so on.
C++ was derived from C, and is largely based on it.
A C++ program is a collection of **commands or statements**.  
  
Below is a simple program template.

```cpp
    #include <iostream>
    using namespace std;
    
    int main()
    {
    
      return 0;
    }

```   

For now, remember that the entry point of every C++ program is the main() function, irrespective of what the program does.
Curly brackets { } indicate the beginning and end of a function, which can also be called the function's body. The information inside the brackets indicates what the function does when executed.
# First C++ Program
Let's output "Hello world!" to the screen!
To do that, we will add ` cout << "Hello world!";` line to our main() function body:
```cpp
#include  <iostream>  //header file included iostream >> for standrd input and out header

    using  namespace  std;  
    int  main() //entry point of the program    
    {    
    cout  <<  "hello world";    
    return  0;   
    }

```
**cout** is used to perform output on the standard output device which is usually the display screen.  
cout  is used in combination with the **insertion operator <<**.  
Note that you can add **multiple** insertion operators after cout.

**In C++, the semicolon is used to terminate a statement. Each statement must end with a semicolon. It indicates the end of one logical expression.**
# Headers
C++ offers various headers, each of which contains information needed for programs to work properly.  
We have already seen the standard **<iostream>** header on our first C++ program:


C++ offers various headers, each of which contains information needed for programs to work properly.
We have already seen the standard `<iostream>` header on our first C++ program:
#include is used for adding a standard or user-defined header files to the program.
The `<iostream>` header defines the standard stream objects that input and output data.
## Namespaces
A namespace is a declarative region that provides a scope to the identifiers (names of elements) inside it.
In our code, the line using `namespace std;` tells the compiler to use the std (standard) namespace:
The `std` namespace includes features of the C++ Standard Library.
# Comments

**Comments** are explanatory statements that you can include in the C++ code to explain what the code is doing.  
The compiler ignores everything that appears in the comment, so none of that information shows in the result.  
  
A comment beginning with **two slashes (//)** is called a single-line comment. The slashes tell the compiler to ignore everything that follows, until the end of the line.

```cpp
    #include  <iostream>
    using  namespace std;
    
    int main()
    {
    // prints "Hello world"
    cout <<  "Hello world!";
    return  0;
    }

```When the above code is compiled, it will ignore the **// prints "Hello world"** statement**.**