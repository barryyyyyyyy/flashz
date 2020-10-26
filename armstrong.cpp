#include<iostream>
#include<conio.h>
void main()
{int n,nu,num=0,rem;
clrscr();
cout<<"Enter any positive number ";
cin>>n;
nu=n;
while(nu!=0)
{rem=nu%10;
num=num+rem*rem*rem;
nu=nu/10;
}
if(num==n)
{cout<<"Armstrong";
}
else{cout<<"Not Armstrong";
}
getch();
}
