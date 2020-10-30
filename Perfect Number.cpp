#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1,sum=0;
	cout<<"Enter the number";
	cin>>n;
	for(i;i<n;i++)
	{
		if(n%i==0){
		
			sum=sum+i;
			
	}
	}
	if(sum==n)
	{
		cout<<i<<" is a perfect number";
	}
	else{
		cout<<i<<" is not a perfect number";
	}
	return 0;
	
}
