#include <bits/stdc++.h>
using namespace std;
int divisible(int n,int n1,int n2)
{
    int a=n/n1;
    int b=n/n2;
    int c=n/(n1*n2);
    return a+b-c;
}
int main()
{
    int n,n1,n2;
    cin>>n>>n1>>n2;
    cout<<divisible(n,n1,n2);

    return 0;
}

