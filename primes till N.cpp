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

/*
int main()
{
    int num, n;
    cin>>n;
    for(num=2;num<=n;num++)
        {
            int i;
            for(i=2;i<num;i++)
            {
                if(num%i==0)
                {
                    break;
                }
            }
            if(i==num)
                {
                    cout<<num<<endl;
                }
        }

    return 0;
}
*/
