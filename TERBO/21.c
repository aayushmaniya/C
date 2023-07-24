#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		printf(" %d",a*i);
		a++;
	}
	getch();
}