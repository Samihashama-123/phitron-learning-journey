#include <stdio.h>
int main()
{
    for (int i = 100; i >= 1; i = i - 1)
    {
        printf("%d\n", i);
    }
 printf("Even decrement:\n");

    for (int i = 100; i >= 1; i = i - 2)
    {
        printf("%d\n", i);
    }
    printf("Odd decrement:\n");
    for (int i = 99; i >= 1; i = i - 2)
    {
        printf("%d\n", i);
    }
    return 0;
}