#include<stdio.h>
#include<conio.h>
int main()
{
int a[5][5],i,j;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter value a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d  ",a[i][j]);
}
printf("\n") ;
  }
  getch();
}