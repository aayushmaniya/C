#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,j=1;
        clrscr();
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			j=i*i;
			printf("  %d",j);
		}
		else
		{
			printf("  %d",i);
		}
		i++;
	}
	getch();
}