#include<stdio.h>
#include<conio.h>
void main()
{
       long int i,n,a=0,b=1,c;
	clrscr();
	printf("enter n:");
	scanf("%ld",&n);
	i=1;
	while(i<=n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("  %ld",a);
		i++;
	}
	getch();
}