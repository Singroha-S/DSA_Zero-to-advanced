#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    a+=10;
    cout<<a<<endl;
    *p=30;
    cout<<a<<endl;
    cout<<p+1;

    char c='g';
    char *q=&c;
    cout<<q<<endl;
    cout<<*q<<endl;
    q++;
    cout<<q;

    return 0;
}

