// Program for the October Lunchtime problem-'Problem Category'

#include<iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	
	while(T--){
		int x;
		cin>>x;
		
		if(x>=1 && x<100){
			cout<<"Easy"<<endl;
		}
		else if(x>=100 && x<200){
			cout<<"Medium"<<endl;
		}
		else{
			cout<<"Hard"<<endl;
		}
	}
	
	return 0;
}
