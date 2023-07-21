# MAP C++

In C++ STL, std::map is an **associative container that represents a sorted set of key-value pairs**. It is also known as an associative array or a dictionary in other programming languages. 

std::map **automatically maintains the keys in sorted order**, allowing efficient lookup, insertion, and deletion of elements based on their keys. <br>
It provides logarithmic time complexity for insertion, search, and deletion operations, making it suitable for various applications.

## FUNCTIONS OF MAP 

**1. Declaration and Initialization**

```
#include <map>
std::map<KeyType, ValueType> m; // Declaration of an empty map 
```

**2. Inserting Elements**

```
m.insert(make_pair(key, value)); // Insert a key-value pair
m[key] = value; // Using the square brackets to insert or update a key-value pair
```

**3. Accessing Elements**

```
ValueType value = m[key]; // Access the value associated with 'key'
```

**4. Checking if an Element Exists**

Using count function
```
if (m.count(keyToFind) > 0) {
    // 'key' exists in the map
}
```

using find function
```
auto it = m.find(keyToFind);
if (it != m.end()) {
    // The key was found in the map and Access the value using 'it->second' or (*iterator).second
} else {
    // The key was not found in the map
}
```

**5. Iterating Over Elements**

```
for (const auto& i : m) {
    // 'i.first' is the key, 'i.second' is the value
}
```

**6. Size and Empty**

```
m.size(); // Number of elements in the map
m.empty(); // Check if the map is empty
```

**7. Erasing Elements**

```
m.erase(key); // Remove the element with 'key'
m.erase(myMap.begin()+2); // Remove the element pointed by the iterator
m.erase(myMap.begin(), myMap.end()); // Remove a range of elements
```

**8. Reverse Traversal of Map**

```
for (auto it = m.rbegin(); it != m.rend(); ++it)
{
    cout << it->first << ": " << it->second << endl;
    //traverse the elements in descending order of the keys.
}
```
