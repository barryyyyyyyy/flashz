#include<iostream> //try without using strlen()
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
  char a[20],b[20];
  int i,j;
  clrscr();
  cout<<"Enter first string  : ";
  gets(a);
  cout<<"Enter second string : ";
  gets(b);
  i=strlen(a);
  j=strlen(b);
  if(i==j)
  {
    cout<<"Same lengths string";
  }
  else
  {
    cout<<"Different length string";
  }
  getch();
}
