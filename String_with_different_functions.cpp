#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="dsbdsbkjdbcdak";
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}
/*{
//not working!!!!!!!!!!
    //int x=89;
    //cout<<to_string(x);
    string s="89";
    int x = stoi(s);
    cout<<x+2;
    return 0;
}
*/
/*{
    string s="nincopoop";
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    string s2;
    s2=s.substr(2,4);
    cout<<s2;

    return 0;
}
*/
/*{
    string s="Navn Sinoha";
    s.insert(3,"ee");
    cout<<s<<endl;
    s.insert(10,"gr");
    cout<<s;

    return 0;
}
*/
/*{
    //erase is used to dlt particular index or full string as well
    string s="Naveen Singroha";
    s.erase(5,3);
    cout<<s<<endl;
    //in s.find() fn if we use single quote it return index of end character and for double quotes it return index of 1st char
    cout<<s.find('ven')<<endl;
    cout<<s.find("oh");

    return 0;
}
*/
/*{
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.compare(s2)<<endl;
    if(!s1.compare(s2))
        cout<<"string equal";
    else
        cout<<"not equal";

    return 0;
}
*/
/*{
    //clear string/dlt string
    string s1="naveen singroha";
    s1.clear();
    cout<<s1<<endl;
    //to check if empty or not we use s,empty()
    if(s1.empty())
       cout<<"string is empty";

    return 0;
}
*/
/*{
    //concatenataion of two strings
    string s1,s2;
    cin>>s1>>s2;
    //s1+=s2;
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s2;

    return 0;
}
*/
