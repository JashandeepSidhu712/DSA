# SORT AN ARRAY OF Os AND 1s

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
    
    void sortArray0and1()
    {
        int start = 0;
        int end = n-1;
        
        while(start<end)
        {
            if(arr[start]==1 && arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            
            if(arr[start]==0)
            {
                start++;
            }
            if(arr[end]==1)
            {
                end--;
            }
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
    
    obj.sortArray0and1();
    
    obj.show();
}
```
