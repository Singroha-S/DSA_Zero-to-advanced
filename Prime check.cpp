#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a=2;
    cin>>n;
    while(a<n){
        if(n%a==0){
            cout<<"not prime";
            return 0;
        }
        else{
            a++;
        }
    }
    cout<<"prime";
    return 0;
}

/*
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        }
    }
    if(i==n)
        {
          cout<<"prime";
        }
    return 0;
}
*/
