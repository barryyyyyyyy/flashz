#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
 int x,n,i,j=1;
 float a,b,c,d;
 system("cls");
 cout<<"Select a function to operate\n\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Factorial\n6. Percentage\n7. Power\n8. Square_Root\n9. Round_off\n";
 cout<<"Enter your choice: ";
 cin>>x;
 
 switch(x)
 {
   case 1:
	  cout<<"Enter the numbers:  ";
	  cin>>a>>b;
	  cout<<"The result is: "<<a+b;
	  break;
   case 2:
	  cout<<"Enter the greater number: ";
	  cin>>a;
	  cout<<"Enter the smaller number: ";
	  cin>>b;
	  cout<<"The result is: "<<a-b;
	  break;
   case 3:
	  cout<<"Enter he numbers: ";
	  cin>>a>>b;
	  cout<<"The result is: "<<a*b;
	  break;
   case 4:
	  cout<<"Enter Dividend: ";
	  cin>>a;
	  cout<<"Enter Divisor: ";
	  cin>>b;
	  cout<<"The result is: "<<a/b;
	  break;
   case 5:
	  cout<<"Enter the number: ";
	  cin>>n;
	  for(i=n;i>0;i--)
	   {
	     j=j*i;
	    }
	  cout<<"The factorial of "<<n<<"is "<<j;
	  break;
   case 6:
	  cout<<"Enter percent value:  ";
	  cin>>a;
	  cout<<"Enter operand:  ";
	  cin>>b;
	  cout<<"The result is: "<<(a*b)/100;
	  break;
   case 7:
	  cout<<"Enter base: ";
	  cin>>a;
	  cout<<"Enter power: ";
	  cin>>b;
	  cout<<"The result is: "<<pow(a,b);
	  break;
   case 8:
	  cout<<"Enter the number: ";
	  cin>>a;
	  cout<<"The result is: "<<sqrt(a);
	  break;
   case 9:
	  cout<<"Enter any number for round off: ";
	  cin>>a;
	  cout<<round(a);
	  break;
  }
  cout<<"\n\n\nNothing more :)";
  return 0;
}
