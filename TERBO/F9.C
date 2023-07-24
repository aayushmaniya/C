#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,sp=10;
	clrscr ();
	printf(" enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			if(i==1||i==n||j==1||j==i)
				printf("* ");
			else
				printf("  ");
		}
		sp--;
		printf("\n");
	}
	getch();
}