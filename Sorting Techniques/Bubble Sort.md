# BUUBLE SORT
Push the largest element to the end of list, <br>
by adjacent swaps <br>
compares adjacent elements, and swaps them if they are in the wrong order.

The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

It is opposite of selection sort, <br>
In selection sort, we select smallest element, move them to front sorted side. <br>
We have sorted list then unsorted list.

In bubble sort, we select largest element, move them to end sorted side. <br>
We have unsorted list then sorted list.

## PROGRAM

```
void bubbleSort()
    {
        for(int i=n-1;i>=0;i--)
        {
            int swapped = 0;
            for(int j=0;j<i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=1;
                }
            }
            if(swapped==0)
            break;
        }
        
    }
```

## TIME COMPLEXITY
In first loop it runs from 0 to n-1, means n times <br>
then from 0 to n-2, means n-1 times <br>
and so on. <br>

(n - 1) + (n - 2) + ... + 1

**Time Complexity = O(n^2)**

## SPACE COMPLEXITY

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
    
    void bubbleSort()
    {
        for(int i=n-1;i>=0;i--)
        {
            int swapped = 0;
            for(int j=0;j<i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=1;
                }
            }
            if(swapped==0)
            break;
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
    
    obj.bubbleSort();
    
}

```
