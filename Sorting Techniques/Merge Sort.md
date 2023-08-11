# MERGE SORT

## PROGRAM

```
void divide(int low, int high)
    {
        if(low>=high)
        return;
        
        int mid = low + (high-low)/2;
        
        divide(low,mid);
        divide(mid+1,high);
        
        mergeSort(low, mid, high);
    }
    
    void mergeSort(int low, int mid, int high)
    {
        int left = low;
        int right = mid+1;
        
        int* temp = new int[(right-left)+1];
        int idx = 0;
        
        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp[idx] = arr[left];
                idx++;
                left++;
            }
            else
            {
                temp[idx] = arr[right];
                idx++;
                right++;
            }
        }
        
        while(left<=mid)
        {
            temp[idx] = arr[left];
            idx++;
           left++;
        }
            
        while(right<=high)
        {
            temp[idx] = arr[right];
            idx++;
            right++;
        }
        
        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i-low];
        }
    }
```

## TIME COMPLEXITY

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
    
    void divide(int low, int high)
    {
        if(low>=high)
        return;
        
        int mid = low + (high-low)/2;
        
        divide(low,mid);
        divide(mid+1,high);
        
        mergeSort(low, mid, high);
    }
    
    void mergeSort(int low, int mid, int high)
    {
        int left = low;
        int right = mid+1;
        
        int* temp = new int[(right-left)+1];
        int idx = 0;
        
        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp[idx] = arr[left];
                idx++;
                left++;
            }
            else
            {
                temp[idx] = arr[right];
                idx++;
                right++;
            }
        }
        
        while(left<=mid)
        {
            temp[idx] = arr[left];
            idx++;
           left++;
        }
            
        while(right<=high)
        {
            temp[idx] = arr[right];
            idx++;
            right++;
        }
        
        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i-low];
        }
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
    
    obj.divide(0,n-1);
    
    obj.show();
    
}

```
