#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    string s;
    string postfix;

public:

    int prec(char c)
    {
        if( c=='*' || c=='/' || c=='%' )
            return 2;
        if( c=='+' || c=='-' )
            return 1;
        else
            return -1;
    }

    void convert()
    {
        cout<<"Enter string"<<endl;
        cin>>s;

        stack <char>stak;

        for(int i=0;s[i]!='\0';i++)
        {
            char c = s[i];

            if( (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') )
            {
                postfix+=c;
                cout<<"Added "<<c<<" to the postfix"<<endl;
            }

            else
                if( c=='(' )
                {
                    stak.push(c);
                    cout<<"Added "<<c<<" to the stak"<<endl;
                }

            else
                if( c==')' )
                {
                    while(stak.top() != '(')
                    {
                        postfix+=stak.top();
                        stak.pop();

                    }
                    stak.pop();
                }

            else
            {
                while(stak.empty() != true)
                {
                    if( prec(s[i]) < prec(stak.top()))
                    {
                        postfix+=stak.top();
                        stak.pop();
                    }
                    else
                        break;
                }
                stak.push(c);
                cout<<"Added "<<c<<" to the stak"<<endl;
            }
        }

        while(!stak.empty())
        {
            postfix+=stak.top();
            stak.pop();
        }

        cout<<"\nPostfix= "<<postfix<<endl;;
    }
};
int main()
{
    Stack obj;

    obj.convert();
}

/*
OUTPUT

Enter string
(9-4/2)*(9/4-2)
Added ( to the stak
Added 9 to the postfix
Added - to the stak
Added 4 to the postfix
Added / to the stak
Added 2 to the postfix
Added * to the stak
Added ( to the stak
Added 9 to the postfix
Added / to the stak
Added 4 to the postfix
Added - to the stak
Added 2 to the postfix

Postfix= 942/-94/2-*

*/
