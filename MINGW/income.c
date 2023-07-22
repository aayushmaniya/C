#include <stdio.h>
int main()
{
	int a,c,d,e,f,x,y,r,s;
	printf("\nEnter Income=");
	scanf("\n %d",&a);
	if(a<=2500)
	{
		c=a*0;
		d=a;
		printf("your tax is %d rs per income",c);
		printf("\nyour income is %d rs after cutting tax",d);
	}
	else if(2500<a && a<=5000)
	{
		e=(a-2500)*0.1;
		f=a-e;
		printf("your tax is %d rs per income",e);
		printf("\nyour income is %d rs after cutting tax",f);
	}
	
	else if(5000<a && a<=10000)
	{
		x=250+(a-5000)*0.2;
		y=a-x;
		printf("your tax is %d rs per income",x);
		printf("\nyour income is %d rs after cutting tax",y);
	}
	
	else
	{
		r=250+1000+(a-10000)*0.3;
		s=a-r;
		printf("your slab is %d rs per income",r);
		printf("\nyour income is %d rs after cutting tax",s);
	}
		
	return 0;
}	