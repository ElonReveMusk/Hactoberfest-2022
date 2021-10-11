#include<iostream>
using namespace std;
void Reverse(char s[], int no)
{
	char* B; 
	B = new char[no];
	int i, j;
	for (i = 0; s[i] != '\0'; i++) 
	{

	}
	i = i - 1; 
	for (j = 0; i >= 0; i--, j++)
		B[j] = s[i];
	B[j] = '\0';
	cout << "The reverse of string is " << B;
}
void Reverse1(char s[])
{
	int i, temp, j;
	for (j = 0; s[j] != '\0'; j++)  
	{
	}
	j = j - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	cout << s;
}

int main()
{
	char* s;
	int l;
	cout << "Enter the Size of the Array " << endl;
	cin >> l;
	s = new char[l];
	cout << "Enter the String " << endl;
	cin >> s;

	Reverse(s, l);
	cout << endl;
	Reverse1(s);

	return 0;

}