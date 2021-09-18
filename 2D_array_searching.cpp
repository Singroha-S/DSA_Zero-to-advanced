#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b;
    cin>>n>>m>>b;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==b)
            {
                cout<<i<<" "<<j<<endl;
                cout<<"found";
                return 0;
            }
        }
    }
    cout<<"b not found" ;
    return 0;
}
