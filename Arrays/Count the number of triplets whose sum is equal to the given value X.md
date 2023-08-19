# COUNT THE NUMBER OF TRIPLETS WHOSE SUM IS EQUAL TO GIVEN VALUE

```
#include<iostream>
using namespace std;

class Solution
{
    int n;
    int* arr;
    
    public:
    
    Solution(int n)
    {
        this->n=n;
        arr = new int[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    
    void sumOfThreeEqualToSum(int sum)
    {
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]+arr[k]==sum)
                    {
                        count++;
                    }
                }
            }
        }
        
        cout<<count<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    
    Solution obj(n);
    
    int sum;
    cout<<"Enter required Sum=";
    cin>>sum;
    
    obj.sumOfThreeEqualToSum(sum);
}
```
## TIME COMPLEXITY
Time Complexity: O(n^3)

(n - 1) * (n - 2) * (n - 3) ≈ n^3 / 6



