#include<iostream>
using namespace std;
int fact(int num)
{
	int i;
	int fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{	int i;
	int num,sum=0;
	int r;
	int temp;
	cout<<"Enter the number";
	cin>>num;
	 temp=num;
	while(num)
	{    r=num%10;
		sum=sum+fact(r);
		num=num/10;
	}
	if(sum==temp)
	{
		cout<<"strong number"<<sum;
	}
	else{
		cout<<"The number is not a strong number"<<sum;
	}
	return 0;
	
}
