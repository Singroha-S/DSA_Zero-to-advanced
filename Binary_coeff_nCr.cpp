#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a*=i;
    }
    return a;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans= fact(n)/(fact(n-r)*fact(r));
    cout<<ans;

    return 0 ;
}
