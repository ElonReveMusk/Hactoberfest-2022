#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r)
{
   int s1=m-l+1,s2=r-m;
   int leftArr[s1],rightArr[s2];
         
   for(int i=0;i<s1;i++)
   leftArr[i]=arr[l+i];
         
   for(int i=0;i<s2;i++)
   rightArr[i]=arr[m+1+i];
         
   int inds1=0,inds2=0,indmerge=l;
         
   while(inds1<s1 && inds2<s2)
   {
       if(leftArr[inds1]<=rightArr[inds2])
       {
          arr[indmerge]=leftArr[inds1];
          inds1++;
       }
       else
       {
          arr[indmerge]=rightArr[inds2];
          inds2++;
       }
          indmerge++;
       }
         
       while(inds1<s1)
       {
          arr[indmerge]=leftArr[inds1];
          inds1++;
          indmerge++;
       }
         
       while(inds2<s2)
       {
          arr[indmerge]=rightArr[inds2];
          inds2++;
          indmerge++;
       }
}

void mergeSort(int arr[], int l, int r)
{
   if(l>=r)
   return;
        
   int mid=l+(r-l)/2;
        
   mergeSort(arr,l,mid);
   mergeSort(arr,mid+1,r);
   merge(arr,l,mid,r);
}

int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int a[n+1];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        mergeSort(a,0,n);
        
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}