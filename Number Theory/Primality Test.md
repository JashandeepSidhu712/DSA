# PRIMALITY TEST
The primality test is used to **determine whether a given positive integer is a prime number or not**.

## NAIVE APPROACH
 "**Trial Division**" method

```

bool isPrime(int n)
{
  if(n==1)
  return false;

  for(int i=2;i<n;i++
  {
    if(n%i==0)
    {
        return false;
    }
  }

  return true;

}
```

Time Complexity of Trial Method for Primality Test is O(n). <br>
This linear complexity makes the function inefficient for large numbers. As the input number n grows, the time taken by the function increases proportionally, making it impractical for primality testing of large integers.

## OPTIMISED APPROACH
**All the divisors of the number n occur in pairs of (a,b) such that a*b=n;**

```
bool isPrime(int n)
{
  int count=0;

  for(int i=1;i*i<=n;i++
  {
    if(n%i==0)
    {
        count++;
        if(n/i != i)
        count++;
      }
  }

  if(count==2)
  return true;
  else
  return false;

}
```

Time complexity of the function is O(√n) or O(sqrt(n)),  as it reduces the number of iterations needed to find divisors of n.

**Example**:<br>
n=12 <br>

**Factors** <br>
1 12 <br>
2 6 <br>
3 4 <br>
4 3 <br>
6 2 <br>
12 1 <br>
Factors of n are: 1,2,3,4,6,12<br> 
**Factors start repeating** <br>
so we need to find the factors **only till the sqrt(n)** and find the rest by using already found factors. <br>

Out of the pair, one lies below the sqrt(n) and one lies above the sqrt(n).


## LINKS TO QUESTIONS
1. https://practice.geeksforgeeks.org/problems/prime-number2314/1
2. 
