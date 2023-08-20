# LARGEST ELEMENT IN AN ARRAY

### APPROACH 1 BRUTE FORCE
Sort and return the last element.

### APPROACH 2 OPTIOMAL SOLUTION

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
    
    int largestElement()
    {
        int ans = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            ans = max(ans, arr[i]);
        }
        
        return ans;
    }
    
};
int main()
{
    int n; 
    cin>>n;
    
    Solution obj(n);
    
    cout<<obj.largestElement();
}
```
