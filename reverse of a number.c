#include <stdio.h>
int main() {
    int first_var, revrse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &first_var);
    while (first_var != 0) {
        remainder = first_var % 10;
        revrse = revrse * 10 + remainder;
        first_var /= 10;
    }
    printf("Reversed number = %d", revrse);
    return 0;
}
