#include<stdio.h>
#include<conio.h>
int maths,sci,english,total;
float per;
void dis()
  {
    printf("maths\tsci\tenglish\ttotal\tper\n");
    printf("%d\t%d\t%d\t%d\t%.2f\n",maths,sci,english,total,per);
  }
void cal()
  {
   total=maths+sci+english;
   per=(float)total/3;
   dis();
  }
void setdata()
  {
   printf("Enter maths marks:");
   scanf("%d",&maths);
    printf("Enter science marks:");
   scanf("%d",&sci);
    printf("Enter english marks:");
   scanf("%d",&english);
   cal();
  }
int main()
  {
  clrscr();
  setdata();
  getch();
  }