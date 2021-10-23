#include <iostream>
#include <set> 
#include <iterator>
#include <bitset> 
#include <bits/stdc++.h> 
using namespace std;
typedef  long long int ll;
#define int long long int
ll mod=1000000007;
int dfs(int u,int visited[],int node[],vector <int> adj[])
{   visited[u]=1;
    int count=0;
    int flag=0;
    for(auto itr=adj[u].begin();itr!=adj[u].end();itr++)
    {   if(visited[*itr]==0)
        {   count=count+dfs(*itr,visited,node,adj);
            
        }
    }
    count++;
    node[u]=count;
    
    return count;
    
    
}

int32_t main() {
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
        vector <int> adj[n+1];
        int visited[n+1]={0};
        for(int i=2;i<=n;i++)
        {   int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int m;
        cin>>m;
        ll a[m];
        for(int i=1;i<=m;i++)
            cin>>a[i];
        sort(a+1,a+m+1,greater<ll>());
       // cout<<a[1]<<a[2]<<endl;
        int node[n+1]={0};
        
        dfs(1,visited,node,adj);
       
          ll sum=0;
        /*for(int i=1;i<=n;i++)
            cout<<node[i]<<" ";
        cout<<endl;*/ 
            for(int i=1;i<=n;i++)
                node[i]=(n-(node[i]))*node[i];
       /*   for(int i=1;i<=n;i++)
            cout<<node[i]<<" ";
        cout<<endl;  */
            sort(node+1,node+n+1,greater<int> ());
        
        
            if(n-1>=m) 
            {   for(int i=1;i<=m;i++)
                    sum=(sum % mod+ (a[i] %mod * node[i] %mod ) %mod) %mod;
            
                    //  cout<<sum<<endl;
            
                for(int i=m+1;i<n;i++)
                   sum=(sum%mod+node[i]%mod)%mod;
                
                cout<<sum<<endl;
            }
            else
            {   ll b[n];
                for(int i=2;i<=m-n+2;i++)
                    a[1]=(a[1] %mod *a[i] %mod)% mod;
                b[1]=a[1];
                int k=2;
                for(int i=m-n+3;i<=m;i++)
                {    b[k]=a[i];
                        k++;
                }
                for(int i=1;i<n;i++)
                   sum=(sum % mod+ (b[i] %mod * node[i] %mod ) %mod) %mod;
                cout<<sum<<endl;
            }
    }
	return 0;
}
