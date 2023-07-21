# MAP C++

In C++ STL, std::map is an **associative container that represents a sorted set of key-value pairs**. It is also known as an associative array or a dictionary in other programming languages. 

The elements in a std::map are **automatically sorted based on the keys**. This means that the elements are stored in a specific order, and when iterating through the map, the elements will be presented in ascending order of their keys.

It provides **O(log N) time complexity for insertion, deletion, and search operations**, where N is the number of elements in the map. This logarithmic complexity is due to the use of a **binary search tree** for maintaining the order of elements.

It may have slightly higher memory overhead compared to std::unordered_map due to the requirements of maintaining the ordered structure.

When iterating through a std::map, the elements will be presented in ascending order of their keys.

# UNORDERED_MAP IN C++

In C++ STL, std::unordered_map is an **associative container that represents an unordered set of key-value pairs**. It is also known as a hash map or hash table.

The elements in an std::**unordered_map are not sorted**. Instead, they are organized using a hash table, providing faster access to elements but without a specific order.

It provides average constant time complexity **(O(1)) for insertion, deletion, and search operations**, but it may have worst-case linear time complexity (O(N)) in some scenarios. The average constant time complexity is achieved by using **hash functions to efficiently access elements based on their keys**.

It generally uses more memory compared to std::map, as it needs to maintain additional data structures like the hash table and linked lists for handling hash collisions.

The elements in an std::unordered_map do not have a specific order, and when iterating through it, the elements will be presented in an arbitrary order.

# MULTIMAP IN C++

In C++ STL, std::multimap is an **associative container that represents a sorted set of key-value pairs**, similar to std::map. The main difference is that std::multimap **allows duplicate keys**, while std::map only permits unique keys.

Iterating over a std::multimap will provide the elements in ascending order based on the keys.

![image](https://github.com/JashandeepSidhu712/CPP-basics/assets/117754690/757d5b7e-371b-4373-959f-f1006846ff4a)

## FUNCTIONS OF MAP AND UNORDERED_MAP

**1. Declaration and Initialization**

for Map
```
#include <map>
std::map<KeyType, ValueType> m; // Declaration of an empty map
```

for unordered_map
```
#include <unordered_map>
unordered_map<KeyType, ValueType> m; // Declaration of an empty map
```

for multimap
```
#include <map>
std::multimap<KeyType, ValueType> myMultiMap; // Declaration of an empty multimap
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

for multimap
```
auto range = multimap.equal_range(ageToFind);
for (auto it = range.first; it != range.second; ++it)
{
    std::cout << it->second << std::endl;
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

**8. Reverse Traversal**

```
for (auto it = m.rbegin(); it != m.rend(); ++it)
{
    cout << it->first << ": " << it->second << endl;
    //traverse the elements in descending order of the keys.
}
```

## SUMMARY

Use **std::map** when you need a sorted set of unique key-value pairs.

Use **std::unordered_map** when you need fast access to elements and don't require any specific order.

Use **std::multimap** when you need to allow duplicate keys and maintain them in sorted order.
