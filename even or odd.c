#include <stdio.h>

void odd_or_even()
{

int number;
printf("Enter a number:");
scanf("%d", &number);
if(number % 2 == 0)
{
    printf("Even Number!!!");
}
else{
    printf("Odd number!!!");
}

}

int main() {

odd_or_even();
  return 0;
}
