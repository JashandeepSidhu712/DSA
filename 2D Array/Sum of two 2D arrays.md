# SUM OF TWO 2D ARRAYS

```
#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
    int n;
    int m;
    int** arr;
    int** arr2;
    int** newarr;
    
    public:
    
    Solution(int n, int m)
    {
        this->n=n;
        this->m=m;
        arr = new int*[n];
        arr2 = new int*[n];
        newarr = new int*[n];
        
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
        
        for(int i=0;i<n;i++)
        {
            arr2[i] = new int[m];
            for(int j=0;j<m;j++)
            {
                cout<<"arr2["<<i<<"]["<<j<<"]=";
                cin>>arr2[i][j];
            }
            cout<<endl;
        }
    }
    
    void sum()
    {
        
        for(int i=0;i<n;i++)
        {
            newarr[i] = new int[m];
            for(int j=0;j<m;j++)
            {
                newarr[i][j]=arr[i][j]+arr2[i][j];
            }
        }
    }
    
    void show()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"arr["<<i<<"]["<<j<<"]="<<newarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int n, m;
    cout<<"Enter number of rows and colms:";
    cin>>n>>m;
    
    Solution obj(n, m);
    
    obj.sum();
    
    obj.show();
    
}
```
