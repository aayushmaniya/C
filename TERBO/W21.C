#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf(" %d",a*i);
		a++;
		i*=2;
	}
	getch();
}