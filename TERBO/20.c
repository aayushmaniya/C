#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j=1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf(" %d",j);
		j*=2;
	}
	getch();
}