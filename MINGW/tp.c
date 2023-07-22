#include <stdio.h>

int main()
{
    float a,b,maths=95,chemisty=96,physics=96,computer=97;
    a=maths+chemisty+physics+computer;
    b=(maths+chemisty+physics+computer)*100/400;
    printf("Total=%f",a);
    printf("\nPercentage=%f",b);

    return 0;
}