#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char c[n+1];
    cin.getline(c,n);
    cin.ignore();

    int i=0,cl=0,ml=0;
    while(1)
    {
        if(c[i]==' ' || c[i]=='\0')
        {
            if(cl>ml)
            {
                ml=cl;
            }
            cl=0;
        }
        else
            cl++;

        if(c[i]=='\0')
            break;
        i++;
    }
    cout<<ml;

    return 0;
}
