#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,l=65;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf(" %c",l);
			}
			else
			{
				printf(" %c",l+32);
			}
			l++;
		}
		printf(" \n");
	}
	getch();
}