#include<iostream>
using namespace std;
long fact(int num)
{
	long f=1;
	int i=1;
	while(i<num)
	{
		f=f*1;
		i++;
	}
	return f;
	
}
int main()
{
	int i,j;
	int n;
	cout<<"Enter the row:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			cout<<" ";
			for(j=0;j<=i;j++)
			{
				cout<<" "<<fact(i)/(fact(j)*fact(i-j));
				cout<<endl;
			}
		}
	}
	return 0;
	
}
