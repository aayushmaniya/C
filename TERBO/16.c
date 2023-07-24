#include<stdio.h>
#include<conio.h>
void main()
{
	int i,total=0;
	clrscr();
	for(i=1;i<=5;i=i+2)
	{
		printf(" %d",i);
		total+=i;
	}
	printf("\n total odd is:%d",total);
	getch();
}
