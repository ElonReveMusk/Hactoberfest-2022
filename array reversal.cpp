#include<iostream>
using namespace std;
int main()
{
  int n;         //size of array
  cout<<"Enter size of the array : ";
  cin>>n;
  int arr[n];     //array declaration
  for(int i=0;i<n;i++)     //reading array elements
  {
    cin>>arr[i];
  }
  for(int i=n-1;i>=0;i--)     //printing array elwements in reverse order
  {
    cout<<arr[i]<<endl;
  }
}
