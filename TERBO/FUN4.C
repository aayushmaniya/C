#include<stdio.h>
#include<conio.h>

  float add(int a,float b)
{
 return a*b;
}
int main()
{
 int a;
 float b;
 clrscr();
 clrscr();
 printf("Enter a and b:");
 scanf("%d%f",&a,&b);
 float x=add(a,b);
 printf("mul: %.2f",x);
 getch();
}