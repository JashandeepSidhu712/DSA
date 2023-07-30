# FIBONACCI NUMBERS

Fibonacci numbers are a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. 

The Fibonacci sequence **begins with 0 and 1**, and the subsequent numbers are computed by **adding the two previous ones**. 

The sequence starts like this:

0, 1, 1, 2, 3, 5, 8, 13, 21, ...

## RECURSIVE APPROACH FOR FIBONACCI NUMBER

```
int fibonacciRecursive(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
```

### Time Complexity
The time complexity of the recursive Fibonacci algorithm is exponential, specifically O(2^n).  <br>
Each call to the fibonacciRecursive function results in two more recursive calls until reaching the base cases (n = 0 or n = 1). As a result, the number of function calls grows exponentially with n, leading to a highly inefficient solution for larger values of n.

#### Space Complexity
The space complexity of the recursive Fibonacci algorithm is also exponential, O(n). <br>
This is because the function calls create a call stack with a maximum depth equal to the input value n. Each function call consumes space on the call stack for its parameters and local variables until the base cases are reached. Therefore, the space required grows linearly with n.

## ITERATIVE APPROACH FOR FIBONACCI NUMBER

he algorithm uses **two variables, prev and curr**, to keep track of the last two Fibonacci numbers. 

It starts with **prev = 0 and curr = 1**, which represent the first two Fibonacci numbers.

Start a **loop from i = 2** because we already have the first two Fibonacci numbers (0 and 1).

In each iteration of the loop, **calculate the next Fibonacci number** by **adding the current prev and curr**. Save the **result in a variable called next**.

**Update prev to be equal to the current curr** value, as we need it for the next iteration.

**Update curr to be equal to the calculated next**, as it becomes the next Fibonacci number.

Repeat until the loop reaches the desired position n.

After the loop completes, **curr will hold the nth Fibonacci number**, and we return its value.

```
int fibonacciIterative(int n) {
    if (n <= 0)
        return 0;

    int prev = 0;
    int curr = 1;

    for (int i = 2; i <= n; ++i)
    {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}
```

### Time Complexity
The time complexity of the iterative Fibonacci algorithm is O(n), where n is the position of the Fibonacci number to be calculated. The loop runs n-1 times, making the overall time complexity linear in terms of n.

### Space Complexity
The space complexity of the iterative Fibonacci algorithm is O(1) or constant.
