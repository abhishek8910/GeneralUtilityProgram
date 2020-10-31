#include<iostream>
using namespace std;
int main(){

      int r;
		int c;
	cout<<"Enter the number of the rows";
	
      cin>>r;
		cout<<"Enter the number of the columns";

	cin>>c;
	int a[r][c],arr2[r][c],arr3[r][c];
	int i,j,k;
	cout<<"Enter the values of the matrix1 :";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
			
		}
	}
		cout<<"Enter the values of the matrix 2:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr2[i][j];
			
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr3[i][j]=a[i][j]*arr2[i][j];
			
		}
	}
	cout<<"The multiplication matrix is \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<" "<<arr3[i][j];
			
		}
		cout<<"\n";
	}
}
