# UTILITY LIBRARY STL C++

In the C++ Standard Library, the utility library (  utility  ) contains several helpful classes and functions. <br>
To use the components of the utility library, include the <utility> header in your C++ code.

```
#include <utility>
```
  
## std::pair <br>
std::pair: As discussed earlier, std::pair is a template class that holds two values of potentially different types. It provides a convenient way to bundle two values together into a single object. <br>
std::pair represents a simple pair of two elements, and it is widely used to combine two values into a single entity.

```
std::pair<int, int> p = {1,3};
p.first = 1
p.second = 2
```

## std::make_pair <br>
A utility function to create an instance of std::pair. It allows you to create a pair with automatic type deduction.

```
std::pair<int, double> p = std::make_pair(42, 3.14);
```

## std::swap
A function to swap the values of two variables or elements of any type.

```
int a = 5, b = 10;
std::swap(a, b);
```

## std::move
A function that converts an lvalue into an rvalue, enabling efficient move semantics for objects

```
std::string source = "Hello";
std::string destination = std::move(source); // Move the contents of 'source' to 'destination'
```
