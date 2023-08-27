#include<iostream>
using namespace std;

template <class T>

class Stack
{
    T *st;
    int length;
    int top=-1;

public:

    Stack(int N)
    {
        length = N;
        st = new T[length];
    }

    int isEmpty()  //to check if the stack is empty is not
    {
        if(top == -1)
            return 1;
        else
            return 0;
    }

    int isFull()  //to check if the stack is full or not
    {
        if(top == length-1)
            return 1;
        else
            return 0;
    }

    char getTop()  //to get top element of the stack
    {
        if(!isEmpty())
            return(st[top]);
        else
            cout<<"stack empty";
    }

    void push(T value)  // to push the value in the top of the stack
    {
        if(isFull())
            cout<<"stack full";
        else
        {
            st[++top] = value;
            cout<<"Value pushed: "<<value<<endl;
            show();
        }
    }

    T pop()   //to delete/pop value from the top of the stack
    {
        cout<<"top = "<<st[top]<<endl;
        return st[top--];
    }

    void show()  //show function to view the values in the stack
    {
        cout<<"Stack: "<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<"st["<<i<<"]"<<": "<<st[i]<<endl;
        }
        cout<<"\n";
    }
};
int main()
{
    Stack <int>obj(100);

    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.pop();
    obj.show();
    obj.getTop();
}
