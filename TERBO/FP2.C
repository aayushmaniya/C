#include<stdio.h>
#include<conio.h>
int add(int n)
{
	int i,sum=0;
	for(i = 1; i < n; i++)
		     {
				 if (n%i == 0)
							{
							sum = sum + i;
						  }
		      }
	if (sum == n)
			printf("Perfect Number");
		  else
			printf("\nNot Perfect  Number");
}
int main()
{
	int n;
	clrscr();
	printf("Enter a number:");
	scanf("%d", &n);
	add(n);
	getch();
}