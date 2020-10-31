#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int c;
	long int a=0,b=1,f;
	cout<<"Enter the number range";
	cin>>n;
	cout<<"Fibonacci series:";
	cout<<a<<" "<<b<<" ";
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<b<<" ";
	}
	return 0;
}
