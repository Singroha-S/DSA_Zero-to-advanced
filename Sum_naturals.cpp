#include <bits/stdc++.h>
using namespace std;

void sum(int a)
{
    int total=0;
    for(int i=1;i<=a;i++)
    {
        total+=i;
    }
    cout<<total;
    return ;
}

int main()
{
    int n;
    cin>>n;
    sum(n);

    return 0;
}

