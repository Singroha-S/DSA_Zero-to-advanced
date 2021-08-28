#include<bits/stdc++.h>
using namespace std;

void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[],int l,int r){
    int i=l-1;
    int pi=a[r];

    for(int j=l;j<r;j++){
        if(a[j]<pi){
            i++;
            swap(a,i,j);
        }
    }
    swap(a,i+1,r);
    return i+1;
}

void quicksort(int a[],int l,int r){
    if(l<r){
    int pi=partition(a,l,r);
    quicksort(a,l,pi-1);
    quicksort(a,pi+1,r);

    }
}

int main()
{
    int a[5]={2,9,4,6,3};
    quicksort(a,0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
