# SELECTION SORT  

select smallest element repeatedly <br>
from unsorted portion of the list <br>
and moving it to the sorted portion of the list

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
