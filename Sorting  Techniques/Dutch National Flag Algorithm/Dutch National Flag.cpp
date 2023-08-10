#include <iostream>
using namespace std;

class dnf
{
    public:
};
void sort(int arr[], int n)
{
    int low=0, high = n-1;
    int mid = 0;
    
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[10]={1,0,2,0,1,0,2,1,0,2};
    
    sort(arr, 10);
    
    for(auto i:arr)
    cout<<i<<" ";
    
}
