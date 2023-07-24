#include<stdio.h>
#include<conio.h>
int dis(int maths,int eng,int sci,int total,float per)
{
	printf("maths\tenglish\tsci\ttotal\tper\n");
	printf("%d\t%d\t%d\t%d\t%.2f",maths,eng,sci,total,per);

}
int clac(int maths,int eng,int sci)
{
	int total;
	float per;
	total=maths+eng+sci;
	per=(float)total/3;
	dis(maths,eng,sci,total,per);
}
int setdata()
{
	int maths,sci,eng;
	printf("\nenter maths marks:");
	scanf("%d",&maths);
	printf("\nenter english marks:");
	scanf("%d",&eng);
	printf("\nenter sci marks:");
	scanf("%d",&sci);
	clac(maths,sci,eng);
}
int main()
{
	clrscr();
	setdata();
	getch();
}