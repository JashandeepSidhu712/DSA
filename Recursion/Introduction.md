# RECURSION

Recursion is a programming technique where a **function calls itself in order to solve a problem until specific condition is met**. 

It's like a concept of "**self-reference**" in programming. Recursion is often used to **break down complex problems into simpler subproblems** that can be solved more easily.

Imagine you have a problem that can be solved by dividing it into smaller instances of the same problem. You solve each smaller instance in the same way, and when you combine the solutions to these smaller instances, you get the solution to the original problem. This is the basic idea behind recursion.

In the context of programming, a recursive function is a **function that calls itself with a modified version of the input until it reaches a base case**, where the function doesn't call itself anymore. The base case is essential to prevent infinite recursion and to ensure the function eventually stops.

## Stack Overflow
A stack overflow occurs when a program exhausts the available space in the call stack. 

The call stack is a data structure used to store information about function calls and local variables. 

Each time a function is called, its information is pushed onto the stack, and when a function returns, its information is popped off the stack.

In the case of recursion, if the base case is not reached within a reasonable number of recursive calls, the call stack can become full, leading to a stack overflow. This typically happens when the recursion doesn't have a proper stopping condition (base case) or when the recursion depth is too large.

```
int recursiveFunction(int n) {
    return recursiveFunction(n + 1); // No base case, leads to stack overflow.
}

int main() {
    recursiveFunction(1);
    return 0;
}
```

## Segmentation Fault
A segmentation fault (segfault) occurs when a program attempts to access a memory location that it doesn't have permission to access. 

This could happen when a program tries to read from or write to an invalid memory address.

In the case of recursion, a segmentation fault can occur if there is an issue with the memory allocation or if the recursion doesn't handle boundary conditions properly.

```
void recursiveFunction(int arr[], int index) {
    arr[index] = 0; // Accessing memory out of bounds, leads to segmentation fault.
    recursiveFunction(arr, index + 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    recursiveFunction(arr, 0);
    return 0;
}
```

### To avoid stack overflow and segmentation faults in recursive functions, it's crucial to:

1. Ensure that the recursion has a base case that will eventually be reached, stopping the recursion.
2. Make sure to handle boundary conditions properly to avoid accessing invalid memory locations.
3. Check for proper memory allocation and deallocation, especially when using dynamic memory.



