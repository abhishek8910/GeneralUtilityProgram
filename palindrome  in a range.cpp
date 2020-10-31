#include<iostream>
using namespace std;
int palindrome(int num)
{
	int temp,d,sum=0;
	temp=num;
	while(num)
	{
		d=num%10;
		sum=sum*10+d;
		num=num/10;
	}
	if(temp==sum)
	{
		cout<<sum<<" ";
	}
	
}
int main()
{
	int max,min,i;
	cout<<"Enter the lower range";
	cin>>min;
	cout<<"Enter the higher ranhge";
	cin>>max;
	for(i=min;i<=max;i++){
	
	palindrome(i);
}
return 0;

}
