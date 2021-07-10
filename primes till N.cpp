#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=2;i<N;i++)
    {
        int div=2;
        if(i>div)
        {
            if(i%div==0)
            {
                i++;
            }
            else{
                  div=div+1;
                }
         }
          cout<<i<<" ";
    }
    return 0;
}

