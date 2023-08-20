# SECOND SMALLEST ELLEMENT IN AN ARRAY

```
#include<iostream>
#include <climits>
using namespace std;

class Solution
{
    public:
    
    int n;
    int* arr;
    
    Solution(int n)
    {
        this->n = n;
        arr = new int[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    
    int smallestAndSecondSmallestElement()
    {
        int smallest = INT_MAX;
        int ssmallest = INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<smallest)
            {
                ssmallest = smallest;
                smallest = arr[i];
            }
            else if(arr[i]>smallest && arr[i]<ssmallest)
            {
                ssmallest = arr[i];
            }
        }
        
        return ssmallest;
    }
    
};
int main()
{
    int n; 
    cin>>n;
    
    Solution obj(n);
    
    cout<<obj.smallestAndSecondSmallestElement();
}
```
