#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("enter ch:");
 scanf("%c",&ch);
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
 {
      printf("your ch is vowel=%c",ch);
 }
else
{
 printf("your ch is consonant=%c",ch);
}
getch();
}