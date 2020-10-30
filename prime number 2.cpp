#include<iostream>
using namespace std;
int main()
{
	int n,j=2,flag=0;
	cout<<"\n Enter the number:";
	cin>>n;
	if(n<=1)
		flag=1;
while(j<n/2)
{
	if(n%j==0)
	{
		flag=1;
		break;
	}
	else
	{
		j++;
	}
	}
	if(flag==0)
	{
		cout<<n<<" is prime";
		
		
		}
		else{
			cout<<n<<" is not prime";
		}
		return 0;
			
}
