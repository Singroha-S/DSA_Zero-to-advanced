#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ans="";
    int x=1;
     while(x<=n)
    {
        x*=16;
    }
    x/=16;
    while(x>0)
    {
        int last=n/x;
        n-= x*last;
        x/=16;
        if(last<=9)
        {
            ans=ans+last;
        }
        else
        {
            char c='A' + last-10;
            ans.push_back(c);
        }
    }

    cout<<ans;
    return 0;
}
