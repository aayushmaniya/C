#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[5],evensum=0,oddsum=0,total=0;
 clrscr();

 for(i=0;i<5;i++)
 {
 printf("enter number a[%d]:",i);
 scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
 if(a[i]%2==0)
  {
   evensum+=a[i];
  }
  else
  {
  oddsum+=a[i];
  }
  total=evensum + oddsum;
  }
  printf("\n even sum=%d  \n odd sum=%d  \n total=%d",evensum,oddsum,total);

 getch();
}