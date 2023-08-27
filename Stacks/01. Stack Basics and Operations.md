# STACKS

Linear data Structure with LIFO LAST IN FIRST OUT strategy
Operations
isEmpty()
isFull()
push()
pop()
top()
size()

overflow condition
underflow condition

Stacks can be implemented using Arrays and Linked Lists

Push Operation : O(1)
Pop Operation : O(1)
Top Operation : O(1)
Search Operation : O(n)

The insertion and deletion happens at one end i.e. from the top of the stack.


## isEmpty()

```
int isEmpty()  //to check if the stack is empty is not
    {
        if(top == -1)
            return 1;
        else
            return 0;
    }
```

##  isFull()

```
int isFull()  //to check if the stack is full or not
    {
        if(top == length-1)
            return 1;
        else
            return 0;
    }
```

##  top()

```
int getTop()  //to get top element of the stack
    {
        if(!isEmpty())
            return(st[top]);
        else
            cout<<"stack empty";
    }
```

## push()

```
void push(int value)  // to push the value in the top of the stack
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
```

 ## pop()

```
int pop()   //to delete/pop value from the top of the stack
    {
        cout<<"top = "<<st[top]<<endl;
        return st[top--];
    }
```

