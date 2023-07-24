#include<stdio.h>
#include<conio.h>

void main()

{
char ch;
clrscr ();
printf("enter ch:");
scanf("%c",&ch);

printf("entered ch=%c",ch);
if(ch<=65 && ch<=90)
{
printf("\ncross ch=%c",ch+32);
}
else
{
printf("\ncross ch=%c",ch-32);
 }

getch();
}