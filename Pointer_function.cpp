#include<bits/stdc++.h>
using namespace std;

int incr(int *a)     //function call by reference
{
    *a++;
    return *a;
}

/*
int incr(int a)       //function call by value
{
    a++;
    return a;
}
*/

int main()
{
    int a=10;
    int *p=&a;
    cout<<incr(p);

    return 0;
}
