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
