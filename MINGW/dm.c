#include<stdio.h>
int main()
{
 int a,b;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);

if((a*b)%21==0)
{
printf("\nA is Divisible by 3 and 7");
}
else
{
printf("\n A Not divisible by 3 and 7");
}

return 0;
}