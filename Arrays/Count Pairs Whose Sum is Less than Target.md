# COUNT PAIRS WHOSE SUM IS LESS THAN TARGET

```
class Solution
{
    int n;
    int* arr;
  
    public:
  
    Solution(int n)
    {
        this->n=n;
        arr=new int[n];
  
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void countPairs(int target)
    {
        sort(nums.begin(),nums.end());

        int i=0, j=nums.size()-1;
        int count=0, sum=0;

        while(i<j)
        {
            if(nums[i]+nums[j]<target)
            {
                count+=(j-i);
                i++;
            }
            else
            {
                j--;
            }
        }

        cout<<count;
        
    }
};
int main()
{
    int n;
    cin>>n;

    Solution obj(n);

    int target;
    cout<<"Enter target";
    cin>>target;

    obj.countPairs(int target);
}
```
