#include <stdio.h>
int main()
{
    int num1 = 24;
    float num2 = 5.0;
    int sum = num1 + num2;
    int sub = num1 - num2;
    int multi = num1 * num2;
    float div = num1 / num2;
    printf("Summation: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", multi);
    printf("Division: %.2f\n", div);

    return 0;
}