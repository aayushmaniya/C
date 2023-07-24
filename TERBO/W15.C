#include<stdio.h>
#include<conio.h>
 void main()

{
int i=1,total=0;
clrscr();
   do
{
printf("%d\n",i);
total+=i;
i++;
} while(i<=10) ;
printf("total is= %d",total);
getch();
}