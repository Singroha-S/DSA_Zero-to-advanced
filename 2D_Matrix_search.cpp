#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
    }
    //p & q = top right corner position of matrix
    int p=0,q=m-1;
    bool flag=false;
    while(p<n && q>=0)
    {
        if(a[p][q]==target)
            flag=true;
        if(a[p][q]>target)
            q--;
        else
           p++;
    }
    if(flag)
        cout<<"found";
    else
        cout<<"not found";
    return 0;
}

/*
BRUTE FORCE APPROACH O(N^2)
{
    int n=3;
    int a[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cin>>target;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
            if(a[i][j]==target)
                flag=true;
    }
    if(flag)
        cout<<"found";
    else
        cout<<"not found";

    return 0;
}
*/
