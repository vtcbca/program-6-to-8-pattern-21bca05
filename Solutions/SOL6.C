/*write a program to print following pattern:

*
* *
* * *
* * * *
* * * * *
Date:29-Dec-2021*/

#include<stdio.h>
#include<conio.h>
Void main()
{
    int i,j;
    clrscr();
    for(i=1;i<6;i++)
    {
	for(j=1;j<=i;j++)
	{
	    printf(" * ");
	}
	printf("\n");
    }
    getch();
}
 
