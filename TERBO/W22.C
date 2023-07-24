#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	c=65;
	while(c<=90)
	{
		printf("  %c",c);
		c=c+2;
	}
	getch();
}