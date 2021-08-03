#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,6,1,4,8};
    cout<<*a<<endl;
    cout<<&a<<endl;

    int *p=a;
    for(int i=0;i<5;i++)
    {
        cout<<*(a+i)<<" ";    //a,*a,p,*p
    }

    return 0;
}
