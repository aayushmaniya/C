
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("Enter Value:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
if ((j==1||j==n)||(i==1||i==n))
  printf(" *");
  else
  printf("  ");
  }
  printf("\n");

 }
 getch();
  }
