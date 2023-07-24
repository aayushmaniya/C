#include<stdio.h>
#include<conio.h>
void main()
{
	char c=65;
	clrscr();

	while(c<=90)
	{
		printf("\n %c-%d",c,c);
		c++;
	}
	getch();
}