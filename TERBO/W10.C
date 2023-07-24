#include<stdio.h>
#include<conio.h>
 void main()
 {
int n,i;
clrscr();
printf("enter n :");
scanf("%d",&n);
    i=2;
while(i<=n)
{
 printf("%d,",i);
 i+=2;
}
getch();
}