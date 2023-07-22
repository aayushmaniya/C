#include <stdio.h>

int main()
{
    float maths,chemistry,physics,computer;
    printf("Enter marks of maths:");
    scanf("%f",&maths);
    printf("Enter marks of chemistry:");
    scanf("%f",&chemistry);
    printf("Enter marks of physics:");
    scanf("%f",&physics);
    printf("Enter marks of computer:");
    scanf("%f",&computer);
    printf("Total=%f",maths+chemistry+physics+computer);
    printf("\nPercentage=%f",(maths+chemistry+physics+computer)*100/400);

    return 0;
}