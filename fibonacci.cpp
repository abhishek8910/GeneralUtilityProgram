#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,n,count=0;
	cout<<"Enter any number";
	cin>>n;
	while(1)
	{
		c=a+b;
		count++;
		if(c>=n)
		{
			break;
		}
		a=b;
		b=c;
		cout<<c;
	}
}
