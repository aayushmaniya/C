#include<stdio.h>
#include<conio.h>

void main()

{
 int a=3;
 clrscr();

 printf("\nd= %d   ",a++);
 printf("\nd= %d   ",a++);
 printf("\nd= %d   ",a--);
 printf("\nd= %d   ",a++);
 printf("\nd= %d   ",++a);
 getch();
}