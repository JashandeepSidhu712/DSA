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

## namepsace
In C++, namespaces provide a way to organize code into logical groups and prevent naming conflicts. 
A namespace is a named scope that contains a set of identifiers (such as variables, functions, classes) that are unique within that namespace.

By using namespaces, you can avoid naming conflicts between identifiers with the same name in different namespaces.
Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.

1. Namespace declarations appear only at global scope.
2. Namespace declarations can be nested within another namespace.
3. Namespace declarations don’t have access specifiers (Public or Private).
4. No need to give a semicolon after the closing brace of the definition of namespace.
5. We can split the definition of namespace over several units.

## variables
Variables in C++ is a name given to a memory location. It is the basic unit of storage in a program.
In C++, variables are used to store and manipulate data. They have a specific type that determines the kind of data they can hold, such as integers, floating-point numbers, characters, and more.

1. In C++, all the variables must be declared before use.
2. The value stored in a variable can be changed during program execution.
3. The name of the variable is case sensitive.
4. All the variable names must begin with a letter of the alphabet or an underscore and does not contain any whitespace and special characters (ex #,$,%,*, etc).

The **variable declaration** refers to the part where a variable is first declared or introduced before its first use. 

A **variable definition** is a part where the variable is assigned a memory location and a value. 

Most of the time, variable declaration and definition are done together.

```
#include <iostream>
using namespace std;
int main()
{
	// this is declaration of variable a
	int a;
	
	// this is initialisation of a
	a = 10;
	
	// this is definition = declaration + initialisation
	int b = 20;

	// declaration and definition of variable 'a123'
	char a123 = 'a';

	// This is also both declaration and definition as 'c' is allocated memory and assigned some garbage value.
	float c;

	return 0;
}
```


