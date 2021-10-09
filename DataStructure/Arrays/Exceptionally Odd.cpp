class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int X = 0;
        for(int i = 0; i < n; i++)
        X = X^arr[i];
        return X;
    }
};

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
Solution ob;
auto ans=ob.getOddOccurrence(arr,n);
cout<<ans<<"\n";
}
return 0;
}