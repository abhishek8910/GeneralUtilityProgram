#include<iostream>
using namespace std;
int main()
{
	int num,i,count,min,max,sum=0;
	cout<<"Enter the min value you want to start from:";
	cin>>min;
	cout<<"Enter the max value you want to end at:";
	cin>>max;
	for(num=min;num<=max;num++)
	{
		count=0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				count++;
				break;
				
			}
		}
		if(count==0 && num!=1)
		{sum=sum+num;
		}
	}
	cout<<"The prime sum is"<<" "<<sum;
}
