# MOVE ZEROS TO END OF ARRAY

```
#include<iostream>
#include<algorithm>
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
    
    void moveZeroesToEnd()
    {
        int h = 0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[h] = arr[i];
                h++;
            }
        }
        
        for(int i=h;i<n;i++)
        {
            arr[h++]=0;
        }
        
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
    
    obj.moveZeroesToEnd();
}
```
