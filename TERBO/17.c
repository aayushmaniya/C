#include<stdio.h>
#include<conio.h>
void main()
{
	int i,total=0;
	clrscr();
	for(i=2;i<=6;i=i+2)
	{
		printf(" %d",i);
		total+=i;
	}
	printf("\n total even is:%d",total);
	getch();
}
