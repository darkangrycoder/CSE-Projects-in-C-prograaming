#include <stdio.h>

void day_counting()
{

char day;
printf("Enter a number:");
scanf("%s", &day);
switch(day)
{
    case '1':
    printf("Sunday");
    break;
    case '2':
    printf("Monday");
    break;
    case '3':
    printf("Tuesday");
    break;
    case '4':
    printf("Wednesday");
    break;
    case '5':
    printf("Thrusday");
    break;
    case '6':
    printf("Friday");
    break;
    case '7':
    printf("Saturday");
    break;

}



}

int main() {

day_counting();
  return 0;
}
