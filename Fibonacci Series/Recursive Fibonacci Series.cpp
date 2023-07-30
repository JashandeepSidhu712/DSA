#include <iostream>
#include <vector>
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

// Function to return the first n Fibonacci numbers using recursion
vector<int> firstNFibonacciNumbers(int n) 
{
    vector<int> fibNumbers;
  
    for (int i = 1; i <= n; ++i) 
    {
        fibNumbers.push_back(fibonacciRecursive(i));
    }
  
    return fibNumbers;
}

int main() 
{
    int n;
    cin>>n;
  
    vector<int> fibonacciNumbers = firstNFibonacciNumbers(n);

    std::cout << "First " << n << " Fibonacci numbers: ";
  
    for (int num : fibonacciNumbers) 
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
