#include<iostream> //try without using strlen()
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    char a[20],b[20];
    int i,j;
    cout<<"Enter first string  : ";
    gets(a);
    cout<<"Enter second string : ";
    gets(b);
    i=sizeof(a);
    j=sizeof(b);
    if(i==j)
    {
		  cout<<"Same lengths string";
    }
    else
    {
      cout<<"Different length string";
    }
    return 0;
}
