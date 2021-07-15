#include <bits/stdc++.h>
using namespace std;

bool IsEven(int a)
{
    if(a%2==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<IsEven(n);
}
