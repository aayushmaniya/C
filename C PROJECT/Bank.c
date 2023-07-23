#include<stdio.h>
#include<math.h>

int Deposite,Withdraw,Balance; 

int main()
{
   char a;
   int b,c;  

  printf("press [D] to Deposite ");
  printf("\npress [W] to Withdraw");
  printf("\npress [B] to Show Balance \n ");

  scanf("%c",&a);

  
  
  if(a=='d' || a=='D')
  {
  
     printf("\n\tTo Enter Deposite \n");
     
     printf("Enter Amount : ");
     scanf("%d",&b);
   
     printf("Deposite Amount : %d " ,b);
     
  }
  
  else if(a=='w' || a=='W')
  {
  
    printf("\n\tTo Enter Withdraw \n");
    
    printf("Enter Amount : ");
    scanf("%d",&c);

      printf("Withdraw Amount : %d " , c);
     
  }
  
   else if(a=='b'|| a=='B')
  {
  
  printf("\n\tTo Show Balance \n ");
  printf("Total balance : %d",b+c);
   
  }
  
    return 0;
}
