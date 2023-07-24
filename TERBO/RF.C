#include<stdio.h>
#include<conio.h>
int fact(int n)
  {
      if(n==1)
	 return 1;
      else
	 return n*fact(n-1);
  }
int main()
  {
     clrscr();
    // fact(5);
     printf("factrioal no is: %d",fact(6));
     getch();
  }
