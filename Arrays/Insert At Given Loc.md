# INSERT AT GIVEN LOC

Given array <br>
6 4 3 2 1

Insert value 5 at index/loc = 1

Output array <br>
6 5 4 3 2 1

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
    
    void insert(int loc, int value)
    {
        if(loc>n)
        return;
        
        for(int i=n-1;i>=loc;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[loc]=value;
        n=n+1;
    }
    
    void show()
    {
        cout<<"After Insertion"<<endl;
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
    
    int loc, value;
    cout<<"Enter loc and value:";
    cin>>loc>>value;
    
    obj.insert(loc,value);
    
    obj.show();
    
}

```
