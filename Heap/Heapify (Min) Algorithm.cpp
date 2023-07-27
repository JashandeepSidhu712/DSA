#include <iostream>
using namespace std;

class heap
{
    public:
};
void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2*i;
    int right = 2*i+1;
    
    if(left<n && arr[smallest]>arr[left])
    {
        smallest = left;
    }
    else if(right<n && arr[smallest]>arr[right])
    {
        smallest = right;
    }
        
    if(smallest!=i)
    {
        swap(arr[smallest],arr[i]);
        heapify(arr, n, smallest);
    }
}
int main()
{
    
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
