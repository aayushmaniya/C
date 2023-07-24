#include<stdio.h>
#include<conio.h>
int main()
  {
   int a=10,*p;
   clrscr();
   p=&a;
     //a=&p;
   printf("\nValue of a: %d",a);
   printf("\nAddress of a: %u",&a);
   printf("\nAddress of a using p: %d",p);
   printf("\nAddress of p: %u",&p);
   printf("\nValue of a using p: %d",*p);
   getch();
  }