#include<stdio.h>
#include<conio.h>
 void main()
 {
int n,i;
clrscr();
printf("enter n :");
scanf("%d",&n);
      i=1;
while(i<=n)
{
 printf("%d,",i);
 i+=2;
}
getch();
}