# REMOVE DUPLICATES FROM SORTED ARRAY

## APPROSCH 1 BRUTE FORCE
Use set, and insert the elements to it. <br>
If question asks to do it in-place, then insert values of set to the array, and return the ending index.

## APPROACH 2 OPTIMAL APPROACH

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
    
    void removeDuplicate()
    {
        int index = 0;
        
        for(int i=1;i<n;i++)
        {
            if(arr[index]!=arr[i])
            {
                arr[index+1]=arr[i];
                index++;
            }
        }
        
        show(index+1);
    }
    
    void show(int index)
    {
        cout<<"New array"<<endl;
        for(int i=0;i<index;i++)
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
    
    obj.removeDuplicate();
}
```
