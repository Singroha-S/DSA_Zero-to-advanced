#include <bits/stdc++.h>
using namespace std;

int pythagorian(int a,int b,int c)
{
    int x=max(a, max(b,c));
    int y,z;

    if(x==a)
    {
        y==b;
        z==c;
    }
    else if(x==b)
    {
        y==a;
        z==c;
    }
    else
    {
        y==a;
        z==b;
    }
    if(x*x == y*y + z*z)
    {
        return 1;
    }
        return 0;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<pythagorian(a,b,c);

    return 0;
}

