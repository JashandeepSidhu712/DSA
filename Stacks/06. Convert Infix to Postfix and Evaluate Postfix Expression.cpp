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

    void evaluate()
    {
        stack <int>stak;

        for(int i=0;i<postfix.length();i++)
        {
            if(isdigit(postfix[i]))
            {
                int digit = postfix[i] - '0';
                cout<<"digit is "<<digit<<endl;
                stak.push(digit);
                cout<<"Added "<<digit<<" to stak"<<endl;
            }
            else
            {
                float x = stak.top();
                stak.pop();

                float y = stak.top();
                stak.pop();

                float z;

                switch(postfix[i])
                {
                case '+':
                    z = x+y;
                    break;

                case '-':
                    z = x-y;
                    break;

                case '*':
                    z = x*y;
                    break;

                case '/':
                    z = (float)y/x;
                    break;
                }

                cout<<"solved "<<z<<" value"<<endl;
                stak.push(z);
                cout<<"Added "<<z<<" to stak"<<endl;
            }
        }

        cout<<"Postfix solution is "<<stak.top()<<endl;
        stak.pop();
    }
};
int main()
{
    Stack obj;

    obj.convert();

    obj.evaluate();
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
digit is 9
Added 9 to stak
digit is 4
Added 4 to stak
digit is 2
Added 2 to stak
solved 2 value
Added 2 to stak
solved -7 value
Added -7 to stak
digit is 9
Added 9 to stak
digit is 4
Added 4 to stak
solved 2.25 value
Added 2.25 to stak
digit is 2
Added 2 to stak
solved 0 value
Added 0 to stak
solved -0 value
Added -0 to stak
Postfix solution is 0

*/
