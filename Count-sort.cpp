#include<bits/stdc++.h>
using namespace std;

void countsort(int a[],int n){
    int k=a[0];            //gives size for count_array
    for(int i=0;i<n;i++){
        k=max(k,a[i]);
    }

    int count[10]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;        //count aagya hrr no. ka kon kitni bar h
    }

    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];     //hr arr[i] me uske pichle sbhi ka sum aajaega
    }

    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[a[i]]]=a[i];
    }

    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
}

int main()
{
    int a[]={2,9,1,2,3,8,4,6,3};
    countsort(a,9);
    for(int i=0;i<9;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
