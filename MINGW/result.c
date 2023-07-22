#include<stdio.h>
int main()
{
	float Maths,English,Chemistry,Physics,Total,Percent;
	printf(" Enter the marks of Maths:");
	scanf("%f",&Maths);
	printf(" \n Enter the marks of Physics:");
	scanf("%f",&English);
	printf(" \n Enter the marks of Chemistry:");
	scanf("%f",&Chemistry);
	printf(" \n Enter the marks of English:");
	scanf("%f",&Physics);
	Total=Maths+English+Chemistry+Physics;
	printf("\nTotal Marks=%.2f",Total);
	Percent=Total/4;
	printf("\nTotal Percent=%.2f ",Percent);
	if(Maths>=40 && English>=40 && Physics>=40 && Chemistry>=40)	
	{
		printf("\n Pass");
	}
	else 
	{
	printf("\n Fail");
	}
	 if(Percent>75)
	{
		printf("\n Grade A");
	}
	else if(Percent>60)
	{
		printf("\n Grade B");
	}
	else if(Percent>45)
	{
		printf("\n Grade C");
	}
	else if(Percent>35)
	{
		printf("\n Grade D");
	}
	else
	{
		printf("\n Fail");
	}
	return 0;
}
	