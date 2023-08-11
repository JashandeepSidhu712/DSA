# ARRAYS
An array is a structured collection of **homogeneous elements**, all belonging to the **same data type**, organized in a **linear sequence**. 

#### DECLARATION OF ARRAY
```
int numbers[5];  // Declares an integer array with 5 elements
```

#### INITIALISATION OF ARRAY
```
int numbers[5] = {2, 4, 6, 8, 10};  // Initializes the array with these values
```

## int* arr;
declares a member variable named arr that is a pointer to an integer. <br>
This declares a pointer variable named arr that can hold the memory address of an integer. This pointer will be used to point to the dynamically allocated memory block.

## int* arr = new int[n];
dynamic memory allocation statement in C++. <br>

## DYNAMIC MEMORY ALLOCATION
Dynamic memory allocation and deallocation in C++ involves creating and releasing memory during program execution. This is useful when you need to manage memory for variables whose size or lifetime is not known at compile time.

#### 'new' operator
The new operator allocates memory on the heap, which is a larger and more flexible memory space compared to the stack.

It's used for creating variables, arrays, and objects at runtime. <br>
It returns a pointer to the allocated memory block.

```
int* ptr = new int;         // Allocates memory for a single integer
int* arr = new int[5];      // Allocates memory for an array of 5 integers
```

#### 'delete' operator
The delete operator releases memory previously allocated with new.

```
delete ptr;                 // Releases memory allocated for the single integer
delete[] arr;               // Releases memory allocated for the integer array
```

#####  Importance:

1. Failing to deallocate memory can lead to memory leaks, where memory is not freed after it's no longer needed.
2. Always deallocate memory when you're done using it to prevent inefficient memory usage.
