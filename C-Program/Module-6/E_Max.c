#include <stdio.h>
int main()
{
    int N,val;
    int max = 0;
    scanf("%d\n", &N);
    for (int i = 0; i <= N; i++)
    { 
        scanf("%d", &val);
        if (max <= val)
        {
            max = val;
        }
    }
    printf("%d", max);
    return 0;
}