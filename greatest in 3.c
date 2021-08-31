#include <stdio.h>

void greatest_in_three()
{
    double first,second,third;
    printf("Enter 1st number:");
    scanf("%lf", &first);
    printf("Enter 2nd number:");
    scanf("%lf", &second);
    printf("Enter 3rd number:");
    scanf("%lf", &third);
    if (first > second && first > third)
    {
        printf("%lf is the greatest", first);
    }
    else if (second > first && second > third)
    {
        printf("%lf is the greatest", second);
    }
    else if (third > first && third > second)
    {
        printf("%lf is the greatest", third);
    }

}
int main() {

greatest_in_three();
  return 0;
}
