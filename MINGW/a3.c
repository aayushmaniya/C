#include<stdio.h>
int main()
{

float SI,p,r,t;
printf("\n Enter value of p:");
scanf("%f",&p);
printf("\n Enter value of r:");
scanf("%f",&r);
printf("\n Enter value of t:");
scanf("%f",&t);

printf("SI=%f",p*r*t/100);
return 0;
}