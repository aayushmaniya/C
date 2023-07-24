#include<stdio.h>
#include<stdio.h>
int main()
{
	int i,j,l=1;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			l++;
			if(i%2==0)
			{
				printf(" %c",l+95);
			}
			else
			{
				printf(" %c",l+63);
			}
		}
		printf(" \n");
	}
	getch();
}
