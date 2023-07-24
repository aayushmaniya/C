#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,total=0;
	clrscr();
	while(i<=5)
	{
		printf(" %d",i);
		total+=i;
		i=i+2;
	}
	printf("\n total odd is:%d",total);
	getch();
}