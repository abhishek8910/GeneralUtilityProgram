#include<iostream>
using namespace std;
int main()
{
	int num;
	int i,j;
	int k=1;
	cout<<"Enter the range";
	cin>>num;
	cout<<"Floyd's Triangle\n";
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			cout<<" "<<k;
			
		}
		cout<<"\n";
	}
	return 0;
	
}
