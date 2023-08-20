# DELETE FROM GIVEN LOCATION

Given array <br>
5 4 3 2 1

Delete from loc=3

Output Array <br>
5 4 3 1

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
        
        arr = new int[n-1]; // dynamically allocate memory for an integer array of size N
        //The new keyword is used to request memory allocation
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i]; //input values for array
        } 
    }
    
    void deleteFromLoc(int loc)
    {
        if(loc>n)
        return;
        
        for(int i=loc;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n=n-1;
    }
    
    void show()
    {
        cout<<"After Deletion"<<endl;
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
    
    int loc;
    cout<<"Enter loc:";
    cin>>loc;
    
    obj.deleteFromLoc(loc);
    
    obj.show();
    
}
```
