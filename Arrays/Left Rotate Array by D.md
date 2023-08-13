# LEFT ROTATE ARRAY BY D

If D<n <br>
we need d moves

if d==n <br>
we need 0 moves

if d>n <br>
we need d = d%n moves

## APPROACH 1: NATIVE APPROACH

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
    
    void leftRotateArraybyD(int d)
    {
        d = d%n;
        
        int* temp = new int[d];
        
        for(int i=0;i<d;i++)
        {
            temp[i] = arr[i];
        }
        
        for(int i=d;i<n;i++)
        {
            arr[i-d] = arr[i];
        }
        
        int h = 0;
        for(int i=n-d;i<n;i++)
        {
            arr[i] = temp[h++];
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
    
    int d;
    cout<<"Move positions";
    cin>>d;
    
    obj.leftRotateArraybyD(d);
}
```

## APPROACH 2 BETTER APPROACH

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
    
    void leftRotateArraybyD(int d)
    {
        d = d%n;
        
        reverse(arr,arr+d);
        
        reverse(arr+d, arr+n);
        
        reverse(arr, arr+n);
        
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
    
    int d;
    cout<<"Move positions";
    cin>>d;
    
    obj.leftRotateArraybyD(d);
}

````
