# REVERSE ARRAY

## APPROACH 1 ITERATIVE APPROACH

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
    
    void reverseArray()
    {
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
        show();
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
    
    obj.reverseArray();
}
```

## APPROACH 2 STL

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
    
    void reverseArray()
    {
        reverse(arr,arr+n);
        
        show();
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
    
    obj.reverseArray();
}
```

## APPROACH 3 RECURSIVE APPROACH

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
    
    void reverseArray(int start, int end)
    {
        if(start>=end)
        return;
        
        swap(arr[start],arr[end]);
        
        reverseArray(start+1, end-1);
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
    
    obj.reverseArray(0, n-1);
    
    obj.show();
}
```

## APPRAOCH 4 IN NEW ARRAY - NOT RECOMMENDED
