#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=1;i<n;i++)
    {
        int j=i-1,key=arr[i];
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
	return 0;
}