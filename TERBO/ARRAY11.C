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
	 printf("\ndiagonal total=%d",a[0][0]+a[1][1]+a[2][2]);
	 printf("\nlower triangle total=%d",a[1][0]+a[2][0]+a[2][1]);
	 printf("\nupper triangle tota%d",a[0][1]+a[0][2]+a[1][2]);
  getch();
}
