#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
	int m, n;
	order:
	cout<<"Enter the order of matrix: ";
	cin>>m>>n;
	int a[m][n], i, j, z, x=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\nEnter elements of matrix: ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"  ";
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	if(m==n)
	{
		for(i=0,j=0;i<m,j<n;i++,j++)
		{
			x=x+a[i][j];
		}
		cout<<"\nThe diagonal sum of matrix is  "<<x;
	}
	else
	{
		cout<<"\t\t*FATAL ERROR*\nThe row and column should be same to execute diagonal sum\n";
	}
	cout<<"\n*** To change the order press '1' ***\n*** To end the program press '0' ***\n";
	cout<<"Enter choice: ";
	cin>>z;
	cout<<"\n################################################################################\n\n";
	if(z==1)
	goto order;
	return 0;
}
