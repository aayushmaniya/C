#include<stdio.h>
#include<conio.h>
void main()
{
       int a[5],b[6],i,sum;
       clrscr();
       for(i=0;i<4;i++)
       {
	printf("Enter value a[%d]:",i);
	scanf("%d",&a[i]);
	printf("Enter value b[%d]:",i);
	scanf("%d",&b[i]);
       }
       for(i=0;i<4;i++)
       {
	sum=a[i]+b[i] ;
	printf("\n%d + %d = %d",a[i],b[i],sum);
       }
       getch();
}