#include <stdio.h> 
int main()
{
    int a,b,days, years, weeks;

    printf("Enter the value of days:");
    scanf("%d",&days); 
    years = days/365; 
    weeks = days/7;
    days = days;
    a= days- (years*365) ;
    b=days-(weeks*7);
    printf("\n");
    printf("Entered Days: %d \n", days);
    printf("Years: %d\n", years);
    printf("Remainind days: %d\n",a);
    printf("Weeks: %d\n", weeks);
    printf("Remainind days: %d\n",b);

    return 0;
}