#include <stdio.h>
#include <stdlib.h>
void with_variable()
{

  double first_num, second_num, var;
  printf("Enter first number: ");
  scanf("%lf", &first_num);
  printf("Enter second number: ");
  scanf("%lf", &second_num);

  // value of first_num is assigned to var
  var = first_num;

  // value of second_num is assigned to first
  first_num = second_num;

  // value of var (initial value of first) is assigned to second
  second_num = var;

  printf("\nAfter swapping, first number = %lf\n", first_num);
  printf("After swapping, second number = %lf\n\n", second_num);
  return 0;

}
void without_variable()
{
    double first, second;
  printf("Enter first number: ");
  scanf("%lf", &second);
  printf("Enter second number: ");
  scanf("%lf", &first);
  printf("\nAfter swapping, first number = %lf\n", first);
  printf("After swapping, second number = %lf", second);

}

int main()
{

with_variable();
without_variable();
 return 0;
}
