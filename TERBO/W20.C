#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j=1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf(" %d",j);
		j*=2;
		i++;
	}
	getch();
}