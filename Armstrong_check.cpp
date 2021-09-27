#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0, orig=n;
    while(n>0)
    {
        int a=n%10;
        sum=sum + a*a*a;
        n=n/10;
    }
    if(orig==sum)
    {
        cout<<"armstrong no.";
    }
    else
    {
        cout<<"not";
    }

    return 0 ;
}
