#include <stdio.h>
void fun(char a[])
{

    printf("%s\n", a);
    printf("%d", strlen(a));
}
int main()
{
    char a[10];
    scanf("%s", a);
    fun(a);
    return 0;
}