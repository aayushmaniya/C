#include <stdio.h> 
int main()
{
    float days, years, weeks;

    printf("Enter the value of days:");
scanf("%f",&days); 
    years = days/365; 
    weeks = days/7;
    days = days;

    printf("Years: %f\n", years);
    printf("Weeks: %f\n", weeks);
    printf("Days: %f \n", days);

    return 0;
}