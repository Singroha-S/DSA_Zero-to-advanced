#include<bits/stdc++.h>
using namespace std;

//O(NLOGN)

long long Merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int s1=mid-l+1;
    int s2=r-mid;
    int a[s1];     //temp arrays
    int b[s2];

    for(int i=0;i<s1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<s2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<s1 && j<s2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            inv += s1-i;   //main line
            k++;
            j++;
        }
    }
    while(i<s1){
         arr[k]=a[i];
            k++;
            i++;
    }
    while(j<s2){
        arr[k]=b[j];
            k++;
            j++;
    }
    return inv;
}

long long merge_sort(int arr[],int l,int r){
    long long inv=0;
    if(l<r)
        {
          int mid=(l+r)/2;
          inv+= merge_sort(arr,l,mid);
          inv+= merge_sort(arr,mid+1,r);

          inv+= Merge(arr,l,mid,r);
        }
        return inv;
}

int32_t main()
{
    int arr[]={10,22,5,3,7,8,23,1};
    int n=8;//sizeof(int)/sizeof(arr[0]);

    cout<<merge_sort(arr,0,n-1);

    return 0;
}
