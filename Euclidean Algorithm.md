# GCD GREATEST COMMON DIVISOR 
# HCF HIGHEST COMMON FACTOR

Lets start with an example, A=9 B=12 <br>
Factors of A are {1 3 9} and Factors of B are {1 2 3 4 6 12} <br>

Common factors of A and B are {1 3} <br>
Therefore, GCD(A,B) = 3 

## BRUTE FORCE APPROACH TO FIND GCD OF TWO NUMBERS

The brute force approach for finding the greatest common divisor (GCD) of two positive integers, a and b, involves **checking all possible divisors of both numbers** and **finding the largest one that divides both without any remainder**.

Step 1. Start traversing from 1 to minimum of both the given numbers, min(A,B) <br>
Step 2. If any number in traversal is divisible by both the numbers, store that number. <br>
Step 3. At the end of traversal, you will left with greatest factor of both the given numbers.

```
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the both numbers : ";
    cin >> num1 >> num2;

    int minNum = min(num1, num2); // Calculate the minimum of 'num1' and 'num2'
    int gcd = 1; // Initialize GCD to 1, important to initialise

    for (int i = 2; i <= minNum; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    return 0;
}
```

The overall time complexity of the brute force approach is O(min(a, b)).

## EUCLIDEAN ALGORITHM TO CALCULATE GCD OF TWO NUMBERS
