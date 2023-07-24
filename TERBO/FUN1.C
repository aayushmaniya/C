#include<stdio.h>
#include<conio.h>
int add()
{
 int a,b;
 clrscr();
 printf("\nEnter a and b:");
 scanf("%d%d",&a,&b);
 printf("\nAdd: %d",a+b);
}
 int main()
 {
   add();
   getch();
 }