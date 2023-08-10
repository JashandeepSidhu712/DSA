# PRINT ALL SUBSEQUENCES

## PROGRAM

```
 void subseq(int i, vector<int> &v)
    {
        
        if(i >= n)
        {
            for(auto i:v)
            cout<<i;
            cout<<endl;
            
            return;
        }
        
        v.push_back(arr[i]);
        
        subseq(i+1, v);
        
        v.pop_back();
        
        subseq(i+1, v);
    }
```

## PROGRAM WITH CLASS

```
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    
    int n;
    int *arr; // declares a pointer to an integer
    
    Solution(int n)
    {
        this->n = n; //this-> is a way to differentiate between the local parameter n and the member variable n
        
        arr = new int[n]; // dynamically allocate memory for an integer array of size N
        //The new keyword is used to request memory allocation
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i]; //input values for array
        } 
        
    }
    
    void subseq(int i, vector<int> &v)
    {
        
        if(i >= n)
        {
            for(auto i:v)
            cout<<i;
            cout<<endl;
            
            return;
        }
        
        v.push_back(arr[i]);
        
        subseq(i+1, v);
        
        v.pop_back();
        
        subseq(i+1, v);
    }
    
    ~ Solution()
    {
        delete[] arr;
    }
};

int main()
{
    int n; //size of array
    cin>>n; //input the size of array
    
    Solution obj(n); //create an object of the class Solution and pass the value n as a parameter to its constructor
    
    vector<int> v;
    
    obj.subseq(0, v);
    
}
```
