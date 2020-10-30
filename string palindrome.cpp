#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	cout<<"Enter the string";
	cin>>a;
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		cout<<"Palindrome string";
	}
	else{
		cout<<"Non palindrome string";
		
	}
	return 0;
	
}
