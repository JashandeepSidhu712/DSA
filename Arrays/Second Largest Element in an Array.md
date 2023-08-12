# SECOND LARGEST ELEMENT IN AN ARRAY

#### APPROACH 1 BRUTE FORCE
Sort the array, check for same elements, in given test case below <br>

After sorting <br>
1 7 7 7 7 7 <br>
so compare if we have same elements which are largest.

## APPROACH 2 OPTIMAL SOLUTION

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
    
    int secondLargestElement()
    {
        int largest = INT_MIN;
        int ans = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                ans = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>ans)
            {
                ans = arr[i];
            }
        }
        
        return ans;
    }
    
};
int main()
{
    int n; 
    cin>>n;
    
    Solution obj(n);
    
    cout<<obj.secondLargestElement();
}
```
