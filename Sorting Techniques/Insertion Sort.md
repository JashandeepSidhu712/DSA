# INSERTION SORT
The first element of the array is considered sorted. 

For each element at index i, compare it with the previous elements in the sorted portion of the array (indices 0 to i-1).

insert in correct order, with right shifts.

## PROGRAM

```
void insertionSort()
    {
        for(int i=0;i<n;i++)
        {
            int j = i;
            
            while(arr[j-1]>arr[j] && j>0)
            {
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
```

## TIME COMPLEXITY
in first loop, it swaps 0 times, <br>
in next loop, 1 swap, <br> 
and 2 swaps and so on.

O(n*(n-1)/2) <br>
**Time Complexity = O(n^2)**

## SPACE COMPLEXITY
Constant

## PROGRAM WITH CLASS

```
#include<iostream>
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
    
    void insertionSort()
    {
        for(int i=0;i<n;i++)
        {
            int j = i;
            
            while(arr[j-1]>arr[j] && j>0)
            {
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
        
        show();
    }
    
    void show()
    {
        cout<<"Sorted List"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]; //output values for array
        }
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
    
    obj.insertionSort();
    
}
```
