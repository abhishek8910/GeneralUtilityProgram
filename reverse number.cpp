#include<iostream>
using namespace std;
int main()
{
	int dig,sum,num;
	int i;
	int c=0;
	cout<<"Enter the number";
	cin>>num;
	while(num)
	{
		dig=num%10;
		sum=sum*10+dig;
		c++;
		num=num/10;
	}
	cout<<"the reverse number is "<<sum<<" of digit "<<c;
	return 0;
	
}
