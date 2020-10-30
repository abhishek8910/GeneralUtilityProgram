#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year:";
	cin>>year;
	if(year%400==0 || year%4==0)
	{
		cout<<"Leap year";
		
	}
	else 
	{
		cout<<"Non Leap year";
		
	}

	return 0;
	
}
