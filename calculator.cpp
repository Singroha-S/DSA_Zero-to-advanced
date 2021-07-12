#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char c;
    cout<<"enter a operator: "<<endl;
    cin>>c;
    switch(c)
    {
     case '+':
         cout<<a+b<<endl;
         break;
     case '-':
        cout<<a-b<<endl;
        break;
     case '*':
        cout<<a*b<<endl;
        break;
     case '/':
        cout<<a/b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;
    default:
        cout<<"enter valid input";
        break;

    }
    return 0;
}
