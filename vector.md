# VECTOR STL C++

In C++ STL, std::vector is one of the most commonly used and versatile container classes. The std::vector provides a **contiguous memory layout**, allowing efficient random access to elements, making it an excellent choice for many applications.

### Comparing vector and arrays
**Dynamic Size** <br>
std::vector has the ability to **dynamically change its size at runtime**. Unlike a static array, which has a fixed size determined at compile-time. std::vector can grow or shrink as needed, making it much **more flexible** when dealing with data whose size may vary during the program's execution. 

**Automatic Memory Management** <br>
std::vector manages memory automatically, so you don't need to worry about manual memory allocation or deallocation. When elements are added or removed, std::vector handles the memory resizing and management for you, preventing common issues like buffer overflow or memory leaks.

**Standard Library Algorithms** <br>
std::vector integrates seamlessly with the C++ Standard Library algorithms (e.g., std::sort, std::find, etc.), allowing you to perform various operations on the vector's elements efficiently.

**Compatibility with STL Containers and Algorithms** <br>
std::vector plays nicely with other containers and algorithms provided by the C++ Standard Template Library. It offers a consistent interface, making it easy to switch between containers and apply standard algorithms.

**Iterators and Range-Based For Loops** <br>
std::vector provides iterators, allowing you to traverse elements in a range-based for loop or use standard algorithms on the container.

## FEATURES OF VECTORS

**1. Declaration and Initialization**

```
#include <vector>
std::vector<T> vec;  // Declaration of an empty vector of type T
std::vector<int> numbers = {1, 2, 3, 4, 5}; // Initialization with an initializer list
```

An initializer list is a convenient syntax for initializing the vector with a list of elements at the time of its creation. It allows you to create a std::vector and provide its initial elements in a single expression, making the code more concise and readable. <br>
The initializer list is represented using curly braces {} with the elements separated by commas. <br>
When creating a std::vector using an initializer list, the vector automatically adjusts its size to accommodate the provided elements.

**2. Adding and Removing Elements**

```
vec.push_back(element); // Adds an element to the end of the vector
vec.pop_back();         // Removes the last element from the vector
```

**3. Inserting and Erasing Elements**

```
vec.insert(vec.begin() + index, element); // Inserts 'element' at the specified position
vec.erase(vec.begin() + index);           // Removes the element at the specified position
```

**4. Size and Capacity**

```
size_t size = vec.size();           // Number of elements in the vector
size_t capacity = vec.capacity();   // Total capacity of the vector (number of elements it can hold without resizing)
bool empty = vec.empty();           // Checks if the vector is empty (size == 0)
```

**5. Iterating Over Elements**

```
for (const auto& element : vec) {
    // Do something with 'element'
}

const keyword ensures that the elements of the vector are treated as read-only during iteration. It prevents accidental modifications to the elements, providing a level of safety. <br>
If you attempt to modify the element within the loop, the compiler will raise an error.

auto keyword allows automatic type deduction. It enables the compiler to determine the appropriate type of the element based on the type of the elements stored in the vector vec. This makes the code more concise and less error-prone, especially when dealing with complex data types.

& (ampersand) signifies that element is a reference to the actual element in the vector, rather than a copy of it.
```

**6. Accessing Elements**

```
T element = vec[index]; // Accesses the element at the specified index (bounds-checked)
T& ref = vec[index];     // Accesses the element at the specified index using a reference
T frontElem = vec.front(); // Accesses the first element
T backElem = vec.back();   // Accesses the last element
```

**7. Resizing the Vector**

```
vec.resize(newSize);          // Resizes the vector to the new size, either truncating or padding with default-initialized elements
vec.resize(newSize, value);   // Resizes the vector and initializes new elements with 'value'
```

**8. Clearing and Shrinking**

```
vec.clear();                  // Removes all elements from the vector (size becomes 0)
vec.shrink_to_fit();          // Reduces the capacity to match the size
```

