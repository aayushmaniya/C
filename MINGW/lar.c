#include <stdio.h> 
int main() 
{ 
    int A, B, C; 
  
    printf("Enter the value of A: "); 
    scanf("%d", &A); 

    printf("Enter the value of B: "); 
    scanf("%d", &B); 

    printf("Enter the value of C: "); 
    scanf("%d", &C); 


if(A==B)
{
if(A==C)
{
 printf("\nA(%d) is the largest number amongs all numbers", A); 
 printf("\nB(%d) is the largest number amongs all numbers", B); 
 printf("\nC(%d) is the largest number amongs all numbers", C); 
}

}
else
{ 
    if (A > B) 
   { 
        if (A > C) 
            printf("A(%d) is the largest number amongs all numbers", A); 
        else
            printf("C(%d) is the largest number amongs all numbers", C); 
    } 
    else { 
        if (B > C) 
            printf("B(%d) is the largest number amongs all numbers", B); 
        else
            printf("C(%d) is the largest number amongs all numbers", C); 
    } 
}

    

    return 0; 
}




