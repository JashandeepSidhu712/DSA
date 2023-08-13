# LEFT ROTATE ARRAY BY 1 

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
    
    void leftRotateArrayby1()
    {
        int temp = arr[0];
        
        for(int i=1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
        
        show();
    }
    
    void show()
    {
        cout<<"New array"<<endl;
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
    
    obj.leftRotateArrayby1();
}
```
