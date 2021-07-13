#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int t1=0;
    int t2=1;
    int next_term;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    fib(n);

    return 0;
}

/*
int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
         sum=a+b;
         a=b;
         b=sum;
    }

    return 0;
}
*/
