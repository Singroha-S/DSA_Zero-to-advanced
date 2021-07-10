#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    int lowercase,uppercase;
    cin>>c;
    lowercase=(c=='a'||c=='e'||c=='i'||c=='O'||c=='u');
    uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lowercase||uppercase){
                cout<<c<<" is vowel";
    }
    else{
        cout<<c<<" is consonent";
    }
    return 0;
}
