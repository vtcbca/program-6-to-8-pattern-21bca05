/*write a program to print following pattern:

* * * * *
   * * *
      *
Date:29-dec-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,j;
    clrscr();
    for(i=5;i>=1;i=i-2)
    {
    for(k=5;k>=1+i;k--)
    {
	printf(" ");
    }
    for(j=1;j<=i;j++)
    {
	printf(" *");
    }
    printf("\n");
    }
    getch();
}

