#include<stdio.h>
#include<conio.h>
int add()
{
 int a,b;
 clrscr();
 printf("\nEnter a and b:");
 scanf("%d%d",&a,&b);
 return a+b;
}
 int main()
 {
   int x;
   clrscr();
   x=add();
   printf("add:%d\n",x);
   getch();
 }