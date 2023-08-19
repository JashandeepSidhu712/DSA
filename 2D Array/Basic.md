# INPUT AND OUTPUT IN 2D ARRAY

```
#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
    int n;
    int m;
    int** arr;
    
    public:
    
    Solution(int n, int m)
    {
        this->n=n;
        this->m=m;
        arr = new int*[n];
        
        for(int i=0;i<n;i++)
        {
            arr[i] = new int[m];
            for(int j=0;j<m;j++)
            {
                cout<<"arr["<<i<<"]["<<j<<"]=";
                cin>>arr[i][j];
            }
            cout<<endl;
        }
    }
    
    void show()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<endl;
            }
        }
    }
};
int main()
{
    int n, m;
    cout<<"Enter number of rows and colms:";
    cin>>n>>m;
    
    Solution obj(n, m);
    
    obj.show();
    
}
```
