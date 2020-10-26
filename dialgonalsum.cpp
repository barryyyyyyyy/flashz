#include<iostream>
#include<conio.h>
void main()
{
	int a[3][3],i,j,x=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nEnter elements of matrix : ";
			cin>>a[i][j];
		}
	}


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"  ";
			cout<<a[i][j];
		}
		cout<<"\n";
	}


	for(i=0,j=0;i<3,j<3;i++,j++)
	{
		x=x+a[i][j];
	}


	cout<<"The diagonal sum of matrix is _ "<<x;
	getch();
}
