#include<stdio.h>
#include<conio.h>
void main()
{
       long int i,n,a=0,b=1,c;
	clrscr();
	printf("enter n:");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("  %ld",a);
	}
	getch();
}