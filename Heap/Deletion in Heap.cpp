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
    
    void deleteHeap()
    {
        if(size==0)
        {
            cout<<"Empty"<<endl;
            return;
        }
        
        arr[1]=arr[size];
        size--;
        
        int i=1;
        while(i<size)
        {
            int left = 2*i;
            int right = 2*i+1;
        
            if(arr[i]<arr[left] && left<size)
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(arr[i]<arr[right] && right<size)
            {
                swap(arr[i],arr[right]);
                i=right;
            }
            else
            return;
            
        }
    }
    
    void print()
    {
        cout<<"STRUCTURE"<<endl;
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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
    
    obj.deleteHeap();
    
    obj.print();
    
    // return 0;
}
