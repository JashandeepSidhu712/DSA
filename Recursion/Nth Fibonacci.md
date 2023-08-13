# NTH FIBONACCI NUMBER

```
#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
    public:
    
    int calculateNthFibonacci(int nth)
    {
        if(nth<=1)
        {
            return nth;
        }
        
        int ans = calculateNthFibonacci(nth-1)+calculateNthFibonacci(nth-2);
        
        return ans;
    }
    
};
int main()
{
    Solution obj;
    
    int nth;
    cout<<"nth fibonacci=";
    cin>>nth;
    
    cout<<obj.calculateNthFibonacci(nth);
}
```
