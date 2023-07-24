#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,total=0;
	clrscr();
	while(i<=6)
	{
		printf(" %d",i);
		total+=i;
		i=i+2;
	}
	printf("\n total even is:%d",total);
	getch();
}
