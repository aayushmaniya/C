#include<stdio.h>
#include<conio.h>
 void main()

{
int i=1,total=0;
clrscr();
while(i<=5)
{
printf("%d\n",i);
total+=i;
i++;
}
printf("total is= %d",total);
getch();
}