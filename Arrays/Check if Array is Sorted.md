# CHECK IF ARRAY IS SORTED

```
#include<iostream>
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
    
    bool arraySortedOrNot() 
    {
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            return false;
        }
        
        return true;
    }
    
};
int main()
{
    int n; 
    cin>>n;
    
    Solution obj(n);
    
    cout<<obj.arraySortedOrNot();
}
```
