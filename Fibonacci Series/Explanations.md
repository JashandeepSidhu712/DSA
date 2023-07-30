# FIBONACCI NUMBERS

Fibonacci numbers are a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. 

The Fibonacci sequence **begins with 0 and 1**, and the subsequent numbers are computed by **adding the two previous ones**. 

The sequence starts like this:

0, 1, 1, 2, 3, 5, 8, 13, 21, ...

## RECURSIVE APPROACH

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
