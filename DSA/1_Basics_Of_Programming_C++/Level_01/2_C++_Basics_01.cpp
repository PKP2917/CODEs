//-----> C++ Basics 01



//---> WHAT IS A PROGRAMMING LANGUAGE?

/*
    A programming language is a formal language used to give instructions
    to a computer. These instructions describe how data should be processed
    and what actions the computer should perform.

    TYPES OF PROGRAMMING LANGUAGES:
    - Low-level Languages:
        * Machine Language (binary code: 0s and 1s)
        * Assembly Language (symbolic instructions close to hardware)
    - High-level Languages:
        * Procedural: C, Pascal, Fortran
        * Object-Oriented: C++, Java, Python
        * Scripting: JavaScript, PHP, Ruby
        * Functional: Haskell, Scala
        * Modern multiparadigm: Python, C#, Rust
*/

//---> WHAT IS C++?

/*
    - C++ is a general-purpose, high-level programming language developed
      by Bjarne Stroustrup at Bell Labs in 1979.
    - It is an extension of the C language with the addition of
      Object-Oriented Programming features.
    - C++ supports multiple paradigms:
        * Procedural programming
        * Object-Oriented programming (OOP)
        * Generic programming (templates)
        * Low-level manipulation (close to hardware, like C)

    USES OF C++:
    - System software (Operating systems, Compilers, Device drivers)
    - Game development (Unreal Engine, etc.)
    - Real-time systems (banking, trading, simulations)
    - Embedded systems
    - High-performance applications

    COMPONENTS OF C++ PROGRAMMING :-
    A basic C++ program has the following components:

    1. Headers / Preprocessor Directives:
       - Example: #include <iostream>
       - Used to include libraries before compilation.

    2. Namespace:
       - Example: using namespace std;
       - Provides scope for functions, classes, objects.

    3. Main Function:
       - int main() { ... }
       - Entry point of every C++ program.

    4. Variables and Data Types:
       - int, float, char, bool, double, string
       - Stores different types of data.

    5. Operators:
       - Arithmetic, Relational, Logical, Bitwise, Assignment, Increment/Decrement.

    6. Control Flow:
       - if, else if, else, switch, loops.

    7. Functions:
       - Blocks of reusable code with input (parameters) and output (return value).

    8. Classes and Objects:
       - Core of Object-Oriented Programming.
       - Encapsulation, Inheritance, Polymorphism, Abstraction.

    9. Comments:
       - // Single-line comment
       - /* Multi-line comment */


//---> HOW A C++ PROGRAM WORKS (PROCESSING STEPS)

/*
    1. Writing Source Code:
       - You write your program in a .cpp file.

    2. Preprocessing:
       - Preprocessor handles directives (#include, #define).
       - It prepares the source code before compilation.

    3. Compilation:
       - Compiler translates the C++ code into object code (machine-readable instructions).

    4. Linking:
       - Links object code with libraries (e.g., iostream).
       - Produces an executable file.

    5. Loading:
       - Operating System loads the executable into memory.

    6. Execution:
       - CPU executes the program step by step.
*/

    

//---> FIRST PROGRAM:

/*
//-> Version 1

    #include <iostream>

    int main() {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
*/

/*
//-> Version 2

    #include <iostream>     // Header
    using namespace std;    // Namespace

    int main() {
        cout << "Hello, World!" << endl;   // Output
        return 0;                          // Exit status
    }
*/


//-> BREAKDOWN OF COMPONENTS

/*
    1. #include <iostream>
       - "#include" is a preprocessor directive.
       - It tells the compiler to include the contents of a file before compilation.
       - "iostream" is the standard header file for input and output in C++.
         * cin  → standard input stream
         * cout → standard output stream
         * cerr → standard error stream

    2. using namespace std;
       - In C++, all standard library functions, objects, and classes (like cout, cin, endl)
         live inside the "std" namespace.
       - By writing "using namespace std;", we don’t have to prefix everything with "std::".
         Example:
            cout << "Hello";        // Allowed if "using namespace std;" is present
            std::cout << "Hello";   // Required if it’s not

       - It saves typing but can cause naming conflicts in large projects.
       - Best practice in professional code:
            * Avoid using the entire namespace globally.
            * Instead, use std:: explicitly, or bring in only what you need:
                using std::cout;
                using std::endl;

    3. int main()
       - Every C++ program must have a "main" function.
       - It is the entry point where execution begins.
       - "int" means the function returns an integer to the operating system (commonly 0 for success).

    4. cout << "Hello, World!" << endl;
       - "cout" stands for "character output stream".
       - "<<" is the insertion operator; it sends data to the output stream.
       - "endl" is an I/O manipulator that ends the line and flushes the output buffer.
       - Together, this line prints text to the console followed by a new line.

    5. return 0;
       - Ends the program and returns control to the operating system.
       - "0" indicates successful execution.
*/


//-> DIFFERENCE BETWEEN THE TWO VERSIONS

/*
    * With "using namespace std":
        - Code is shorter and looks cleaner.
        - Suitable for small programs, beginner learning, or demos.

    * Without "using namespace std":
        - You must prefix with "std::" each time.
        - Safer for large projects because it avoids potential naming conflicts.
        - Preferred in professional/production-grade code.
*/


//---> Comments
/*
Comments  -> This code will not print.
            1) Single line comment -> // 
            2) Multi line comment -> /*__*/

       
//---> Data Types and Variables 

/*
C++ Data Types :-
    1) Built-in Data Types(int,float,char,double,bool)
    2) User-Defined(struct,union,enum)
    3) Derived(array,function,pointer)
*/
/*
1. Built-in Data Types


#include<iostream>
using namespace std;

int main(){
    int a = 12;
    char b = 'c';
    float d = 2.9;
    double e = 9.0887;
    bool f = true;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(f)<<endl;

    return 0;
}
*/

//-> Variables -> Containers to store data. -> (int a=12 or float b=30.6)
/*
#include<iostream>
using namespace std;

int main(){
    int a=1,c;
    float b=2;
    c=a+b;

    cout<<"The value of c is "<<c;

    return 0;
}
*/


/*
Variable scope :-
            1. Local Variables.
            2. Global Variables.
*/

/*
#include<iostream>
using namespace std;

int glo=10;             //-> global variable
void sum();

int main(){
    int glo=17;         //-> local variable 
    
    sum();
    cout<<glo;          //-> local variable has precedence over global variable.

    return 0;
}

void sum(){
    int a;
    cout<<glo;

}
*/


//-> Header Files
/*
    1. System Header Files :- It comes with the compiler.
        eg ->    #include<iostream>
    2. User Defined Header Files :- It is written by the programmer.
        eg ->    #include"this.h"   -> 'this.h' is a file which should be present in current directory.
*/
