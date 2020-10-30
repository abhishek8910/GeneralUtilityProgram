#include<iostream>
using namespace std;
int max_num(int a[],int n)
{
	int i,m=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	return m;
}
int main()
{
int max,i,n;
cout<<"Enter n numbers";
cin>>n;
int a[n];
cout<<"Enter the numbers";
for(i=0;i<n;i++)
{
	cin>>a[i];
	
}
max=max_num(a,n);
cout<<"The largest number in the array is "<<max;
return 0;
}
