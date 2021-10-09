#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    vector<int>leaders(int a[],int n)
    {
        int i;
        vector<int> v;
        stack<int> stk;
        stk.push(a[n-1]);
        for(i=n-2;i>=0;i--)
        {
            if(a[i]>=stk.top())
            {
                stk.push(a[i]);
                
            }
            
        }
        i=0;
        while(stk.empty()==false)
        {
            v.push_back(stk.top());
            stk.pop();
            i++;
            
        }
        return v;
        
    }
    
};

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        solution obj;
        vector<int> v=obj.leaders(a,n);
        for(auto it= v.begin();it!=v.end();it++)
        {
            cout<<*it<<"";
            
        }
        cout<<endl;
        
    }
    
}
