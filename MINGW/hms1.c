#include <stdio.h>
int main()

{
    float hours,minutes,a;
printf("Enter the value of hours:");
scanf("%f",&hours);
printf("Enter the value of minutes:");
scanf("%f",&minutes);
    a=(hours*60)+minutes;
    printf("Total number of minutes=%f",a);
	return(0);
}
