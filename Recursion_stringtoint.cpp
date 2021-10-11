#include<iostream>
using namespace std;

int stoi(string s, int n){


	if(n==0){
		return 0;
	}

	int digit= s[n-1] - '0';
	int nu= stoi(s, n-1);
	return nu*10 + digit;

}

int main() {
	string s;
	cin>>s;
	int n=s.length();
	cout<<stoi(s, n)<<endl;

	return 0;
}