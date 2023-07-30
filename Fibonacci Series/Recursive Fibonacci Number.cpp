#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int fibonacciRecursive(int n) 
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() 
{
    int n ;
    cin>>n;
  
    int result = fibonacciRecursive(n);
  
    cout << "Fibonacci number at position " << n << " is: " << result << endl;
  
    return 0;
}
