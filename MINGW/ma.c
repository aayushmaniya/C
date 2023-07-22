#include<stdio.h>
int main()
{
 int a,b,c;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
c=(a+b);
if((a*b)%c==0)

{
printf("\nmultiplication is divisible by addition ");
}
else
{
printf("\nmultiplication is not divisible by addition ");
}

return 0;
}
