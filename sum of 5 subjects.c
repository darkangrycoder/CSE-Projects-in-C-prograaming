#include <stdio.h>
#include <stdlib.h>
int main()
{
    double first_subject, second_subject, third_subject, fourth_subject, fifth_subject, sum;
    printf("Enter 1st_subject:");
    scanf("%lf", &first_subject);
    printf("Enter 2nd_subject:");
    scanf("%lf", &second_subject);
    printf("Enter 3rd_subject:");
    scanf("%lf", &third_subject);
    printf("Enter 4th_subject:");
    scanf("%lf", &fourth_subject);
    printf("Enter 5th_subject:");
    scanf("%lf", &fifth_subject);
    printf("Sum of the 5 subjects: %lf",sum = first_subject + second_subject + third_subject + fourth_subject + fifth_subject);
    printf("\n\n\nAverage of 5 subjects:%lf", sum/5);

 return 0;
}
