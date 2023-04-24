#include<iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	
	int arr[5];
	
	while(T--){
		int A,B,C,D,E;
		cin>>A>>B>>C>>D>>E;
		
		arr[0]=A;
		arr[1]=B;
		arr[2]=C;
		arr[3]=D;
		arr[4]=E;
		
		int i,j=0,k=0;
		
		for(i=0;i<5;i++){
			if(arr[i]==1)
			j++;
			else if (arr[i]==2)
			k++;
		}
		if(j>k)
		cout<<"INDIA"<<endl;
		else if(k>j)
		cout<<"ENGLAND"<<endl;
		else if(j==k)
		cout<<"DRAW"<<endl;
	}
	
	return 0;
}
