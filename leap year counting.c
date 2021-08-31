#include <stdio.h>

void leap_year()
{
int year;
printf("Enter a year:");
scanf("%d", &year);


 if (year % 4 == 0)
{
    printf("%d is a leap year", year);
}
else if (year % 400 == 0)
{
    printf("%d is a leap year", year);
}
else if (year % 100 == 0)
{
    printf("%d is not a leap year", year);
}
else
{
    printf("%d isn't a leap year", year);
}


}

int main() {

leap_year();
  return 0;
}
