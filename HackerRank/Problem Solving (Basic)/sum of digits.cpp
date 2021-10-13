#include<iostream>
using namespace std;
int main()
{
  int n,t,sum=0;
  cout<<"Enter a number ";
  cin>>n;
  t=n;
  while(n!=0)
  {
    sum+=n%10;
    n/=10;
  }
  cout<<"Sum of digits of "<<t<<" is : "<<sum;
}
