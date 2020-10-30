#include<iostream>
using namespace std;
int main()
{
	int dig,sum,n;
	cout<<"Enter the num:";
	cin>>n;
	int save=n;
	while(n>0){
		dig=n%10;
		sum=sum+(dig*dig*dig);
		n=n/10;
	}
	if(sum==save)
	{
		cout<<"armstrong number";
	}
	else{
		cout<<"Not an armstrong number";
	}
	return 0;
	
}
