# PREFIX SUM

```
#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
    int n;
    int* arr;
    
    public:
    
    Solution(int n)
    {
        this->n=n;
        arr = new int[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    
    void prefixSum()
    {
        for(int i=1;i<n;i++)
        {
            arr[i]+=arr[i-1];
        }
    }
    
    void show()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    int n;
    cin>>n;
    
    Solution obj(n);
    
    obj.prefixSum();
    
    obj.show();
}
```
