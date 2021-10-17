#include<iostream>
using namespace std;
int main()
{
  int s,t;
  cin>>s>>t;
  int a,b;
  cin>>a>>b;
  int m,n;
  cin>>m>>n;
  int i;
  int da[m];
  for(i=0;i<m;i++)
  {
    cin>>da[i];
  }
  int db[n];
  for(i=0;i<n;i++)
  {
    cin>>db[i];
  }
  int p=0,q=0;
  for(i=0;i<m;i++)
  {
    if(a+da[i]>=s && a+db[i]<=t)
      p=p+1;
  }
  cout<<p<<endl;
  for(i=0;i<n;i++)
  {
    if(b+db[i]<=t && b+db[i]>=s)
      q=q+1;
  }
  cout<<q;
}
