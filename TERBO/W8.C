#include<stdio.h>
#include<conio.h>
 void main()
 {
int n,i;
clrscr();
printf("enter n :");
scanf("%d",&n);
i=-n;
while(i<=n)
{
 printf("%d\t",i);
 i++;
}
getch();
}