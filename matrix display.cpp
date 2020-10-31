#include<iostream>
using namespace std;
int main(){

      int r;
		int c;
	cout<<"Enter the number of the rows";
	
      cin>>r;
		cout<<"Enter the number of the columns";

	cin>>c;
	int a[r][c];
	int i,j,k;
	cout<<"Enter the values of the matrix:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
			
		}
	}
	cout<<"The given matrix is \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<" "<<a[i][j];
			
		}
		cout<<"\n";
	}
}
