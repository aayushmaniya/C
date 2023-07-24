#include<stdio.h>
#include<conio.h>
int newfun(int n)
{
   printf("Winding phase: %d\n",n);
   if(n<3)
     {
	 newfun(++n);
     }
   printf("Unwinding phase: %d\n",n);
}
int main()
 {
    clrscr();
    newfun(1);
    getch();
}