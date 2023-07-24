#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	for(c=65;c<=90;c=c+2)
	{
		printf("  %c",c);
	}
	getch();
}