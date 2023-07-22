#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter the age of the person: ");
	scanf("%d",&a);

	if (a>=18)
	{
		printf("Eligibal for voting");
	}
	else
	{
		printf("Not Eligibal for voting");
	}
return 0;
}