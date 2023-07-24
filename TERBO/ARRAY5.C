#include<stdio.h>
#include<conio.h>
void main()
{
 float i,tbill,tgst,tdis,k[5],m[5],n[5],p[5],r[5],a[5],b[5],c[5],d[5],e[5],bill,di,dis,gst,amt;
 clrscr();
  for(i=0;i<1;i++)
  {
  printf("enter keyboard price=",i);
  scanf("%f",&k[i]);
  }
  for(i=0;i<1;i++)
  {
  printf("enter keyboard qty=",i);
  scanf("%f",&a[i]);
  }
  for(i=0;i<1;i++)
  {
   printf("enter mouse price=",i);
  scanf("%f",&m[i]);
   }
   for(i=0;i<1;i++)
   {
   printf("enter mouse qty=",i);
  scanf("%f",&b[i]);
  }
  for(i=0;i<1;i++)
  {
   printf("enter monior price=",i);
  scanf("%f",&n[i]);
  }
  for(i=0;i<1;i++)
  {
   printf("enter monitor qty=",i);
  scanf("%f",&c[i]);
  }
  for(i=0;i<1;i++)
  {
   printf("enter pro price=",i);
  scanf("%f",&p[i]);
  }
   for(i=0;i<1;i++)
   {
   printf("enter pro qty=",i);
  scanf("%f",&d[i]);
  }
  for(i=0;i<1;i++)
  {
   printf("enter ram price=",i);
  scanf("%f",&r[i]);
  }
  for(i=0;i<1;i++)
  {
   printf("enter ram qty=",i);
  scanf("%f",&e[i]);
  }

  printf("Product   price   qty   amt     dis 10per     disc amt     gst 18per   bill amt");
  for(i=0;i<1;i++)
  {
   amt=k[i]*a[i];
   di=amt/10;
   dis=amt-di;
   gst=dis*0.18;
  bill=dis+gst;
  printf("\nkeyboard  %.1f   %.1f   %.1f    %.1f      %.1f       %.1f       %.1f",k[i],a[i],amt,di,dis,gst,bill);
  }
  for(i=0;i<1;i++)
  {
   amt=m[i]*b[i];
   di=amt/10;
   dis=amt-di;
   gst=dis*0.18;
   bill=dis+gst;
  printf("\nmouse     %.1f   %.1f   %.1f    %.1f      %.1f       %.1f       %.1f",m[i],b[i],amt,di,dis,gst,bill);
  }
  for(i=0;i<1;i++)
  {
   amt=n[i]*c[i];
   di=amt/10;
    dis=amt-di;
    gst=dis*0.18;
    bill=dis+gst;
  printf("\nmonitor    %.1f   %.1f   %.1f    %.1f      %.1f       %.1f       %.1f",n[i],c[i],amt,di,dis,gst,bill);
  }
  for(i=0;i<1;i++)
  {
   amt=p[i]*d[i];
   di=amt/10;
   dis=amt-di;
   gst=dis*0.18;
   bill=dis+gst;
  printf("\npro       %.1f   %.1f   %.1f    %.1f      %.1f       %.1f       %.1f",p[i],d[i],amt,di,dis,gst,bill);
  }
  for(i=0;i<1;i++)
  {
   amt=r[i]*e[i];
   di=amt/10;
    dis=amt-di;
    gst=dis*0.18;
    bill=dis+gst;
  printf("\nram       %.1f   %.1f   %.1f    %.1f      %.1f       %.1f       %.1f",r[i],e[i],amt,di,dis,gst,bill);
  }
/*  for(i=0;i<1;i++)
  {
  tdis+=dis;
  tgst+=gst;
  tbill+=bill;
  printf("\n\t\t\t\t\t\t   %d  %d   %d ",tdis,tgst,tbill);
   }*/
   getch();
}
	//	tdis+=dis;
	//	tgst+=gst;
	//	tbill+=bill;