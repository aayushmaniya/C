#include<stdio.h>
#include<conio.h>
void main()
{
 int i,p[5],c[5],m[5],total;
 float pr;
 clrscr();
 for(i=0;i<5;i++)
 {
  printf("enter Physics[%d]=",i);
  scanf("%d",&p[i]);
   printf("enter Chemistry[%d]=",i);
  scanf("%d",&c[i]);
   printf("enter Maths[%d]=",i);
  scanf("%d",&m[i]);
 }
 printf("phy\tchem\tmaths\ttotal\tper\tgrade");
 for(i=0;i<5;i++)
 {
  total=p[i]+c[i]+m[i];
  pr=total/3;
  printf("\n%d\t%d\t%d\t%d\t%.2f\t",p[i],c[i],m[i],total,pr);
  if(p[i]<35||c[i]<35||m[i]<35||pr<35)
  printf("   FAIL");
  else if(pr>=75)
  printf("   A grade");
  else if(pr>=60)
  printf("   B grade");
  else if(pr>=45)
  printf("   C grade");
  else
  printf("   PASS");
 }
 getch();
}