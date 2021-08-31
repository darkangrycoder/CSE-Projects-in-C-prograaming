#include <stdio.h>
#include <stdlib.h>
int main()
{
    double principal, internest_rate, time_duration_in_year;
    printf("Enter principal:");
    scanf("%lf", &principal);
    printf("Enter internest_rate:");
    scanf("%lf", &internest_rate);
    printf("Enter time_duration_in_year:");
    scanf("%lf", &time_duration_in_year);
    printf("\n\n\n\n Simple Interest:%lf", (principal*internest_rate*time_duration_in_year)/100);




 return 0;
}