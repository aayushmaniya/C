#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,j=1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		j=i*i;
		printf("\n %d",j);
		i++;
	}while(i<=n);
	getch();
}