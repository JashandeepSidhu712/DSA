# QUICK SORT

```
#include<iostream>
using namespace std;

class Solution
{
    int n; //for length 
    int* arr; //array creation
    
    public:
    
    Solution(int n) //constructor
    {
        this->n = n; //relation between local and instance variable
        arr = new int[n]; //dynamic memeory allocation of array
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    
    void quickSort()
    {
        doQuick(0, n-1); //alling doDivide() method
    }
    
    void doQuick(int low, int high)
    {
        if(low>=high)
        return;
        
        int pos = doPartition(low, high);
        
        doQuick(low, pos);
        doQuick(pos+1, high);
    }
    
    int doPartition(int low, int high)
    {
        int pivot = arr[low];
        int left = low;
        int right = high;
        
        while(left<=right)
        {
            while(pivot>=arr[left])
            {
                left++;
            }
            
            while(pivot<arr[right])
            {
                right--;
            }
            
            if(left<right)
            {
                swap(arr[left],arr[right]);
            }
        }
        
        arr[low] = arr[right];
        arr[right] = pivot;
        
        return right;
    }
    
    
    void show()
    {
        cout<<"Sorted array"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
    ~Solution() //deconstructor
    {
        delete[] arr; //deleting memory of array used
    }
};
int main()
{
    int n;
    cout<<"Enter length of arrar=";
    cin>>n;
    
    Solution obj(n);
    
    obj.quickSort();
    
    obj.show();
}
```
