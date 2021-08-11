#include <bits/stdc++.h>
using namespace std;
void primefactor_sieve(int n)
{
    int spf[1000]={0};   //smallest prime factor

    for(int i=2;i<=n;i++)
    {
        spf[i]=i;   //hr prime ka spf wo khud hi hoga
    }

    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        for(int j=i*i;j<=n;j+=i)
        {
            if(spf[j]==j)
            {
                spf[j]=i;
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    primefactor_sieve(n);

    return 0;
}
