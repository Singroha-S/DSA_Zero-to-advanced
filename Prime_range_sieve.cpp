#include <bits/stdc++.h>
using namespace std;
void prime_sieve(int n1,int n2)
{
    int prime[1000]={0};

    for(int i=2;i<=n2;i++)
    {
        if(prime[i]==0)
        for(int j=i*i;j<=n2;j+=i)
        {
            prime[j]=1;
        }
    }

    for(int i=n1;i<=n2;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    prime_sieve(n1,n2);

    return 0;
}
