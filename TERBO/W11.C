#include<stdio.h>
#include<conio.h>
 void main()
 {
char n,i;
clrscr();
printf("enter:");
scanf("%c",&n);
i=n;
while(i<='Z')
{
 printf("%c,",i);
 i++;
}
getch();
}