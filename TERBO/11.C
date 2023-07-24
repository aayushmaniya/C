#include<stdio.h>
#include<conio.h>
 void main()
 {
char n,i;
clrscr();
printf("enter:");
scanf("%c",&n);
for(i=n;i<='Z';i++)
{
 printf("%c,",i);
}
getch();
}