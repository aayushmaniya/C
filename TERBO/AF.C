#include<stdio.h>
#include<conio.h>

#define n 5
int display(int a[])
{   int i;
   for (i=0;i<n;i++)
  {
     printf("%d ",a[i]);
  }
}
  int main()
{
 int arr[n],i;
 clrscr();
 for (i=0;i<n;i++)
    {
       printf("enter value ..");
       scanf("%d",&arr[i]);
    }
  display(arr);
  getch();
}