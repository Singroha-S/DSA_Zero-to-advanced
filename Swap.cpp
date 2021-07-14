#include <bits/stdc++.h>
using namespace std;

int swap(int a,int b)
{
    int c=a;
    a=b;
    b=c;
    cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
    return 0;
}

int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    swap(a,b);

    return 0;
}
