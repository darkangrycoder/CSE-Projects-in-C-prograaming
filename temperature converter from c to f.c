#include <stdio.h>
#include <stdlib.h>
int main()
{
    double celsius;
    printf("Enter temperature in celsius:");
    scanf("%lf", &celsius);
    printf("\n\n\n\n Celsius:%lf\n\n\n\n Fahrenheit:%lf", celsius, (celsius*1.8) + 32);
    
 return 0;
}
