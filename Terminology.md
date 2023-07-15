## #include
In C++, the #include directive is used to include external header files in your program. 
Header files contain declarations of functions, classes, variables, and other entities that are used in your program. 


```
#include <iostream>
int main() {
    return 0;
}
```

##  using namespace std:
In C++, the using namespace std; directive is used to bring all the names from the std namespace into the current scope. 
The std namespace is the namespace that contains many standard C++ library components, such as cout, cin, string, and so on.

By using the using namespace std; directive, you don't need to prefix standard library names with std:: every time you use them. 

Before using it

```
#include <iostream>
int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "You entered: " << x << std::endl;
    return 0;
}
```

After using it

```
#include <iostream>
using namespace std; // Bringing all names from the std namespace
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "You entered: " << x << endl;
    return 0;
}
```
As a result, we can directly use cout and cin without prefixing them with std::.

## bits/stdc++.h
bits/stdc++.h is a non-standard header file of GNU C++ library and is therefore, non-portable, and should be avoided. 
Using it would include a lot of unnecessary stuff and increases compilation time.

## int main()
In C++, the int main() function is the entry point of a C++ program. It is the starting point of execution and the function where the program begins its execution.

**int** : It specifies the return type of the function. 
In this case, main returns an integer value to indicate the program's termination status. 
By convention, returning 0 typically signifies a successful execution, while any other nonzero value indicates an error or abnormal termination.

**main()** : It's the function name. In C++, main is a special function that serves as the entry point for the program.

**()** : The parentheses indicate that main is a function that takes no arguments. 
However, it's also possible to define main with command-line arguments by using int main(int argc, char* argv[]) or a similar form. Command-line arguments allow you to pass values to your program when executing it from the command line.

**{}** : The curly braces enclose the body of the main function, where you place your code.

**return 0;** : This statement is used to return a value from the main function. 
As mentioned earlier, 0 is typically returned to indicate successful execution, but you can use any integer value as needed.

```
#include <iostream>
using namespace std;
int main() {
    cout<<"Hello, coders!"<<endl;
    return 0;
}
```
