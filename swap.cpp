#include<iostream>
using namespace std;
int main()
{
	int x,y,temp;
	cout<<"Enter the value of x and y:";
	cin>>x>>y;
	temp=x;
	x=y;
	y=temp;
	cout<<"The value of x and y after swapping is "<<x<<" & "<<y;
	return 0;
	
}
