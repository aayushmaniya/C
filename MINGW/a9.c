#include<stdio.h>
int main()
{
float A,p,r,n;
printf("Enter the value of p:");
scanf("%f",&p);
printf("Enter the value of r:");
scanf("%f",&r);
printf("Enter the value of n:");
scanf("%f",&n);
printf("A=%f",p*(1+(r/100)/n)-p);
return 0;
} 