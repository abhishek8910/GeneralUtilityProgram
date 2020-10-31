#include<iostream>
using namespace std;

int main()
{
	int num;
	int sum;
	cout<<"Enter the number range: ";
	cin>>num;
	int arr[100];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<num;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		
		sum=sum+arr[i];
	}
	cout<<"Fibonacci series";
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";;
		
		
	}
	cout<<"\n";
	cout<<"sum of fibonacci is "<<sum;
	return 0;
}
