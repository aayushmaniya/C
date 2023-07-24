#include<stdio.h>
#include<conio.h>
void main()
{
 char a,j,i,sp=10,n=65;
 clrscr();
 for(i=1;i<=5;i++)
 {
 for(j=1;j<=sp;j++)
 {
 printf (" ");
 }
 for(j=1;j<=i;j++)
 {

   printf("%c ",j+64);
}
 printf("\n");
 sp-=2;

  }
	for(i=6;i>=1;i--)
	{
	for (j=1;j<=sp;j++)
	{
	printf(" ");
	}
		for(j=1;j<=i;j++)
		{
			printf("%c ",64+j);
			}
		printf(" \n");
		sp+=2;
	}
  getch();
}