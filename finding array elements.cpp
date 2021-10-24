#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            flag=1;
            break;
        }
        
    }
   if(flag==1){
   	cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
    return 0;
}
