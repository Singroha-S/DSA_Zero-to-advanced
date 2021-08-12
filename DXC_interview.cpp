#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0){
    int rem=a%b;
    a=b;
    b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);

    return 0;
}

//DXC INTERVIEW
/*
void gcd(int a,int b)
{
    int c=max(a,b);
    for(int i=c;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i;
            break;
        }
    }
}
int main()
{
    int a,b;
     cin>>a>>b;
    gcd(a,b);

    return 0;
}
*/
