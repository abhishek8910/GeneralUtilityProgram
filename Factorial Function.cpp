#include<iostream>
using namespace std;
int fact(int n)
{
	int i;
	int facto;
	for(i=1;i<=n;i++)
	{
		facto=facto*i;
	}
	return facto;
}
int main()
{
	int n;
	cin>>n;
	int res;
	res=fact(n);
	cout<<res;
	return 0;
}
