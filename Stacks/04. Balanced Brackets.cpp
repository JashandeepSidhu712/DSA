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

    void balacing()
    {
        char exp[100];

        cout<<"Enter the expression:"<<endl;
        cin>>exp;

        for(int i=0;exp[i]!='\0';i++)
        {
            char br = exp[i];

            if( br=='{' || br=='[' || br=='(' )
                push(br);

            else
            if( br=='}' || br==']' || br==')' )
            {
                if(isEmpty())
                {
                    cout<<"Not Balanced1";
                    return;
                }

                char popped = pop();
                cout<<"Popped value:"<<popped<<endl;

                if( popped=='{' && br=='}' || popped=='[' && br==']' ||  popped=='(' && br==')' )
                {
                    cout<<"continued"<<endl;
                    continue;
                }

                else
                {
                    cout<<"Not Balanced2";
                    return;
                }
            }
        }

        if(isEmpty())
            cout<<"Balanced expression";
        else
            cout<<"Not Balanced3";
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
    Stack <char>obj(100);

    obj.balacing();
}

/*
OUTPUT

Enter the expression:
{()}
Value pushed: {
Stack:
st[0]: {

Value pushed: (
Stack:
st[0]: {
st[1]: (

top = (
Popped value:(
continued
top = {
Popped value:{
continued
Balanced expression

OUTPUT 

Enter the expression:
{(})
Value pushed: {
Stack:
st[0]: {

Value pushed: (
Stack:
st[0]: {
st[1]: (

top = (
Popped value:(
Not Balanced2

OUTPUT

Enter the expression:
{(}
Value pushed: {
Stack:
st[0]: {

Value pushed: (
Stack:
st[0]: {
st[1]: (

top = (
Popped value:(
Not Balanced2

*/
