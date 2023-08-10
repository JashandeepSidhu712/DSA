# SELECTION SORT  

select smallest element repeatedly <br>
from unsorted portion of the list <br>
and moving it to the sorted portion of the list

## PROGRAM

```
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int minLoc = i; //selecting element for comparison
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[minLoc]>arr[j]) //camparing
            {
                minLoc = j; //updating the minLoc to j
            }
        }
        
        swap(arr[minLoc],arr[i]);
    }
}
int main()
{
    int n; //size of array
    cin>>n; //input the size of array
    
    int arr[n]; //initialising the array with size n
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; //input values for array
    } cout<<endl;
    
    selectionSort(arr, n); //calling the function
    
    cout<<"Sorted List"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]; //output values for array
    }
}
```

## TIME COMPLEXITY

In each iteration of Selection Sort, it scans through the remaining unsorted part of the array to find the minimum (or maximum) element. 

The number of comparisons made in the first iteration is 'n-1', <br>
in the second iteration it's 'n-2', and so on, <br>
until the last iteration where only 2 comparisons are needed. Last one is automatically sorted. <br>
This results in a total of n+ (n-1) + (n-2) + ... + 2 comparisons.

The number of swaps is equal to the number of iterations. i.e. (n-1) times

Time Complexity = O(n * (n - 1) / 2) + O(n - 1) <br>
Eliminating the negligible values <br>
**Time Complexity = O(n^2)**

## SPACE COMPLEXITY 
Constant


## PROGRAM USING CLASS

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
    
    void selectionSort()
    {
        for(int i=0;i<n-1;i++)
        {
            int minLoc = i;
            
            for(int j=i+1;j<n;j++)
            {
                if(arr[minLoc]>arr[j])
                {
                    minLoc = j;
                }
            }
            
            if(minLoc!=i)
            swap(arr[minLoc],arr[i]);
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
    
    obj.selectionSort();
    
}
```
