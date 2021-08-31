#include <stdio.h>

void arithmatic_tasks()
{

char op;
double first, second;
printf("Enter 1st number:");
scanf("%lf", &first);
printf("Enter 2nd number:");
scanf("%lf", &second);
printf("Enter operator:");
scanf("%s", &op);
switch(op)
{
    case '+':
    printf("%lf", first + second);
    break;
    case '-':
    printf("%lf", first - second);
    break;
    case '*':
    printf("%lf", first * second);
    break;
    case '/':
    printf("%lf", first / second);
    break;
    default:
        printf("Error");
        break;

}



}

int main() {

arithmatic_tasks();
  return 0;
}
