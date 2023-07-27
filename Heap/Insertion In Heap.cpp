#include <iostream>
using namespace std;

class heap
{
    public:
    
    int arr[100];
    int size;
    
    heap()
    {
        size=0;
    }
    
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index]=val;
        
        while(index>1)
        {
            int parent = index/2;
            
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else
            return;
        }
    }
    
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    heap obj;
    
    obj.insert(50);
    obj.insert(55);
    obj.insert(53);
    obj.insert(52);
    obj.insert(54);
    
    obj.print();
    
    // return 0;
}
