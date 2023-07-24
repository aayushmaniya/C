#include<stdio.h>
#include<conio.h>

  int add(int a,int b)
{
 printf("mul:%d",a*b);
}
int main()
{
 int a,b;
 clrscr();
 printf("Enter a and b:");
 scanf("%d%d",&a,&b);
 add(a,b);
 getch();
}