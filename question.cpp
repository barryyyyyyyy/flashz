//Checkk if two numbers are equal without using arithmetic operators or comparison operators.
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  if(a^b)
  cout<<"Numbers are Not Equal.";
  else
  cout<<"Numbers are Equal.";
  return 0;
}
