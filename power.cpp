#include<iostream>
using namespace std;
int main()
{	int i=1;
float sum=1;
	float num;
	int pow;
	cout<<"Enter the number";
	cin>>num;
	cout<<"Enter the power of the number";
	cin>>pow;
	while(i<=pow)
	{
		sum=sum*num;
		i++;
	}
	cout<<sum;
	return 0;
}
