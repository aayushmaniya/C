#include<stdio.h>
#include<conio.h>
 void main()
 {
int n,i;
clrscr();
printf("enter n :");
scanf("%d",&n);

for(i=1;i<=n;i+=2)
{
 printf("%d,",i);
}
getch();
}