#include <bits/stdc++.h>
using namespace std;

int fact(int x)
{
    int y=1;
    for(int i=2;i<=x;i++)
    {
        y*=i;
    }
    return y;
}

int binary(int n,int r)
{
    int ans=fact(n)/(fact(n-r)*fact(r));
    return ans;
}

int main()
{
    int row;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<binary(i,j)<<" ";
        }
         cout<<endl;
    }

    return 0;
}
