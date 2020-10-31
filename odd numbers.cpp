#include<iostream>
using namespace std;
int main()
{
	int min,max,i,n;
	cout<<"Enter the min val:";
	cin>>min;
	cout<<"Enter the max val:";
	cin>>max;
	cout<<"Even Series: ";
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		{	
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	cout<<"Odd Series: ";
		for(i=min;i<=max;i++)
	{
		if(i%2==1)
		{	
			cout<<i<<" ";
		}
	}
	return 0;
}
