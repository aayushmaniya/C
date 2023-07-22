#include<stdio.h>
int main()
{
 int a,b;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
if(a<b)
{
printf("\na(%d) is smallest number among two numbers...",a);
}
else
{
printf("\nb(%d) is smallest number among two numbers...",b);
}
return 0;
}

