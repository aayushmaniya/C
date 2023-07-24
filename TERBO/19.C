#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j=1;
        clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		       //	j=i*i;
			printf("  %d",i*i);
		}
		else
		{
			printf("  %d",i);
		}
	}
	getch();
}