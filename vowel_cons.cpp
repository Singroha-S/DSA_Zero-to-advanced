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

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cout<<"enter a caharacter: "<<endl;
    cin>>c;
    switch(c)
    {
     case 'a':
         cout<<"vowel"<<endl;
         break;
     case 'e':
        cout<<"vowel"<<endl;
        break;
     case 'i':
        cout<<"vowel"<<endl;
        break;
     case 'o':
        cout<<"vowel"<<endl;
        break;
    case 'u':
        cout<<"vowel"<<endl;
        break;
    default:
        cout<<"consonent";
        break;

    }
    return 0;
}
*/
